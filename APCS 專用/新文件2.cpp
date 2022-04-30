#include<bits/stdc++.h>
using namespace std;
#define ios  cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
#define ll long long
int comp(char a, char b){
	if(a<b){
		return 0;
	}else{
		return 1;
	}
}
int main(){
	int n;
	cin>>n;
	char s[n];
	for(int m=0;m<n;m++){
		cin>>s[m];
	}
	sort(s,s+n,comp);
	
	for(int m=0;m<n;m++){
		cout<<s[m];
	}
	


	return 0;
}

