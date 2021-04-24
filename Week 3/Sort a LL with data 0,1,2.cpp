#include<iostream>
using namespace std;

class Node
{
	public:
	int d;
	Node* next;
};

void sortList(Node *head)
{
	int count[3] = {0, 0, 0}; // we can instead use 3 variables a,b,c
	Node *ptr = head;

	while (ptr != NULL)
	{
		count[ptr->d] += 1; //if(ptr->d ==0) { a++;} similarly for 1 and 2
		ptr = ptr->next;
	}

	int i = 0;
	ptr = head;

	while (ptr != NULL)
	{
		if (count[i] == 0)
			i++;
		else
		{
			ptr->d = i;
			count[i]--;
			ptr = ptr->next;
		}
	}
}

void push (Node** h_ref, int data)
{
	Node* new_node = new Node();

	new_node->d = data;

	new_node->next = (*h_ref);
	(*h_ref) = new_node;
}

void printL(Node *node)
{
	while (node != NULL)
	{
		cout << node->d << " ";
		node = node->next;
	}
	cout << endl;
}

int main(void)
{
	Node *head = NULL;
	int n,c =0; cin>>n; 
	for(int i =0; i<n; i++)
	{ cin>>c;
	  push(&head, c);
	}

	cout<<"LL: ";
	printL(head);
	sortList(head);
	cout << "Sorted LL: ";
	printL(head);
	return 0;
}

