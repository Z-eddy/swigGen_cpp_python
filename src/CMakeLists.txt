cmake_minimum_required(VERSION 3.5)

#加入python公共头文件
include_directories("C:/Users/Zr/AppData/Local/Programs/Python/Python39/include")
#加入python引用库
link_directories("C:/Users/Zr/AppData/Local/Programs/Python/Python39/libs")

#添加组件
add_subdirectory(test)
