#include <bits/stdc++.h>  
// Includes the entire C++ standard library 
using namespace std;
// Declaring that can use the classes and functions of the standard library directly in the code       

// Another way is using Macros - specifies that certain strings in the code will be changed before the compilation
#define F first
#define PB push_back
#define MP make_pair
//  Can also consist of Parameters
#define REP(i,a,b) for (int i=a; i<=b; i++)

void solve(){

    typedef long long ll;
    // This command can be used to give a short name to the data type
    ll a=1234567;
    ll b=40000000;  // Same as long long b = 40000000;

    typedef vector<int> vi;
    typedef pair<int,int> pi;
    vi c;
    pi d;

    REP(i,1,2){
        cout << "HELLo\n";
    }
    

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Faster and efficient input Output

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

/*
-----------------------------------

Modular Arithmetic

--> (a+-b)%m = (a%m +- b%m)%m
--> (a*b)%m = (a%m * b%m)%m

If when the numbers are getting too large we can take remainder of the number after the operation (eg. 10^9 +7)

Number could also result to be negative for a negative input then we can simply 

x = x%m
if (x < 0) x += m;

---------------------------------------

Floating Point Numbers

--> Already know float and double 
--> Sometimes it must be risky to compare the floating point numbers using == operator coz of precision 
--> Better way is to compare like abs(a-b) < epslion , where eplsion is a small number ~(1e-9)

----------------------------------------

 */