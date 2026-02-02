#include <bits/stdc++.h>
using namespace std;
                                        
void solve(){
    int x = -43; 
    // Signed int uses 31-bit representation, MSB for the sign
    // (-2^31 to 2^31 - 1)
    unsigned int y = x;
    // Unsigned int uses 32-bits representation (0 to 2^32 - 1)

    // y would be treated as a really large number 4294967253 and x is -43 
    cout << x << " " << y << "\n";


    /* -----BIT SHIFTS------ */ 
    /* Must Remember the crocodiles mouth place */

    /* 1) Left Shift appends (x << k) k zeros to the left  */
    /*    14 << 2 become 56 (1110 --> 111000) */

    /* 2) Right Shift removes the (x >> k) k last bits from the number  */
    /*    49 >> 3 become 6 (110001 --> 110) */
    cout << (14 << 2 ) << " " << (49 >> 3) << "\n";


    /* -------BIT MASKS------- */
    /* A bit mask of the form (1 << k) has one bit in position k and all other bits are zero, so we can use such masks to access single bits from the numbers */

    for (int k=31; k>=0; k--) {
        if (x&(1 << k)) cout << 1;
        else cout << 0;
    }

    cout << "\n";

    /* We can also modify the bits using similar ideas */

    /* --------FORMULAS--------- */
    /* x|(1 << k) sets the k-th bit of x to one  */
    /* x & ~(1 << k) sets the k-th bit of x to zero */
    /* x ^ (1 << k) inverts the k-th bit of x */
    /* x & (x-1) sets the last bit of x to zero */
    /* x & -x sets all the one bits to zero */
    /* x|(x - 1) inverts all the bits after the last one bit */
    /* x is power of two exactly when x & (x - 1) is zero */

    int p = 17; // 10001
    cout << (p|(1 << 2)) << "\n"; // 10101
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
               
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}