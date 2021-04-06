// #include<bits/stdc++.h>
// using namespace std;

// class library{
//     public:
//         string name;
//         int roll,code;
//         library(int b,string a,int c){
//             name = a;
//             roll = b;
//             code = c;
//         }
//         void count(){
//             cin >> name >> roll >> code; 
//         }

//         void show(){
//             cout << "Roll No:" << roll << endl;
//             cout << "Name of the Student:" <<  name << endl;
//             cout << "Code of Book Accessed:" << code << endl;
//         }
// };

// int main(){
//     string name1,name2;
//     int roll1,roll2,code1,code2;
//     cin >> roll1 >> name1 >>  code1;
//     cin >> roll2 >> name2 >>  code2;
//     library lib1(roll1, name1 , code1),lib2(roll2, name2 , code2);
//     lib1.show();
//     lib2.show();
// }

#include <iostream>
using namespace std;
class library
{
    public:
    string name;
    int roll,bc,c=0;
    library(int r,string nam,int bookcode){
        name = nam;
        roll = r;
        bc = bookcode;
    }
    void show(){
        cout<<"Roll No:"<<roll<<endl<<"Name of the Student:"<< name<<endl<<"Code of Book Accessed:"<<bc<<endl;
        }
        void count(){c++;}};int main(){int rol,boco,rol2,boco2;string name1, name2;cin>>rol>>name1>>boco>>rol2>>name2>>boco2;library lib1(rol,name1,boco);lib1.show();library lib2(rol2,name2,boco2);lib2.show();return 0;}