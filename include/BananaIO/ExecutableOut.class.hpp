#pragma once

//external include
#include <iostream>
#include <ostream>
#include <vector>

//internal include
#include "BananaIO/BananaIOType.enum.hpp"

namespace BananaIO {
	class ExecutableOut
	{
	private:
		std::ostream& stream;
		BananaIOType type;
	public:
		ExecutableOut(std::ostream& stream);

		//setters
		void setType(BananaIOType type);

		template<typename T>
		ExecutableOut& operator<<(std::vector<T>& value) 
		{
			if(this->type == BananaIOType::EXECUTABLE_ERROR)
			{
				this->stream << "\033[33m(Banana)" << "\033[31mError : " ;
				for(int i = 0; i < value.size(); i++) {
					std::cout << "\n\t> \033[0m" << value[i];
				}
				this->stream << std::endl;
			}
			else if (this->type == BananaIOType::EXECUTABLE_INFORMATION)
			{
				this->stream << "\033[33m(Banana)" << "\033[34mInformation : " ;
				for(int i = 0; i < value.size(); i++) {
					std::cout << "\n\t\033[34m> \033[0m" << value[i];
				}
				this->stream << std::endl;
			}
			else
			{
				this->stream << "\033[33m(Banana) : " ;
				for(int i = 0; i < value.size(); i++) {
					std::cout << "\n\t> \033[0m" << value[i];
				}
				this->stream << std::endl;
			}
			return *this;
		};
	};
}