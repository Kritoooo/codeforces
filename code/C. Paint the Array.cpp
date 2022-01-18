/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll a[51],b[51],sa[100],sb[100];
		int ma=0,mb=0;
		bool flag=false;
		ll mina=LLONG_MAX,minb=LLONG_MAX;
		for(int i=1;i<=n;i++){
			if(i%2==1){
				ma++;
				cin>>a[ma];
				if(a[ma]<mina) mina=a[ma];
			}
			else{
				mb++;
				cin>>b[mb];
				if(b[mb]<minb) minb=b[ma];
			}
			if(a[ma]==b[mb]){
				cout<<0<<endl;
				flag=true;
				break;
			}
	}
		bool f=true,g=true;
		for(int i=1;i<=mb;i++){
			if(a[i]%mina!=0||b[i]%mina==0){
				f=false;
			}
			if(a[i]%minb==0||b[i]%minb!=0){
				g=false;
			}
			if(!f&&!g){
				break;
			}
		}
		if(a[ma]%mina!=0){
			f=false;
		}
		if(a[ma]%minb==0){
			g=false;
		}
		if(f){
			cout<<mina<<endl;
			continue;
		}
		if(g){
			cout<<minb<<endl;
			continue;
		}
		cout<<0<<endl;
	}
}
