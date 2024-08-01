#include<bits/stdc++.h>
using namespace std;

int main()
{
double a;
cin >> a;
int ca=a;
int cb=ca+1;
double dis1=a-ca;
double dis2=cb-a;
if(dis1<dis2){
    cout << ca;

    }
    else
    {
        cout << cb << endl;
    }
}

