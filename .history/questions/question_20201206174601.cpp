// Implement a social media App with following functionalities: 
//  - Add user account with privacy (Public, Private (meaning its only visible to friends)) - returns a unique userId 
//  - Deactivate account (userId) - Deletes account forever, no re-activate etc.
//  - Search users (userId, searchTerm) - This should return the total count of users matched and at max 10 results (any of them). The results should align with people’s privacy settings, so an account with privacy as 'Private' should not appear in any user’s search if (s)he is not his/her friend
// Note: The searchTerm should come as a substring for the user to appear in the search results. 
//  - Add Friend (userId1, userId2)  - means these two users are friends now

/*
Answe
 
class Profile{
    private:
        int user_id;
        string name;
        int privacy;
        vector<int> friends;
        
    public:
        Profile(int id, string nn, bool pp){
            user_id=id;
            name=nn;
            privacy=pp;
            friends.resize(0);
        }
        
        string get_name(){
            return name;
        }
        
        string get_uid(){
            return user_id;
        }
        
        bool get_privacy(){
            return privacy;
        }
        
        vector<int> get_friends(){
            return friends;
        }
        
        void toggle_privacy(bool flag=false){
            privacy=false;
        }
        
        void add_Friend(int friend_id){
            for(int i=0;i<frineds;i++) if(friends[i]==friend_id) return;
            friends.push_back(friend_id);
        }
        
        void remove_Friend(int friend_id){
            for(int i=0;i<frineds;i++) if(friends[i]==friend_id) {
                swap(friends[i],friends.back());
                friends.pop_back();
                return;
            };
        }
                
}


vector<Profile> users;

void add_User(string name, bool privacy=false){
    int u_id=users.size();
    users.push_back(Profile(u_id,name,privacy));
}

void add_friend(int u_id1,int u_id2){
    users[u_id1].add_Friend(u_id2);
    users[u_id2].add_Friend(u_id1);
}


vector<int> search(int u_id,int mx_lim=10, int dist=5){
    vector<int> ans;
    set<int> st, visited;
    queue<pair<int,int>> bfsq;
    bfsq.push({u_id,0});
    while(!bfsq.empty() && ans.size()<=mx_lim){
        auto tp=bfsq.front();
        bfsq.pop();
        if(visited.find(tp.first)==visited.end() && tp.second<=dist){
            visited.insert(tp.first);
            if(tp.second>0 && st.find(tp.first)==st.end() && (!users[tp.first].get_privacy() || tp.second<=1)) {
                st.insert(tp.first);
                ans.push_back(tp.first);
            }            
            
            vector<int> fr = users[tp.first].get_friends();
            for(auto x:fr) bfsq.push({x,tp.second+1});
        }            
    }
}

void Deactivate(userId){
    vector<int> fr=users[userId].get_friends();
    for(auto x:fr) users[x].remove_Friend(userId);
    users[userId]=Profile(-1,"",false);
}



*/


#include<bits/stdc++.h>
using namespace std;
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