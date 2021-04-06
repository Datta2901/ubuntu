// // // // // // #include <iostream>
// // // // // // using namespace std;
// // // // // // class student
// // // // // // {
// // // // // //   public:
// // // // // //   int rno , m1 , m2 ;
// // // // // //   void get()
// // // // // //   {
// // // // // //      rno = 15, m1 = 10, m2 = 10;
// // // // // //    }
// // // // // // };
// // // // // // class Project
// // // // // // {
// // // // // //   public:
// // // // // //   int sm;
// // // // // //   void getsm()
// // // // // //   {
// // // // // //       sm = 10;
// // // // // //   }
// // // // // // };

// // // // // // class CodingNinja:public student, public Project
// // // // // // {
// // // // // //   int tot,avg;
// // // // // //   public:
// // // // // //   void display()
// // // // // //   {
// // // // // //      tot = (m1 + m2 + sm);
// // // // // //      avg = tot / 3;
// // // // // //      cout << tot;
// // // // // //      cout << avg;
// // // // // //   }
// // // // // // };
// // // // // // int main()
// // // // // // {
// // // // // //   CodingNinja obj;
// // // // // //   obj.get();
// // // // // //   obj.getsm();
// // // // // //   obj.display();
// // // // // // }
// // // // // #include <iostream>
// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // class parent
// // // // // {
// // // // //   public:
// // // // //   virtual void example() = 0; 
// // // // // };
// // // // // class child1:public parent
// // // // // {
// // // // //   public:
// // // // //   void example()
// // // // //   {
// // // // //       cout << "Coding Ninjas";
// // // // //   }
// // // // // };
// // // // // class child2:public parent
// // // // // {
// // // // //   public:
// // // // //   void example()
// // // // //   {
// // // // //       cout << " is awesome";
// // // // //   }
// // // // // };
// // // // // int main()
// // // // // {
// // // // // //   parent* arr[2];
// // // // // //   child1 e1;
// // // // // //   child2 e2;
// // // // // //   arr[0]=&e1;
// // // // // //   arr[1]=&e2;
// // // // // //   arr[0]->example();
// // // // // //   arr[1]->example();

// // // // // }
// // // // #include<iostream>
// // // // using namespace std;
// // // // class Empty {
// // // //     int x,y;
// // // // };
// // // // int main()
// // // // {
// // // //   cout << sizeof(Empty);
// // // //   return 0;
// // // // }
// // // #include <iostream>
// // // using namespace std;
// // // class Test{
// // //     public:
// // //     int x;
// // //     Test(){
// // //         x=15;
// // //         cout<<"Constructor executed ";
// // //     } 
// // //     int getx()
// // //     {return x;}
// // // };
// // // int main() {
// // //     Test t;
// // //     cout<<t.getx();
// // //     return 0;
// // // }
// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int array[] = {10, 20, 30};
// //     cout << -2[array];
// //     return 0;
// // }
// #include <iostream>
// using namespace std;

// int main(){
//    int p = 10;
//    int const *q = &p + 5;
//    p++;
//    cout << p << endl;
//    return 0;
// }
#include<iostream>
using namespace std;
class Car{
    int groundclearence; 
    public:
    int length;
    Car(){
        groundclearence=180;            // Line 1
        length=3500;
    }
  void setValue(int w, int l){
    groundclearence=w;
    length=l;
  }
};
int main(){
  cout <         // Line 3 
  return 0;
}