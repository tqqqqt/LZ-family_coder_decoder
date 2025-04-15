#include <iostream>

#include "source/interfacelib.h"
#include "source/lzlib.h"

int main(){
	std::string code_string="", file_decode="";
	int exit_flag=1, input=0, buffer_size=4, dictionary_size=8;

	do{
		std::cout<<"\ncurrent string - ["<<code_string<<"]\n";
		std::cout<<"current buffer size "<<buffer_size<<", current dictionary size "<<dictionary_size<<'\n';
		ilib::inputMenu(input);

		try{
			switch(input){
			case 1:
				ilib::changeString(code_string);
				break;
			case 2:
				ilib::changeSize("buffer",buffer_size);
				break;
			case 3:
				ilib::changeSize("dictionary",dictionary_size);
				break;
			case 4:
				lzlib::codeLZ77(code_string,dictionary_size,buffer_size);
				break;
			case 5:
				lzlib::codeLZSS(code_string,dictionary_size,buffer_size);
				break;
			case 6:
				lzlib::codeLZ78(code_string);
				break;
			case 7:
				lzlib::codeLZW(code_string);
				break;
			case 8:
				ilib::inputFile(file_decode);
				lzlib::decodeLZ77(file_decode,dictionary_size);
				break;
			case 9:
				ilib::inputFile(file_decode);
				lzlib::decodeLZSS(file_decode,dictionary_size);
				break;
			case 10:
				ilib::inputFile(file_decode);
				lzlib::decodeLZ78(file_decode);
				break;
			case 11:
				ilib::inputFile(file_decode);
				izlib::decodeLZW(file_decode);
				break;
			case 12:
				--exit_flag;
				break;
			}
		}
		catch(const char* exp){
			std::cout<<exp<<'\n';
		}

	} while(exit_flag);

	return 0;
}