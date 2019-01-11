#include "gtest/gtest.h"
#include "Emulator.hpp"

TEST(EMULATOR_TEST, TRUE_ROM) {
	std::string romPath("pokemon-red.gb");

	gb::Emulator emulator(romPath);
	ASSERT_EQ(emulator.launch(), true);
}

TEST(EMULATOR_TEST, FALSE_ROM) {
	std::string falseRomPath("tetris.gb");

	gb::Emulator emulator(falseRomPath);
	ASSERT_EQ(emulator.launch(), false);
}
