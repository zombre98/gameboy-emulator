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
        using operationFunction = std::function<size_t(const uint8_t &byte)>;
        using CpuRegister = unsigned short;
        static size_t constexpr NB_REGISTER = 6;
    public:
        Cpu();
        ~Cpu() = default;

        void test();

    private:
        uint8_t GetHighByte(unsigned short byte) const noexcept;
        uint8_t GetLowByte(unsigned short byte) const noexcept;
        size_t NOP(const uint8_t &byte);

    private:
        std::array<CpuRegister, NB_REGISTER> reg;
        std::array<operationFunction, 0xFF + 1> functionsMap;
    };
}
