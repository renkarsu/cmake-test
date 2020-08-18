cmake_minimum_required(VERSION 3.17.3)
project(test_cmake CXX)

#<今回は使用しない>
#includeのヘッダ・ファイルをexeが#includeします。その際 ../include/ファイル名.h でも良いのですが、
#なるべく依存を減らしたいのでinclude_directoriesにてインクルード・パスを追加しました。

#また、デフォルトではbuild内のsrcとtestに動的ライブラリと実行ファイルがそれぞれ出力されるため、
#実行するのが面倒です。（srcフォルダにパスを通すなど）
#そこで、両者を１つのフォルダへ集める指定が12行目と13行目です。
#CMAKE_LIBRARY_OUTPUT_DIRECTORYは src の出力先を指定します.
#CMAKE_RUNTIME_OUTPUT_DIRECTORYは test の出力先を指定します。
#CMAKE_BINARY_DIRは root に対応するビルド・フォルダの絶対パスになります。そこからの相対で出力先を指定しています。

#include_directories("${CMAKE_SOURCE_DIR}/include")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# サブディレクトリを登録.先にライブラリが来るようにする
add_subdirectory(src)
add_subdirectory(test)
