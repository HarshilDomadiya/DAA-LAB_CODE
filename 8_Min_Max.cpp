#include <bits/stdc++.h>
using namespace std;
pair<int, int> find_min_max(int arr[], int start, int end)
{
    if (start == end)
    {
        return {arr[start], arr[end]};
    }
    int mid = (end + start) / 2;
    pair<int, int> left = find_min_max(arr, start, mid);
    pair<int, int> right = find_min_max(arr, mid+1, end);

    return {min(left.first, right.first), max(left.second, right.second)};
}

int main()
{
    cout << "Enter size of array";
    int size;
    cin >> size;

    int array[size];
    for (int ind = 0; ind < size; ind++)
    {
        cout << "Enter array element at index " << ind;
        cin >> array[ind];
    }
    pair<int, int> result = find_min_max(array, 0, size - 1);
    cout << "min: " << result.first << " and max:" << result.second;
    return 0;
}