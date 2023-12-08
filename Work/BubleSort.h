#pragma once
#include "SortManager.h"
class BubleSort :
    virtual public SortManager
{
public:
    virtual void sortProgram(std::vector<int>& arr) override;
};


