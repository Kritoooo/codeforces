/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 500
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

struct Point{
	int x;
	int y;
};

int main(){
	Point s;
	int m,n;
	
	int ans,depth[N][N]={0};
	bool vis[N][N]={0};
		cin>>n>>m>>s.x>>s.y;
		vis[s.x][s.y]=1;
	queue<Point> q;
	q.push(s);
	while(!q.empty()){
		Point now=q.front();q.pop();
//		cout<<now.x<<" "<<now.y<<endl;
  		Point now1[9];
  		now1[1].x=now.x+1;now1[1].y=now.y+2;
  		now1[2].x=now.x+2;now1[2].y=now.y+1;
  		now1[3].x=now.x-1;now1[3].y=now.y+2;
  		now1[4].x=now.x-2;now1[4].y=now.y+1;
  		now1[5].x=now.x+1;now1[5].y=now.y-2;
  		now1[6].x=now.x-2;now1[6].y=now.y-1;
  		now1[7].x=now.x-1;now1[7].y=now.y-2;
  		now1[8].x=now.x+2;now1[8].y=now.y-1;
		_for(i,1,8){
			if(now1[i].x<=n&&now1[i].x>=1&&now1[i].y>=1&&now1[i].y<=m&&!vis[now1[i].x][now1[i].y]){
				vis[now1[i].x][now1[i].y]=1;
				depth[now1[i].x][now1[i].y]=depth[now.x][now.y]+1; 
				q.push(now1[i]);
			}
		}

		   
	}
	_for(i,1,n){
	_for(j,1,m)
	if(!vis[i][j]) printf("%-5d",-1);
	else printf("%-5d",depth[i][j]);
	cout<<endl;
}
}

