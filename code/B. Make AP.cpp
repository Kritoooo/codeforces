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
		long double a,b,c;
		cin>>a>>b>>c;
		if(((a+c)/(2*b)==(int)((a+c)/(2*b))&&(a+c)/(2*b)>0)||((2*b-a)/c==(int)((2*b-a)/c)&&(2*b-a)/c>0)||((2*b-c)/a==(int)((2*b-c)/a)&&(2*b-c)/a>0)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
