#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

int main(){
	std::vector<std::string> strings;
	
	std::string str;
	while (getline(std::cin, str)){
		strings.push_back(str);
	}

	sort(strings.begin(), strings.end());
	for (int i = static_cast<int>(strings.size() - 1); i != -1; --i){
		std::cout << strings[i] << '\n';
	}

	return 0;
}
