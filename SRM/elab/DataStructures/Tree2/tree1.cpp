#include <iostream>
using namespace std;
struct node
{struct node* root;
};

int main()
{
    int arr[100];
    int size, i, j, temp;

    cin>>size;

    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
   
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
 
    cout<<"Inorder Traversal: ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}