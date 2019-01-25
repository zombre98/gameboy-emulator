set(COMMON
        ${CMAKE_SOURCE_DIR}/src/main.cpp
        ${CMAKE_SOURCE_DIR}/src/common/Logger.hpp)

set(EMULATOR
        emulator/Emulator.cpp
        emulator/Emulator.hpp)

set(CARTRIDGE
        cartridge/Cartridge.cpp
        cartridge/Cartridge.hpp)

set(SOURCES
        ${COMMON}
        ${EMULATOR}
        ${CARTRIDGE})
