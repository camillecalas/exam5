#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string);
		ATarget(ATarget const &);
		virtual ~ATarget();
		ATarget & operator=(ATarget const &);

		//GETTERS
		std::string const	& getType() const;

		virtual ATarget * clone() const = 0;

		void	getHitBySpell(ASpell const &) const;

		private:
			std::string _type;
};

#endif