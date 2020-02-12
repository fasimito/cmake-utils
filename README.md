# cmake-utils
cmake utils 

## chp01-First Cmake Program

cmake is a kind of tool used for compile .c or .cpp program

## chp02-A Real CMake project structure

the most important grammer:
> ADD_SUBDIRECTORY(source_dir [binary_dir] [EXCLUDE_FROM_ALL])
> SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
> SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

应该把这两条指令写在工程的CMakeLists.txt还是src目录下的
CMakeLists.txt，把握一个简单的原则，在哪里ADD_EXECUTABLE或ADD_LIBRARY，
如果需要改变目标存放路径，就在哪里加入上述的定义

## important orders

> cmake -DCMAKE_INSTALL_PREFIX=/usr ..

这个命令可以设置安装的前缀位置
