#include <iostream>
#include <vector>

int main(){
	size_t rows, columns, mines; 
	std::cin >> rows >> columns >> mines;

	std::vector<std::vector<int>> field(rows + 2, std::vector<int>(columns + 2));
	int minelabel = 50;
	size_t i, j;
	for (size_t k = 0; k != mines; ++k){
		std::cin >> i >> j;
		field[i][j] = minelabel;

		for (int row = -1; row < 2; ++row){
			for (int column = -1; column < 2; ++column){
				++field[i + row][j + column];
			}
		}
	}
	for (size_t row = 1; row <= rows; ++row){
		for (size_t column = 1; column <= columns; ++ column){
			if (field[row][column] >= minelabel){
				std::cout << "* "; 
			} else{
				std::cout << field[row][column] << " ";
			}
		}
		std::cout << '\n';
	}

	return 0;
}


