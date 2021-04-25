#include<iostream>
#include<stdlib.h>

using namespace std;

#define SIZE 20

struct Node{
	int vertex;
	struct Node* next;
};
struct Graph{
	int numVertices;
	struct Node** adjlists;
	int* visited;
};

typedef struct Node N;
typedef struct Graph G; 

G* createGraph(int numVertices){
	G* graph= (G*)malloc(sizeof(G));
	graph->numVertices=numVertices;
	graph->adjlists=(N**)malloc(numVertices*sizeof(N*));
	graph->visited=(int*)malloc(numVertices*sizeof(int));
	
	for(int i=0; i<numVertices; i++){
		graph->adjlists[i]=NULL;
		graph->visited=0;
	}
	return graph;
}

N* createNode(int vertex){
	N* newNode=(N*)malloc(sizeof(N));
	newNode->vertex=vertex;
	newNode->next=NULL;
	return newNode;
}
void addEdge(G* graph, int src, int dest){
	N* newNode= createNode(dest);
	newNode->next=graph->adjlists[src];
	graph->adjlists[src]=newNode;
	
	newNode=createNode(src);
	newNode->next = graph->adjlists[dest];
	graph->adjlists[dest]=newNode;
}

void DFS(struct Graph* graph, int vertex) {
        struct node* adjList = graph->adjlists[vertex];
        struct node* temp = adjList;
        
        graph->visited[vertex] = 1;
        printf("Visited %d \n", vertex);
    
        while(temp!=NULL) {
            int connectedVertex = temp->vertex;
        
            if(graph->visited[connectedVertex] == 0) {
                DFS(graph, connectedVertex);
            }
            temp = temp->next;
        }       
}
int main(){
	G* graph= createGraph(5);
	addEdge(graph, 0,1);
        addEdge(graph, 0, 2);
        addEdge(graph, 1, 2);
        addEdge(graph, 1, 4);
        addEdge(graph, 1, 3);
        addEdge(graph, 2, 4);
        addEdge(graph, 3, 4);
	DFS(graph, 1);
	return 0;
}