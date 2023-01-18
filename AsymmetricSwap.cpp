/*
Chef has two arrays A and B of the same size N.
(1<=i, j<=N) swap Ai & Bj.
Find min possible Amax-Amin
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T,N,m;
	cin>>T;
	while(T--){
	    cin>>N;
	    int l=2*N;
	    int arr[l];
	    
	    for(int i=0;i<l;i++)
	        cin>>arr[i];
	    sort(arr,arr+l);
	    
	    m=arr[l-1]-arr[0];
	    for(int i=0; i<l-N+1; i++)
	        m=min(m,arr[i+N-1]-arr[i]);
	    cout<<m<<endl;  
	}
	return 0;
}