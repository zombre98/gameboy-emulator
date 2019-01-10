//
// Created by Thomas Burgaud on 2019-01-10.
//

#pragma once

#include <string>
#include <vector>

namespace gb {
	class Emulator {

	public:
		explicit Emulator(std::string romPath);
		~Emulator() = default;

		bool launch();

	private:
		constexpr static std::size_t MEMORY_SIZE = 8000;
		std::string _romPath;
		std::unique_ptr<std::byte> _rom;
	};
}
