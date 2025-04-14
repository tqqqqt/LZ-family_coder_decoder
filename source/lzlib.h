#ifndef LZLIB_H
#define LZLIB_H

#include <iostream>
#include <string>
#include <vector>

namespace lzlib{
	void codeLZ77(const std::string&, const int&, const int&);
	void codeLZSS(const std::string&, const int&, const int&);
	void codeLZ78(const std::string&);
	void codeLZW();
}

#endif