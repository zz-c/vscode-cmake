project(ddemo)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)

# SHARED 动态库 STATIC 静态库
add_library (ddemo SHARED ${SRC_LIST})