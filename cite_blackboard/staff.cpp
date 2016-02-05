#include "head_header.h"

staff::staff(){}


staff::staff( string new_name, string new_image, string new_email, BD new_birthday, unsigned int new_id, member_type new_type, int new_phoneNumber )
{
	set_name(new_name);
	set_image(new_image);
	set_email(new_email);
	set_birthday(new_birthday);
	set_id(new_id);
	set_type(new_type);
	set_phoneNumber(new_phoneNumber);
}

staff::~staff(){}

int staff::get_phoneNumber()
{
	return phoneNumber;
}

void staff::set_phoneNumber( int new_phoneNumber )
{
	phoneNumber = new_phoneNumber;
}

void staff::initialize()
{
	member::initialize();
	set_phoneNumber(0);
}

