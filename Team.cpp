#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin >> a>> b>> c;
        if(a+b+c>=2)
        {
            cout << ans++;
        }
        else{
            cout << ans;
        }
    }
    cout << ans << endl;
}