#pragma once
#include "SortManager.h"
class InsertSort :
    virtual public SortManager
{
    virtual void sortProgram(std::vector<int>& arr) override;
};

