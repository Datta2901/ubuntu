// Implement a social media App with following functionalities: 
//  - Add user account with privacy (Public, Private (meaning its only visible to friends)) - returns a unique userId 
//  - Deactivate account (userId) - Deletes account forever, no re-activate etc.
//  - Search users (userId, searchTerm) - This should return the total count of users matched and at max 10 results (any of them). The results should align with people’s privacy settings, so an account with privacy as 'Private' should not appear in any user’s search if (s)he is not his/her friend
// Note: The searchTerm should come as a substring for the user to appear in the search results. 
//  - Add Friend (userId1, userId2)  - means these two users are friends now

#include<bits/stdc++.h>
using namespace std;
#define printMap(unordered_map<int,vector<int> > a) for(auto it = a.begin(); it != a.end(); it++){ cout << *it << " -> ";for(auto ip = it->second.begin(); ip != it->second.end(); ip++){ cout << *ip << " "} cout << endl;}
long int c;

class Details{
    public:
        string name,PrivacyType;
        long int userId,verify;
        Details(string a,string b){
            name = a;
            PrivacyType = b;
            verify = 0;
        }
};

list<Details> Users; 
unordered_map<int,vector<int> > Friends;

long int AddAccount(string name,string PrivacyType){
    Details obj(name,PrivacyType);
    c++;
    if(obj.verify == 0){
        obj.userId = c;
        Users.insert(Users.end(),obj);
        return c;
    }
}

void AddFriends(long int userId1,long int userId2){
    Friends[userId1].push_back(userId2);
    Friends[userId2].push_back(userId1);
}

void DeactivateAccount(long int userId){

    for(auto it = Friends[userId].begin(); it != Friends[userId].end(); it++){
        for(auto ip = Friends[*it].begin(); ip != Friends[*it].end(); ip++){
            if(*ip == userId){
                Friends[*it].erase(ip);
            }
        }
    }
    Friends.erase(userId);

    for(auto it = Users.begin(); it != Users.end(); it++){
        if(it->userId == userId){
            it->verify = 1;
        }
    }
}



int main(){
    Details obj("b","Public");
    long int a = AddAccount("a","private");
    long int b = AddAccount("b","p");
    cout << a << " " << b << endl; 
    AddFriends(a,b);
    long int c = AddAccount("c","private");
    long int d = AddAccount("d","private");
    AddFriends(a,c);
    AddFriends(b,d);
    
    
    return 0;
}