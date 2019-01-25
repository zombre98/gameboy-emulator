//
// Created by Thomas Burgaud on 2019-01-10.
//

#pragma once

#include <string>
#include <vector>
#include "CPU/Cpu.hpp"
#include "cartridge/Cartridge.hpp"

namespace gb {
	class Emulator {

	public:
		explicit Emulator(std::string romPath);
		~Emulator() = default;

		bool launch();

	private:
		Cpu cpu;
		std::string _romPath;
		Cartridge _cart;
	};
}
