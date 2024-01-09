#pragma GCC optimize("O3")

#include <bits/stdc++.h>

typedef long double                 ld;
typedef          long long int     lli;
typedef unsigned long long int    ulli;

using namespace std;


int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);


    int t;
    cin >> t;

    vector<vector<int>> testcases;

    while(t--) {
        int n;
        cin >> n;

        vector<int> curr_tc(n);

        for(auto& a : curr_tc) cin >> a;

        testcases.push_back(curr_tc);
    }




    return 0;
}
