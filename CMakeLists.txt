cmake_minimum_required(VERSION 2.8.12)

project(DiceParserRagel)

find_package(benchmark REQUIRED)

#add_custom_command(
#    OUTPUT "diceparser_rl.cpp"
#    COMMAND ragel
#    ARGS -o ${CMAKE_CURRENT_LIST_DIR}/diceparser_rl.cpp diceparser.rl
#    DEPENDS diceparser.rl
#    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
#    MAIN_DEPENDENCY diceparser.rl
#    VERBATIM
#)

#add_executable(${PROJECT_NAME} diceparser_rl.cpp)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR})

find_package(RAGEL REQUIRED)

RAGEL_TARGET(${PROJECT_NAME} ${CMAKE_CURRENT_LIST_DIR}/diceparser.rl ${CMAKE_CURRENT_LIST_DIR}/diceparser_rl.cpp)
add_executable(${PROJECT_NAME} main.cpp diceparser.cpp diceparser.h diceparser_rl.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

target_link_libraries(${PROJECT_NAME} benchmark::benchmark)
