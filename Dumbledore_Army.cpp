/* https://www.codechef.com/problems/DUMBLEDORE?tab=statement
5 12
5 1 --> 1
3 2 --> 3
5 2 --> 6
1 2 --> 8
4 3 --> 11
4 3 --> 17
4 3 --> 26
5 3 --> 32
1 5 --> 39
3 5 --> 46
1 8 --> 61
2 10  --> 71 */

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
    cin>>n>>m;
    long long vect[n]{0};
    long long tot=0,p,op;
    for(int i=0 ; i<m ; i++){
        cin>>p>>op;
        vect[p-1]=vect[p-1]+op;
        tot=tot+vect[p-1];
        cout<<tot<<endl;
    }
    return 0;
}