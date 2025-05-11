#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>
# include "Contact.h"

class PhoneBook
{
public: 
	void addContact(int &index);
	void askInfo(int &index);
	void searchContact();
	void printSavedContact();

private: 
	Contact _contact[8];
};

#endif