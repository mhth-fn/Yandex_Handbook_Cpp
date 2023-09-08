#include <vector>
#include <iostream>
#include <string>

template <typename T> 
void Print(const T& container, std::string delimiter){
	size_t i = 0;
	size_t size = container.size();
	for (const auto& x : container){
		if (i != size - 1){
			i++;
			std::cout << x << delimiter;
		} else{
			std::cout << x;
		}
	}
}

