#include<bits/stdc++.h>
using namespace std;
#define ios  cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
#define ll long long

int main(){
	double v1,v2,thx,bax,th,ba,s,t;
	cin>>v1>>v2>>thx>>bax;
	th=v1/1;
	s=sqrt(v1*v1+1*1);
	ba=v2/s;
	
	t=cqrt(v1*v1+1*1+v2*v2);
	
	th=th+thx;
	ba=ba+bax;
	v2=s


	return 0;
}

