cmake_minimum_required(VERSION 3.2)
project(emulator)

set(SOURCE_FILES main.cpp
        emulator/Emulator.cpp
        emulator/Emulator.hpp)

add_executable(emulator ${SOURCE_FILES})
install(TARGETS emulator DESTINATION ${EMULATOR_INSTALL_BIN_DIR})
