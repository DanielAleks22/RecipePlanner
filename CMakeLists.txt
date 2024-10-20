
cmake_minimum_required(VERSION 3.5)

project(RecipePlanner)

set(CMAKE_PREFIX_PATH "C:/Qt/6.4.2/mingw_64/lib/cmake")

find_package(Qt6 COMPONENTS Widgets REQUIRED)

# Manually specify libcurl paths
set(CURL_INCLUDE_DIR "C:/ProgramData/chocolatey/lib/curl/tools/curl-8.10.1_1-win64-mingw/include/curl")
set(CURL_LIBRARY "C:/ProgramData/chocolatey/lib/curl/tools/curl-8.10.1_1-win64-mingw/lib/libcurl.a")

include_directories(${CURL_INCLUDE_DIR})
link_directories("C:/ProgramData/chocolatey/lib/curl/tools/curl-8.10.1_1-win64-mingw/lib")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable(RecipePlanner src/main.cpp src/gui.cpp src/ai.cpp)

target_link_libraries(RecipePlanner Qt6::Widgets ${CURL_LIBRARY})

