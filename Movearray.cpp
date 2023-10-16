#include<iostream>
#include<vector>
using namespace std;
 int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of array ->"<<endl;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int Non_zero=0;
    for(int j=0;j<v.size();j++){
        if(v[j]!=0){
            swap(v[j],v[Non_zero]);
            Non_zero++;
        }
    }
    cout<<endl;
    cout<<"Move array will be ->"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    
return 0;
}