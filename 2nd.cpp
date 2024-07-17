//2)write a program to find the  max element from the list

#include<iostream>
using namespace std;

int main()
{
    const int SIZE = 5;

    int arr[SIZE] = {10 , 20 , 30 , 40 , 50};

    int maxElement = arr[0];

    for(int i=0 ; i<SIZE ; i++)
    {
        if(arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    cout<<"The max element in the array is : "<<maxElement<<endl;
}
