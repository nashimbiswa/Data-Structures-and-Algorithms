#include <bits/stdc++.h>
using namespace std;

// Naive Approach
int remDups(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }
    return res;
}

// efficent approach
void removeDuplicates(vector<int> &v)
{
    int res = 1;
    for (int i = 1; i < v.size(); ++i)
    {
        if (v[res - 1] != v[i])
        {
            v[res] = v[i];
            ++res;
        }
    }

    for (int i = 0; i < res; ++i)
    {
        cout << v.at(i) << " ";
    }
}
int main(int argc, char const *argv[])
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    removeDuplicates(v);

    return 0;
}
