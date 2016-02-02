#include "head_header.h"

member_list::member_list(){}

member_list::~member_list(){}

void member_list::read_file(){
	//initialize lists
	
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
/*
void member_list::parse_file(string line, int mode){
	
	int num_of_info = 0;
	string temp = "";
	for(int i = 0; i<line.size(); i++){
		if (line[i] == ' ' || i == line.size()-1){
			if(mode == 0){ //faculty
				switch(num_of_info){
				case 0 : faculty_list
					temp = "";
					num_of_info++;
					break;
				case 1 : person->modify_id(temp);
					temp = "";
					num_of_info++;
					break;
				case 2 : person->modify_department(temp);
					temp = "";
					num_of_info++;
					break;
				case 3 : person->modify_position(temp);
					temp = "";
					num_of_info++;
					break;
				case 4 : temp.push_back(line[i]);
					person->modify_mail(temp);
					temp = "";
					num_of_info++;
					break;
				}
			}
		}
		else temp.push_back(line[i]);
	}
	num++;
}
*/