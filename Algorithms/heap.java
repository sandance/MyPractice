import java.io.*;

class Node {
	private int iData; 
	public Node (int key)
	{
		iData=key;
	}
	public int getKey()
	{
		return iData;
	}
	public int setKey(int id)
	{
		iData = id;
	}
} // end class Node

class Heap {
	private Node[] heapArray;
	private int maxSize;
	private int currentSize;

	public Heap(int mx){
		maxSize = mx;
		currentSize =0;
		heapArray = new Node[maxsiZe];
	}
	
	public boolean isEmpty() 
	{
		return currentSize == 0;
	}

	public boolean insert(int key)
	{
		if(currentSize == maxSize)
			return False;
		Node newNode = new Node(key);
		heapArray[currentSize] = newNode;
		trickleUp(currentSize++);
		return true;
	}

	public void trickleup(int index)
	{
		int parent = (index - 1) / 2;
		Node bottom = heapArray[index];
		while ( index >0 && heapArray[parent].getKey() < bottom.getKey())
		{
			heapArray[index] = heapArray[parent];
			index = parent;
			parent = (parent -1) /2 ;
		}
		heapArray[index] = bottom;
	}	// end of Trickleup 

	public void trickleDown (int index)
	{
		int largetChild;
		Node top = heapArray[index];  // save root
		
		while (index < currentSize /2 ) // while node has at least one child 
		{
			int leftChild = 2*index +1;
			int rightChild = 2*index +2;
		
			if(rightChild < currentSize && heapArray[leftChild].getKey() < heapArray[rightChild].getKey())
					largetChild = rightChild;
			else
					largerChild = leftChild;
			
			if (top.getKey() >= heapArray[largerChild].getKey())
					break;
			heapArray[index] = heapArray[largerChild];
			index = largerChild;
		}

		heapArray[index] = top;
	}

	

	
	
