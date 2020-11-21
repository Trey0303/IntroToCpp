#include <iostream>
#include <cstdlib>
#include "binarySearch.h"

int main()
{
    //Define our data
    const int array_size = 25;
    int array_to_be_sorted[array_size] = {
    14,65,63,1,54,
    89,84,9,98,57,
    71,18,21,84,69,
    28,11,83,13,42,
    64,58,78,82,13
    };

    ////Pointers as iterators version
    //std::sort(&array_to_be_sorted[0], &array_to_be_sorted[array_size]);
    ////Pointer arithmetic version
    //std::sort(array_to_be_sorted, array_to_be_sorted + array_size);

    while (true) {
        std::cout << std::endl << std::endl << "Enter a number to find in the sequence: -1 to end" << std::endl;
            int search_key = -1;
        std::cin >> search_key;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (search_key == -1)
        {
            break;
        }
        
        int r = binary_search(array_to_be_sorted, 0, array_size - 1, search_key);
        if (r == -1)
        {
            std::cout << "Couldn't find " << search_key << " in the list" << std::endl;
        }
        else
        {
            std::cout << "Found " << search_key << " at position " << r << std::endl;
        }
            

    }
    print_array(array_to_be_sorted, array_size, 0, array_size - 1, 1);
    return 0;
}