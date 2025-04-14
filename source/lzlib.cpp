#include "lzlib.h"

void lzlib::codeLZ77(const std::string& _str, const int& dict_size, const int& buffer_size){
	size_t len=_str.length();

	if(len==0) throw "incorect string";
	if(dict_size==0) throw "incorect dictionary size";
	if(buffer_size==0) throw "incorect buffer size";

	std::string dict="";
	int buffer_l=0, index=0, count_symb=0;
	size_t temp=0;

	std::cout<<"Dictionary | Buffer | Code\n";
	while(buffer_l<static_cast<int>(len)){
		count_symb=0;
		index=0;

		// try find combination
		for(int i=1;i<=buffer_size;++i){
			if((buffer_l+i)>=static_cast<int>(len)) break;

			temp=dict.rfind(_str.substr(buffer_l,i));
			if(temp!=std::string::npos){
				index=temp;
				++count_symb;
				continue;
			}
			break;
		}

		// output table info
		std::cout<<dict<<'|'<<_str.substr(buffer_l,buffer_size)<<'|';
		std::cout<<"<"<<index<<','<<count_symb<<",'";
		if(count_symb==0) std::cout<<_str[buffer_l]<<"'>\n";
		else if((buffer_l+count_symb)<static_cast<int>(len)) std::cout<<_str[buffer_l+count_symb]<<"'>\n";
		else std::cout<<"eos'>\n";
		
		// added coded combination
		if((count_symb+1)<static_cast<int>(len)) count_symb+=1;
		dict+=_str.substr(buffer_l,count_symb);
		buffer_l+=count_symb;

		// cut dictionary if need
		if(dict.length()>static_cast<size_t>(dict_size)) dict=dict.substr(dict.length()-dict_size,dict_size);
	}
	std::cout<<dict<<"| |\n";
}

void lzlib::codeLZSS(){
	std::cout<<"LZSS";
}

void lzlib::codeLZ78(){
	std::cout<<"LZ78";
}

void lzlib::codeLZW(){
	std::cout<<"LZW";
}