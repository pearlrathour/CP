/* Delete a subsequence of max length from the string, such that after concatenating the remainig parts of string, it becomes a palindrome of length greater than 1.If this is possible, print max length of subsequence that can be dleted. Otherwise print -1 

https://www.codechef.com/problems/QTOO_2523?tab=statement */

/* babkhj -> 4
   abc -> -1
   qtoo ->2 */

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T,N;
	cin>>T;
	
	while(T--){
	    cin>>N;
	    string s="";
	    cin>>s;
	    unordered_map<char,int>ump;
	    for(int i=0; i<N; i++)
	        ump[s[i]]++;
	    bool flag=0; 
	    for(auto x : ump){
	        if(x.second >= 2){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	        cout<<N-2<<endl;
	    else
	        cout<<-1<<endl;
	}
	return 0;
}