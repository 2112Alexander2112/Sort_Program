#include "Header.h"
#include "InsertSort.h"

void InsertSort::sortProgram(std::vector<int>& arr)
{
	int key = 0;
	int j = 0;
	for (int i = 0; i < arr.size(); i++) {
		key = arr[i];
		j = i - 1;
		while ((j >= 0) && (arr[j] > key)) {
				arr[j + 1] = arr[j];
				j--;
		}
		arr[j + 1] = key;
	}
}
