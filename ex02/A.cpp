#include "A.hpp"

A::A(void)
{

}

A::A(A const & other)
{
	*this = other;
}

A::~A(void)
{

}

A & A::operator= (A const &)
{
	return *this;
}

//
void	A::tellType(void)
{
	std::cout << F_R_PRPL << "A" << RESET << std::endl;
}