#include<bits/stdc++.h>
using namespace std;

struct Student{
    string age,first_name,last_name,
};

int main(){
    Student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    return 0;
}