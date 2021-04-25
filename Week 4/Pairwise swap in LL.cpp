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
void pairwiseswap(Node* head)
{
	Node* temp = head;
	//atleast 2 nodes condn
	while (temp != NULL && temp->next != NULL) 
	{
		swap(temp->d,temp->next->d);
		temp = temp->next->next;
	}
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
int main()
{	
	Node *head = NULL;
	int num; cin>>num;
	int A[num],i;
	for (i = 0; i < num; i++)
	{
	    cin>>A[i];
		push(&head, A[i]);
    }
	cout<<"\nGiven LL:";
	printL(head);
	pairwiseswap(head);
	cout<<"LL after pairwise swap: ";
	printL(head);
	return 0;
}
