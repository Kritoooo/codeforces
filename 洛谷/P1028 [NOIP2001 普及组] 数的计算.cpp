/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll ans;
int s[1000];
bool vis[1000];
ll solve(int a){
	if(vis[a]) return s[a];
	if(a==1){
		return 1;
	}
	ll b=1;
	for(int i=1;i<=a/2;i++){
		s[i]=solve(i);
		b+=s[i];
		vis[i]=true;
	}
	return b;
}
int main(){
	cin>>n;
	ans=solve(n);
	cout<<ans;
}

