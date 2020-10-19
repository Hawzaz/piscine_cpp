#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	private:
		
	protected:
		std::string _name;
	public:
		Victim();
		Victim(std::string name);
		Victim(Victim const & src);
		std::string getName(void) const;
		Victim & operator=(Victim const & rhs);
		~Victim();
		virtual void getPolymorphed() const;

};

std::ostream & operator <<(std::ostream & o, Victim const & rhs);

#endif
