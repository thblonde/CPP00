#include "PhoneBook.hpp"

int PhoneBook::_index = 0;

void PhoneBook::ask_info()
{
    std::cout << "First Name: ";
    std::cin >> _contact[_index].first_name;
    std::cout << "Last Name: ";
    std::cin >> _contact[_index].last_name;
    std::cout << "Nick Name: ";
    std::cin >> _contact[_index].nick_name;
    std::cout << "Number: ";
    std::cin >> _contact[_index].number;
    std::cout << "Secret: ";
    std::cin >> _contact[_index].secret;
    std::cout << std::endl;
}

void PhoneBook::add_contact()
{
    for (int i = 0; i < 8; i++) {
        if (_contact[i].first_name.empty()) {
            _index = i;
            ask_info();
            return;
        }
    }
    if (++_index == 8) {
        _index = 0;
    }
    ask_info();
}

void PhoneBook::print_saved_contact()
{
    int len;

	for (int i = 0; i < 8 && !_contact[i].first_name.empty(); i++) {

		_contact[i].id = i + 1;
		std::cout << "         " << _contact[i].id << '|';
		len = _contact[i].first_name.length();
		if (len >= 10) {
            std::string tmp = _contact[i].first_name;
			std::cout << tmp.replace(10, len  - 10, ".") << '|';
		}	
		else {
			for (int i = 0; i <= 10 - len; i++)
				std::cout << ' ';
			std::cout << _contact[i].first_name << '|';
		}
		len = _contact[i].last_name.length();
		if (len >= 10) {
            std::string tmp = _contact[i].last_name;
			std::cout << tmp.replace(10, len  - 10, ".") << '|';
		}	
		else {
			for (int i = 0; i <= 10 - len; i++)
				std::cout << ' ';
			std::cout << _contact[i].last_name << '|';
		}
		len = _contact[i].nick_name.length();
		if (len >= 10) {
            std::string tmp = _contact[i].nick_name;
			std::cout << tmp.replace(10, len  - 10, ".");
		}	
		else {
			for (int i = 0; i <= 10 - len; i++)
				std::cout << ' ';
			std::cout << _contact[i].nick_name;
		}	
		std::cout << std::endl;
	}
    std::cout << std::endl;
}

void PhoneBook::search_contact()
{
    int input_index;

    print_saved_contact();
    std::cout << "Enter the contact index: ";
    std::cin >> input_index;
    std::cout << std::endl;
    for (int i = 1; i <= 8; i++) {
        if (input_index <= 8 && input_index > 0 && input_index == i) {
            std::cout << _contact[i - 1].first_name << std::endl;
            std::cout << _contact[i - 1].last_name << std::endl;
            std::cout << _contact[i - 1].nick_name << std::endl;
            std::cout << _contact[i - 1].number << std::endl;
            std::cout << _contact[i - 1].secret << std::endl;
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}