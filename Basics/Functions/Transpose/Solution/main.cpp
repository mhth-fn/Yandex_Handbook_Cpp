#include <iostream>
#include <vector>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix){
	size_t rows = matrix.size(),
				 columns = matrix[0]. size();

	std::vector<std::vector<int>> t_matrix(columns, std::vector<int>(rows));
	for (size_t j = 0; j != rows; ++j){
		for (size_t i = 0; i != columns; ++i){
			t_matrix[i][j] = matrix [j][i];
		}
	}

	return t_matrix;
}
