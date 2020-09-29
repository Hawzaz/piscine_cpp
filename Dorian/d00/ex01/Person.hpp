#include <iostream>

class Person {

    public:

        void        setInst(int n);
        int         getNbInst(void);
        void        setInfo(const std::string s, int index);
        std::string getPublicInfo(void);
        std::string getTotalInfo(void);



    private:
        int         _nbInst;
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _login;
        std::string _postal;
        std::string _email;
        std::string _phoneNumber;
        std::string _birthdayDate;
        std::string _favoriteMeal;
        std::string _underwear;
        std::string _secret;
};