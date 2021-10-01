#include "Convert.hpp"
#include "MyException.hpp"

int	main( int argc, char **argv )
{
	(void)argv;
	try
	{
		if (argc != 2)
			throw ( MyException( "Wrong number of arguments!" ) );
		std::string val = argv[1];
		
		// Convert c = Convert( val );
		// c.cnvrs();
		// std::cout << std::endl;
		
		// Convert cc;
		// cc = c;
		// cc.cnvrs();

		// Convert *c = new Convert( val );
		// c->cnvrs();
		// std::cout << std::endl;
		
		// Convert *cc = c;
		// delete c;
		// cc->cnvrs();

		Convert *c = new Convert( val );
		c->cnvrs();
		std::cout << std::endl;
		
		Convert *cc = new Convert();
		cc = c;
		delete c;
		cc->cnvrs();
	}
	catch(const std::exception& e)
	{
		std::cerr << F_R_RED << e.what() << RESET << std::endl;
	}
	
	return ( 0 );
}