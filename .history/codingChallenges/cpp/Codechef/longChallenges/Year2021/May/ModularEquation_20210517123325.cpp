#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct defaultVal{
    int value = 1;
};

int Modulo(int m,int a ,int b){
    return (m % a) %b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(n <= 1e3){
            set< pair<int,int> > freq,guess;
            for(int i = 1; i <= n; i++){
                for(int j = i + 1; j <= n; j++){
                    if(Modulo(m,i,j) == Modulo(m,j,i)){
                        freq.insert(make_pair(min(i,j),max(i,j)));
                    }
                    // else if (i != 10 and j != 10){
                    //     guess.insert(make_pair(min(i,j),max(i,j)));
                    // }
                }
            }
            cout<< freq.size() << endl;
        }else{
            long long int answer = 0;
                map<int,defaultVal>count;
                for(int i = 2; i <= n; i++){
                    int j = m % i;
                    answer += count[j].value;
                    for(int k = j ; k <= n; k += i){
                        count[k].value += 1;
                    }
                }
                cout << answer << endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct defaultVal{
    int value = 1;
};

int Modulo(int m,int a ,int b){
    return (m % a) %b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        long long int answer = 0;
            vector<int>count(n+1,1);
            for(int i = 2; i <= n; i++){
                int j = m % i;
                answer += count[j];
                for(int k = j ; k <= n; k += i){
                    count[k] += 1;
                }
            }
            cout << answer << endl;
    }
    return 0;
}