//
// Created by Thomas Burgaud on 2019-01-10.
//

#include "Emulator.hpp"

gb::Emulator::Emulator(std::string romPath) : _romPath(std::move(romPath)), _cart(_romPath) {
}

bool gb::Emulator::launch() {
	if (!_cart.init())
		return false;
	cpu.test();
	return true;
}
