//1)Write a program to display the array element.


#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;

    int arr[SIZE] = {10, 20, 30, 40, 50};

    cout << "Array elements are: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

