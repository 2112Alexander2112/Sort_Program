#include "Header.h"
#include "UniversalSort.h"

UniversalSort::UniversalSort(SortManager* sort) : sort(sort)
{
}

UniversalSort::~UniversalSort()
{
}

void UniversalSort::sortProgram(std::vector<int>& arr)
{
	sort->sortProgram(arr);
}
