#include "Header.h"
#include "BubleSort.h"

void BubleSort::sortProgram(std::vector<int>& arr)
{
	int buff = 0;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr.size() - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				buff = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buff;
			}
		}

	}
}
