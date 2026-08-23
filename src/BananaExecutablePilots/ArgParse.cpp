//external include
#include <iostream>

//external include
#include <vector>

//internal include
#include "BananaExecutablePilots/UserCommand.class.hpp"
#include "BananaExecutablePilots/ArgParse.hpp"

using namespace BananaExecutablePilots;

/**
 * 
 *  PARSE ARGUMENT EXECUTABLE ARGUMENT
 * 	*/
std::vector<UserCommand> BananaExecutablePilots::ArgParse(const int& argc, char* argv[]) {
	std::vector<UserCommand> _cmds;

	for(int i = 1; i < argc; i++) {
		std::string args(argv[i]);
		
		if(args.substr(0, 2) == "--" || args.substr(0, 1) == "-")
		{
			if(args.substr(0, 2) != "--" && args.length() == 2) 
			{
				UserCommand usercmd{args.substr(1)};
			
				_cmds.push_back(usercmd);
			}
			else if(args.substr(0, 2) == "--" && args.length() >= 4)
			{
				UserCommand usercmd{args.substr(2)};
			
				_cmds.push_back(usercmd);
			}
		}
		else
		{
			if(_cmds.size() >= 1) {
				_cmds[_cmds.size() - 1].appendCommandParams(args);
			}
		}
	}

	return _cmds;
}