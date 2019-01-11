cmake_minimum_required(VERSION 3.2)
project(emulator)

set(TARGET_NAME emulator)

include(CMakeSources.cmake)

add_executable(emulator ${SOURCES})
install(TARGETS emulator DESTINATION ${EMULATOR_INSTALL_BIN_DIR})

target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src/cartridge)
target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src/common)
