#include "Warlock.hpp"

Warlock::Warlock(const std::string name, const std::string title) : _name(name), _title(title)
{
	std::cout << getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
	for(size_t i = 0; i < _tab.size(); i++)
	{
    	delete(_tab[i]);
		_tab.erase(_tab.begin() + i);
	}
}

void	Warlock::setTitle(std::string const & title)
{
	_title = title;
}

void	Warlock::introduce() const
{
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

 std::string const & Warlock::getName() const
{
	return (_name);
}

std::string const & Warlock::getTitle() const
{
	return (_title);
}


void	Warlock::learnSpell(ASpell * spell)
{
	if (spell)
		_tab.push_back(spell->clone());
}

// void	Warlock::forgetSpell(std::string spellName)
// {
// 	for (size_t i = 0; i < _tab.size(); i++)
// 	{
// 		if (_tab[i]->getName().compare(spellName) == 0){
// 			delete _tab[i];

// 			_tab.erase(_tab.begin() + i);
// 		}
// 	}
// }

void	Warlock::forgetSpell(std::string spellName)
{
	// std::vector<ASpell *>::iterator it;
	// it = +
	// it = find(_tab.begin(), _tab.end(), _tab->getName().compare(spellName));
	// if (it != _tab.end())
	// {
	// 		delete (*it);
	// 			_tab.erase(it);
	// }
	
	for (it = _tab.begin(); it != _tab.end(); it++)
	{
		std::cout << "ICI\n";
		if (_tab.find())
		if ((*it)->getName().compare(spellName) == 0)
		{
				std::cout << "LA\n";
				delete (*it);
				_tab.erase(it);
				break ;

		}
	}
}


void	Warlock::launchSpell(std::string spellName, ATarget const & A)
{
	for (int i = 0; i < _tab.size(); i++)
	{
		if (_tab[i]->getName() == spellName)
			_tab[i]->launch(A);
	}
}