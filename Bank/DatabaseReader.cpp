#include "DatabaseReader.h"
#include <iostream>
#include <fstream>

inline bool file_exists(const std::string &name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

DatabaseReader::DatabaseReader()
{	
	//Create file if not exists
	if (!file_exists("database.txt")) 
	{
		std::ofstream outfile("database.txt");
		outfile.close();
	}
}

void DatabaseReader::Read()
{
}