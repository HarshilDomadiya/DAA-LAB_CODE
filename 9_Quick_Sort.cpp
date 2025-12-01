#include <iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int pindex = low;
    for(int i = low;i<high;i++){
        if(arr[i]<pivot){
            swap(arr[i],arr[pindex]);
            pindex++;
        }
    }
    swap(arr[high],arr[pindex]);
    return pindex; 
}



void Quick_sort(int arr[],int low, int high){
    if(low<high){
        int pi=partition(arr,low,high);
        Quick_sort(arr,low,pi-1);
        Quick_sort(arr,pi+1,high);
    }
}


void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter size of array";
    int size;
    cin >> size;

    int array[size];
    for (int ind = 0; ind < size; ind++)
    {
        cout << "Enter array element at index " << ind<<": ";
        cin >> array[ind];
    }
    cout << "Before" << endl;
    printArray(array, size);
    Quick_sort(array, 0, size - 1);
    cout << "After" << endl;
    printArray(array, size);
    return 0;
}