/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define for(i,a,b) for(int i=a;i<=b;i++)

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,tb,cb,td,cd,x,y;
		cin>>m>>n>>tb>>cb>>td>>cd;
		if(tb<=td) x=td-tb;
		else {
			x=m-tb+m-td;
		}
		if(cb<=cd) y=cd-cb;
		else{
			y=n-cb+n-cd;
		}
		int ans=y<x?y:x;
		cout<<ans<<endl;
	}
}
