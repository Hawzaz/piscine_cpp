/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:56:07 by lomasse           #+#    #+#             */
/*   Updated: 2020/09/28 20:00:50 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact{

public :
    
    Contact( void );
    ~Contact( void );

    int         SearchContact(Contact contact[8]);
    void        AddContact(Contact contact[8]);
    std::string GetField(void);
    void        NewContact(void);
    static int  getNbContact(void);
    static void incNbContact(void);

private :

    static int  _NbContact;
    std::string _Index;
    std::string _FirstName;
    std::string _LastName;
    std::string _NickName;
    std::string _Login;
    std::string _PostalAddr;
    std::string _EmailAddr;
    std::string _PhoneNumber;
    std::string _Birthday;
    std::string _Meal;
    std::string _Color;
    std::string _Secret;
};