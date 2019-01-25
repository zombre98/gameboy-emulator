//
// Created by Thomas Burgaud on 2019-01-11.
//

#include <iostream>
#include <fstream>
#include <filesystem>
#include "common/Logger.hpp"
#include "Cartridge.hpp"

gb::Cartridge::Cartridge(std::string const &romPath) : _romPath(romPath) {
}

bool gb::Cartridge::init() {
	std::ifstream fStream(_romPath, std::ios::binary);

	logging::debug << "Path of the rom is : " << _romPath << std::endl;
	if (!fStream)
		return false;

	_cart = std::vector<char>(std::istreambuf_iterator<char>(fStream), std::istreambuf_iterator<char>());

	logging::debug << "Cartridge size : " << _cart.size() << std::endl;
	return true;
}
