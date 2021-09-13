#include "MyException.hpp"

//constructor
MyException::MyException( const char *msg )
	: exception(), m_msg( msg )
{
	
}

//destructor
MyException::~MyException( void ) throw()
{

}

//method
const char* MyException::MyException::what( void ) const throw()
{
	return ( m_msg );
}