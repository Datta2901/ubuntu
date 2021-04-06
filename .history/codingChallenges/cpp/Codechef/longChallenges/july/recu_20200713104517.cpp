












int main(){
    vector<long int> taste;
    long int n,Queries;
    cin >> n >> Queries;
    vector<long int>  height;
    loop(n){
        ll a;
        cin >> a;
        height.pb(height[i]);
    }
    vectInput(taste,n);   
    while(Queries--){
        long int a,b,c,answer;
        cin >> a >> b >> c;
        if(a == 1){
            taste[b - 1] = c;
        }else{