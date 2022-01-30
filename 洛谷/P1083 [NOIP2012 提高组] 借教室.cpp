/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 1000005
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
int n,m,d[N]={0},s[N]={0},t[N]={0},temp[N]={0},ans=-1;
ll a[N]={0},sum=0;
bool flag=true;
int main(){
    ios::sync_with_stdio(false); 
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	_for(i,1,n) cin>>d[i];

	_for(i,1,m){
		cin>>temp[i]>>s[i]>>t[i];
		a[s[i]]+=temp[i];
		a[t[i]+1]-=temp[i];
	}
	int j=m;
	_for(i,1,n){
		sum+=a[i];
		if(sum>d[i]){
			while(sum>d[i]){
				a[s[j]]-=temp[i];
				a[t[j]+1]+=temp[i];
				if(i>=s[j]&&i<=t[j]) sum-=temp[j];
				j--;
			}
			if(flag) ans=j,flag=0;
		else ans=min(ans,j);
		}
		
	} 
	if(ans==-1){
		cout<<"0"<<endl;
	}
	else cout<<"-1"<<endl<<ans+1;
} 
