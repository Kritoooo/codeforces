/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define N 1001
struct pair1{
	int l;
	int r;
	int len;
	int d=0;
};
bool cmp(pair1 a,pair1 b){
	return a.len<b.len;
}

int main(){
	int t;
	bool vis1[N]={0};
	cin>>t;
	while(t--){
		int n,ans[N];
		cin>>n;
		pair1 a[N];
		for(int i=1;i<=n;i++){
			cin>>a[i].l>>a[i].r;
			a[i].len=a[i].r-a[i].l;
		}
		sort(a+1,a+1+n,cmp);
		for(int i=1;i<=n;i++){
			if(a[i].l==a[i].r){
				a[i].d=a[i].l;
				vis1[a[i].d]=true;
			}
			else {
				for(int j=a[i].l;j<=a[i].r;j++){
					if(!vis1[j]){
						a[i].d=j;
						vis1[j]=true;
					}
				}
			}
		}
		for(int i=1;i<=n;i++) cout<<a[i].l<<" "<<a[i].r<<" "<<a[i].d<<endl;
	}
}
