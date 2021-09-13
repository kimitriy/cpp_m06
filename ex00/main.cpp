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
		Convert cnvrtr;

		// Convert cnvrtr = Convert( val );
		// Convert cnvrtr( val );
		
		cnvrtr = Convert( val );
		cnvrtr.cnvrs();
	}
	catch(const std::exception& e)
	{
		std::cerr << F_R_RED << e.what() << RESET << '\n';
	}
	
	return ( 0 );
}