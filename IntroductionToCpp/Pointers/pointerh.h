#pragma once

// Prints the contents of an array of floats to the terminal
void printFloats(float* arr, size_t size);

// Returns the sum of an integer array
int arraySum(int* arr, size_t size);

// Initializes all of the values of a boolean array to the given default value
void initBools(bool* arr, size_t size, bool defaultValue);

// Returns a pointer to a dynamic integer array with the given number of zeros
//  - size defines the length of the array
int* zeroArray(size_t size);