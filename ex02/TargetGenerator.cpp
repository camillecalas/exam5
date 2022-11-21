#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
	std::vector<ATarget *>::iterator it;
		for (it = _targetTab.begin(); it != _targetTab.end(); it++)
			delete (*it);
		_targetTab.clear();
}

void TargetGenerator::learnTargetType(ATarget* A)
{
	if (A)
	{
		std::vector<ATarget *>::iterator it;
		for (it = _targetTab.begin(); it != _targetTab.end(); it++)
		{
			if ((*it)->getType() == A->getType())
				return ;
		}
		_targetTab.push_back(A->clone());
	}
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
	std::vector<ATarget *>::iterator it;
	for (it = _targetTab.begin(); it != _targetTab.end(); it++)
	{
		if ((*it)->getType() == name)
		{
			delete (*it);
			_targetTab.erase(it);
		}
	}
}

ATarget* TargetGenerator::createTarget(std::string const & type)
{
	std::vector<ATarget *>::iterator it;
	for (it = _targetTab.begin(); it != _targetTab.end(); it++)
	{
		if ((*it)->getType() == type)
		{
			return (*it);
		}
	}
	return(nullptr);
}