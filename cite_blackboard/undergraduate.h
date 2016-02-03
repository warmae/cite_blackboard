#ifndef GRADUATE_H
#define GRADUATE_H
#include "head_header.h"

class undergraduate : public member{
public:
	undergraduate();
	undergraduate(string new_name, string new_image, string new_email, BD new_birthday, unsigned int new_id, member_type new_type);
	~undergraduate();
	//virtual methods
	void initialize();
};
#endif