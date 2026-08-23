#include <iostream>
#include <vector>

//internal inculde
#include <BananaExecutablePilots/Executable.class.hpp>
#include <BananaExecutablePilots/UserCommand.class.hpp>
#include <BananaExecutablePilots/ArgParse.hpp>

int main(int argc, char* argv[]) {
	std::vector<BananaExecutablePilots::UserCommand> cmd = BananaExecutablePilots::ArgParse(argc, argv);
	BananaExecutablePilots::Executable banana{cmd};

	if(banana.init())
	{
		banana.exec();
	}
	else 
	{
		banana.displayExecutableIncoherences();
	}

	return 0;
}