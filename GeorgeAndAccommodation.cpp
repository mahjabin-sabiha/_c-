#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,q,n;
    int ans=0;
    int free_space=q-p;
    cin >> n;
    for(int i=1;i<=n;i++)
    {

    cin >> p >> q;
    if(free_space >=2)
    {
        ans++;
    }
    else 
    {
        cout << ans;
    }
    }
}
