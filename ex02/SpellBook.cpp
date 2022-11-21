#include "SpellBook.hpp"

SpellBook::SpellBook()
{}
SpellBook::~SpellBook()
{
	std::vector<ASpell *>::iterator it;
	for (it = book.begin(); it != book.end(); it++)
		delete (*it);
	book.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		book.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const & spellName)
{
	std::vector<ASpell *>::iterator it;
	for (it = book.begin(); it != book.end(); it++)
	{
		if ((*it)->getName() == spellName)
		{
			delete (*it);
			book.erase(it);
			break ;
		}
	}
}

ASpell* SpellBook::createSpell(std::string const & spellName)
{

	std::vector<ASpell *>::iterator it;
	for (it = book.begin(); it != book.end(); it++)
	{
		if ((*it)->getName() == spellName)
		{
			return (*it);
		}
	}
	return(nullptr);
}