/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,a[101];
		bool vis[101]={0};
		ll ans=0;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		for(int i=n;i>=n-k+1;i--){
			int j=i-k;
			vis[i]=true;
			vis[j]=true;
			ans+=a[j]/a[i];
				}
			for(int i=1;i<=n;i++){
				if(!vis[i]) ans+=a[i];
			}
		cout<<ans<<endl;
	}
}
