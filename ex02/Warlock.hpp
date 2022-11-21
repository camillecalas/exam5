#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <vector>
# include <map>
# include <algorithm>
# include "ASpell.hpp"
#include "SpellBook.hpp"

class ASpell;

class Warlock 
{
	public:
		Warlock();
		Warlock(std::string const &, std::string const &);
		Warlock(Warlock const & copy);
		~Warlock();

		Warlock & operator=(Warlock const & rhs);

		std::string const &  getName() const;
		std::string const &  getTitle() const;

		void	setTitle(std::string const &);
		void	introduce() const;
		void	learnSpell(ASpell *);
		void	forgetSpell(std::string const & spellName);
		void	launchSpell(std::string const & spellName, ATarget const &);

	private:
		std::string	_name;
		std::string	_title;
		SpellBook	_book;

};

#endif