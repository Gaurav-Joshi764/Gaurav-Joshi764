#include<list>
using namespace std;

class Graph
{
    int numVertices;
    list<int>*adjLists;
    bool* visited;

    public:
        Graph(int vertices);
        void addEdge(int src,int dest);
        void BFS(int startVertex);
};//end class

//create a graph with given vertices, and maintain an adjacency list
Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjLists = new list<int>[vertices];
}

//add edge to the graph
void Graph::addEdge(int src, int dest)
{
    adjLists[src].push_back(dest);
    adjLists[dest].push_back(src);
}

//BFS algorithm
void Graph::BFS(int startVertex)
{
    visited = new bool [numVertices];
    for(int i=0; i<numVertices; i++)
        visited[i] = false;
    
    list<int>queue;

    visited[startVertex] = true;

    queue.push_back(startVertex);

    list<int>::iterator i;

    while (!queue.empty())
    {
        int currVertex = queue.front();
        cout <<"Visited"<<currVertex<<" ";
        queue.pop_front();
        for(i=adjLists[currVertex].begin(); i!=adjLists[currVertex].end(); i++)
        {
            int adjVertex = *i;
            if(!visited[adjVertex])
            {
                visited[adjVertex] = true;
                queue.push_back(adjVertex);
            }//end if
        }//end for
    }//end while
    
}//end BFS