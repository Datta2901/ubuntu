#include<bits/stdc++.h>
using namespace std;
// function to generate random numbers in range [0-999] : 
int randomize()  
{    
    return (rand() % 1000);  
} 
int main(){
  // for different values each time we run the code 
  srand(time(NULL));    
  vector<int> vect(10); // declaring the vector 
  
  // Fill all elements using randomize() 
  generate(vect.begin(), vect.end(), randomize); 
  
  // displaying the content of vector 
  for (int i=0; i<vect.size(); i++) 
     cout << vect[i] << " " ; 
  return 0;  
}



// Library Functions Used
// rand() Function–
// -> Generate random numbers from the range 0 to RAND_MAX (32767)
// -> Defined in <stdlib.h>/<cstdlib> header
// -> If we want to assign a random number in the range – m to n [n >= m] to a variable var, then use-
// var = m + ( rand() % ( n – m + 1 ) );
// -> This function is a run-time function. So the values – n, m must be declared before compiling just like we have to declare the size of array before compiling.
// -> Call this function every time you want to generate a random number

// time() Function
// -> Return the number of seconds from [00:00:00 UTC, January 1, 1970]
// -> Defined in <time.h> header

// srand(seed)
// -> Generates random number according to the seed passed to it.
// -> If this function is not used and we use rand() function then every time we run the program the same random numbers gets generated.
// -> To overcome the above limitation, we pass time(NULL) as a seed. Hence srand(time(NULL)) is used to generate random values every time the program is made to run.
// -> Always use this at the beginning of the program, i.e- just after int main() {
// -> No need to call this function every time you generate a random number
// -> Defined in <stdlib.h>/<cstdlib> header

// freopen(“output.txt”, “w”, stdout)
// -> Writes (that’s why we passed “w” as the second argument) all the data to output.txt file (The file must be in the same file as the program is in).
// -> Used to redirect stdout to a file.
// -> If the output.txt file is not created before then it gets created in the same file as the program is in.
// fclose(stdout)
// -> Closes the standard output stream file to avoid leaks.
// -> Always use this at the end of the program, i.e- just before return(0) in the int main() function.