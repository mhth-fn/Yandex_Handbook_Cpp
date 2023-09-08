#include <iostream>
#include <vector>

int main(){
	size_t N;
	std::cin >> N;

	std::vector<int> a(N);
	int place;
	for (size_t i = 0; i != N; i++){
		std::cin >> place;
		a[place - 1] = static_cast<int>(i) + 1;
	}

	for (auto& x : a){
		std::cout << x << " ";
	}
	std::cout << '\n';

	return 0;
}
