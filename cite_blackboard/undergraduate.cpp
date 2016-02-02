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

//get methods
BD undergraduate::get_birthday(){
	return birthday;
}

string undergraduate::get_image(){
	return image;
}

string undergraduate::get_name(){
	return name;
}

string undergraduate::get_email(){
	return email;
}

unsigned int undergraduate::get_id(){
	return id;
}

member_type undergraduate::get_type(){
	return type;
}

//set methods
void undergraduate::set_birthday(BD new_birthday){
	birthday = new_birthday;
}

void undergraduate::set_image(string new_image){
	image = new_image;
}

void undergraduate::set_name(string new_name){
	name = new_name;
}

void undergraduate::set_email(string new_email){
	email = new_email;
}

void undergraduate::set_id(unsigned int new_id){
	id = new_id;
}

void undergraduate::set_type(member_type new_type){
	type = new_type;
}