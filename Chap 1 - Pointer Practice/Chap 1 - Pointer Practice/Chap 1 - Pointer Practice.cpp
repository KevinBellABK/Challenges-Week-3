#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Please enter numbers for A and B.\nA: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    cout << "A = " << *ptrA << "\nB = " << *ptrB << endl;
    ptrA = nullptr;
    ptrB = nullptr;
}

