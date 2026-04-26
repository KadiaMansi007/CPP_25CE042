#include "SuperDigit.h"

// Recursive function
int SuperDigit::recursiveDigitSum(long long n)
{
    if (n < 10)
        return n;

    long long sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return recursiveDigitSum(sum);
}

// Main logic
int SuperDigit::calculateSuperDigit(string n, int k)
{
    long long initialSum = 0;

    // Sum digits of string
    for (int i = 0; i < n.length(); i++)
    {
        initialSum += (n[i] - '0');
    }

    // Multiply by k (instead of concatenation)
    initialSum *= k;

    // Recursive reduction
    return recursiveDigitSum(initialSum);
}
