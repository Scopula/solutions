#include <bits/stdc++.h> 
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll n, price, quality;
    vector<pair<ll, ll>> v;
    ll max_seen = 0;

        
    // Read inputs
    // Add laptops to vector
    cin >> n;
    while (n--) {
        cin >> price >> quality;
        v.push_back(make_pair(price, quality));
    }

    // Sort by price
    sort(v.begin(), v.end());

    // Loop over all laptops
    for (int i = 0; i < v.size(); i++){
        quality = v[i].second;
        
        // Check if any cheaper laptop is of higher quality
        if (max_seen > quality) {
            cout << "Happy Alex";
            return 0;
        }

        // Update max_seen
        max_seen = quality;
    }   

    cout << "Poor Alex";
    return 0;

}