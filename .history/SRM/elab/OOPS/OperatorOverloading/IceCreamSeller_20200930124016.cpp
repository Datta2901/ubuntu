#include <iostream>
using namespace std;
class matrix
{
   matrix operator * ()
    {
   
    }
   void get()
    {
    }
   void put()
    {
    }
};
int main()
{
    double a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2; int i, j, k;
    r1 =2; c1=2;
    r2 =2; c2=1;
    while (c1!=r2)
    {
        cin >> r1 >> c1;
        cin >> r2 >> c2;
    }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cin >> a[i][j];
        }
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cin >> b[i][j];
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
class matrix{
    int a, b, c, d;
    float e, f, z, r;

public:
    void get(){
        cin >> a >> b >> c >> d >> e >> f;
    }
    matrix operator*(){
        float x, y, z, p, q, r;
        x = a * e;
        y = b * f;
        p = c * e;
        q = d * f;
        z = x + y;
        r = p + q;
        cout << z << endl
             << r;
    }
    void put(){
        //put the data
    }
};
int main(){
    matrix obj;
    obj.get();
    *obj;
    obj.put();
    return 0;
}