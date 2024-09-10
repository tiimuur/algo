#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <random>

#define ll long long
#define ull unsigned long long
#define all(v) (v).begin(), (v).end()

const int INF = 1e9 + 1;
const int MOD = 1e9 + 7;
const int B = 131;

int getRand() {
    static std::mt19937 mt(228);
    return std::uniform_int_distribution<int>()(mt);
}

template<typename T>
concept Iterable = requires(T t) {
    { t.begin() } -> std::convertible_to<typename T::iterator>;
    { t.end() } -> std::convertible_to<typename T::iterator>;
};

template<Iterable Container>
void print(const Container& container) {
    for (const auto& element : container) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}

void solve() {
}

signed main() {
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int t = 1; //std::cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
