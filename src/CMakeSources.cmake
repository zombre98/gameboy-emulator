set(COMMON
        ${CMAKE_SOURCE_DIR}/src/main.cpp
        ${CMAKE_SOURCE_DIR}/src/common/Logger.hpp)

set(EMULATOR
        emulator/Emulator.hpp
        emulator/Emulator.cpp)

set(CARTRIDGE
        cartridge/Cartridge.hpp
        cartridge/Cartridge.cpp)

set(SOURCES
        ${COMMON}
        ${EMULATOR}
        ${CARTRIDGE})
