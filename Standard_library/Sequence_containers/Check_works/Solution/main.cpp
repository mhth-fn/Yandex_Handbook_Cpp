#include <iostream>
#include <string>
#include <deque>

int main(){
	size_t N;
	std::cin >> N;

	std::deque<std::string> papers;
	std::string name, command;
	for (size_t i = 0; i != N; ++i){
		std::cin >> name >> command;
		if (command == "top"){
			papers.push_front(name);
		} else {
			papers.push_back(name);
		}
	}

	std::cin >> N;
	int order;
	for (size_t i = 0; i != N; ++i){
		std::cin >> order;
		std::cout << papers[order - 1] << '\n';
	}

	return 0;
}
