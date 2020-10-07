#include "Human.hpp"

typedef void (Human::*HumanMemPtr) (std::string const & target);

typedef struct ptrHumanMember
{
    HumanMemPtr ptr;
    std::string string;
}              t_ptrHumanMember;

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Melee attack" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "Ranged attack" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "IntimidatingShout" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    t_ptrHumanMember tab[3] = {{&Human::meleeAttack, "meleeAttack"},
        {&Human::rangedAttack, "rangedAttack"}, {&Human::intimidatingShout, "intimidatingShout"}};

    for (int i = 0; i < 3; i++)
    {
        if (tab[i].string == action_name)
            (this->*(tab[i].ptr))(target);
    }
}