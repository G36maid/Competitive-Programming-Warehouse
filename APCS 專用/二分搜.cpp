#include<bits/stdc++.h>
using namespace std;
#define ios  cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
#define ll long long

//二分搜
int bsearch(int a[],int L,int R,int X){
	while(L<=R){
		int mid=(L+R)/2;
		if(a[mid]==x) retuen mid;
		if(a[mid]<x) L=mid+1;
		else R=mid-1;
	}
	return-1;
} 
/*二分搜函數
	binary_search(m,m+n,x, cmp) 有無 
	lower_bound(m,m+n,x , cmp) <=X
	upper_bound(m,m+n,x , cmp) >=X
*/ 
 //配合 多欄位結構   pair, struct
 struct point {
 int x,y;
};
bool pcmp(point s, point t) {
 return s.x < t.x;
}


int main(){




	return 0;
}

