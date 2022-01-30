/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 100001
#define mod 1000000007
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
	ll sum,n,q,read(),a[N];
	string s;
	cin>>n>>q;
	cin>>s;
	_for(i,0,n-1){
         scanf("%lld",&a[i]);
		if(i==0) sum=a[i]%mod;
		if(i>=1){
			if(s[i-1]=='*')
			sum=(sum*a[i])%mod;
			else{
				sum=(sum+a[i])%mod;
			}
		}
	}
	_for(i,1,q){
		int x,y;
		scanf("%d%d",&x,&y);
		if(s[x-1]=='*'){
			sum=(sum/a[x])%mod;
			a[x]=y;
			sum=(sum*a[x])%mod;
		}
		else{
			sum=(sum-a[x])%mod;
			a[x]=y;
		}
		printf("%lld\n",sum);
	}
}
