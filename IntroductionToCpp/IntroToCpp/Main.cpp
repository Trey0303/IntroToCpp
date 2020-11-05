#include <cstdlib>
#include <iostream>
#include <ctime>

int random(int upper) 
{
    return rand();
}

int main()
{
    int input = 0;
    std::cout << "Hello World" << std::endl;

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

    std::cout << "" << std::endl;
    //player input rand max number
    std::cin >> input;
    //Given one integer, return a random number between 0 and that given integer
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int rand_variable = std::rand()% input;// random number between 0 and input
    std::cout << "Random value on [0 " << input << "]: "
        << rand_variable << '\n';

    return 0;
}
