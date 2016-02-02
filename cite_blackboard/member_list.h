#ifndef MEMBER_LIST_H
#define MEMBER_LIST_H
#include "head_header.h"

class member;
class undergraduate;
class graduate;
class staff;
class faculty;

class member_list {
	private:
		std::list <undergraduate>	ug_list;
		//std::list <graduate>		gr_list;
		//std::list <staff>			staff_list;
		//std::list <faculty>			faculty_list;
	public:
		member_list();
		~member_list();
		void read_file();
		void parse_file(string line, int mode);
};
#endif