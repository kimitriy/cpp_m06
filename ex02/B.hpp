#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B : public Base
{
	public:
		B(void);
		B(B const & other);
		virtual ~B(void);
		B & operator= (B const & other);

		//
		void	tellType(void);
};

#endif