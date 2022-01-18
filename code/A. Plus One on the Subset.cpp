/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define for(i,a,b) for(int i=a;i<=b;i++)

int main(){
	int t;
	cin>>t;
	while(t--){
		ll max1=0,min1=LM;
		int n;
		cin>>n;
		for(i,1,n){
			ll temp;
			cin>>temp;
			if(temp>max1) max1=temp;
			if(temp<min1) min1=temp;
		}
		cout<<max1-min1<<endl;
	}
}
