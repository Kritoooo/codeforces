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
		string s;
		int a[30]={0};
		cin>>s;
		int len=s.length();
		_for(i,0,len-1){
			a[s[i]-'a']++;
		}
		_for(i,0,25){
			if(a[i]==0) continue;
			if(a[i]==1){
				char temp=i+'a';
				cout<<temp;
			}
			if(a[i]==2){
				char temp=i+'a';
				cout<<temp<<temp; 
			}
		}
		cout<<endl;
	}
}
