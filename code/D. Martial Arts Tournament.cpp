/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 200010
int n;
int s[N];
int cmp(int x,int y){
//	cout<<x<<y<<endl;
	int temp1=1,temp2=1,temp3=1;
	while(temp1<x) temp1*=2;
	while(temp2<y-x) temp2*=2;
	while(temp3<n-y) temp3*=2;
	return temp1-x+temp2-y+x+temp3-n+y;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[N]={0},ans=IM;
		scanf("%d",&n);
		_for(i,1,n){
			int x;
			scanf("%d",&x);
			a[x]++;
	}
	    _for(i,1,n){
	    	s[i]=s[i-1]+a[i];
		}
		_for(i,1,n+1){
			int tempx=s[i-1];
			for(int j=0;(1<<j)<=n-tempx;j++){
				if(j==1){
					int tempy= upper_bound(s+1,s+1+n,tempx+j)-s;
				tempy=s[tempy-1];
				ans=min(ans,cmp(tempx,tempy));
				tempy=lower_bound(s+1,s+1+n,n-j)-s+1;
				tempy=s[tempy-1];
				ans=min(ans,cmp(tempx,tempy));
				}
				int tempy= upper_bound(s+1,s+1+n,tempx+(1<<j))-s;
				tempy=s[tempy-1];
				ans=min(ans,cmp(tempx,tempy));
				tempy=lower_bound(s+1,s+1+n,n-(1<<j))-s+1;
				tempy=s[tempy-1];
				ans=min(ans,cmp(tempx,tempy));
			}
		}
		printf("%d\n",ans);
	}
} 

