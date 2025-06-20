#ifndef _CONTACT_
	#define _CONTACT_

	#include <iostream>
	#include <string>
	#include <cstdlib>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		Contact();
		~Contact();
		void set_first_name(const std::string &first_name);
		void set_last_name(const std::string &last_name);
		void set_nickname(const std::string &nickname);
		void set_phone_number(const std::string &phone_number);
		void set_darkest_secret(const std::string &darkest_secret);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
};
#endif