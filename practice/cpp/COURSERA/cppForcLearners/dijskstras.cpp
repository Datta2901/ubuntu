#include<iostream>
bool** graph ;
using namespace std ;
int main()
{
    int size ;
    cin>>size ;
    float prob ;
    cin>>prob ;
    
    graph=new bool*[size] ;
    for(int i=0 ;i<size;i++)
    {
        graph[i] =new bool[size] ;
        
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(i==j)
            {
                graph[i][j]=false ;
            }
            else
            {
                graph[i][j] =graph[j][i] =prob  ;
            }
            cout<<graph[i][j]<<"\n" ;
        }
    }
    return 0 ; 
}