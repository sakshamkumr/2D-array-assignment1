#include <iostream>
using namespace std;

int main()
{
	int mat[3][4] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 } };

	int m = 3;
	int n = 4;

	int max_sum = 0;
	int max_row = -1;

	
	for (int i = 0; i < m; i++) {
		int row_sum = 0;
		for (int j = 0; j < n; j++) {
			row_sum += mat[i][j];
		}
		if (row_sum > max_sum) {
			max_sum = row_sum;
			max_row = i;
		}
	}

	cout << "Row with maximum sum is: " << max_row << endl;

	return 0;
}
