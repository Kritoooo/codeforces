/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
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

int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r,k,num;
		cin>>l>>r>>k;
		if(l==r&&l!=1){
			cout<<"Yes"<<endl;
			continue;
		}
		if(l%2==1&&r%2==1) num=(r-l)/2;
		else num=(r-l)/2+1;
		if(r-l+1-num<=k) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
} 

