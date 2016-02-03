#ifndef MEMBER_H
#define MEMBER_H

#include "head_header.h"
using namespace std;
struct BD{
	int month;
	int date;
};

enum member_type{
	_faculty,
	_staff,
	_undergraduate,
	_graduate,
	_default,
};

class member{
	protected:
		string name;
		string image;
		string email;
		BD birthday;
		unsigned int id;
		member_type type;
	public:
		//virtual destructor
		virtual			~member(){}
		//virtual methods
		virtual void initialize()
		{
			BD temp;
			temp.date = 0;
			temp.month = 0;

			set_name("");
			set_image("");
			set_email("");
			set_birthday(temp);
			set_id(0);
			set_type(_default);		
		}
		//get methods
		string	get_name(){return name;}
		string	get_image(){return image;}
		string	get_email(){return email;}
		BD		get_birthday(){return birthday;}
		unsigned int get_id(){return id;}
		member_type get_type(){return type;}
		//set methods
		void	set_name(string new_name){name = new_name;}
		void	set_image(string new_image){image = new_image;}
		void	set_email(string new_email){email = new_email;}
		void	set_birthday(BD new_birthday){birthday = new_birthday;}
		void	set_id(unsigned int new_id){id = new_id;}
		void	set_type(member_type new_type){type = new_type;}
};

#endif