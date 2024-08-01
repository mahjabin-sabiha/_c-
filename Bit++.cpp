#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x=0;
    for(int i=1;i<=n;i++)
    {
        string cmd;
        cin >> cmd;
        if(cmd=="++x"||cmd=="x++")
        {
            x++;
        }
        else{
            x--;
        }
    }
    cout << x << endl;
}