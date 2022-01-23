/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 150050
struct pair1{
	int a=0;
	int b=0;
};
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
int n;
int dis(int a,int b){

	return min(a,b)+min(n-a,n-b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[N]={0},ans=-1;
		bool vis[N]={0};
		pair1 b[N];
		cin>>n;
		_for(i,1,n){
			int temp;
			cin>>temp;
			if(b[temp].a!=0){
			b[temp].b=i-b[temp].a;
			if(n-b[temp].b>ans) ans=n-b[temp].b;
		}
			b[temp].a=i;
		}
		cout<<ans<<endl;
	}
	
}
