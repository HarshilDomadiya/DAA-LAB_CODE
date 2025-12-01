#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5,4,3,2,1};
    int min, i, j, size = 5, temp,count=0;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            count++;
        }
        if (i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout<<endl<<count;
    return 0;
}