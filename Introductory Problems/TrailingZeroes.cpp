#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    long long int i=1,ans=0;

    while(n/(pow(5,i))!=0){
        ans+=n/(pow(5,i));
        i++;
    }

    cout<<ans<<endl;
}