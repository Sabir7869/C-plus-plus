#include<iostream>
using namespace std;
int findunique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int arr[10];
    cout<<"Enter the element of array:"<<endl; //2 3 1 6 3 6 2
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int unique = findunique(arr,size);
    cout<<"The unique element is : "<<unique<<endl;  //output = 1;
    return 0;
}