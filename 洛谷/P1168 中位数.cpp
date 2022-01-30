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
	int n;
	int temp;
	vector<int> v;
	n=read();
	_for(i,1,n){
		temp=read();
		v.insert(upper_bound(v.begin(),v.end(),temp),temp);
		if(i%2==1){
			printf("%d\n",v[i/2]);
		}
	}
	
} 
