#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string _type;
	public:
		ATarget();
		ATarget(std::string const );
		// ATarget(ATarget const &);
		virtual ~ATarget();
		ATarget & operator=(ATarget const &);

		//GETTERS
		std::string const	& getType() const;

		virtual ATarget * clone() const = 0;

		void	getHitBySpell(ASpell const &) const;

};

#endif