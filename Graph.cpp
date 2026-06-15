#include<iostream>
using namespace std;
//Graph Class
class Graph{
    private:
        //pointer to adjacency matrix
        bool **adjMatrix;

        //Total number of vertices
        int vertices;

    public:
        //Constuctor 
        Graph(int vertices){
            //store totalvertices 
            this->vertices=vertices;
            //Create rows dynamically 
            adjMatrix=new bool *[vertices];
            //create columns dynamically
            for(int i=0;i<vertices;i++){
                adjMatrix[i]=new bool[vertices];
                for (int j=0;j<vertices;j++){
                    adjMatrix[i][j]=false;
                }
            }
        }
        //function to add edge 
        void addegde(int source,int destination){
            //since graph is undirected
            adjMatrix[source][destination]=true;
            adjMatrix[destination][source]=true;
        }
        //display adjmatrix
        void display(){
            cout<<"\nAdjacency Matrix\n\n";
            for(int i=0;i<vertices;i++){
                for(int j=0;j<vertices;j++){
                    cout<<adjMatrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }        
};
int main(){
    //create graph with 6 vertices
    Graph g(6);//object

    //main gate<->library
    g.addegde(0,1);
    g.addegde(0,2);//m<->c
    g.addegde(1,3);
    g.addegde(2,3);
    g.addegde(3,4);
    g.addegde(4,5);

    g.display();

    return 0;
}