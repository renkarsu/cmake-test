# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.17.3)
# プロジェクト名と使用する言語を設定
project(test_cmake CXX)
# a.outという実行ファイルをmain.cppとhello.cppから作成
add_executable(a main.cpp hello.cpp)

# 最適化・警告等のオプション
target_compile_options(a PUBLIC -Wall -Wextra)
# C++11/14/17
target_compile_features(a PUBLIC cxx_std_20)
# マクロ
target_compile_definitions(a PUBLIC NDEBUG _USE_MATH_DEFINES)
