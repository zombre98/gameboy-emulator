cmake_minimum_required(VERSION 3.2)
project(emulator_tests)

add_subdirectory(lib/googletest)

include_directories(${DIVISION_HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp
        ${CMAKE_SOURCE_DIR}/src/emulator/Emulator.cpp
        ${CMAKE_SOURCE_DIR}/src/emulator/Emulator.hpp
        ${CMAKE_SOURCE_DIR}/src/cartridge/cartridge.cpp
        ${CMAKE_SOURCE_DIR}/src/cartridge/cartridge.hpp
        ${CMAKE_SOURCE_DIR}/src/common/Logger.hpp
        src/emulator_tests.cpp)

add_executable(emulator_tests ${SOURCE_FILES})

file(COPY ${PROJECT_SOURCE_DIR}/../rom/ DESTINATION ${CMAKE_BINARY_DIR}/test/)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src/emulator)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src/cartridge)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src/common)
target_link_libraries(emulator_tests gtest)
install(TARGETS emulator_tests DESTINATION bin)

