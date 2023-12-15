#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for(int i=0; i < len1 ; i++){
        first[i] = arr[k++];
    }
    k = mid+1;
    for(int i=0 ; i<len2;i++){
        second[i] = arr[k++];
    }

    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k]=first[index1];
            index1++;
            k++;
        }
        else{
            arr[k]=second[index2];
            index2++;
            k++;
        }
    }
    while(index1 < len1){
        arr[k] = first[index1];
        index1++;
        k++;
    }
    while(index2 < len2){
        arr[k] = second[index2];
        index2++;
        k++;
    }
}

void mergesort(int arr[],int s,int e){
    //Base Case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,0,mid);
    mergesort(arr,mid+1,e);
    //merge
    merge(arr,0,e);

}
 int main()
{
    int arr[]={99,33,35,14,25,65,75,95,97,55};
    int n=sizeof(arr)/sizeof(arr[0]);

    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}