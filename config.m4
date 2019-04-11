dnl $Id$
dnl config.m4 for extension gcompiler

dnl Comments in this file start with the string 'dnl'.
dnl Remove where necessary. This file will not work
dnl without editing.

dnl If your extension references something external, use with:

dnl PHP_ARG_WITH(gcompiler, for gcompiler support,
dnl Make sure that the comment is aligned:
dnl [  --with-gcompiler             Include gcompiler support])

dnl Otherwise use enable:

PHP_ARG_ENABLE(gcompiler, whether to enable gcompiler support,
dnl Make sure that the comment is aligned:
[  --enable-gcompiler           Enable gcompiler support])

PHP_ARG_WITH(protobuf-dir, protobuf-cpp install dir,
[  --with-protobuf-dir=DIR  protobuf-cpp install prefix], no, no)


if test "$PHP_GCOMPILER" != "no"; then

  PHP_REQUIRE_CXX()
  PHP_SUBST(GCOMPILER_SHARED_LIBADD)
  PHP_ADD_LIBRARY(stdc++, 1, GCOMPILER_SHARED_LIBADD)
  CXXFLAGS="$CXXFLAGS -std=c++11"


  if test "$PHP_PROTOBUF_DIR" == "no"; then
    for i in /usr /usr/local; do
      if test -f "$i/$PHP_LIBDIR/libprotobuf.a" || test -f "$i/$PHP_LIBDIR/libprotobuf.$SHLIB_SUFFIX_NAME"; then
        PHP_PROTOBUF_DIR=$i
        break
      fi
    done
  fi

  if test -d "$PHP_PROTOBUF_DIR"; then
    PHP_ADD_INCLUDE($PHP_PROTOBUF_DIR/include)
    PHP_ADD_LIBRARY_WITH_PATH(protobuf, $PHP_PROTOBUF_DIR/$PHP_LIBDIR, GCOMPILER_SHARED_LIBADD)
  else
    AC_MSG_ERROR([libprotobuf not found. Please reinstall.])
  fi

  PHP_NEW_EXTENSION(gcompiler, gcompiler.c \
    serialize.cc \
    proto/out_cpp/zend_op_array.pb.cc \
    proto/out_cpp/zend_script.pb.cc \
    proto/out_cpp/zend_types.pb.cc, $ext_shared,, -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1)
fi
