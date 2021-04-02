// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     queue<int> a;
//     for(int i = 0; i <= 4; i++){
//         int b;
//         cin >> b;
//         a.push(b);
//     }
//     cout << "Elements in the queue are";
//     for(auto it = a.front(); it != a.back(); it++){
//         cout << it << " ";
//     }
//     cout << endl;
//     cout << "Deleted value " << a.front() << endl;
//     a.pop();
//     cout << "Deleted value " << a.front() << endl;
//     a.pop();
//     cout << "Elements in the circular queue are :";
//     for(auto it = a.front(); it != a.back(); it++){
//         cout << it << " ";
//     }
//     cout << endl;
//     for(int i = 0; i < 4; i++){
//         int b;
//         cin >> b;
//         a.push(b);
//     }
//     cout << "Elements in the circular queue are :";
//     for(auto it = a.front(); it != a.back(); it++){
//         cout << it << " ";
//     }
//     cout << endl;
//     cout << "Elements in the queue are full\n";

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> b;
    int a;
    cin >> a;
    int con;
    while(a == 1 || con == 1){
        int c;
        cin >> c;
        b.push(c);
        cin >> a;
        if(a != 1){
            cin >> con;
        }
    } 
    while(!b.empty()){
        cout << b.front() << " ";
        b.pop();
    }
    
    return 0;
}

#include<stdio.h>
int main (){
int n,a[100],i;
scanf("%d",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for (i=n-1;i>=0;i--)
printf("Linked List: %d",a[i]);
return 0;
}