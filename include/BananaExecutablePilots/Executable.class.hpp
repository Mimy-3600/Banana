#pragma once

//extrenal include
#include <vector>

//internal include
#include <BananaExecutablePilots/UserCommand.class.hpp>
#include <BananaExecutablePilots/Command.class.hpp>

namespace BananaExecutablePilots {
	class Executable {
	private:
		std::vector<UserCommand> _usrCommands;

		std::vector<Command> _commands;

	public:
		Executable(std::vector<UserCommand> usrCommands);

		// initialize banana
		bool init() noexcept;

		void exec() noexcept;
		void displayExecutableIncoherences() noexcept;
	};
}