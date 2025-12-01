#include<iostream>
using namespace std;

//insertion sort
int main(){
    int arr[100];
    int n;
    cout<<"enter size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=1;j<n;j++){
        int key = arr[j];
        int i=j-1;
        while(i>-1 && arr[i]>key){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}


