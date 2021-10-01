#include "Convert.hpp"

bool	strIsNum( const std::string str )
{
	bool	flag_dot = false;
	bool	flag_minus = false;
	size_t len = str.length();
	size_t	i = 0;
	while  (i < len )
	{
		if ( str[i] == 46 && flag_dot == false ) //'.'
			flag_dot = true;
		else if ( str[i] == 46 && flag_dot == true )
			return ( false );
		if ( str[i] == 45 && flag_minus == false ) //'-'
			flag_minus = true;
		else if ( str[i] == 45 && flag_minus == true )
			return ( false );
		if ( str[i] ==  102 && flag_dot != true ) //'f'
			return ( false );
		else if ( str[i] ==  102 && flag_dot == true && i != len - 1 )
			return ( false );
		else if ( str[i] ==  102 && flag_dot == true && i == len - 1 )
			break ;
		if ( isdigit( str[i] ) == 0 && str[i] != 46 && str[i] != 45 )
			return ( false );
		i++;
	}
	return ( true );
}

int		strInArr( const std::string arr[6], const std::string & str )
{
	for ( int i = 0; i < 6; i++ )
	{
		if ( arr[i].compare( str ) == 0 )
			return ( i );
	}
	return ( -1 );
}