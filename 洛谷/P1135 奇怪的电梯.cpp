/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define N 100010
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)

inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}

int main(){
	int n,a,b,depth[N]={0},ans=IM,num[N];
	bool vis[N]={0};
	cin>>n>>a>>b;
	_for(i,1,n) cin>>num[i];
	queue<int> q;
	q.push(a);
	while(!q.empty()){
		int now=q.front();q.pop();
//		cout<<now<<" ";
		int now1[3];
		if(now==b){
			ans=min(depth[now],ans);
		}
		now1[1]=now-num[now];
		now1[2]=now+num[now];
		_for(i,1,2){
			if(!vis[now1[i]]&&now1[i]>=1&&now1[i]<=n){
				vis[now1[i]]=true;
				depth[now1[i]]=depth[now]+1;
				q.push(now1[i]);
			}
		}
	}
	if(ans==IM) cout<<-1;
	else cout<<ans;
	
} 

