#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock 
{
	public:
		Warlock();
		Warlock(const std::string, const std::string);
		Warlock(Warlock const & copy);
		~Warlock();

		Warlock & operator=(Warlock const & rhs);

		std::string const &  getName() const;
		std::string const &  getTitle() const;

		void	setTitle(std::string const &);
		void	introduce() const;

	private:
		std::string	_name;
		std::string	_title;

};

#endif