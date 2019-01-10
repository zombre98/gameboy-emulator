//
// Created by Thomas Burgaud on 2019-01-10.
//

#include <iostream>
#include <fstream>
#include "Emulator.hpp"

gb::Emulator::Emulator(std::string romPath) : _romPath(std::move(romPath)), _rom{} {
}

bool gb::Emulator::launch() {
	std::ifstream fStream(_romPath, std::ios::in | std::ios::binary | std::ios::ate);

	if (!fStream.is_open())
		return false;

	auto size = fStream.tellg(); // Give the size of the Rom
	fStream.seekg(0, std::ios::beg);

	std::cout << "Rom size " << size << std::endl;

	return true;
}
