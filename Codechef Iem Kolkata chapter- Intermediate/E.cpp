#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,x,T;

    cin>>T;
    while(T--){
    	cin>>k>>x;
    	cout<<(x + 9*(k-1))<<"\n";
    }
    
    return 0;
}
