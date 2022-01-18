/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 200002
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[N];
		bool flag=true;
		cin>>s;
		int len=strlen(s);
		for(int i=len-1;i>=1;i--){
			int temp=s[i]+s[i-1]-'0'-'0';
			if(temp>=10){
				s[i]=temp%10+'0';
				s[i-1]=temp/10+'0';
				flag=false;
				break;
			}
		}
		if(flag){
		s[1]=s[0]+s[1]-'0';
		_for(i,1,len-1){
			cout<<s[i];
		}
	}
	 else 	_for(i,0,len-1)
	 	cout<<s[i];
		cout<<endl;
	}
}
