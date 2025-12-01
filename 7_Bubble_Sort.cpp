#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
void InputArray(int* arr, int n) {
    cout<<"Enter Elements\n";
    for(int i = 0; i < n; i++) { 
        cin >> arr[i];
    }
}
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break; 
    }
}
int main() {
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    InputArray(arr,n);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
