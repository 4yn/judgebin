#include<bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-result"
 
using namespace std;
 
typedef long long int lli;
typedef double dbl;
 
typedef pair<lli, lli> pll;
typedef pair<dbl, dbl> pdd;
 
typedef vector<lli> vl;
typedef vector<vl> vvl;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;
typedef vector<dbl> vd;
typedef vector<pdd> vpdd;
 
#define SWALLOW(X) do { X } while(0)
#define FIO SWALLOW(ios_base::sync_with_stdio(false); cin.tie(NULL);)
#define RG(X, Y, Z) for (lli X = (Y); X < (Z); X++)
#define RGA(X, Y) for (auto X: Y)
#define IL(X) SWALLOW(scanf("%lld", &X);)
#define ID(X) SWALLOW(scanf("%lf", &X);)
#define IS(X, N) SWALLOW(char __tcstr[N]; scanf("%s", __tcstr); X = string(__tcstr);)
#define TC(X) lli ___tc; scanf("%lld", &___tc); RG(X, 1, (___tc + 1))
#define LEN(X) (lli)(X).size()

#ifdef CP_LOCAL_DEBUG
#define debugf(...) SWALLOW(printf("\033[34m"); printf(__VA_ARGS__); printf("\033[0m");)
#else
#define debugf(...) SWALLOW()
#endif

struct Solution {
    void input() {
    }

    lli ans;
    void solve() {
    }

    void output(lli t=0) {
        // printf("%lld\n", ans);
        // printf("Case #%lld: %lld\n", t, ans);
    }
};
 
int main() {
    // auto s = Solution();
    // s.input();
    // s.solve();
    // s.output();
    // TC(t) {
    //     auto s = Solution();
    //     s.input();
    //     s.solve();
    //     s.output(t);
    // }
}

