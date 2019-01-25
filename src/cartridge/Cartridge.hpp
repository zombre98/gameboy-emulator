//
// Created by Thomas Burgaud on 2019-01-11.
//

#pragma once

#include <string>
#include <vector>

namespace gb {
	class Cartridge {
	public:
        explicit Cartridge(std::string const &romPath);

		~Cartridge() = default;

		bool init();

	private:
		std::string const &_romPath;
		std::vector<char> _cart;
	};
}
