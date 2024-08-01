#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,k;
    int value;
    cin >> n>>k;
    for(int i=1;i<=n;i++)
    {
        cin >> value;
        if(value%k==0)
        {
            cout<< value/k << " ";
        }

        
    }
    cout << endl;
    
    return 0;
}