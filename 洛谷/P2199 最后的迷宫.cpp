/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 5001
struct Point{
	int x;
	int y;
};
	int n,m;
	bool vis[N][N]={0};
int lx[8]={-1,-1,-1,0,0,1,1,1};
int ly[8]={0,1,-1,-1,1,-1,0,1};
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
int judge(int x,int y,int ex,int ey){
	if(x==ex&&y==ey)return 1;
	for(int i=0;i<=7;i++){
		int x0=x+lx[i],y0=y+ly[i];
		while(x0>0&&x0<=n&&y0>0&&y0<=m&&vis[x0][y0]==0){
			if(x0==ex&&y0==ey)return 1;
			x0=x0+lx[i];
			y0=y0+ly[i];
		}
	}
	return 0;
}
int main(){
	

	scanf("%d%d",&n,&m);
	_for(i,1,n)
	_for(j,1,m){
		char temp;
		cin>>temp;
		if(temp=='X') {
		vis[i][j]=true;
		} 
	}
	int sx,sy,ex,ey;
	cin>>ex>>ey>>sx>>sy;
	while(sx!=0||sy!=0||ex!=0||ey!=0){
		bool vis1[N][N]={0};
		int ans=IM,depth[N][N]={0};
		Point s;
		s.x=sx;s.y=sy;
		queue<Point> q;q.push(s);
		while(!q.empty()){
			Point now=q.front();q.pop();
//			cout<<now.x<<" "<<now.y<<endl;
			Point now1[5];
			if(judge(now.x,now.y,ex,ey)){
//				cout<<ans<<endl;
				ans=min(ans,depth[now.x][now.y]);
				break;
			}
			now1[1].x=now.x;now1[1].y=now.y-1;
			now1[2].x=now.x-1;now1[2].y=now.y;
			now1[3].x=now.x;now1[3].y=now.y+1;
			now1[4].x=now.x+1;now1[4].y=now.y;
			_for(i,1,4){
				if(!vis[now1[i].x][now1[i].y]&&now1[i].x>=1&&now1[i].x<=n&&now1[i].y>=1&&now1[i].y<=m&&!vis1[now1[i].x][now1[i].y]){
					vis1[now1[i].x][now1[i].y]=true;
					depth[now1[i].x][now1[i].y]=depth[now.x][now.y]+1;
					q.push(now1[i]);
				}
			}
		}
		if(ans==IM) printf("Poor Harry\n");
		else printf("%d\n",ans);
		cin>>ex>>ey>>sx>>sy; 
	}
} 

