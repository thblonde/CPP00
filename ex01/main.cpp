#include "PhoneBook.h"

int main()
{
	PhoneBook instance;
	std::string input;
	static int index = 0;

	while (true)
	{
		std::cout << "Enter a command: ";
	    std::getline(std::cin, input);
        if (std::cin.eof())
           break;
		if (input == "ADD")
		{
			if (!instance.addContact(index))
				break;
		}
		else if (input == "SEARCH")
        {
    		if (!instance.searchContact())
                    break;
        }
		else if (input == "EXIT")
			break;
        std::cin.clear();
	}
}
