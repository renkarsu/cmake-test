# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.17.3)
project(test_cmake CXX)

# GREETINGS_BUILD_SHARED_LIBSというオプションを作成。デフォルトをOFFに設定。
# cmake -DGREETINGS_BUILD_SHARED_LIBS=ON ..とすると共有ライブラリが作成される。
option(GREETINGS_BUILD_SHARED_LIBS "build greetings as a shared library" OFF)
# 共有か静的かでadd_libraryを設定する
if (GREETINGS_BUILD_SHARED_LIBS)
  add_library(greetings SHARED hello.cpp good_morning.cpp)
else()
  add_library(greetings STATIC hello.cpp good_morning.cpp)
endif()

add_executable(a main.cpp)

# 'a'を作成する際にlibgreetings.soをリンク
target_link_libraries(a greetings)
