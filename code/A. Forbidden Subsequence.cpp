/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		int len=a.length();
		sort(a.begin(),a.end());
		bool f=false,vis[101]={0};
		for(int i=0;i<=1;i++){
			if(b[i]>b[i+1]) f=true;
		}
		if(f){
			re:for(int i=0;i<len;i++){
				cout<<a[i];
			}
		}
		else {
			int i;
			for(i=0;a[i]=='a';i++)cout<<a[i];
			if(i==0) goto re;
			for(;a[i]=='b';i++);
			for(;a[i]=='c';i++) cout<<a[i];
			for(int j=0;j<len;j++) if(a[j]=='b') cout<<a[j];
			for(;i<len;i++) cout<<a[i]; 
		}
		cout<<endl;
	}
}

