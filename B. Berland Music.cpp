/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 200010
struct sc{
	int y;
	int a;
};
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
		int n,a[N],b[N],l=0,c[N],d[N],len1=0,len2=0,f[N];
		cin>>n;
		_for(i,1,n){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1,b+1+n);
		string s;
		cin>>s;
		_for(i,1,n){
			if(s[i-1]=='0') {
				d[++len1]=a[i];
				l++;
			}
			else {
				f[++len2]=a[i];
			}
		}
		sort(d+1,d+1+len1);
		sort(f+1,f+1+len2);
		int cnt=1;
		_for(i,1,len1){
			c[d[i]]=cnt++; 
		}
		_for(i,1,len2){
			c[f[i]]=cnt++;
		}
		_for(i,1,n){
			cout<<c[a[i]]<<" ";
			
		}
		cout<<endl;
	}
}

