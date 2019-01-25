set(COMMON
        ${CMAKE_SOURCE_DIR}/src/main.cpp
        ${CMAKE_SOURCE_DIR}/src/common/Logger.hpp)

set(EMULATOR
        emulator/Emulator.cpp
        emulator/Emulator.hpp)

set(CARTRIDGE
        cartridge/Cartridge.cpp
        cartridge/Cartridge.hpp)

set(CPU
        CPU/Cpu.cpp
        CPU/Cpu.hpp)

set(SOURCES
        ${COMMON}
        ${CPU}
        ${EMULATOR}
        ${CARTRIDGE})
