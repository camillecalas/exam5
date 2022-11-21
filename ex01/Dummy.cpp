#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{}
// Dummy::Dummy(std::string a, std::string b) : ATarget(a, b)
// {}
Dummy::Dummy(Dummy const & copy) : ATarget(copy)
{}
Dummy::~Dummy()
{}
// Dummy & Dummy::operator=(Dummy const & rhs)
// {
// 	if (this == &rhs)
// 		return (*this);
// 	return (*this);
// }

ATarget  * Dummy::clone() const
{
	return (new Dummy(*this));
}