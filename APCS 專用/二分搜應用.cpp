#include<bits/stdc++.h>
using namespace std;
#define ios  cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
#define ll long long
typedef long long LL;

//set  multiset map

//bit  �O�������W�Ỽ��ǦC�A�]���H�s���@�s�p(��)�ǦC�C
/* �T���j�H�ήt���G���j
1.
�϶��T�����A�p�G 1/3 ����m�j�� 2/3 ����m�A�i�H�ᱼ��
�䪺 1/3�F�Ϥ��A�p�G 2/3 ����m���j�A�h�i�H���k�� 1/3 ���϶��C�p���C���i�H
�N�϶����״�� 1/3�A�b O(log(n))������i�H���̧C�I�C
2.
�t��  �H�G���j���j�󵥩� 0 
�N�O f ���̤p�ȡC */
g[i]=f[i]-f[i-1];

//�ֳt��  x^y (mod P)
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

