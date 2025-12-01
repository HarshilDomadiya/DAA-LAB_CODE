#include<iostream>
using namespace std;

bool binarysearch(int array[], int target, int size) {
    if (size <= 0) 
        return false;

    int mid = size / 2;

    if (target == array[mid]) {
        return true;
    } else if (target < array[mid]) {
        return binarysearch(array, target, mid);
    } else {
        return binarysearch(array + mid + 1, target, size - mid - 1);
    }
}


int main() {
    cout << "Enter size of array";
    int size;
    cin >> size;

    int array[size];
    for (int ind = 0; ind < size; ind++) {
        cout << "Enter array element at index " << ind << "  ";
        cin >> array[ind];
    }

    int target;
    cout << endl << "Enter Target: ";
    cin >> target;


    bool find = binarysearch(array, target, size);

    if (find) {
        cout << "element found";
    } else {
        cout << "element not found";
    }

    return 0;
}
 