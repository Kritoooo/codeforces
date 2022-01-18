/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)

int main(){
	int t;
	cin>>t;
	while(t--){
		int temp,n,b,m,ans;
		vector<int> a;
		cin>>n>>m;
		_for(i,1,n){
			_for(j,1,m){
				a.push_back(max(i-1,n-i)+max(j-1,m-j));
			}
		}
		sort(a.begin(),a.end());
		_for(i,0,n*m-1) cout<<a[i]<<" ";
		cout<<endl;
	}
}
