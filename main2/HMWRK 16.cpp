#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	setlocale(LC_ALL, "Russian");

	int n{}, m{}, copy;
	
	// ������ �1.
	srand(time(NULL));

	const int size{ 10 };
	int arr[size]{}, sum{}, counter{};
	std::cout << "������ 1.\n������:\n[";
	for(int i{}; i < size; i++){
		arr[i] = rand() % 100;
		std::cout << arr[i] << ", ";
		sum += arr[i];
	}

	for (int i{}; i < size; i++)
		if (arr[i] < ((double)sum / size))
			counter++;

	std::cout << "\b\b]" << std::endl;
	std::cout << "������� �������������� = " << (double)sum / size << "\n";
	std::cout << "����� ������� ��� ������� �������������� = " << counter << "\n\n";

	// ������ �2.

	const int size1{ 5 };
	int arr1[size][size]{};
	int arr2[size][size]{};
	
	for(int i{}; i < size1; i++)
		for (int j{}; j < size1; j++) {
			arr1[i][j] = rand() % 10;
			arr2[i][j] = rand() % 10;
		}
	
	std::cout << "������ 2.\n������ 1:\n";
	for (int i{}; i < size1; i++){
		std::cout << "[ ";
		for (int j{}; j < size1; j++){
			std::cout << arr1[i][j] << " ";
		}
		std::cout << "]\n";
	}
	
	std::cout << "\n������ 2:\n";
	for (int i{}; i < size1; i++) {
		std::cout << "[ ";
		for (int j{}; j < size1; j++) {
			std::cout << arr2[i][j] << " ";
		}
		std::cout << "]\n";
	}

	std::cout << "\n����� ��������� ��������:\n";
	for (int i{}; i < size1; i++) {
		std::cout << "[ ";
		for (int j{}; j < size1; j++) {
			std::cout << arr1[i][j] + arr2[i][j] << " ";
		}
		std::cout << "]\n";
	}
	
	// ������ �3. 

	int arr3[6];
	std::cout << "\n������ 3.\n������� ������������ ����� -> ";
	std::cin >> n;
	copy = n;
	do {
		m++;
		copy /= 10;

	} while (copy);

	if (m == 6) {
		for (int i{1}; i <= m; i++){
			arr3[m - i] = n % 10 ;
			n /= 10;
			//std::cout << arr3[i] << ", ";
		}
		std::cout << "[";
		for (int i{}; i < 6; i++)
			std::cout << arr3[i] << ", ";
		std::cout << "\b\b]\n";

	}
	else
		std::cout << "������ �����.";



	
	return 0;
}