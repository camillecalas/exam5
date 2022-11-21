#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}
Fwoosh::Fwoosh(std::string a, std::string b) : ASpell(a, b)
{}
Fwoosh::Fwoosh(Fwoosh const & copy) : ASpell(copy)
{}
Fwoosh::~Fwoosh()
{}
Fwoosh & Fwoosh::operator=(Fwoosh const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

ASpell  * Fwoosh::clone() const
{
	return (new Fwoosh(*this));
}