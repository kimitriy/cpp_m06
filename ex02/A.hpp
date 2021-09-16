#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A : public Base
{
	public:
		A(void);
		A(A const & other);
		virtual ~A(void);
		A & operator= (A const & other);

		//
		void	tellType(void);
};

#endif