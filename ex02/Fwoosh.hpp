#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include "ATarget.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		virtual ~Fwoosh();

		ASpell * clone() const;

};

#endif