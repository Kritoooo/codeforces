/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 38
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
	int map[N][N]={0};
	Point s;
	bool vis1=0;
	int n;
	n=read();
	_for(i,1,n)
	_for(j,1,n){
		int temp;
		temp=read();
		if(temp) map[i][j]=1;
	}
	_for(i,1,n)
	_for(j,1,n){
		if(map[i][j]==1){
			s.x=i+1;
			s.y=j+1;
			goto re;
		}
	}
	re:queue<Point> q;
	bool vis[N][N]={0};
//	cout<<s.x<<" "<<s.y<<endl;
	map[s.x][s.y]=2;
	q.push(s);
	while(!q.empty()){
		Point now=q.front();q.pop();
//		cout<<now.x<<" "<<now.y<<endl;
		Point now1[5];
		now1[1].x=now.x;now1[1].y=now.y+1;
		now1[2].x=now.x;now1[2].y=now.y-1;
		now1[3].x=now.x-1;now1[3].y=now.y;
		now1[4].x=now.x+1;now1[4].y=now.y;
		_for(i,1,4){
			if(!map[now1[i].x][now1[i].y]&&now1[i].x>=1&&now1[i].x<=n&&now1[i].y>=1&&now1[i].y<=n){
				map[now1[i].x][now1[i].y]=2;
				q.push(now1[i]);
			}
		}
	}
	_for(i,1,n)
	_for(j,1,n){
		printf("%d ",map[i][j]);
		if(j==n)printf("\n");
	}
}
