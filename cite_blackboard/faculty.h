#ifndef FACULTY_H
#define FACULTY_H
#include "head_header.h"

class faculty : public member{
	private:
		//extra information
		string web;
	public:
		faculty();
		faculty(string new_name, string new_image, string new_email, BD new_birthday, unsigned int new_id, member_type new_type, string new_web);
		~faculty();
		string	get_web();
		void	set_web(string new_web);
		void	initialize();
};

#endif