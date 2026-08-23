//external include
#include <string>
#include <vector>
#include <functional>

//internal include
#include "BananaExecutablePilots/Command.class.hpp"

using namespace BananaExecutablePilots;

Command::Command(std::string commandName, std::function<void(const std::vector<std::string>&)> commandAction):
	_commandName(commandName),
	_commandAction(std::move(commandAction))
{}

std::string Command::getCommandName()
{
	return this->_commandName;
}

void Command::exec(std::vector<std::string>& commandArguments)
{
	this->_commandAction(commandArguments);
}