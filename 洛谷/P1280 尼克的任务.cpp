/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 10010
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
	int f[N];
	vector<int> v[N];
	int n,k;
	n=read();k=read();
	_for(i,1,k){
		int j,m;
		j=read();m=read();
		v[j].push_back(m);
	}
	for(int i=n;i>=1;i--){
		if(v[i].size())for(int j=0;j<v[i].size();j++){
			f[i]=max(f[i],f[i+v[i][j]]);
		}
		else f[i]=f[i+1]+1;
	}
	printf("%d",f[1]);
}
