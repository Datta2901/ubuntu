#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's l
// int getBreadth (); // Return box's b
// int getHeight ();  //Return box's h
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


class Box{
    public:
        int l,b,h;
        Box();
        Box(int a,int c,int d){
            l = a;
            b = c;
            h = d;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getheight(){
            return h;
        }
        long long int CalculateVolume(){
            return (long long int)(l * b * h);
        }
        bool operator<(Box &B) {
            if (l < B.l){
                return true;
            } 
            else if (l == B.l){
                if (b < B.b){
                    return true;
                } 
                else if (b == B.b){
                    if(h < B.h){
                    return true;
                    }
                }
            }

        return false;
    }
};



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout << temp <<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout << temp <<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox < temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}