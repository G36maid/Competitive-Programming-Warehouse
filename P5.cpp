#include<bits/stdc++.h>
using namespace std;
#define ios  cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
#define ll long long

int main(){
	 int n,m;
	 ll ans=0;
	 cin>>n>>m;
	 if(m<n){
	 	swap(m,n);
	 }
	 
	for(int o=1;o<n;o++){
		ll D=0;
		for(int p=1;p<=o;p++){
			D=D+p*p+(o-p)*(o-p);
		}
		ll num=0;
		num=(n-o)*(m-o);
		
	//	cout<<D<<" "<<num<<endl;
		ans=ans+num*D;
	}
	cout<<ans;
	

	return 0;
}

