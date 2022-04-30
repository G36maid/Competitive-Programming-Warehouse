#include<bits/stdc++.h>
using namespace std;
#define ios  cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
#define ll long long

int num[10000];

int main(){
	int n;
	cin>>n;
	for(int m=0;m<n;m++){
		cin>>num[m];
	}
	
	int l,r,mid,t;
	cin>>t;
	
	l=0, r=n-1;
	
	while(l<=r){
		
		mid=(l+r)/2;
		
		if(num[mid]==t){
			cout<<mid<<endl;
			break;
		}else if(num[mid]>t){
			r=mid-1;
			cout<<mid<<endl;
		}else if(num[mid]<t){
			l=mid+1;
			cout<<mid<<endl;
		}
	}


	return 0;
}

