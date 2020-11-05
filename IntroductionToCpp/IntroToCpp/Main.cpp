#include <cstdlib>
#include <iostream>
#include <ctime>
#include "randh.h"




int main()
{
    int inputMax = 0;
    std::cout << "Hello World" << std::endl;
    //rand example
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int random_variable = std::rand();
    std::cout << "Random value on [0 " << RAND_MAX << "]: "
        << random_variable << '\n';

    // roll 6-sided dice 20 times
    for (int n = 0; n != 20; ++n) {
        int x = 7;
        while (x > 6)
            x = 1 + std::rand() / ((RAND_MAX + 1u) / 6);  // Note: 1+rand()%6 is biased
        std::cout << x << ' ';
    }

    //rand one int
    std::cout << "" << std::endl;
    //player input rand max number
    std::cin >> inputMax;
    //Given one integer, return a random number between 0 and that given integer
    for (int i = 0; i < 10; i++)
    {
        std::cout << random(inputMax) << ", ";
    }

    //rand two int
    std::cout << "" << std::endl;
    //player input rand max number
    std::cin >> inputMax;
    //Given one integer, return a random number between 0 and that given integer
    for (int i = 0; i < 10; i++) 
    {
        std::cout << random(5, inputMax) << ", ";
    }
    return 0;
}
