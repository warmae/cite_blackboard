#ifndef FACULTY_H
#define FACULTY_H
#include "head_header.h"

class faculty : public member{
	private:
		//extra information
		string web;
	public:
		faculty();
		faculty(string new_name, string new_image, BD new_birthday);
		~faculty();
		string	get_name();
		string	get_image();
		BD		get_birthday();
		void	set_name(string new_name);
		void	set_image(string new_image);
		void	set_birthday(BD new_birthday);
		//methods of extra information
		string	get_web();
		void	set_web(string new_web);
};

#endif