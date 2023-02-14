/* Marichka goes first, and removes any non-zero number of stones from any pile.
After that, in one move, a player can take any number of stones from any pile, but not less than the number of stones taken by the opponent in the previous move.
The player who cannot make a move loses. 
https://www.codechef.com/problems/TAKENOTLESS 

1 2 3 -> Marichka
1 1 -> Zenyk
1 0 -> Marichka*/

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
	    vector<int>v(N);
	    unordered_map<int,int>ump;
	    for(int i=0; i<N; i++){
	        cin>>v[i];
	        ump[v[i]]++;
	    }
	    bool odd=0;
	    for(auto x : ump){
	        if(x.second & 1){
	            odd=1;
	            break;
	        }
	    }
	    
	    if(odd)
	        cout<<"Marichka"<<endl;
	    else
	        cout<<"Zenyk"<<endl;
	}
	return 0;
}

