#include "ATarget.hpp"

ATarget::ATarget() : _type()
{
}

ATarget::ATarget(std::string const type) : _type(type)
{}

// ATarget::ATarget(ATarget const & copy) : _type(copy._type)
// {
// 	*this = copy;
// }

ATarget::~ATarget()
{}

ATarget & ATarget::operator=(ATarget const & rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

std::string const & ATarget::getType() const
{
	return (this->_type);
}


void	ATarget::getHitBySpell(ASpell const & A)const
{
	// std::cout << getType() << " has been " << A.getEffects() << "!" << std::endl;
	std::cout <<  this->_type << " has been " << A.getEffects() << "!" << std::endl;
}
