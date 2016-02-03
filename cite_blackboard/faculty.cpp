#include "head_header.h"

faculty::faculty(){}

faculty::faculty(string new_name, string new_image, string new_email, BD new_birthday, unsigned int new_id, member_type new_type, string new_web)
{
	set_name(new_name);
	set_image(new_image);
	set_email(new_email);
	set_birthday(new_birthday);
	set_id(new_id);
	set_type(new_type);
	set_web(new_web);
}

faculty::~faculty(){}

//methods of extra information
string faculty::get_web(){
	return web;
}

void faculty::set_web(string new_web){
	web = new_web;
}

void faculty::initialize()
{
	member::initialize();
	set_web("");
}
