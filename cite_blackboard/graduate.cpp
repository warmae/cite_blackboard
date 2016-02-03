#include "head_header.h"

graduate::graduate(){}

graduate::graduate(string new_name, string new_image, string new_email, BD new_birthday, unsigned int new_id, member_type new_type, string new_position)
{
	set_name(new_name);
	set_image(new_image);
	set_email(new_email);
	set_birthday(new_birthday);
	set_id(new_id);
	set_type(new_type);
}

graduate::~graduate(){}

void graduate::initialize()
{
	member::initialize();
}

string graduate::get_position()
{
	return position;
}

void graduate::set_position( string new_position )
{
	position = new_position;
}

