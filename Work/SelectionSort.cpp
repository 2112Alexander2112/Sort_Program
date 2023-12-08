#include "Header.h"
#include "SelectionSort.h"

void SelectionSort::sortProgram(std::vector<int>& arr)
{
    for (int i = 0; i < arr.size() - 1; i++) {
        _min = arr[i];
        _pos = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < _min) {
                _min = arr[j];
                _pos = j;
            }
        }
        buff = arr[i];
        arr[i] = arr[_pos];
        arr[_pos] = buff;
    }

}

SelectionSort::SelectionSort()
    : buff(0), _min(0), _pos(0)
{
}

SelectionSort::SelectionSort(int buff, int _min, int _pos)
    : buff(0), _min(_min), _pos(_pos)
{
}

