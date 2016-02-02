#ifndef GRADUATE_H
#define GRADUATE_H
#include "head_header.h"

class graduate : public member{
public:
	graduate();
	graduate(string new_name, string new_image, BD new_birthday);
	~graduate();
	string	get_name();
	string	get_image();
	BD		get_birthday();
	void	set_name(string new_name);
	void	set_image(string new_image);
	void	set_birthday(BD new_birthday);
};
#endif