#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include "ATarget.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		Fwoosh(std::string, std::string);
		Fwoosh(Fwoosh const &);
		virtual ~Fwoosh();
		Fwoosh & operator=(Fwoosh const &);

		//GETTERS
		// std::string	getName() const;
		// std::string	getEffects() const;

		// void	launch(ATarget const &)const;


		ASpell * clone() const;

		private:
			// std::string	_name;
			// std::string	_effects;
};

#endif