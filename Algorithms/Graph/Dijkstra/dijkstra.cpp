#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// C program for Dijkstra's shortest path algorithm

// A Structure to represent a node in adjacency list

struct AdjListNode
{
	int dest;
	int weight;
	struct AdjListNode *next;
};

// A structure to represent adjacency list
struct AdjList 
{
	struct AdjListNode *head;
	// Pointer to head node in the list
};


// A struct to represent a graph 
struct Graph 
{
	int V;
	struct AdjList *array;
};

// A Utility function to create a new adjacency list node

struct AdjListNode * newAdjListNode(int dest, int weight)
{

	struct AdjListNode *newNode= (struct AdjListNode *) malloc(sizeof(AdjListNode));
	newNode->dest = dest;
	newNode->weight = weight;
	newNode->next=NULL;
	return newNode;
}


//A utility function that creat a graph

struct Graph * createGraph(int V)
{
	struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
	graph->V=V;
	
	//create an array of adjacency list
	graph->array = (struct AdjList *) malloc(V*sizeof(struct AdjList));		for(int i=0; i<V;++i)
		graph->array[i].head = NULL;

	return Graph;

}

	//Adds an edge to an undirected graph
void addEdge(struct Graph *graph, int src, int dest, int weight)
{
	//Add an edge from src to dest

	struct AdjListNode *newNode = newAdjListNode(dest, weight);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;

	// Since graph is undirected , add an edge from dest to src also

	newNode =newAdjListNode(src,weight);
	newNode->next = graph->array[dest].head;
	graph->array[dest].head = newNode;
}


//Structure to represent a min heap

struct MinHeapNode
{
	int v;
	int dist;
};

// Structure to represent a min heap
struct MinHeap
{
	int size; // Number of heap nodes present currently
	int capacity; // capacity of min heap
	int *pos; 
	struct MinHeapNode **array;
};


// A Utility function to create a new min Heap Node

struct MinHeapNode * newMinHeapNode(int v, int dist)
{
	struct MinHeapNode * minHeapNode =(struct MinHeapNode*)malloc(sizeof(struct MinHopeNode));
	minHeapNode->v=v;
	minHeapNode->dist = dist;
	return minHeapNode;
}

struct MinHeap * createMinHeap(int capacity)
{
	struct MinHeap *minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));

	minHeap->pos =(int *)malloc(sizeof(int) * capacity);
	minHeap->size=0;
	minHeap->capacity = capacity;
	minHeap->array = (struct MinHeapNode *)malloc(capacity*sizeof(struct MinHeapNode));
	return minHeap;
}


// A utility function to swap two nodes of min heap

void swapMinHeapNode(struct MinHeapNode **a, struct MinHeapNode **b)
{
	struct MinHeapNode* t= *a;
	*a =*b;
	*b =t;
}
// check out the algorithm 
//http://www.personal.kent.edu/~rmuhamma/Algorithms/MyAlgorithms/Sorting/heapSort.htm
void minHeapify(struct MinHeap *minHeap, int idx)
{
	int smallest, left, right;
	smallest = idx;

	left = 2*idx +1;
	right= 2*idx +2; 

	if (left  < minHeap->size and minHeap->array[left]->dest < minHeap->array[smallest]->dist)
		smallest = left;

	if ( right < minHeap->size and minHeap->array[right]->dist < minHeap->array[smallest]->dist )
		smallest = right;

	if(smallest !=idx)
	{
		
	


