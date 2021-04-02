#include<bits/s
struct street
{
    int start, end, time;
    string name;
};
int main()
{
    fstream in("a.txt", ios::in);
    fstream out("aout.txt", ios::out);
    int a, b, c, d, e;
    in >> a >> b >> c >> d >> e;
    street strt[c];
    for(int i=0; i < c; i++)
        in >> strt[i].start >> strt[i].end >> strt[i].name >> strt[i].time;
    cout << strt[2].start << " " << strt[2].end << " " << strt[2].name; 
    return 0;
}