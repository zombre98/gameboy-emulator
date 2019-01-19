#include <iostream>
#include "emulator/Emulator.hpp"


int main(int ac, const char *av[]) {
	if (ac != 2) {
		std::cerr << av[0] << " romPath" << std::endl;
		return 1;
	}

	gb::Emulator emulator(av[1]);
	emulator.launch();
	return 0;
}
