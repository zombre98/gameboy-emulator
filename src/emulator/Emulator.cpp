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
	_rom = std::unique_ptr<std::byte>(new std::byte[size]);

	if (!fStream.read(reinterpret_cast<char *>(_rom.get()), size))
		return false;

	for (auto i = 0; i < size; i++) {
		std::cout << "[" << i << "] : " << static_cast<int>(_rom.get()[i]) << std::endl;
	}
	std::cout << "Rom size " << size << std::endl;
	return true;
}
