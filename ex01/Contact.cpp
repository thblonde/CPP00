#include "Contact.h"

int Contact::getId() const
{
    return _id;
}

void Contact::setId(int id)
{
    _id = id;
}

std::string Contact::getFirstName() const
{
    return _first_name;
}

void Contact::setFirstName(std::string first_name)
{
    _first_name = first_name;
}

std::string Contact::getLastName() const
{
    return _last_name;
}

void Contact::setLastName(std::string last_name)
{
    _last_name = last_name;
}

std::string Contact::getNickName() const
{
    return _nick_name;
}

void Contact::setNickName(std::string nick_name)
{
    _nick_name = nick_name;
}

std::string Contact::getNumber() const
{
    return _number;
}

void Contact::setNumber(std::string number)
{
    _number = number;
}

std::string Contact::getSecret() const
{
    return _secret;
}

void Contact::setSecret(std::string secret)
{
    _secret = secret;
}