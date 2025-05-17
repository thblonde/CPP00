#include "PhoneBook.h"

bool PhoneBook::askInfo(int& index)
{
    std::string input;
    while (true)
    {
        std::cout << "First name: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return false;
        if (!input.empty())
        {
            _contact[index].setFirstName(input);
            break;
        }
    }
    while (true)
    {
        std::cout << "Last name: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return false;
        if (!input.empty())
        {
            _contact[index].setLastName(input);
            break;
        }
    }
    while (true)
    {
        std::cout << "Nick name: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return false;
        if (!input.empty())
        {
            _contact[index].setNickName(input);
            break;
        }
    }
    while (true)
    {
        std::cout << "Number: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return false;
        if (!input.empty())
        {
            _contact[index].setNumber(input);
            break;
        }
    }
    while (true)
    {
        std::cout << "Secret: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            return false;
        if (!input.empty())
        {
            _contact[index].setSecret(input);
            break;
        }
    }
    return true;
}

bool PhoneBook::addContact(int& index)
{
    int i = 0;

    while (i < 8)
    {
        if (_contact[i].getFirstName().empty())
        {
            index = i;
            if (!askInfo(index))
                return false;
            return true;
        }
        i++;
    }
    if (++index == 8)
        index = 0;
    if (!askInfo(index))
        return false;
    return true;
}

void PhoneBook::printSavedContact()
{
    int i = 0;
    int len = 0;
    std::cout << std::endl;

	while (i < 8 && !_contact[i].getFirstName().empty())
    {
		_contact[i].setId(i + 1);
		std::cout << "         " << _contact[i].getId()<< '|';
		len = _contact[i].getFirstName().length();
		if (len >= 10)
        {
            std::string tmp = _contact[i].getFirstName();
			std::cout << tmp.replace(9, len  - 9, ".") << '|';
		}	
		else
        {
			for (int i = 0; i <= 9 - len; i++)
				std::cout << ' ';
			std::cout << _contact[i].getFirstName() << '|';
		}
		len = _contact[i].getLastName().length();
		if (len >= 10)
        {
            std::string tmp = _contact[i].getLastName();
			std::cout << tmp.replace(9, len  - 9, ".") << '|';
		}	
		else
        {
			for (int i = 0; i <= 9 - len; i++)
				std::cout << ' ';
			std::cout << _contact[i].getLastName()<< '|';
		}
		len = _contact[i].getNickName().length();
		if (len >= 10)
        {
            std::string tmp = _contact[i].getNickName();
			std::cout << tmp.replace(9, len  - 9, ".");
		}	
		else
        {
			for (int i = 0; i <= 9 - len; i++)
				std::cout << ' ';
			std::cout << _contact[i].getNickName();
		}	
		std::cout << std::endl;
        i++;
	}
    std::cout << std::endl;
}

bool PhoneBook::searchContact()
{
    std::string input_index_str;
    int i = 1;

    printSavedContact();
    while (1)
    {
        std::cout << "Enter the contact index: ";
        std::getline(std::cin, input_index_str);
        if (std::cin.eof())
            return false;
        if (!input_index_str.empty())
            break;
    }
    std::cout << std::endl;

    int input_index_int = atoi(input_index_str.c_str());

    if (input_index_int < 1 || input_index_int > 8 || _contact[input_index_int - 1].getFirstName().empty())
    {
        std::cout << "\t" << "*Contact is empty*" << std::endl << std::endl;
        return false;
    }

    while (i <= 8)
    {
        if (input_index_int <= 8 && input_index_int > 0 && input_index_int == i)
        {
            std::cout << _contact[i - 1].getFirstName() << std::endl;
            std::cout << _contact[i - 1].getLastName() << std::endl;
            std::cout << _contact[i - 1].getNickName() << std::endl;
            std::cout << _contact[i - 1].getNumber() << std::endl;
            std::cout << _contact[i - 1].getSecret() << std::endl;
            std::cout << std::endl;
        }
        i++;
    }
    return true;
}
