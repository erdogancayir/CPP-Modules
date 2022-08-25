#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"

class Fixed{
	private:
		int fixedPoint;
		static const int fracBits;
	public:
		Fixed();
		Fixed(const Fixed &oth);
		Fixed	&operator=(const Fixed &oth);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif