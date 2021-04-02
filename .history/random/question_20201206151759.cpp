// Implement a social media App with following functionalities: 
//  - Add user account with privacy (Public, Private (meaning its only visible to friends)) - returns a unique userId 
//  - Deactivate account (userId) - Deletes account forever, no re-activate etc.
//  - Search users (userId, searchTerm) - This should return the total count of users matched and at max 10 results (any of them). The results should align with people’s privacy settings, so an account with privacy as 'Private' should not appear in any user’s search if (s)he is not his/her friend
// Note: The searchTerm should come as a substring for the user to appear in the search results. 
//  - Add Friend (userId1, userId2)  - means these two users are friends now


#include<bits/stdc++.h>
using namespace std;

// list<obj> 
// unordered_map<obj,friends>

class Details{
    public:
        string name,PrivactType;

        static long int count = 0;
        long int AddAcccount(string name,string PrivacyType){
        
            return count++;
        }
        void DeactivateAccount(long int userId){
            
        }
}




int main(){



    return 0;
}