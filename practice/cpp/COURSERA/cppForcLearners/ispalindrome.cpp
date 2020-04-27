// using two pointers to find the given string is palindrome or not
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
    int size;
    cin >> size;
    string str;
    cin >> str;
    bool flag = true;
    char *first;
    first = &str[0];
    char *last ;
    last= &str[size-1];
    cout << first<<endl<<last << endl;
    
    //  while(flag == true){
          
    //     if(size % 2 == 0){
    //       if(first == last + 1){
    //           break;
    //       }
    //     }
    //     if(*first != *last){
    //        flag =  false;
    //     }
    //     first++,last--;
    //     if(first == last){
    //         break;
    //     }
    // }correct 

    while(flag){
        last--;

        if(first == last){
            break;
        }if(*first !=  *last){
            flag = false;
        }
        first++;
        if(first == last){
            break;
        }
    }
    
    if(flag == true){
        cout << "Given string is palindrome" << endl;
    }else if(flag == false){
        cout << "Given string is not palindrome" << endl;
    }


    
    return 0;
}