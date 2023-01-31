/* Chef has a binary string S of length N.
Chef can perform the following operation on the string:

1.Choose any substring of S;
2.Remove the chosen substring from S;
3.Concatenate the remaining parts of the string S, obtained after removing the substring.

Find the length of the longest prefix having all 1s you can achieve, by performing the above operation at most once.

Input-                    Output-
4   1010                   2
6   011011                 2
11  01011011101            3
*/

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T,n;
	cin>>T;
	
	while(T--){
	    cin>>n;
	    string s="";
	    cin>>s;
	    
	    int count=0, max1=0, sum1=1, i;
	    if(s[0]=='0'){
	        for(i=1; i<n; i++){
	            if(s[i]=='1')
	                count++;
	            else{
	               max1=max(max1,count);
	               count=0;
	            }
	        }
	        max1=max(max1,count);
	        cout<<max1<<endl;
	    }
	    
	    else{
	        for(i=1; i<n; i++){
	            if(s[i]=='1')
	                sum1++;
	            else
	                break;
	        }
	        for(i=sum1+1; i<n; i++){
	            if(s[i]=='1')
	                count++;
	            else{
	               max1=max(max1,count);
	               count=0;
	            }
	        }
	        max1=max(max1,count);
	        cout<<sum1+max1<<endl;
	    }
	}
	return 0;
}
