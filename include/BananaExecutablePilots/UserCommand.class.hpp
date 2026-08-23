#pragma once

#include <string>

namespace BananaExecutablePilots {
	class UserCommand {
		private:
			/**
			 *	EXAMPLE : --help, --run, --compile, etc
			 * */
			std::string _commandName;
			std::vector<std::string> _commandParams;

		public:
			UserCommand(std::string commandName);

			bool appendCommandParams(std::string commandParam);

			//getters
			std::string getCommandName();
			std::vector<std::string> getCommandParams() const;
	};
}