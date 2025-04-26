#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <string>

class Contact {
public: 
	int getId() const;
	void setId(int id);
	std::string getFirstName() const;
	void setFirstName(std::string first_name);
	std::string getLastName() const;
	void setLastName(std::string last_name);
	std::string getNickName() const;
	void setNickName(std::string nick_name);
	std::string getNumber() const;
	void setNumber(std::string number);
	std::string getSecret() const;
	void setSecret(std::string secret);
	
private: 
	int _id;
	std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string _number;
	std::string _secret;
};

#endif