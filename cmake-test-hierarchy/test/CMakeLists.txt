add_executable(a main.cpp)
# a.outをコンパイルする際にgreetingsをリンクする
target_link_libraries(a greetings)

# このとき、target_link_libraries()はsharedの場合、実行時にリンクする。
# つまりlibgreeting.dllが実行時にtestフォルダにあればいい。

# libgreeting.dllはcmakelists.txtによりsrcフォルダに生成されている。
