#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell();
		ASpell(std::string, std::string);
		ASpell(ASpell const &);
		virtual ~ASpell();
		ASpell & operator=(ASpell const &);

		//GETTERS
		std::string	getName() const;
		std::string	getEffects() const;

		void	launch(ATarget const &)const;


		virtual ASpell * clone() const = 0;

		private:
			std::string	_name;
			std::string	_effects;
};

#endif