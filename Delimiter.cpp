#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    while(true)
    {
        int value;
        cin >> value;
        arr.push_back(value);
        if(value==0)
        {
            break;
        }
    }
    int n=arr.size();
    for(int i=n-1;i>=0;i--)
    {
        cout << arr[i]<< endl;
    }
}