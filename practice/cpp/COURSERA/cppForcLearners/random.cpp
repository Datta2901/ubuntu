#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
using namespace std;

double prob(){
    return (static_cast<double>(rand())/RAND_MAX);
}

int main(){

    int size;
    double density;
    cout << "Enter the graph size\n";
    cin >> size;
    cout << "Enter the graph density\n";
    cin >> density;
    bool** graph;
    int** colour;
    int** cost;
    srand(time(0));
    graph = new bool*[size];
    colour = new int*[size];
    cost = new int*[size];

    for(int i = 0; i < size; i++){
        graph[i] = new bool[size];
        colour[i] = new int[size];
        cost[i] = new int[size];
    }

    for(int i = 0; i < size; i++){          //generating undirected graph
        for(int j = i; j < size; j++){

            if(i == j){

                graph[i][j] = false;
            }else{

                graph[i][j] = graph[j][i] = prob ;
            }
        } 
    }

    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(graph[i][j]){
                colour[i][j] = colour[j][i] = rand() % 3;
                cost[i][j] = cost[j][i] = prob()*30;

            }
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(graph[i][j]){

              cout << i << "\t" << j << "\t" << graph[i][j] << "\t" << colour[i][j]  << "\t" << cost[i][j] <<"\t"  ;
            }
        }
        cout<<endl;
    } 

    return  0;
}