#include<iostream>
#include<vector>
using namespace std;
void Reverse(vector<int> &arr){
    int s=0;
    int e=arr.size()-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s=s+1;
        e=e-1;
    }
}
 int main()
{
   vector<int> arr;
   int n;
   cout<<"Enter the size of array ->"<<endl;
   cin>>n;
   int a;
   cout<<"Enter the element of array ->"<<endl;
   for(int i=0;i<n;i++){
    cin>>a;
    arr.push_back(a);
   }
   cout<<endl;
   Reverse(arr);
   cout<<"element in the array ->"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr.at(i)<<" ";
   }
return 0;
}