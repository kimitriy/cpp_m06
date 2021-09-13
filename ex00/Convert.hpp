#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits>
# include <stdlib.h>
# include "MyException.hpp"

# define RESET "\033[0m"

# define F_R_BLCK "\033[0;30m"
# define F_R_RED "\033[0;31m"
# define F_R_GRN "\033[0;32m"
# define F_R_YLLW "\033[0;33m"
# define F_R_BLU "\033[0;34m"
# define F_R_PRPL "\033[0;35m"
# define F_R_CYAN "\033[0;36m"
# define F_R_WHT "\033[0;37m"

class Convert
{
	private:
		std::string	m_value;
		std::string	m_arr[6];

		void	c2c( const std::string & val );
		void	c2i( const std::string & val );
		void	c2f( const std::string & val );
		void	c2d( const std::string & val );

	public:
		Convert( void ); //default constr
		Convert( std::string val ); //param constr
		Convert( const Convert& other ); //copy constr
		~Convert ( void ); //destr
		Convert& operator= ( const Convert& other ); //[=] operator overload

		void	cnvrs( void );
};

//utils.cpp
bool	strIsNum( const std::string str );
int		strInArr( const std::string arr[6], const std::string & str );

#endif