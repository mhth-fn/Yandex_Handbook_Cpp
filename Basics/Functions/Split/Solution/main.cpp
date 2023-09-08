#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> Split(const std::string& str, char delimiter){
	std::vector<std::string> words;
	std::string buf = ""; 

	for (const auto& ch : str){
		if (ch == delimiter){
			words.push_back(buf);
			buf.erase();
		} else{
			buf+=ch;
		}
	}
	words.push_back(buf);

	return words;
}
