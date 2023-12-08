#pragma once
#include "SortManager.h"

class SelectionSort
	: virtual public SortManager
{
protected:
	int buff;
	int _min;
	int _pos;
public:
	SelectionSort();
	SelectionSort(int buff, int _min, int _pos);
	virtual void sortProgram(std::vector<int>& arr) override;
};

