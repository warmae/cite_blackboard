#include "head_header.h"

faculty::faculty(){}

faculty::faculty(string new_name, string new_image, BD new_birthday) : name(new_name), image(new_image), birthday(new_birthday)
{}

faculty::~faculty(){}

BD faculty::get_birthday(){
	return birthday;
}

string faculty::get_image(){
	return image;
}

string faculty::get_name(){
	return name;
}

void faculty::set_birthday(BD new_birthday){
	birthday = new_birthday;
}

void faculty::set_image(string new_image){
	image = new_image;
}

void faculty::set_name(string new_name){
	name = new_name;
}

//methods of extra information
string faculty::get_web(){
	return web;
}

void faculty::set_web(string new_web){
	web = new_web;
}