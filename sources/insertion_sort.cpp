#include "insertion_sort.h"

void print_array(int array[], int size)
{
	for (int j = 0; j < size; j++)
	{
		std::cout << array[j] << " ";
	}
}


int main() {
	int array[] = { 4, 6, 3, 7, 5, 9, 2, 8, 1, 10 };
	const int size = sizeof(array) / sizeof(array[0]);
	insertion_sort(array, size);
	print_array(array, size);
	system("pause");
	return 0;
}

