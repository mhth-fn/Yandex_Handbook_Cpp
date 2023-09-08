#include <iostream>
#include <string>

int main(){
	std::string str;
	getline(std::cin, str);

	std::string changed_str;
	for (auto& x : str){
		if (x != ' '){
			changed_str.push_back(x);
		}
	}

	size_t k = changed_str.size() - 1;
	for (size_t i = 0; i != changed_str.size(); ++i){
		if (changed_str[i] == changed_str[k - i]){
			continue;;
		} else {
			std::cout << "NO\n";
			return 0;
		}
	}
	std::cout << "YES\n";

	return 0;
}
