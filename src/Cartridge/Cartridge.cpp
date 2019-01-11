//
// Created by Thomas Burgaud on 2019-01-11.
//

#include <iostream>
#include <fstream>
#include "Cartridge.hpp"

gb::Cartridge::Cartridge(std::string const &romPath) : _romPath(romPath) {
}

bool gb::Cartridge::init() {
	std::ifstream fStream(_romPath, std::ios::in | std::ios::binary | std::ios::ate);

	std::cout << "Path of the rom is : " << _romPath << std::endl;
	if (!fStream.is_open())
		return false;

	auto size = fStream.tellg(); // Give the size of the Rom
	fStream.seekg(0, std::ios::beg);
	_cart = std::unique_ptr<std::byte>(new std::byte[size]);

	if (!fStream.read(reinterpret_cast<char *>(_cart.get()), size))
		return false;

	std::cout << "Rom size " << size << std::endl;
	return true;
}
