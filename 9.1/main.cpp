#include "VectorOps.h"

int main()
{
    VectorOps obj;

    cout << "===== Reverse Vector Using STL + Iterators =====\n";

    obj.inputData();

    // Original array
    cout << "\nOriginal Vector: ";
    obj.showVector();

    // ---------------- STL Reverse ----------------
    obj.reverseUsingSTL();
    cout << "\nAfter std::reverse(): ";
    obj.showVector();

    // Reverse again to original using iterators
    obj.reverseUsingSTL(); // bring back original first

    obj.reverseUsingIterators();
    cout << "\nAfter Iterator Reversal: ";
    obj.showVector();

    return 0;
}
