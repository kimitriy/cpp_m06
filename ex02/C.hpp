#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base
{
	public:
		C(void);
		C(C const & other);
		virtual ~C(void);
		C & operator= (C const & other);

		//
		void	tellType(void);
};

#endif