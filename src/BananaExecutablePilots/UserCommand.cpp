//external include
#include <vector>

//internale icnlude
#include <BananaExecutablePilots/UserCommand.class.hpp>

using namespace BananaExecutablePilots;

UserCommand::UserCommand(std::string commandName) :
	_commandName(commandName) {}

std::string UserCommand::getCommandName() 
{
	return this->_commandName;
}

bool UserCommand::appendCommandParams(std::string commandParam) 
{
	for(int i = 0; i < this->_commandParams.size(); i++)
	{
		if(this->_commandParams[i] == commandParam)
		{
			return false;
		} 
	}

	this->_commandParams.push_back(commandParam);
	return true;
}

std::vector<std::string> UserCommand::getCommandParams() const
{
	return this->_commandParams;
}