#include "PhoneBook.h"

void PhoneBook::ask_info(int &index)
{
    std::string input;

    std::cout << "First Name: ";
    std::cin >> input;
    _contact[index].setFirstName(input);
    std::cout << "Last Name: ";
    std::cin >> input;
    _contact[index].setLastName(input);
    std::cout << "Nick Name: ";
    std::cin >> input;
    _contact[index].setNickName(input);
    std::cout << "Number: ";
    std::cin >> input;
    _contact[index].setNumber(input);
    std::cout << "Secret: ";
    std::cin >> input;
    _contact[index].setSecret(input);
    std::cout << std::endl;
}

void PhoneBook::add_contact(int &index)
{
    for (int i = 0; i < 8; i++) {
        if (_contact[i].getFirstName().empty()) {
            index = i;
            ask_info(index);
            return;
        }
    }
    if (++index == 8)
        index = 0;
    ask_info(index);
}

void PhoneBook::print_saved_contact()
{
    int len(0);
	for (int i = 0; i < 8 && !_contact[i].getFirstName().empty(); i++) {

		_contact[i].setId(i + 1);
		std::cout << "         " << _contact[i].getId()<< '|';
		len = _contact[i].getFirstName().length();
		if (len >= 10) {
            std::string tmp = _contact[i].getFirstName();
			std::cout << tmp.replace(10, len  - 10, ".") << '|';
		}	
		else {
			for (int i = 0; i <= 10 - len; i++)
				std::cout << ' ';
			std::cout << _contact[i].getFirstName() << '|';
		}
		len = _contact[i].getLastName().length();
		if (len >= 10) {
            std::string tmp = _contact[i].getLastName();
			std::cout << tmp.replace(10, len  - 10, ".") << '|';
		}	
		else {
			for (int i = 0; i <= 10 - len; i++)
				std::cout << ' ';
			std::cout << _contact[i].getLastName()<< '|';
		}
		len = _contact[i].getNickName().length();
		if (len >= 10) {
            std::string tmp = _contact[i].getNickName();
			std::cout << tmp.replace(10, len  - 10, ".");
		}	
		else {
			for (int i = 0; i <= 10 - len; i++)
				std::cout << ' ';
			std::cout << _contact[i].getNickName();
		}	
		std::cout << std::endl;
	}
    std::cout << std::endl;
}

void PhoneBook::search_contact()
{
    int input_index(0);

    print_saved_contact();
    std::cout << "Enter the contact index: ";
    std::cin >> input_index;
    std::cout << std::endl;
    for (int i = 1; i <= 8; i++) {
        if (input_index <= 8 && input_index > 0 && input_index == i) {
            std::cout << _contact[i - 1].getFirstName() << std::endl;
            std::cout << _contact[i - 1].getLastName() << std::endl;
            std::cout << _contact[i - 1].getNickName() << std::endl;
            std::cout << _contact[i - 1].getNumber() << std::endl;
            std::cout << _contact[i - 1].getSecret() << std::endl;
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}