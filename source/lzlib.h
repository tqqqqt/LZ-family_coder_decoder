#ifndef LZLIB_H
#define LZLIB_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

namespace lzlib{
	void codeLZ77(const std::string&, const int&, const int&);
	void codeLZSS(const std::string&, const int&, const int&);
	void codeLZ78(const std::string&);
	void codeLZW(const std::string&);

	void decodeLZ77(const std::string&, const int&);
	void decodeLZSS(const std::string&, const int&);
	void decodeLZ78(const std::string&);
	void decodeLZW(const std::string&);
}

#endif