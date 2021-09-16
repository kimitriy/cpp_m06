#include "Utils.hpp"

Base * generate(void)
{
	std::srand(std::time(0));
	int rndm = rand() % 3;
	Base *pntr = NULL;
	if (rndm == 0)
		return (pntr = new A);
	else if (rndm == 1)
		return (pntr = new B);
	else if (rndm == 2)
		return (pntr = new C);
	return (pntr);
}

void identify(Base* p)
{
	A *a_pntr = dynamic_cast<A *>(p);
	if (a_pntr)
		a_pntr->tellType();
	B *b_pntr = dynamic_cast<B *>(p);
	if (b_pntr)
		b_pntr->tellType();
	C *c_pntr = dynamic_cast<C *>(p);
	if (c_pntr)
		c_pntr->tellType();
}

void identify(Base& p)
{
	try
	{
		A & a_ref = dynamic_cast<A &>(p);
		a_ref.tellType();
		return ;
	}
	catch(const std::bad_cast & e)
	{
		// std::cerr << e.what() << std::endl;
	}
	
	try
	{
		B & b_ref = dynamic_cast<B &>(p);
		b_ref.tellType();
		return ;
	}
	catch(const std::bad_cast & e)
	{
		// std::cerr << e.what() << std::endl;
	}

	try
	{
		C & c_ref = dynamic_cast<C &>(p);
		c_ref.tellType();
		return ;
	}
	catch(const std::bad_cast & e)
	{
		// std::cerr << e.what() << std::endl;
	}
}