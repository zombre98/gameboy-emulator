//
// Created by Thomas Burgaud on 2019-01-25.
//

#include <iostream>
#include "common/Logger.hpp"
#include "Cpu.hpp"

gb::Cpu::Cpu() {
    logging::debug << "Register Size : " << sizeof(reg[0]) << std::endl;
    functionsMap.fill(nullptr);
    functionsMap[0x00] = std::bind(&Cpu::NOP, this, std::placeholders::_1);
}

uint8_t gb::Cpu::GetHighByte(ushort byte) const noexcept {
    return static_cast<uint8_t>((byte >> 8) & 0xFF);
}

uint8_t gb::Cpu::GetLowByte(ushort byte) const noexcept {
    return static_cast<uint8_t>(byte & 0xFF);
}

size_t gb::Cpu::NOP(const uint8_t &) {
    return 4;
}

void gb::Cpu::test() {
    uint8_t i = 3;
    std::cout << functionsMap[0x00](i) << std::endl;
}

