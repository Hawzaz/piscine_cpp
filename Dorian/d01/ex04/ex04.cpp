#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "REF : " << ref << std::endl;
    std::cout << "PTR : " << *ptr << std::endl;
    return (0);
}