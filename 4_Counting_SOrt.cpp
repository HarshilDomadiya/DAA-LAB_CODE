#include <bits/stdc++.h>
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
void countingSort(int arr[], int n) {
    int maxVal = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > maxVal) maxVal = arr[i];
    vector<int> count(maxVal + 1, 0);
    for(int i = 0; i < n; i++)
        count[arr[i]]++;
    int index = 0;
    for(int i = 0; i <= maxVal; i++) {
        while(count[i]-- > 0)
            arr[index++] = i;
    }
}
int main() {
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    InputArray(arr,n);
    countingSort(arr, n);
    printArray(arr, n);
    return 0;
}