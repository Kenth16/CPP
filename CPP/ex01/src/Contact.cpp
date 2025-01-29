#include "../include/Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void    Contact::setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
    firstName = fn;
    lastName = ln;
    nickName = nn;
    phoneNumber = pn;
    darkestSecret = ds;
}

std::string    Contact::getFirstName() const {
    return (firstName);
}

std::string    Contact::getLastName() const {
    return (lastName);
}

std::string    Contact::getNickName() const {
    return (nickName);
}

std::string    Contact::getPhoneNumber() const {
    return (phoneNumber);
}

std::string    Contact::getDarkestSecret() const {
    return (darkestSecret);
}