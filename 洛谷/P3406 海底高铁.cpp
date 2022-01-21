/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 100010
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
	int n,m,a[N],num[N]={0};
	ll ans=0;
	m=read();n=read();
	_for(i,1,n){
		scanf("%d",&a[i]);
		if(i==1) continue;
		if(a[i-1]<a[i]){
			num[a[i-1]]++;
		num[a[i]]--; 
		}
		else {
			num[a[i]]++;
			num[a[i-1]]--;
		}
	}
	_for(i,1,m-1){
		
		num[i]+=num[i-1];
//		cout<<num[i]<<endl;
	}
	_for(i,1,m-1){
		ll b,c,d;
		scanf("%lld%lld%lld",&b,&c,&d);
		ans+=(ll)min(c*num[i]+d,b*num[i]);
	}
	if(m<=1){
		cout<<0<<endl;
		return 0;
	}
	cout<<ans; 
}
