#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);

	private:
		std::vector<ATarget *> _targetTab;
};

#endif