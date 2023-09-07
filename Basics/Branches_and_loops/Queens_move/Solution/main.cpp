#include <iostream>
#include <cmath>

int main() {
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;

	if (x1 == x2 || y1 == y2 || std::abs(x1 - x2) == std::abs(y1 - y2)) {
		std::cout << "YES" << std::endl;
	} else {
		std::cout << "NO" << std::endl;
  }

	return 0;
}
