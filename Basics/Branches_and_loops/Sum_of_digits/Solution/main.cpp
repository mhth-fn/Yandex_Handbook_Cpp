#include <iostream>

int main(){
	int number;
	std::cin >> number;

	int sum = 0;
	for (unsigned long int i = 1000000000; i >= 1; i /= 10){
		sum += (number / (i)) % 10;
	}
	std::cout << sum << "\n";

	return 0;
}
