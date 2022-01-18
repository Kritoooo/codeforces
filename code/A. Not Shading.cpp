/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,r,c,ans=0;
		char a[52][52];
		bool cf=false;
		cin>>n>>m>>r>>c;
		_for(i,1,n)
		_for(j,1,m){
			
			cin>>a[i][j];
			if(a[i][j]=='B') cf=true;
		}
		if(a[r][c]=='B'){
			cout<<0<<endl;
			continue;
		}
		_for(i,1,n){
			if(a[i][c]=='B'){
				ans=1;
				break;
			}
		}
		_for(j,1,m){
			if(a[r][j]=='B'){
				ans=1;
				break;
			}
		}
		if(!cf) cout<<-1<<endl; 
		else if(ans==0) cout<<2<<endl;
		else if(ans==1) cout<<1<<endl;
	}
}
