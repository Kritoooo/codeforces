/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define N 100001
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[N],ans=0,m=0;
		bool vis[N]={0},flag=1;
		cin>>n;
		for(int i=1;i<=n;i++){
			int temp;
			scanf("%d",&temp);
			if(temp<=n&&temp>=1&&!vis[temp]){
				vis[temp]=true;
				continue;
			}
			m++;
			a[m]=temp;
		}
		sort(a+1,a+1+m);
		int j=1;
		for(int i=1;i<=n;i++){
			if(vis[i]) continue;
			if(a[j]<=2*i){
				flag=0;
				break;
			}
			if(a[j]>i){
				ans++;
				j++;
			}
		}
		if(flag&&j-1==m) cout<<ans<<endl;
		else cout<<-1<<endl;
	}
} 

