#ifndef GRADUATE_H
#define GRADUATE_H
#include "head_header.h"

class undergraduate : public member{
public:
	undergraduate();
	undergraduate(string new_name, string new_image, string new_email, BD new_birthday, unsigned int new_id, member_type new_type);
	~undergraduate();
	//virtual get methods
	string	get_name();
	string	get_image();
	string	get_email();
	BD		get_birthday();
	unsigned int get_id();
	member_type get_type();
	//virtual set methods
	void	set_name(string new_name);
	void	set_image(string new_image);
	void	set_email(string new_email);
	void	set_birthday(BD new_birthday);
	void	set_id(unsigned int new_id);
	void	set_type(member_type new_type);
};
#endif