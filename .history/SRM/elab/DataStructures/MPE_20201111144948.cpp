// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     stack<int> data;
//     for(int  i = 0; i < 3; i++){
//         int a;
//         cin >> a;
//         cout << a << " pushed to stack" << endl;
//         data.push(a);
//     }
//     cout << data.top() << " popped from stack" << endl;
//     data.pop();
//     cout << "Top element is " << data.top() << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int m,n;
//     cin >> m >> n;
//     for(int i = 0; i < m +n; i++){
//         int a;
//         cin >> a;
//         cout << a << " ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<pair<int,int>> data;
    data.push_back(make_pair(0,0));
    for(int i = 1; i <= size; i++){
        int a;
        cin >> a;
        data.push_back(make_pair(a,i);
    }
    sort(data.begin(),)
    return 0;
}