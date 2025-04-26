#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>
# include "Contact.h"

class PhoneBook {
public: 
	void add_contact(int &index);
	void ask_info(int &index);
	void search_contact();
	void print_saved_contact();

private: 
	Contact _contact[8];
};

#endif