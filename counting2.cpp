#include<bits/stdc++.h>

using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int ans=a+b;
	int ans=max(ans,2*a-1);
	int ans =max(ans,2*b-1);
	cout << ans;
}
