add_library(greetings SHARED good_morning.cpp hello.cpp)
# greetingライブラリのインクルードディレクトリを教えてあげる
# PROJECT_SOURCE_DIRはこのプロジェクトのルートディレクトリの絶対パス
# 相対パス../includeも可能
target_include_directories(greetings PUBLIC ${PROJECT_SOURCE_DIR}/include)
