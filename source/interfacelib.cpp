#include "interfacelib.h"

void ilib::inputMenu(int& _input){
	std::string input="";
	int temp=0;

	while(1){
		std::cout<<" 1 - change code string\n 2 - change buffer size\n 3 - change dictionary size\n 4 - code LZ77\n 5 - code LZSS\n 6 - code LZ78\n 7 - code LZW\n 8 - exit\n--> ";
		std::getline(std::cin,input);
		try{
			temp=std::stoi(input);
		}
		catch(std::exception){
			std::cout<<" incorect input\n \n";
			continue;
		}
		if(temp>=1 && temp<=8) break;
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
		catch(std::exception){
			std::cout<<" incorect input\n \n";
			continue;
		}
		if(size>0) break;
	}

	_size=size;
}