#include "head_header.h"

member_list::member_list(){}

member_list::~member_list(){}

int member_list::get_num(){
	return num;
}

void member_list::set_num(int new_num){
	num = new_num;
}

void member_list::read_file(){
	//initialize lists
	num = 0;
	while(!_list.empty()){
		_list.pop_back();
	}
	/*
	while(!gr_list.empty()){
	gr_list.pop_back();
	}
	while(!staff_list.empty()){
	staff_list.pop_back();
	}
	while(!faculty_list.empty()){
	faculty_list.pop_back();
	}
	*/

	//read file
	const string filename = "data.txt";
	string line;
	int mode = -1;

	ifstream myfile(filename.c_str());
	if (myfile.is_open()){ 
		while ( getline (myfile,line) ){
			if(line.find("-교원") != string::npos)
				mode = _faculty;
			else if(line.find("-직원") != string::npos)
				mode = _staff;
			else if(line.find("-학부생") != string::npos)
				mode = _undergraduate;
			else if(line.find("-대학원생") != string::npos)
				mode = _graduate;
			else if(line.size() == 0) continue;

			else if(mode != -1)
				if(line.size() > 0){
					//parse_file(line, mode);
					}
		}
		myfile.close();
		//사람수 체크 ->디버깅용
		/*
		cout << faculty_list.get_num() +
			staff_list.get_num() +
			student_list.get_num()
			<< "명의 정보를 로드하였습니다." << endl << endl;
		*/
	}
	else cout << "존재하지 않는 파일 이름입니다." << endl;

}


void member_list::parse_file(string line, int mode){
	
	int num_of_info = 0;
	string temp = "";
	member * new_member;

	//variables for 'string to int'
	//stringstream s1;
	int i1;

	//allocate new member according to mode
	switch(mode){
		case _undergraduate:	new_member = new undergraduate;
								_list.push_back(new_member);
								break;
		/*
		case _graduate:			new_member = new graduate;
								_list.push_back(new_member);
								break;
		case _staff:			new_member = new staff;
								_list.push_back(new_member);
								break;
		case _faculty:			new_member = new faculty;
								_list.push_back(new_member);
								break;
		*/
	}

	//'it'(iterator) directs 'num'th element in '_list'
	std::list<member*>::iterator it = _list.begin();
	std::advance(it, num);

	//parse data & insert data
	for(int i = 0; i<line.size(); i++){
		if (line[i] == ' ' || i == line.size()-1){
			switch(num_of_info){
			case 0 : 
				i1 = atoi(temp.c_str());
				(*it)->set_id(i1);
				temp = "";
				num_of_info++;
				break;
			case 1 : (*it)->set_name(temp);
				temp = "";
				num_of_info++;
				break;
			case 2 : (*it)->set_image(temp);
				temp = "";
				num_of_info++;
				break;
			case 3 : (*it)->set_birthday(parse_birthday(temp));
				temp = "";
				num_of_info++;
				break;
			case 4 : temp.push_back(line[i]);
				(*it)->set_email(temp);
				temp = "";
				num_of_info++;
				break;
			}
			
		}
		else temp.push_back(line[i]);
	}
	num++;
}


BD member_list::parse_birthday(string birthday){
	BD temp;
	int convert;

	//month comes first
	for(int i = 0; i < 2; i++){
		string _temp;
		_temp.push_back(birthday[i]);
		convert = atoi(_temp.c_str());
	}
	temp.month = convert;

	//date comes first
	for(int i = 2; i < 4; i++){
		string _temp;
		_temp.push_back(birthday[i]);
		convert = atoi(_temp.c_str());
	}
	temp.date = convert;
	
	return temp;
}