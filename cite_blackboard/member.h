#ifndef MEMBER_H
#define MEMBER_H

#include "head_header.h"
using namespace std;
struct BD{
	int year;
	int month;
	int date;
};

enum member_type{
	_faculty,
	_staff,
	_undergraduate,
	_graduate,
};

class member{
	protected:
		string name;
		string image;
		string email;
		BD birthday;
		unsigned int id;
		member_type type;
	public:
		//virtual destructor
		virtual			~member(){}
		//virtual get methods
		virtual string	get_name() = 0;
		virtual string	get_image() = 0;
		virtual string	get_email() = 0;
		virtual BD		get_birthday() = 0;
		virtual unsigned int get_id() = 0;
		virtual member_type get_type() = 0;
		//virtual set methods
		virtual void	set_name(string new_name) = 0;
		virtual void	set_image(string new_image) = 0;
		virtual void	set_email(string new_email) = 0;
		virtual void	set_birthday(BD new_birthday) = 0;
		virtual void	set_id(unsigned int new_id) = 0;
		virtual void	set_type(member_type new_type) = 0;
};

#endif