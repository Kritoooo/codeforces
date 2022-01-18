/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 50000
struct my{
	int day;
	int n;
}a[N];

bool cmp(my a,my b){
	return a.n<b.n;
}
int main(){
	int n,ans=0;
	cin>>n;
	_for(i,1,n){
		cin>>a[i].n;
		a[i].day=i;
	}
	sort(a+1,a+1+n,cmp);
	_for(i,1,n){
		if(a[i].day==1){
			 ans+=a[i].n;
			 continue;
		}
		int temp=IM;
		_for(j,i+1,n){
			if(a[j].day<a[i].day){
				 temp=a[j].n-a[i].n;
				 break;
			}
		}
		for(int k=i-1;k>=1;k--){
			if(a[k].day<a[i].day){
				 temp=min(temp,a[i].n-a[k].n);
				 break;
			}
		}
		ans+=temp;
//		cout<<ans<<endl;
	}
	cout<<ans;
}
