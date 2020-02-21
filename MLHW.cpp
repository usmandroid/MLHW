// MLHW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <numeric>
#include <iostream>
#include <vector>
#include <functional>
#include <cstdlib>
#include <math.h>

using namespace std;

// borrowed from https://en.cppreference.com/w/cpp/algorithm/inner_product
template<class InputIt1, class InputIt2, class T>
constexpr // since C++20
T inner_product(InputIt1 first1, InputIt1 last1,
	InputIt2 first2, T init)
{
	while (first1 != last1) {
		init = std::move(init) + *first1 * *first2; // std::move since C++20
		++first1;
		++first2;
	}
	return init;
}

 double** prod mat_product(double** a, int ra, int ca, int** b, int rb, int cb) {
	
	 if (ca != rb) 
		 throw invalid_size("dimensions incompatible, make sure that for Matrix Multiplication, A*B\
			 \n number of Rows of A must equal number of Colums of B  .");

	for (int i = 0; i < ra; i++)
	{
		for (int j = 0; j < c; j++)
		{
			for (int k = 0; k < c; k++)
			{
				mul[i][j] = 0;
				mul[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return prod

}


int main()
{
	std::vector<double> a{ 1,1,0 };
	std::vector<double> b{ -1,2,5 };
	std::vector<std::vector<double>> M{ 
						{1,2,3},
						{4,5,6},
						{7,8,9},
						{10,11,12} };
	int r1 = std::inner_product(a.begin(), a.end(), b.begin(), 0);
	std::cout << "Inner product of a and b: " << r1 << '\n';
	int mat1[][2] = { { 2, 4 }, { 3, 4 } };
	int mat2[][2] = { { 1, 2 }, { 1, 3 } };
	int m1 = 2, m2 = 2, n1 = 2, n2 = 2;
	multiply(m1, m2, mat1, n1, n2, mat2);




    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
