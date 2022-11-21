#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
# include "ATarget.hpp"

class Fireball : public ASpell
{
	public:
		Fireball();
		virtual ~Fireball();

		ASpell * clone() const;
};

#endif