#include <iostream>

#include "source/interfacelib.h"
#include "source/lzlib.h"

int main(){
	std::string code_string="";
	int exit_flag=1, input=0, buffer_size=4, dictionary_size=8;

	do{
		std::cout<<"\ncurent string - ["<<code_string<<"]\n";
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