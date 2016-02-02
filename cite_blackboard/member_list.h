#ifndef MEMBER_LIST_H
#define MEMBER_LIST_H
#include "head_header.h"

class member;
class member_list {
	private:
		member * list;
	public:
		member*	get_memberlist();
		void	set_memberlist(member* new_memberlist);
};
#endif