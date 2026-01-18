#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define out cout <<
#define end << endl;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define pb push_back
#define floop(x) for(int i = 0; i < x; i++)
using namespace std;
#define Singularity void
#define SilverCipher int main()

SilverCipher {
    int t;
    in t;
    while (t--) {
        int n, k, p;
        in n >> k >> p;
        
        if (k == 0) {
            out 0 end
            continue;
        }
        
        int donkey = abs(k);
        int max = n * p;
        
        if (donkey > max) {
            out -1 end
        } else {
            int total = (donkey + p - 1) / p;
            out total end
        }
    }

}