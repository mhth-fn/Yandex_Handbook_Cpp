#include <vector>
#include <string>
#include <iostream>


std::string Join(const std::vector<std::string>& tokens, char delimiter){
	if (tokens.empty()){
		return "";
	}

	std::string str;
	for (const auto& word : tokens){
		str+=word+delimiter;
	}
	str.pop_back();

	return str;
}

