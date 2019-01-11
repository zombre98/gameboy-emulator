cmake_minimum_required(VERSION 3.2)
project(emulator)

set(TARGET_NAME emulator)

set(SOURCE_FILES main.cpp
        emulator/Emulator.cpp
        emulator/Emulator.hpp
        Cartridge/Cartridge.cpp
        Cartridge/Cartridge.hpp)

add_executable(emulator ${SOURCE_FILES} ${COMMON})
install(TARGETS emulator DESTINATION ${EMULATOR_INSTALL_BIN_DIR})

target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src/Cartridge)
