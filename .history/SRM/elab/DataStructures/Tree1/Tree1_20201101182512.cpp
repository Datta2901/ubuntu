

using namespace std;

#define oo 0x7F7F7F7F
#define LET(x,a)     __typeof(a) x(a)
#define EACH(it,v)   for(LET(it,v.begin());it!=v.end();++it)
#define REP(i,n)     for(__typeof(n) i(0); i<n; i++)
#define ALL(x)       (x).begin(), (x).end()
#define gint(t)      scanf("%d", &t);
#define pint(t)      printf("%d\n", t);
#define pb           push_back
#define mp           make_pair
#ifdef JAI_ARENA
#define debug(args...) {cerr<<"> "; dbg,args;cerr<<endl;}
#define debugv(v, n)      {cerr<<"> "; REP(ni, n) dbg,(int)v[ni]; cerr<<endl;}
#else
#define debug(...) ;
#define debugv(...) ;
#endif


struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {
        cerr<<v<<" ";
        return *this;
    }
} dbg;


#define BUF 4096
char ibuf[BUF];
int ipt = BUF;

int readUInt() {
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
    if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
    }
    int n = 0; char neg = 0;
    if(ipt !=0 && ibuf[ipt-1] == '-') neg = 1;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
    if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
    }
    return neg?-n:n;
}
int testcase;

#define MAXN  100005
#define MAXLG 20
vi adj[100005];
int deg[100005];
int n, ndc = 0;
struct entry {
    int nr[2], p;
} L[MAXN];
int P[MAXLG][MAXN], N, i, stp, cnt;
int parent[MAXLG][MAXN];
int *p1, *p2;
int depth[MAXN];
int cmp(struct entry a, struct entry b)
{
    return a.nr[0] == b.nr[0] ? (a.nr[1] < b.nr[1] ? 1 : 0) : (a.nr[0] < b.nr[0] ? 1 : 0);
}
void updateparent() {
    REP(ki, MAXLG-1) {
        REP(ni, n) {
            parent[ki+1][ni] = (parent[ki][ni] == -1)?-1:parent[ki][parent[ki][ni]];
        }
    }
}
void dfs(int st, int par, int dep) {
    parent[0][st] = par;
    p1[st] = par;
    depth[st] = dep;
    EACH(it, adj[st]) {
        if(*it == par) continue;
        dfs(*it, st, dep+1);
    }
}
int lcp(int x, int y)
{
    int k, ret = 0;
    for (k = stp - 1; k >= 0 && x < N && y < N; k --)
        if (P[k][x] == P[k][y]) {
            debug(x, y, k);
            x = parent[k][x], y = parent[k][y], ret += 1 << k;
        }
    return ret;
}
int work()
{
    for (N = n, i = 0; i < N; i ++)
        P[0][i] = deg[i];
    for (stp = 1, cnt = 1; (cnt >> 1) < (N<<1); stp ++, cnt <<= 1)
    {
        for (i = 0; i < N; i ++)
        {
            L[i].nr[0] = P[stp - 1][i];
            int k = parent[stp-1][i];
            L[i].nr[1] = (k==-1)?-1:P[stp - 1][k];
            L[i].p = i;
        }
        sort(L, L + N, cmp);
        for (i = 0; i < N; i ++)
            P[stp][L[i].p] = i > 0 && L[i].nr[0] == L[i - 1].nr[0] && L[i].nr[1] == L[i - 1].nr[1] ? P[stp][L[i - 1].p] : i;
    }
    return 0;
}
void intIntSort(int d[],int m1[],int s){int i=-1,j=s,k,t;if(s<=1)return;k=(d[0]+d[s-1])/2;for(;;){while(d[++i]<k);while(d[--j]>k);if(i>=j)break;t=d[i];d[i]=d[j];d[j]=t;t=m1[i];m1[i]=m1[j];m1[j]=t;}intIntSort(d,m1,i);intIntSort(d+j+1,m1+j+1,s-j-1);}
void solve() {
    gint(n);
    p1 = new int[n];
    p2 = new int[n];
    memset(deg, 0, sizeof deg);
    int x, y;
    REP(ni, n-1) {
        gint(x); gint(y);
        x--;y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
        deg[x]++;
        deg[y]++;
    }
    dfs(0, -1, 1);
    updateparent();
    debugv(parent , n);
    work();
    int ar[n], d[n];
    REP(ni, n) ar[ni] = ni;
    REP(ni, n) d[ni] = P[stp-1][ni];
    intIntSort(d, ar, n);
    debugv(P[0], n);
    debugv(P[1], n);
    debugv(d, n);
    debugv(ar, n);
    ll res = depth[ar[0]];
    for(int i = 0; i<n-1; i++) {
        if(d[i] == d[i+1]) continue;
        debug(depth[ar[i+1]], lcp(ar[i], ar[i+1]));
        res += depth[ar[i+1]] - lcp(ar[i], ar[i+1]);
    }
    cout<<res<<endl;
}
bool input() {
    return true;
}
void preprocess() {

}
int main() {
    preprocess();
    solve();
    return 0;
}