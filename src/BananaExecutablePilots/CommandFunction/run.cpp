//external include
#include <string>
#include <vector>

#include <iostream>

//internal include
#include "BananaExecutablePilots/CommandFunction/run.hpp"
#include "BananaIO/ExecutableOut.class.hpp"
#include "BananaIO/BananaIOType.enum.hpp"

void BananaExecutablePilots::CommandFunction::__run(std::vector<std::string> args) 
{
	BananaIO::ExecutableOut execOut(std::cerr);
	std::vector<std::string> errors;

	if(args.size() == 0) 
	{
		execOut.setType(BananaIO::EXECUTABLE_ERROR);
		errors.push_back("missing filename after command `--run` or `-R`");
	}

	execOut << errors;
}