#include "head_header.h"

undergraduate::undergraduate(){}

undergraduate::undergraduate(string new_name, string new_image, BD new_birthday) : name(new_name), image(new_image), birthday(new_birthday)
{}

undergraduate::~undergraduate(){}

BD undergraduate::get_birthday(){
	return birthday;
}

string undergraduate::get_image(){
	return image;
}

string undergraduate::get_name(){
	return name;
}

void undergraduate::set_birthday(BD new_birthday){
	birthday = new_birthday;
}

void undergraduate::set_image(string new_image){
	image = new_image;
}

void undergraduate::set_name(string new_name){
	name = new_name;
}