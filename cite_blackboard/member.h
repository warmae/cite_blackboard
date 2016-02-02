#ifndef MEMBER_H
#define MEMBER_H

#include "head_header.h"

struct BD{
	int year;
	int month;
	int date;
}

class member{
	private:
		string name;
		string image;
		BD birthday;
	public:
		virtual			~member();
		virtual string	get_name() = 0;
		virtual string	get_image() = 0;
		virtual BD		get_birthday() = 0;
		virtual void	set_name(string new_name) = 0;
		virtual void	set_image(string new_image) = 0;
		virtual void	set_birthday(BD new_birthday) = 0;
};


#endif