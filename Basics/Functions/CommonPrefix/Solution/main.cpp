#include <iostream>
#include <vector>
#include <string>
#include <limits>  

std::string CommonPrefix(const std::vector<std::string>& words){
	if (words.empty()) {
		return {};
	}

	size_t minlenght = words[0].size();
	for (const auto& x : words){
		if (x.size() < minlenght){
			minlenght = x.size();
		}
	}
	std::string res;

	for (size_t i = 0; i != minlenght; ++i){
		res.push_back(words[0][i]);
		for (size_t j = 1; j != words.size(); ++j){
			if (res[i] != words[j][i]){
				res.pop_back();
				return res;
			}
		}
	}

	return res;
}
