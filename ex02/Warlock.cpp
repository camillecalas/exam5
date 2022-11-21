#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title) : _name(name), _title(title)
{
	std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;

}

void	Warlock::setTitle(std::string const & title)
{
	_title = title;
}

void	Warlock::introduce() const
{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

 std::string const & Warlock::getName() const
{
	return (_name);
}

std::string const & Warlock::getTitle() const
{
	return (_title);
}


void	Warlock::learnSpell(ASpell * spell)
{
	_book.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string const & spellName)
{
	_book.forgetSpell(spellName);
}


void	Warlock::launchSpell(std::string const & spellName, ATarget const & A)
{
	std::cout << "spellName = " << spellName << std::endl;
	ASpell *spell = this->_book.createSpell(spellName);
	if (spell)
		spell->launch(A);
}