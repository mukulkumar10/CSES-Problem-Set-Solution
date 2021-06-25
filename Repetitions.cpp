#include<bits/stdc++.h>
using namespace std;

int MaxSeq(string s, int n){
    if(n==0)return 0;
    int maxi = 1;
    int count = 1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            maxi++;
            count = max(count,maxi);
        }
        else{
            maxi = 1;
        }
    }
    return count;
}

int main()
{
    string str;
    cin>>str;
    int n = str.length();
    cout<<MaxSeq(str,n)<<endl;
    return 0;
}