#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
public:
    int id;
    std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string number;
	std::string secret;
};

#endif