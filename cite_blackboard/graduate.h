#ifndef GRADUATE_H
#define GRADUATE_H
#include "head_header.h"

class graduate : public member{
private:
	string position;
public:
	graduate();
	graduate(string new_name, string new_image, string new_email, BD new_birthday, unsigned int new_id, member_type new_type, string new_position);
	~graduate();

	string get_position();
	void set_position(string new_position);
	void initialize();
};
#endif