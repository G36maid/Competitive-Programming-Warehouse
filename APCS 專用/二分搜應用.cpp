#include<bits/stdc++.h>
using namespace std;
#define ios  cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
#define ll long long
typedef long long LL;

//set  multiset map

//bit  是指先遞增後遞減的序列，也有人叫它一山峰(谷)序列。
/* 三分搜以及差分二分搜
1.
區間三等分，如果 1/3 的位置大於 2/3 的位置，可以丟掉左
邊的 1/3；反之，如果 2/3 的位置較大，則可以丟棄右邊 1/3 的區間。如此每次可以
將區間長度減少 1/3，在 O(log(n))次比較可以找到最低點。
2.
差分  以二分搜找到大於等於 0 
就是 f 的最小值。 */
g[i]=f[i]-f[i-1];

//快速冪  x^y (mod P)
LL exp(LL x, LL y, LL p) {
 if (y==0) return 1;
 if (y & 1) return (exp(x, y-1,p)*x)%p;
 // otherwise y is even
 LL t=exp(x, y/2, p);
 return (t*t)%p;
}

int main(){




	return 0;
}

