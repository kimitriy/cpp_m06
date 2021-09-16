#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast< uintptr_t >(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast< Data* >(raw));
}

int		main()
{
	Data origin;
	origin.i = 8888;
	origin.f = 8.888f;
	origin.d = 888.8;
	origin.c = '8';
	origin.s = "Eight thousand eight hundred eighty eight";
	
	uintptr_t uptr_one = serialize(&origin);
	uintptr_t uptr_two = uptr_one;

	Data *rcvr = deserialize(uptr_two);

	std::cout << F_R_GRN << "int: " << F_R_PRPL << rcvr->i << RESET << std::endl;
	std::cout << F_R_GRN << "float: " << F_R_PRPL << rcvr->f << RESET << std::endl;
	std::cout << F_R_GRN << "double: " << F_R_PRPL << rcvr->d << RESET << std::endl;
	std::cout << F_R_GRN << "char: " << F_R_PRPL << rcvr->c << RESET << std::endl;
	std::cout << F_R_GRN << "std::string: " << F_R_PRPL << rcvr->s << RESET << std::endl;

	return (0);
}