#include "C.hpp"

C::C(void)
{

}

C::C(C const & other)
{
	*this = other;
}

C::~C(void)
{

}

C & C::operator= (C const &)
{
	return *this;
}

//
void	C::tellType(void)
{
	std::cout << F_R_PRPL << "C" << RESET << std::endl;
}