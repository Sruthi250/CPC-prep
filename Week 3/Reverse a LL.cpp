#include <iostream>
using namespace std;

struct Node 
{
	int x;
	struct Node* next;
	Node(int x)
	{
		this->x = x;
		next = NULL;
	}
};

struct LinkedList 
{
	Node* head;
	LinkedList() //Constructor
	{ head = NULL; 
	}
	void ReverseLL()
	{
		Node* curr = head;
		Node *prev = NULL, *next = NULL;

		while (curr != NULL) 
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head = prev;
	}
   
	void printLL()
	{
		struct Node* t = head;
		while (t != NULL) 
		{
			cout<<t->x<<" ";
			t = t->next;
		}
	}

	void push(int x)  //Insert from beg: similar to stack
	{
		Node* temp = new Node(x);
		temp->next = head;
		head = temp;
	}
};

int main()
{   
    LinkedList LL;
    int num, c=0;
     cin>>num;
     for( int i =0; i<num; i++)
     {
         cin>>c;
         LL.push(c);
         
     }
     LL.printLL(); //original order
	   cout<<"\n"; 
     LL.ReverseLL();
     LL.printLL();
     return 0;
 }
