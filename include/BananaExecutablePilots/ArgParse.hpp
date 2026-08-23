#pragma once

//external include
#include <vector>

//internal include
#include "BananaExecutablePilots/UserCommand.class.hpp"

namespace BananaExecutablePilots {

	/**
	 *  PARSE ARGUMENT
	 * 	*/
	std::vector<UserCommand> ArgParse(const int& argc, char* argv[]);
}

