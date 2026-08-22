cmake_minimum_required(VERSION 3.22)

project(banana VERSION 1.0.0 LANGUAGES CXX)

file(GLOB_RECURSE SOURCES
	"${CMAKE_CURRENT_SOURCE_DIR}/src/*cpp"
)

file(GLOB_RECURSE HEADERS
	"${CMAKE_CURRENT_SOURCE_DIR}/include/*hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/include/*h"
)

add_executable(banana
	${SOURCES}
	${HEADERS}
)

target_include_directories(banana
	PRIVATE
		"${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_compile_features(banana PRIVATE cxx_std_20)