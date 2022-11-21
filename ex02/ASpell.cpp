#include "ASpell.hpp"

ASpell::ASpell()
{}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{}

ASpell::ASpell(ASpell const & copy)
{
	*this = copy;
}

ASpell::~ASpell()
{}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	_effects = rhs._effects;
	return (*this);
}

std::string	ASpell::getName() const
{
	return (_name);
}
std::string	ASpell::getEffects() const
{
	return (_effects);
}

void	ASpell::launch(ATarget const &A)const
{
	A.getHitBySpell(*this);
}