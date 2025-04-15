#ifndef INTERFACELIB_H
#define INTERFACELIB_H

#include <iostream>
#include <string>
#include <fstream>

namespace ilib{
	void inputMenu(int&);
	void changeString(std::string&);
	void changeSize(const std::string&, int&);
	void inputFile(std::string&);
}

#endif