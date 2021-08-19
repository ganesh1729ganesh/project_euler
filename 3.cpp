#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> getFactors(long long n){

    vector<ll>factors;

    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i)
            factors.push_back(i);
            else{
                factors.push_back(i);
                factors.push_back(n/i);
            }

        }
    }

    return factors;

}

bool isPrime(ll n){
    vector<ll> factors = getFactors(n);
    if(factors.size()==2) return true;

    return false;
}
ll maxi=0;
ll maxprime(ll n){
   
        vector<ll> factors = getFactors(n);
        for(auto j:factors){
            if(isPrime(j)){
                maxi=max(maxi,j);
            }            
        }

        return maxi;
    
}



int main(){

   long long n = 600851475143;

   ll ans = maxprime(n);

   cout<<ans;

  

    return 0;
}