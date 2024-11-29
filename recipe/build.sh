#!/bin/sh

mkdir build && cd build

cmake ${CMAKE_ARGS} -DCMAKE_INSTALL_PREFIX=$PREFIX \
      -DCMAKE_BUILD_TYPE=Release \
      $SRC_DIR

make VERBOSE=1 -j${CPU_COUNT}
make install