/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define N 100010
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

struct mystruct{
	long double c;
	long double s;
}a[N];
int n,p;

bool check(long double x){
	long double temp=0;
	_for(i,1,n){
		if(a[i].c*x<=a[i].s) continue;
		else temp+=a[i].c*x-a[i].s;
	}
//	cout<<temp<<endl;
	return temp<=p*x;
}
int main(){
	long double l=N,r=0,sum=0;
	scanf("%d%d",&n,&p);
	_for(i,1,n){
		a[i].c=read();
		a[i].s=read();
		r+=a[i].s;
		sum+=a[i].c;
		l=min(l,a[i].s/a[i].c); 
	}
	if(sum<=p){
		cout<<-1;
		return 0;
	}
	while(r-l>1e-6){
		long double mid=(r+l)/2.0;
//		cout<<l<<" "<<r<<" "<<endl;
		if(check(mid)) l=mid;
		else r=mid;
	}
	cout<<l;
}

