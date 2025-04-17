@echo on

cmake tests ^
    %CMAKE_ARGS% ^
    -B tests/build
if errorlevel 1 exit 1

cmake --build tests/build --config Release
if errorlevel 1 exit 1
