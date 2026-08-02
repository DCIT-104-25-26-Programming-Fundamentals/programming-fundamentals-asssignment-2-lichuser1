// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 5
// =============================================================================
//
// TASK: Fibonacci Sequence Generator
//
// The Fibonacci sequence is a series of numbers where each number is the sum
// of the two numbers before it:
//
//   0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
//
// Write a C++ program with TWO parts, each implemented as a function.
//
// -----------------------------------------------------------------------------
// PART A — Print the First N Terms
// -----------------------------------------------------------------------------
// - Ask the user how many terms (N) to display.
// - Print the first N numbers of the Fibonacci sequence on one line.
//
// Example:
//   How many terms? 7
//   Fibonacci sequence: 0 1 1 2 3 5 8
//
// -----------------------------------------------------------------------------
// PART B — Check if a Number Belongs to the Sequence
// -----------------------------------------------------------------------------
// - Ask the user to enter a number.
// - Determine whether that number is a Fibonacci number.
// - Print an appropriate message.
//
// Example:
//   Enter a number to check: 13
//   13 is a Fibonacci number.
//
//   Enter a number to check: 20
//   20 is NOT a Fibonacci number.
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use a loop (not recursion) to generate the sequence in both parts.
// - N must be a positive integer. If it is not, print an error message.
// - Each part must be implemented in its own function (see scaffold below).
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
#include <iostream>
using namespace std;

void displayFibonacci(int terms)
{
    int fibArr[100];
    fibArr[0] = 0;
    fibArr[1] = 1;

    for (int idx = 2; idx < terms; idx++)
    {
        fibArr[idx] = fibArr[idx - 1] + fibArr[idx - 2];
    }

    cout << "Fibonacci sequence: ";
    for (int idx = 0; idx < terms; idx++)
    {
        cout << fibArr[idx] << " ";
    }
    cout << endl;
}

bool checkFibonacci(int val)
{
    int x = 0;
    int y = 1;

    while (x <= val)
    {
        if (x == val)
        {
            return true;
        }
        int nextVal = x + y;
        x = y;
        y = nextVal;
    }

    return false;
}

int main()
{
    // Part A: Print the First N Terms
    int termCount;
    cout << "How many terms? ";
    cin >> termCount;

    if (termCount <= 0)
    {
        cout << "Error: Number of terms must be a positive integer." << endl;
    }
    else
    {
        displayFibonacci(termCount);
    }

    // Part B: Check if a Number Belongs to the Sequence
    int inputNum;
    cout << "Enter a number to check: ";
    cin >> inputNum;

    bool isFibResult = checkFibonacci(inputNum);
    if (isFibResult)
    {
        cout << inputNum << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << inputNum << " is NOT a Fibonacci number." << endl;
    }

    return 0;
}
// =============================================================================


