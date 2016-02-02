#include "head_header.h"

graduate::graduate(){}

graduate::graduate(string new_name, string new_image, BD new_birthday) : name(new_name), image(new_image), birthday(new_birthday)
{}

graduate::~graduate(){}

BD graduate::get_birthday(){
	return birthday;
}

string graduate::get_image(){
	return image;
}

string graduate::get_name(){
	return name;
}

void graduate::set_birthday(BD new_birthday){
	birthday = new_birthday;
}

void graduate::set_image(string new_image){
	image = new_image;
}

void graduate::set_name(string new_name){
	name = new_name;
}