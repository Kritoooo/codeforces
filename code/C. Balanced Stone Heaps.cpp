/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 200001
int a[N],n;
bool check(int x){
	int b[N];
	_for(i,0,n-1) b[i]=a[i+1];
	for(int i=n-1;i>=2;i--){
		if(b[i]<x) return false;
		int d=min(a[i+1],b[i]-x)/3;
		b[i-1]+=d;
		b[i-2]+=2*d;
	}
	return b[1]>=x&&b[0]>=x;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		_for(i,1,n) cin>>a[i];
		int l=0,r=*max_element(a+1,a+n+1);
		while(l<r){
			int mid=l+(r-l+1)/2;
			if(check(mid)) l=mid;
			else r=mid-1;
		}
		cout<<l<<endl;
	}
	return 0;
} 
