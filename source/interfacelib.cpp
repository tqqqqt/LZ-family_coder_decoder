#include "interfacelib.h"

void ilib::inputMenu(int& _input){
	std::string input="";
	int temp=0;

	while(1){
		std::cout<<" 1 - change code string\n 2 - change buffer size\n 3 - change dictionary size\n";
		std::cout<<" 4 - encode LZ77\n 5 - encode LZSS\n 6 - encode LZ78\n 7 - encode LZW\n";
		std::cout<<" 8 - decode LZ77\n 9 - decode LZSS\n 10 - decode LZ78\n 11 - decode LZW\n 12 - exit\n--> ";
		std::getline(std::cin,input);
		try{
			temp=std::stoi(input);
		}
		catch(std::invalid_argument &exp){
			std::cout<<" incorrect input\n \n";
			continue;
		}
		if(temp>=1 && temp<=12) break;
	}

	_input=temp;
}

void ilib::changeString(std::string& _string){
	std::string temp="";

	while(1){
		std::cout<<" new string --> ";
		std::getline(std::cin,temp);

		if(temp.length()!=0) break;
	}

	_string=temp;
}

void ilib::changeSize(const std::string& _name, int& _size){
	std::string input="";
	int size=0;

	while(1){
		std::cout<<" new "<<_name<<" size --> ";
		std::getline(std::cin,input);
		try{
			size=std::stoi(input);
		}
		catch(std::invalid_argument &exp){
			std::cout<<" incorrect input\n \n";
			continue;
		}
		if(size>0) break;
	}

	_size=size;
}

void ilib::inputFile(std::string& _file){
	std::string input="";
	while(1){
		std::cout<<"file name or path --> ";
		std::getline(std::cin,input);

		std::ifstream file(input);
		if(file.is_open()==false) continue;
		file.close();
		break;
	}

	_file=input;
}