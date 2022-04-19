#include<iostream>
#include<vector>

using namespace std;

// data structure to store a graph
struct Edge 
{
    int src,dest,weight;
};

typedef pair<int,int>Pair;
class Graph
{
    public:
        //a vector of vector of pairs to represent an adjacency list
        vector<vector<Pair>> adjList;
        Graph(vector<Edge>const &edges, int n)
        {
            //resize the vector to hold 'n' element of type vector<Edge>
            adjList.resize(n);
            //add edges to the directed graph
            for(auto &edge: edges)
            {
                int src = edge.src;
                int dest = edge.dest;
                int weight = edge.weight;

                //insert at the end
                adjList[src].push_back(make_pair(dest,weight));
                //uncomment the following code for the undirected graph
                //adjList[dest].push_back(make_pair(src,weight));

            }//end for
        }//end graph
};//end class

//function to print adjacency list
void printGraph(Graph const &graph, int n)
{
    for(int i = 0; i<n; i++)
    {
        //function print all neighboring vertices of a given vertex
        for(Pair v: graph.adjList[i])
        {
            cout<<"("<<i<<","<<v.first<<","<<v.second<<")";
        }
        cout<<endl;
    }//end for
}//end printGraph

int main()
{
    vector<Edge>edges ={
        //(x,y,w)-> edge from 'x' to 'y' with weight 'w'
        {0,1,6}, {1,2,7},{2,0,5},{2,1,4},{3,2,10},{5,4,1},{4,5,3}
    };
    //total number of nodes in the graph
    int n=6;
    Graph graph(edges,n);
    //print adjacency list representation of a graph
    printGraph(graph,n);

    return 0;
}
