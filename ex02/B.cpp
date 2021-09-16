#include "B.hpp"

B::B(void)
{

}

B::B(B const & other)
{
	*this = other;
}

B::~B(void)
{

}

B & B::operator= (B const &)
{
	return *this;
}

//
void	B::tellType(void)
{
	std::cout << F_R_PRPL << "B" << RESET << std::endl;
}