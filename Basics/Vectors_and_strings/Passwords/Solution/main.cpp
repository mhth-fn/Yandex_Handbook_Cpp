#include <iostream>
#include <string>
#include <cctype>

int main(){
	std::string password;
	std::cin >> password;

	if (password.size() > 6 && password.size() < 14){
		int bchar = false
		, lchar = false
		, numbers = false
		, other = false;
		for (auto c : password){
			if (c > 32 && c < 127){
				if (islower(c)){
					lchar = 1;
				} else if (isupper(c)){
					bchar = 1; 
				} else if (isdigit(c)){
					numbers = 1;
				} else {
					other = 1;
				}
			} else {
				std::cout << "NO\n";
				return 0;
			}
		}
		if ((lchar + bchar + numbers + other) >= 3){
			std::cout << "YES\n";
			return 0;
		} 
	}
	std::cout << "NO\n";

	return 0;
}
