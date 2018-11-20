#include<bits/stdc++.h>
using namespace std;

/// Typedef
typedef long long           ll;
typedef unsigned long       ul;
typedef unsigned long long  ull;
typedef vector<int>         vi;
typedef vector<vi>          vvi;
typedef vector<ll>          vll;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector< pii >       vii;

#define pb                  push_back
#define ppb                 pop_back
#define MP                  make_pair
#define in                  insert
#define ff                  first
#define ss                  second
#define sf                  scanf
#define pf                  printf
#define SQR(x)              ((x)*(x))
#define loop(i, y)          for(int i=0; i<int(y); i++)
#define FOR(i, x, y)        for(int i=int(x); i<int(y); i++)
#define ROF(i, x, y)        for(int i=int(x); i>=int(y); i--)
#define ALL(c)              c.begin(), c.end()
#define SZ(c)               int(c.size())
#define CLR(x, y)           memset(x, y, sizeof(x))
#define READ(f)             freopen(f, "r", stdin)
#define WRITE(f)            freopen(f, "w", stdout)
#define FastIO              ios_base::sync_with_stdio(false)
#define tr(it, container)   for(auto it = container.begin(); it != container.end(); it++)
#define sci(x)              scanf("%d", &x)
#define scii(x, y)          scanf("%d %d", &x, &y)
#define sciii(x, y, z)      scanf("%d %d %d", &x, &y, &z)
#define scl(x)              scanf("%lld", &x)
#define scll(x, y)          scanf("%lld %lld", &x, &y)
#define sclll(x, y, z)      scanf("%lld %lld %lld", &x, &y, &z)
#define scllll(x, y, z, p)  scanf("%lld %lld %lld %lld", &x, &y, &z, &p)
#define bitCheck(N,in)      ((bool)(N&(1<<(in))))
#define bitOff(N,in)        (N&(~(1LL<<(in))))
#define bitOn(N,in)         (N|(1LL<<(in)))
#define bitFlip(a,k)        (a^(1LL<<(k)))
#define unq(v)              sort(all(v)), (v).erase(unique(all(v)),v.end())
#define common(a,b)         sort(all(a)), sort(all(b)), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b)       sort(all(a)), sort(all(b)), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())
#define dbg(x)              cout<<#x<<" = "<<x<<endl;
// template <typename T> using orderset = tree <T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
// *X.find_by_order(k) //returns the kth largest element.(0-based)
// X.order_of_key(val) //returns the no. of values less than val

// uniform random generator -->
// uniform_int_distribution<int> dist(0, 1);
// default_random_engine gen;

template <class T> inline T bigMod(T p,T e,T M){ ll ret = 1; for(; e > 0; e >>= 1){ if(e & 1) ret = (ret * p) % M; p = (p * p) % M; } return (T) ret;}
template <class T> inline T modInverse(T a,T M){return bigMod(a,M-2,M);}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline string int2String(T a){ostringstream str; str<<a; return str.str();}
const int dr[] = { 0,  1,  0, -1,        -1,  1,  1, -1,     -2, -2,  2,  2, -1, -1,  1,  1};
const int dc[] = { 1,  0, -1,  0,         1,  1, -1, -1,     -1,  1, -1,  1, -2,  2, -2,  2};


/// Constants
#define MAX                 100000005
#define MOD                 1000000009
#define base                1000000007
#define eps                 1e-9
#define INF                 1llu<<61    // 2,305,843,009,213,693,952
#define inf                 1<<29       // 536,870,912
#define PI                  acos(-1.0)  // 3.1415926535897932


set<int> data;

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    bool no_solution, dup, first=true;
    int a, b, c, d, e, f, g, h, i, j, n, abcde, fghij;
    while(sci(n) && n){
        dup=no_solution=true;
        if(first) first=false;
        else cout<<endl;
        for(f=0; f<=4; f++){
            for(g=0; g<10; g++) {
                if(f!=g){
                    for(h=0; h<10; h++){
                        if( g!=h){
                            for(i=0; i<10; i++){
                                if( h!=i){
                                    for(j=0; j<10; j++){
                                        if(i!=j){
                                            fghij=(((f*10+g)*10+h)*10+i)*10+j;
                                            abcde=fghij*n;
                                            if(abcde<100000){
                                                e=abcde%10;
                                                abcde/=10;
                                                d=abcde%10;
                                                abcde/=10;
                                                c=abcde%10;
                                                abcde/=10;
                                                b=abcde%10;
                                                a=abcde/10;
                                                //checking Duplicates
                                                data.in(a);
                                                data.in(b);
                                                data.in(c);
                                                data.in(d);
                                                data.in(e);
                                                data.in(f);
                                                data.in(g);
                                                data.in(h);
                                                data.in(i);
                                                data.in(j);

                                                if(SZ(data)==10) dup=false;
                                                else dup=true;
                                                data.erase(ALL(data));
                                                if(!dup){
                                                    cout<<a<<b<<c<<d<<e<<" / "<<f<<g<<h<<i<<j<<" = "<<n<<endl;
                                                    no_solution=false;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(no_solution){
            cout<<"There are no solutions for "<<n<<"."<<endl;
        }
    }
    return 0;
}
