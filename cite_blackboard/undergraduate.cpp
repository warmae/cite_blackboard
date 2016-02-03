#include "head_header.h"

//constructor & destructor
undergraduate::undergraduate(){}

undergraduate::undergraduate(string new_name, string new_image, string new_email, BD new_birthday, unsigned int new_id, member_type new_type)
{
	set_name(new_name);
	set_image(new_image);
	set_email(new_email);
	set_birthday(new_birthday);
	set_id(new_id);
	set_type(new_type);
}

undergraduate::~undergraduate(){}

//virtual methods
void undergraduate::initialize(){
	BD temp;
	temp.year = 0;
	temp.date = 0;
	temp.month = 0;

	set_name("");
	set_image("");
	set_email("");
	set_birthday(temp);
	set_id(0);
	set_type(_default);
}