#include<bits/stdc++.h>
using namespace std;
int partision(int arr[],int s,int e){
    int pivot = arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
    }
    
}
return pivotIndex;
}
void quickSort(int arr[] , int s , int e){
    //Base case (stop condition)
    if(s>=e){
        return ;
    }
    int p=partision(arr,s,e);
    //left part
    quickSort(arr,s,p-1);//This call solve the left part using recusion
    //right part

    quickSort(arr,p+1,e);//This call solve the right part using recusion

}
 int main()
{
    int arr[]={100,90,80,70,60,50,40,30,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
return 0;
}