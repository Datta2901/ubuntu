// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// class Details{
//     public:
//         string name;
//         int mark;
// };

// bool comparator(const Details& lhs, const Details& rhs) {
//     if(lhs.mark > rhs.mark){
//         return lhs.mark > rhs.mark;
//     }if(lhs.mark == rhs.mark){
//         return lhs.name < rhs.name;
//     }
// }

// int main(){
//     int t = 10;
//     vector<Details> number;
//     int maximum1 = 0,maximum2 = 0;
//     while(t--){
//        Details obj;
//         cin >> obj.name >> obj.mark;
//         if(maximum1 < obj.mark){
//             maximum2 = maximum1;
//             maximum1 = obj.mark;
//         }
//         number.push_back(obj);
//     }
//     sort(number.begin(),number.end(),comparator);
//     cout << "Ordered List" << endl;
//     for(auto x : number){
//         cout << x.name << " " << x.mark << endl;
//     }
//     cout << "Second Highest mark is " << maximum2 << endl;
//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct avi
{
char c[50];
int a;
} s1[20];
int main()
{
int i,k,tem,j,max=0,max1=0,v;
char temp[50];
k=10;
for(i=0;i<k;i++) {
scanf("%s%d",s1[i].c,&s1[i].a);
}
  for(i=0;i<k;i++) {
if(max<s1[i].a) { max=s1[i].a;} 
    
  }
    for(i=0;i<k;i++) {
if(max1<s1[i].a && s1[i].a!=max) { max1=s1[i].a;} 
    
    }
for(i=0;i<k;i++) {
    for(j=i+1;j<k;j++) {
        if(s1[i].a<s1[j].a)
        {

        tem=s1[i].a; strcpy(temp, s1[i].c);

        s1[i].a=s1[j].a; strcpy(s1[i].c, s1[j].c);
        s1[j].a=tem; strcpy(s1[j].c, temp);

        }
        }
    } 
    if(s1[4].a==s1[5].a){ strcpy(temp, s1[4].c); strcpy(s1[4].c, s1[5].c);
    strcpy(s1[5].c, temp); }
printf("Ordered List\n");
for(i=0;i<k;i++) {
printf("%s",s1[i].c);
 printf(" %d\n" ,s1[i].a) ;
}

printf("\nSecond Highest mark is %d",max1);
return 0;
}