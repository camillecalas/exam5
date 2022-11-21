#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>
# include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		// Dummy(std::string, std::string);
		Dummy(Dummy const &);
		virtual ~Dummy();
		// Dummy & operator=(Dummy const &);

		//GETTERS
		// std::string	getName() const;
		// std::string	getEffects() const;

		// void	launch(ATarget const &)const;


		ATarget * clone() const;

		private:
			// std::string	_name;
			// std::string	_effects;
};

#endif