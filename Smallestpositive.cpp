#include<iostream>
#include<algorithm>
using namespace std;
 int main()
{
    int arr[]={3 ,2 ,-6 ,1 ,0};
    int n=5;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int cidx=arr[i]-1;
        while(arr[i]>0 && arr[i]!=arr[cidx]){
            swap(arr[i],arr[cidx]);
            cidx=arr[i]-1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<n+1<<endl;
return 0;
}