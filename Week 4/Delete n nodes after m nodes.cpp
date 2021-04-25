#include<iostream>
#include<stack>

using namespace std;
class Node
{
	public:
	int d;
	Node* next;
};
//Insert from beg
void push(Node** h_ref, int data)
{
	Node* new_node = new Node[sizeof(Node)];
	new_node->d = data;

	new_node->next = (*h_ref);
	(*h_ref) = new_node;
	//cout<<"Insert fn";
}

void printL(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout<<temp->d<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void skipmdeleten(Node *head, int m, int n)
{
	Node *curr = head, *t;
	int c;

	while (curr)
	{  //traversing m nodes
		for(c = 1; c < m && curr!= NULL; c++)
			curr = curr->next;

		if(curr == NULL)
			return;

		t = curr->next;
		//deleting n nodes
		for(c = 1; c <= n && t!= NULL; c++)
		{
			Node *temp = t;
			t = t->next;
			free(temp);
		}
		curr->next = t;
		curr = t;
	}
}

int main()
{	
	Node *head = NULL;
	int num,m,n; cin>>num>>m>>n;
	int A[num],i;
	for (i = 0; i < num; i++)
	{
	  cin>>A[i];
		push(&head, A[i]);
  }
	cout<<"\nGiven LL:";
	printL(head);
	skipmdeleten(head, m, n);
	cout<<"LL after deletion: ";
	printL(head);
	return 0;
}
