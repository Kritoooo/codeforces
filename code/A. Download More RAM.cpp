/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 200
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
struct pair1{
	int a;
	int b;
};
bool cmp(pair1 a,pair1 b){
	return a.a<b.a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		pair1 a[N];
		int n,k;
		cin>>n>>k;
		_for(i,1,n) cin>>a[i].a;
		_for(i,1,n) cin>>a[i].b;
		sort(a+1,a+1+n,cmp);
		_for(i,1,n){
			if(a[i].a<=k){
				k+=a[i].b;
			}
			else {
				break;
			}
		}
		cout<<k<<endl;
	}
	
}

