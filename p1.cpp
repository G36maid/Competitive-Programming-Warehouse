#include<bits/stdc++.h>
using namespace std;
#define ios  cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
#define ll long long

int main(){
	int y=0,t=0,p=0;
	string s;
	
	while(getline(cin, s)){
		
		for(int m=0;m<s.size();m++){
			if(s[m]=='y'||s[m]=='Y'){
				y++;
			}else if(s[m]=='t'||s[m]=='T'){
				t++;
			}else if(s[m]=='p'||s[m]=='P'){
				p++;
			}
		}
//		cout<<y<<" "<<t<<" "<<p<<endl;		
	}
	
			if(y<t){
				t=y;
			}
			if(t<p){
				p=t;
			}
			cout<<p;
	
	
	return 0;
}

