#include<iostream>
using namespace std;
int linearsearch(int a[],int size, int target){
    int count=0;
    int i=0;
    for(i = 0;i<size;i++){
        if(a[i] == target){
            count++;
        }
    }
    if(count){
        return count;
    }
    return -1;
}
void InputArray(int* arr, int n) {
    cout<<"Enter Elements\n";
    for(int i = 0; i < n; i++) { 
        cin >> arr[i];
    }
}
int main(){
    cout<<"Enter Size: ";
    int size;
    cin>>size;
    int arr[size];
    InputArray(arr,size);
    cout<<"\nEnter Target\n";
    int target;
    cin>>target;
    int count = linearsearch(arr, size, target);
    if(count ==-1){
        cout<<"Not found";
    }else{
        cout<<"Found "<<count;
    }
    return 0;
}