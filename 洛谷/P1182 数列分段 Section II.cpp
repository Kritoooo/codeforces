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
ll n,m,a[N],ans;
bool check(int x){
	int temp=0,cnt=0;
//	cout<<x<<" ";
	_for(i,1,n){
		temp+=a[i];
		if(temp>x){
			temp=a[i];
		
			cnt++;
		}
		if(temp==x){
			temp=0;
			cnt++;
		}
	}
	if(temp!=0) cnt++;
//	cout<<cnt<<endl;
	if(cnt==m) ans=x; 
	return cnt>m;
}
int main(){

	ll l=0,r=0;
	scanf("%d%d",&n,&m);
	_for(i,1,n){
		a[i]=read();
		l=l>a[i]?l:a[i];
		r+=a[i];
	}
	while(l<r){
		ll mid=(l+r)/2;
		if(check(mid)) l=mid+1;
		else r=mid;
	}
	printf("%d",l);
} 
