#include <iostream>
#include <vector>
#include <algorithm>

struct Point{
	int x;
	int y;
};

int main(){
	size_t N;
	std::cin >> N;

	Point p;
	std::vector<Point> points_field;
	for (size_t i = 0; i != N; ++i){
		std::cin >> p.x >> p.y;
		points_field.push_back(p);
	}

	sort(points_field.begin(), points_field.end(), [](Point lhs, Point rhs){
			return (lhs.x * lhs.x + lhs.y * lhs.y) < (rhs.x * rhs.x + rhs.y * rhs.y);
			});

	for (const auto& x : points_field){
		std::cout << x.x << " " << x.y << '\n';
	}

	return 0;
}
