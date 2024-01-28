#pragma GCC optimize("O3")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef long double                 ld;
typedef          long long int     lli;
typedef unsigned long long int    ulli;
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type,
    less<int>, __gnu_pbds::rb_tree_tag,
    __gnu_pbds::tree_order_statistics_node_update> os_tree;




void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(auto& x : nums) { cin >> x; }
}


int main(void) {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);


    int t;
    cin >> t;

    while(t--) {
        solve();
    }


    return 0;
}
