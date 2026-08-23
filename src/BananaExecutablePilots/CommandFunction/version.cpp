//extrenal include
#include <iostream>
#include <string>
#include <vector>

//internal include
#include "BananaExecutablePilots/CommandFunction/version.hpp"
#include "BananaIO/BananaIOType.enum.hpp"
#include "BananaIO/ExecutableOut.class.hpp"

void BananaExecutablePilots::CommandFunction::__version(std::vector<std::string> args)
{
	BananaIO::ExecutableOut execOut(std::cout);
	execOut.setType(BananaIO::BananaIOType::EXECUTABLE_INFORMATION);

	std::vector<std::string> versionInfo = {
		"Welcome to \033[33mbanana\033[0m.",
		"We are actually in version \033[34mX.X.X\033[0m.",
	};

	execOut << versionInfo;
}