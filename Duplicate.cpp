#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
 int main()
{
    vector<int> v={1,3,2,3,4,5};
    int n=v.size();
    int arr[100]={0};
    for(int i=0;i<v.size();i++){
        int idx=v[i];
        arr[idx]++;
    }
    int ans=-1;
    for(int i=0;i<100;i++){
        if(arr[i]>1){
            ans=i;
        }
    }
    cout<<ans<<endl;

return 0;
}