#include <iostream>
#include <stdlib.h>

using namespace std;

int sumarrfunc(int* first, int* last) {
    int sum = 0;
    for (int* ptr = first; ptr != last; ptr++) {
        sum = sum + *ptr;
    }
    return sum;
}

int sumfunc(int a, int b) {
    return a + b;
}

int diffunc(int a, int b) {
    return a - b;
}

int(*operation(char temp))(int a, int b) {
    if (temp == '+') {
        return *sumfunc;
    }
    else {
        if (temp == '-') {
            return *diffunc;
        }
    }
}

int main()
{
    int arr[5];
    *(arr) = 5;
    *(arr + 1) = 7;
    *(arr + 2) = 8;
    *(arr + 3) = 11;
    *(arr + 4) = 23;
    int* first = begin(arr);
    int* last = end(arr);
    cout << sumarrfunc(first, last) << endl;
    int a = 5;
    int b = 4;
    cout << "Sum: " << operation('+')(a, b) << endl;
    cout << "Diff: " << operation('-')(a, b) << endl;
    int (*functionPtr)(int, int);
    int sum = 0;
    functionPtr = &sumfunc;
    cout << "Sum: " << (*functionPtr)(a, b) << endl;
    int (*functionPtr2)(int, int);
    functionPtr2 = &diffunc;
    cout << "Sum: " << (*functionPtr2)(a, b) << endl;
    float* ptrD = new float;
    cout << ptrD << endl;
    delete ptrD;

}