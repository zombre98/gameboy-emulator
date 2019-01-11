//
// Created by Thomas Burgaud on 2019-01-11.
//

#pragma once

#include <string>

namespace gb {
		class Cartridge {
		public:
			Cartridge(std::string const &romPath);
			~Cartridge() = default;

			bool init();

		private:
			std::string const &_romPath;
			std::unique_ptr<std::byte> _cart;
		};
}
