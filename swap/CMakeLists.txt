project(swap)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../sdemo/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../ddemo/include)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../build/sdemo/)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)

add_executable(swap ${SRC_LIST})
target_link_libraries(swap sdemo)