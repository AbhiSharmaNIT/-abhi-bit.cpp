/*Ques:- Write a program to count the number of ones
  in binaray representation on a number ?*/

#include <iostream>
using namespace std;

int onesfind(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    cout << onesfind(19);
}

// Check if a number has bits in an alternate pattern
//  function to check if all the bits
//  are set or not in the binary
//  representation of 'n'
static bool allBitsAreSet(int n)
{
    // if true, then all bits are set
    if (((n + 1) & n) == 0)
        return true;

    // else all bits are not set
    return false;
}

// Function to check if a number
// has bits in alternate pattern
bool bitsAreInAltOrder(unsigned int n)
{
    unsigned int num = n ^ (n >> 1);

    // To check if all bits are set in 'num'
    return allBitsAreSet(num);
}
