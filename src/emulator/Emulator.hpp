//
// Created by Thomas Burgaud on 2019-01-10.
//

#pragma once

#include <string>
#include <vector>
#include "Cartridge.hpp"

namespace gb {
	class Emulator {

	public:
		explicit Emulator(std::string romPath);
		~Emulator() = default;

		bool launch();

	private:
		std::string _romPath;
		Cartridge _cart;
	};
}
