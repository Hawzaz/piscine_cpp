#include <iostream>

class Person {

    public:

        void        setInst(int n);
        int         getNbInst(void);
        void        setInfo(const std::string s, int index);
        std::string getPublicInfo(void);



    private:
        int         _nbInst;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string login;
        std::string postal;
        std::string email;
        std::string phoneNumber;
        std::string birthdayDate;
        std::string favoriteMeal;
        std::string underwear;
        std::string secret;
};