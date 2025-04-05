#include<bits/stdc++.h>
using namespace std;
int getSL(vector<int> &v)
{
    int l=0,sL=-1;
    for(int i=1;i<v.size();++i)
    {
        if(v[i]>v[l])
        {
            sL=l;
            l=i;
        }
        else if(v[sL]!=v[i])
        {
            if(sL==-1 || v[i]>v[sL])
                sL=i;
        }
    }
    return sL;
    
}
int main(int argc, char const *argv[])
{
    vector<int>v;
    int n;
    cout<<"Enter the size of the vector:\n";
    cin>>n;
    for (int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Second Largest element is "<<v[getSL(v)];
    return 0;
}
