//external include
#include <iostream>

//internal include
#include <BananaIO/ExecutableOut.class.hpp>
#include <BananaIO/BananaIOType.enum.hpp>

using namespace BananaIO;

ExecutableOut::ExecutableOut(std::ostream& stream)
	: stream(stream)
{}

void ExecutableOut::setType(BananaIOType type)
{
	this->type = type;
}