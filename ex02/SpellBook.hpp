#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <vector>
#include <string>
#include "ASpell.hpp"

class Aspell;

class SpellBook
{
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);

	private:
		std::vector<ASpell *> book;
};

#endif