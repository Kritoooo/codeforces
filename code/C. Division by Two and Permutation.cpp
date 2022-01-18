/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 10001
struct MYSTRUCT{
	int i;
	int ans[20];
	int sum;
};
bool cmp(MYSTRUCT a,MYSTRUCT b){
	return a.sum<b.sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		MYSTRUCT a[N];
		int n,flag=0;
		int vis[N]={0};
		cin>>n;
		_for(i,1,n){
			cin>>a[i].i;
			int temp=a[i].i;
			int j;
			for(j=1;temp!=0;temp=temp/2){
				if(temp<=n)
				a[i].ans[j++]=temp;
				
			}
			a[i].sum=j-1;
		}
		sort(a+1,a+1+n,cmp);
		_for(i,1,n){
			for(int j=1;j<=a[i].sum;j++)
			if(!vis[a[i].ans[j]]){
				vis[a[i].ans[j]]=true;
				break;
			}
		}
		_for(i,1,n) if(!vis[i]&&flag++);
		if(flag) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}
