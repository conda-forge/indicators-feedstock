#!/bin/sh

set -euxo pipefail

cmake tests \
    ${CMAKE_ARGS} \
    -B tests/build \
    -DCMAKE_BUILD_TYPE=Release

cmake --build tests/build --parallel
