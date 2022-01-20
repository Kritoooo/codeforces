/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 16
int cnt=0;
struct Point{
	double x=0;
	double y=0;
}a[N];
Point tempx=a[0];
bool vis1[N][N];
int n,spot;double ans=66666666,dis[N][N];bool vis[N];

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
void dfs(int k,double temp){
	if(cnt>=25000000){
    printf("%.2lf",ans);
    exit(0);
}
else cnt++;
	if(k>n){
		ans=min(ans,temp);
		return;
	}
	else{
		_for(i,1,n){
			if(temp>ans) break;
			if(!vis[i]){
//				cout<<a[i].x<<" "<<a[i].y<<" "<<i<<" "<<x<<" ";
				Point temp1=tempx;
				int temps=spot;
				if(!vis1[spot][i]){
					dis[spot][i]=sqrt(pow(a[i].x-tempx.x,2)+pow(a[i].y-tempx.y,2));
					vis1[spot][i]=true;
				}
//				cout<<" "<<temp1<<endl;
				vis[i]=true;
				temp+=dis[spot][i];
//				cout<<temp<<endl;
				tempx=a[i];
				spot=i;
				dfs(k+1,temp);
				tempx=temp1;
				spot=temps;
				vis[i]=false;
				temp-=dis[spot][i];
			}
		}
	}
	
}
int main(){
	double res=0;
	scanf("%d",&n);
	_for(i,1,n) {
	scanf("%lf%lf",&a[i].x,&a[i].y);
	res+=sqrt(pow(a[i].x-a[i-1].x,2)+pow(a[i].y-a[i-1].y,2));
	}
	ans=res;
	dfs(1,0);
	printf("%.2f",ans);
}
