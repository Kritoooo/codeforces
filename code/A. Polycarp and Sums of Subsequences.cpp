/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct word{
	char l;
	char r;
};
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		word w[102];
		for(int i=1;i<=n-2;i++){
			cin>>w[i].l;
			cin>>w[i].r;
		}
		bool falg=true;
		for(int i=1;i<=n-2;i++){
			if(i==n-2) {
			cout<<w[i].l<<w[i].r;
			continue;
		}
			if(w[i].r==w[i+1].l)
			cout<<w[i].l;
			else {
				cout<<w[i].l<<w[i].r;
				falg=false;
			}
		}
		if(falg) cout<<w[n-2].r;
		cout<<endl;
	}
}
