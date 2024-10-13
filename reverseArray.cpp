#include<iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    for(int i = 0, j = size-1 ; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }  
}

int main() 
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int size = 7;
    cout<<"Before Reverse"<<endl;
    printArray(arr, size);
    reverseArray(arr, size);
    cout<<"After Reverse"<<endl;
    printArray(arr, size);

    
}