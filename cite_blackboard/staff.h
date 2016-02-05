#ifndef STAFF_H
#define STAFF_H
#include "head_header.h"

class staff : public member {
private:
	int phoneNumber;
public:
	staff();
	staff(string new_name, string new_image, string new_email, BD new_birthday, unsigned int new_id, member_type new_type, int new_phoneNumber);
	~staff();
	int		get_phoneNumber();
	void	set_phoneNumber(int new_phoneNumber);
	void	initialize();
};
#endif