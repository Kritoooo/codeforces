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
	t=read();
	while(t--){
		ll n;
		cin>>n;
		int temp=log2(n);
		double temp1=log2(n);
		int temp2=log2(n/3);
		double temp3=log2(n/3);
		 if(temp==temp1||(temp2==temp3&&n%3==0)){
		 	cout<<0<<endl;
		 }
		 else cout<<1<<endl;
	}
	
}
