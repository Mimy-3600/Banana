#pragma once

//exetranl include
#include <string>
#include <vector>
#include <functional>

namespace BananaExecutablePilots {
	
	class Command {
	private:
		std::string _commandName;
		std::function<void(const std::vector<std::string>&)> _commandAction;
	
	public:
		Command(std::string commandName, std::function<void(const std::vector<std::string>&)> commandAction);

		//getters
		std::string getCommandName();
		void exec(std::vector<std::string>& commandArguments);
	};
}