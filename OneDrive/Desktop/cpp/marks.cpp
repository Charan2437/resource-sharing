#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,X,m;
cin>>t;
while(t--){
    cin>>X;
    if(X%3==0){
     cout<<"0"<<endl;   
    }
    else{
        m=3*(int(X/3)+1)-X;
        cout<<m<<endl;
    }
}




return 0;
}