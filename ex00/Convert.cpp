#include "Convert.hpp"

//private
void	Convert::c2c( const std::string & val )
{
	if ( strInArr( m_arr, val ) >= 0 || atoi( val.c_str() ) < 0 || atoi( val.c_str() ) > 127 )
		std::cout << "char: impossible" << std::endl;
	else if ( strIsNum( val ) == true && ( atoi( val.c_str() ) < 33 || atoi( val.c_str() ) == 127 ) )
		std::cout << "char: Non displayable" << std::endl;
	else if ( val.length() == 1 && strIsNum( val ) == false )
		std::cout << "char: " << val.at(0) << std::endl;
	else
		std::cout << "char: " << static_cast<char>( atoi( val.c_str() ) ) << std::endl;
}

void	Convert::c2i( const std::string & val )
{
	if (strInArr(m_arr, val) >= 0)
		std::cout << "int: impossible" << std::endl;
	else if (strIsNum(val) == false)
		std::cout << "int: " << static_cast<int>(val.at(0)) << std::endl;
	else 
		std::cout << "int: " << atoi(val.c_str()) << std::endl;
}

void	Convert::c2f( const std::string & val )
{
	int	i = strInArr(m_arr, val);
	if (i >= 0 && (i == 0 || i == 2 || i == 4 ))
		std::cout << "float: " << m_arr[i + 1] << std::endl;
	else if (i >= 0 && (i == 1 || i == 3 || i == 5 ))
		std::cout << "float: " << m_arr[i] << std::endl;
	else if (strIsNum(val) == false)
		std::cout << "float: " << static_cast<float>(val.at(0)) << ".0f" << std::endl;
	else 
	{
		if (val.find('.') == std::string::npos || val.at(val.length() - 1) == 46)
			std::cout << "float: " << atof(val.c_str()) << ".0f" << std::endl;
		else
			std::cout << "float: " << atof(val.c_str()) << "f" << std::endl;
	}
}

void	Convert::c2d( const std::string & val )
{
	int	i = strInArr(m_arr, val);
	if (i >= 0 && (i == 0 || i == 2 || i == 4 ))
		std::cout << "double: " << m_arr[i] << std::endl;
	else if (i >= 0 && (i == 1 || i == 3 || i == 5 ))
		std::cout << "double: " << m_arr[i - 1] << std::endl;
	else if (strIsNum(val) == false)
		std::cout << "double: " << static_cast<float>(val.at(0)) << ".0" << std::endl;
	else 
	{
		if (val.find('.') == std::string::npos || val.at(val.length() - 1) == 46)
			std::cout << "double: " << atof(val.c_str()) << ".0" << std::endl;
		else
			std::cout << "double: " << atof(val.c_str()) << std::endl;
	}
}

//public
Convert::Convert( void ) //default constr
	: m_value()
{	

}

Convert::Convert( std::string val ) //param constr
	: m_value( val )
{
	m_arr[0] = "-inf";
	m_arr[1] = "-inff";
	m_arr[2] = "+inf";
	m_arr[3] = "+inff";
	m_arr[4] = "nan";
	m_arr[5] = "nanf";

	int min = std::numeric_limits<int>::min();
	int max = std::numeric_limits<int>::max();

	if ( m_value.length() > 1)
	{
		if ((strInArr(m_arr, m_value) == -1 && strIsNum(m_value) == false) || (strIsNum(m_value) == true && (atol(m_value.c_str()) < min || atol(m_value.c_str()) > max)))
			throw ( MyException("Unapropriate argument!") );
	}
}

Convert::Convert( const Convert& other ) //copy constr
{
	*this = other;
}

Convert::~Convert ( void ) //destr
{
	// delete[] m_arr;
}

Convert& Convert::operator= ( const Convert& other ) //[=] operator overload
{
	this->m_value = other.m_value;
	int	i = 0;
	while (i < 6)
	{
		this->m_arr[i] = other.m_arr[i];
		i++;
	}
	return ( *this );
}

void	Convert::cnvrs( void )
{
	c2c( m_value );
	c2i( m_value );
	c2f( m_value );
	c2d( m_value );
}

