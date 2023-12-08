#pragma once
#include "SelectionSort.h"
#include "InsertSort.h"
#include "BubleSort.h"

class UniversalSort : public BubleSort, public InsertSort, public SelectionSort
{
	SortManager* sort;
public:

	UniversalSort(SortManager* sort);
	~UniversalSort();
	void sortProgram(std::vector<int>& arr) override;
};

