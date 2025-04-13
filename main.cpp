#include <iostream>

int main(){
	std::string input="";
	int exit_flag=1, input_quest=0, buffer_size=4, dictionary_size=8;

	do{
		std::cout<<"curent buffer size "<<buffer_size<<", curent dictionary size "<<dictionary_size<<'\n';
		while(1){
			std::cout<<" 1 - change buffer size\n 2 - change dictionary size\n 3 - code LZ77\n 4 - code LZSS\n 5 - code LZ78\n 6 - code LZW\n 7 - exit\n--> ";
			std::cin>>input;
			try{
				input_quest=std::stoi(input);
			}
			catch(std::exception){
				std::cout<<" incorect input.\n \n";
				continue;
			}
			if(input_quest>=1 && input_quest<=7) break;
		}

		switch(input_quest){
		case 1:
			//
			break;
		case 2:
			//
			break;
		case 3:
			//
			break;
		case 4:
			//
			break;
		case 5:
			//
			break;
		case 6:
			//
			break;
		case 7:
			--exit_flag;
			break;
		}

	} while(exit_flag);

	return 0;
}