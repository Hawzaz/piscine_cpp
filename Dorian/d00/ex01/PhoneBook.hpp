#include <iostream>
#include <iomanip>
#include <string>
#include "Person.hpp"


class PhoneBook {

    public:
        char    buff[128];
        Person  arr[8];
        int     count;

        PhoneBook(void);

        void    getInput(void);
        void    add(void);
        void    search(void);
        void    SearchPerson(void);
        std::string getField(const char *field);
        const char *getFieldName(int pos);


};