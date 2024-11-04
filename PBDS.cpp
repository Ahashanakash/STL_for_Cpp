#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    pbds<int> p;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    auto x = *p.find_by_order(k);
    cout << x;
    cout << p.order_of_key(k) << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}