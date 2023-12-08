#include "Header.h"
#include "UniversalSort.h"
#include "Menu.h"



int main()
{
    std::string appName = "Program";
    std::vector<std::string> menuItem = {
        "Bubble Sorting",
        "Sort by insertion",
        "Sort by Selection",
        "Finish Program"

    };

    std::vector<int> arr{ 5,8,3,9,2,8, 1, 4,1,7,2,7,12,87 };
    auto menu = std::make_unique<Menu>(appName, menuItem);
    bool stop = false;

    for (int i = 0; i < arr.size(); i++) {
        std::cout << "  " << arr[i];
    }
    std::cout << std::endl;

    do {
        menu->display();
        switch (menu->choiceProgram()) {
        case 1:
        {
            UniversalSort sorter(new BubleSort());
            sorter.sortProgram(arr);
        }
        break;
        case 2:
        {
            UniversalSort sorter(new InsertSort());
            sorter.sortProgram(arr);
        }
        break;
        case 3:
        {
            UniversalSort sorter(new SelectionSort());
            sorter.sortProgram(arr);
        }
        break;
        case 4:
        {
            stop = true;
        }
        break;
        }
        if (stop == true) {
            break;
        }

        for (int i = 0; i < arr.size(); i++) {
            std::cout << "  " << arr[i];
        }
    } while (menu->allowProgram());
}


