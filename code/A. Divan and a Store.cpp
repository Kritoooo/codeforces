/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 101
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,l,r,k=0,ans=0,a[N];
		cin>>n>>l>>r>>k;
		int j=1;
		for(int i=1;i<=n;i++){
			int temp;
			cin>>temp;
			if(temp>=l&&temp<=r){
				a[j]=temp;
				j++;
			}
		}
		sort(a+1,a+j);
		for(int i=1;i<j;i++){
			k-=a[i];
			if(k>=0)
			ans++;
		}
		cout<<ans<<endl;
	}
}
