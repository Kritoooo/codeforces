/*@_krito*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LM LLONG_MAX
#define IM INT_MAX
#define _for(i,a,b) for(int i=a;i<=b;i++)
#define N 100010
bool cmp(char a,char b){
	if(a=='('&&b==')') return true;
	if(a=='['&&b==']') return true;
	return false;
}
int main(){
	int vis[N],top=0;
	bool vis1[N]={0};
	vector<char> ans;
	string str;
	int k=0;
	cin>>str;
	int len=str.length();
	for(int i=0;i<=len-1;i++){
		if(str[i]=='('||str[i]=='[')
		{
			ans.push_back(str[i]);
			vis[++top]=ans.size()-1;
		}
		else if(!top||!cmp(ans[vis[top]],str[i])){
			if(str[i]==']'){
				ans.push_back('[');
				vis1[ans.size()-1]=true;
				ans.push_back(']');
			}
			else {
				ans.push_back('(');
				vis1[ans.size()-1]=true;
				ans.push_back(')');
			}
		}
		else {
			ans.push_back(str[i]);
			vis1[vis[top--]]=true;
		}
	}
	int len2=ans.size()-1;
	_for(i,0,len2){		
		cout<<ans[i];
		if(!vis1[i]&&(ans[i]=='('||ans[i]=='[')){
			if(ans[i]=='(') cout<<")"; 
			else cout<<"]";
		}
	}
}
