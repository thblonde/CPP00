#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>
# include <cstdlib>
# include "Contact.h"

class PhoneBook
{
    public: 
        bool addContact(int &index);
        bool askInfo(int &index);
        bool searchContact();
        void printSavedContact();

    private: 
        Contact _contact[8];
};

#endif
