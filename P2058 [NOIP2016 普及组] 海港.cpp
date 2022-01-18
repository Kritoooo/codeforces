/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 100010
struct ship{
	int nation,t;
}; 
const int h=86400;
int main(){
	queue<ship> q;
	int n,vis[N]={0},ans=0;
	scanf("%d",&n);
	_for(i,1,n){
		int m,t;
		scanf("%d%d",&t,&m);
		while(!q.empty()){
			ship temp=q.front();
			if(temp.t+h<=t){
				vis[temp.nation]--;
				if(!vis[temp.nation]) ans--;
				q.pop();
			}
			else break;
		}
		_for(j,1,m){
			int temp;
			ship temp1;
			scanf("%d",&temp);
			temp1.nation=temp,temp1.t=t;
			q.push(temp1);
			vis[temp1.nation]++;
			if(vis[temp1.nation]==1) ans++;
		}
		printf("%d\n",ans);
	}
}
