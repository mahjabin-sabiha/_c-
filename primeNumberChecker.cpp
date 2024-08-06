#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int flag;
    if(n==0 || n==1)
    {
        flag=1;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << " NOT PRIME";
    }
    else{
        cout << "PRIME";
    }
    return 0;
}