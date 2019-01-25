//
// Created by Thomas Burgaud on 2019-01-25.
//

#include <iostream>
#include "common/Logger.hpp"
#include "Cpu.hpp"

gb::Cpu::Cpu() {
    logging::debug << "Register Size : " << sizeof(reg[0]) << std::endl;
}

uint8_t gb::Cpu::GetHighByte(ushort byte) {
    return static_cast<uint8_t>((byte >> 8) & 0xFF);
}

uint8_t gb::Cpu::GetLowByte(ushort byte) {
    return static_cast<uint8_t>(byte & 0xFF);
}

