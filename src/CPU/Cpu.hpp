//
// Created by Thomas Burgaud on 2019-01-25.
//

#pragma once

#include <array>

namespace gb {

    enum RegisterIndex {
        AF, // Acumulator and Flag
        BC,
        DE,
        HL,
        SP, // Stack Pointer
        PC  // Program Counter
    };

    class Cpu {
        using operationFunction = std::function<long(const uint8_t &byte)>;
        using CpuRegister = uint64_t;
        static size_t constexpr NB_REGISTER = 6;
    public:
        Cpu();
        ~Cpu() = default;

    private:
        uint8_t GetHighByte(unsigned short byte);
        uint8_t GetLowByte(unsigned short byte);
    private:
        std::array<CpuRegister[2], NB_REGISTER> reg;
        std::array<operationFunction, 0xFF + 1> functionMap;
    };
}
