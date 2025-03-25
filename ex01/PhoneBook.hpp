#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

# include "Contact.hpp"

class PhoneBook {
public:
    void add_contact();
    void ask_info();
    void search_contact();
    void print_saved_contact();
private:
    Contact _contact[8];
    static int _index;
};

#endif