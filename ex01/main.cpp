#include "PhoneBook.h"

int main()
{
    PhoneBook instance;
    std::string input;
    static int index = 0;
    
    while (1)
    {
        std::cout << "Enter a command: ";
        std::cin >> input;
        std::cout << std::endl;
        if (input == "ADD")
            instance.addContact(index);
        else if (input == "SEARCH")
            instance.searchContact();
        else if (input == "EXIT")
            break;
    }
    return 0;
}
