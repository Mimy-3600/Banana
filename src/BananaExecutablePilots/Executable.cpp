//exteranel include
#include "BananaExecutablePilots/CommandFunction/version.hpp"
#include <vector>
#include <cctype>
#include <iostream>

//internal include
#include "BananaExecutablePilots/Executable.class.hpp"
#include "BananaExecutablePilots/UserCommand.class.hpp"
#include "BananaExecutablePilots/Command.class.hpp"
#include "BananaExecutablePilots/CommandFunction/help.hpp"
#include "BananaExecutablePilots/CommandFunction/run.hpp"

using namespace BananaExecutablePilots;

Executable::Executable(std::vector<UserCommand> usrCommands) : 
	_usrCommands(usrCommands)
{

}

bool Executable::init() noexcept
{
	Command __help{"help", CommandFunction::__help};
	Command __run{"run", CommandFunction::__run};
	Command __version{"version", CommandFunction::__version};

	this->_commands.push_back(__run);
	this->_commands.push_back(__help);
	this->_commands.push_back(__version);
	return true;
}

void Executable::exec() noexcept
{
	for(int i = 0; i < this->_usrCommands.size(); i++) {
		for(int j = 0; j < this->_commands.size(); j++) {
			if(
				(
					this->_usrCommands[i].getCommandName().size() == 1
					&& this->_usrCommands[i].getCommandName()[0] == std::toupper(this->_commands[j].getCommandName()[0])
				)
				|| this->_usrCommands[i].getCommandName() == this->_commands[j].getCommandName()
			) {
				std::vector<std::string> _params{this->_usrCommands[i].getCommandParams()}; 
				this->_commands[j].exec(_params);
			}
		}
	}
}

void Executable::displayExecutableIncoherences() noexcept
{
	std::cout << "Error while compiling" << std::endl;
}