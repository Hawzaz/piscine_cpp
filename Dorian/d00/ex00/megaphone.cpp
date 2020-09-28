#include <iostream>

class Megaphone {

	public:
		std::string s;

		void setString(const std::string& s);

};

void Megaphone::setString(const std::string& s)
{
	this->s = s;
	for (unsigned long i = 0; i < this->s.size(); ++i)
		this->s.at(i) = toupper(this->s.at(i));
}

int main(int ac, char **av)
{
	Megaphone m;

	if (ac > 2)
	{
		for (int i = 1; i < ac; i++)
		{
			m.setString(av[i]);
			std::cout << m.s;
		}
	}
	else
	{
		m.setString("* loud and unbearable feedback noise *");
		std::cout << m.s;
	}
	std::cout << std::endl;
	return (0);
}
