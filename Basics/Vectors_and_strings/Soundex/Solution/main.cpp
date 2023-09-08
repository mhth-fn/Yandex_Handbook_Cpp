#include <iostream>
#include <string>

int main(){
	std::string word;
	std::cin >> word;
	
	std::string changed_word;
	changed_word.push_back(word[0]);
	for (size_t i = 1; i != word.size() && changed_word.size() != 4; ++i){
		switch (word[i]){
			case 'b':
			case 'f':
			case 'p':
			case 'v':
				if ('1' != changed_word.back()){
					changed_word.push_back('1');
				}
				break;
			case 'c':
			case 'g':
			case 'j':
			case 'k':
			case 'q':
			case 's':	
			case 'x':
			case 'z':
				if ('2' != changed_word.back()){
					changed_word.push_back('2');
				}
				break;
			case 'd':
			case 't':
				if ('3' != changed_word.back()){
					changed_word.push_back('3');
				}
				break;
			case 'l':
				if ('4' != changed_word.back()){
					changed_word.push_back('4');
				}
				break;
			case 'm':
			case 'n':
				if ('5' != changed_word.back()){
					changed_word.push_back('5');
				}
				break;
			case 'r':
				if ('6' != changed_word.back()){
					changed_word.push_back('6');
				}
				break;
		}
	}

	while (changed_word.size() < 4){
		changed_word.push_back('0');
	}

	std::cout << changed_word << '\n';

	return 0;
}
