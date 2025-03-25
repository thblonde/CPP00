#include "PhoneBook.hpp"

int main()
{
    PhoneBook instance;
    std::string input;

    while (1) {
        std::cout << "Enter a command: ";
        std::cin >> input;
        std::cout << std::endl;
        if (input == "ADD")
            instance.add_contact();
        else if (input == "SEARCH")
            instance.search_contact();
        else if (input == "EXIT")
            break;
    }
    return 0;
}