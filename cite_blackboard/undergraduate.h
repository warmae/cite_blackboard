#ifndef GRADUATE_H
#define GRADUATE_H
#include "head_header.h"

class undergraduate : public member{
public:
	undergraduate();
	undergraduate(string new_name, string new_image, BD new_birthday);
	~undergraduate();
	string	get_name();
	string	get_image();
	BD		get_birthday();
	void	set_name(string new_name);
	void	set_image(string new_image);
	void	set_birthday(BD new_birthday);
};
#endif