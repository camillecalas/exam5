#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include "ATarget.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph();
		virtual ~Polymorph();

		ASpell * clone() const;
};

#endif