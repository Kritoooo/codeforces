/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 100001
struct node{
	int left,right;
};

int main(){
	int n;
	bool vis[N]={0};
	cin>>n;
	node a[N];
	a[1].left=0;
	a[1].right=N;
	_for(i,2,n){
		int k,p;
		cin>>k>>p;
		if(p){
			a[i].left=k;
			a[a[k].right].left=i;
			a[i].right=a[k].right;
			a[k].right=i;
		}
		else {
			a[i].right=k;
			a[i].left=a[k].left;
			a[a[k].left].right=i;
			a[k].left=i;
		}
	}
	int m;
	cin>>m;
	_for(i,1,m){
		int x;
		cin>>x;
		if(!vis[x])
		vis[x]=true;
	}
	int temp=1;
	for(;temp<=n;temp++) if(!a[temp].left) break;
	while(temp!=N){
		if(!vis[temp]){
			cout<<temp<<" ";
		}
		temp=a[temp].right;
	}
}
