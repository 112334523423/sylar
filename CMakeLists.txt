MAKE_MINIMUM_REQUIRED(VERSION 3.20)

PROJECT(sylar)

# 添加头文件

#INCLUDE_DIRECTORIES("xlog")

ADD_LIBRARY(sylar SHARED sylar/log.cpp)

#@ADD_EXECUTABLE(test_xlog test_xlog/test_xlog.cpp xlog)

#TARGET_LINK_LIBRARIES(test_xlog xlog)
