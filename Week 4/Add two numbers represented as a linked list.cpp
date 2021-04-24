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


Node* add2Num(Node* h1, Node* h2) 
{ //cout<<"Entered add fn";
	stack<int> s1,s2;
	while(h1!=NULL)
	{
		s1.push(h1->d);
		h1 = h1->next;
	}
	while(h2!= NULL)
	{
		s2.push(h2->d);
		h2 = h2->next;
	}
	int c=0;
	Node* res = NULL;
	while(s1.empty()==false || s2.empty()==false)
	{
		int a=0, b=0;
		if(s1.empty()==false)
		{
			a = s1.top();
			s1.pop();
		}
		if(s2.empty()==false)
		{
			b = s2.top();
			s2.pop();
		}
		int total = a + b + c;
		Node* temp = new Node();
		temp->d = total%10;
		c = total/10;
		if(res == NULL)
		{
			res = temp;
		}else
		{
			temp->next = res;
			res = temp;
		}
	}
	if(c!=0){
		Node* temp=new Node();
		temp->d=c;
		temp->next=res;
		res = temp;
	}
	return res;
}

void printL(Node *node)
{ cout<<"\nThe sum is: ";
	while (node != NULL)
	{   
		cout<<node->d;
		node = node->next;
	}
	cout<<endl;
}

int main()
{
	Node *head1 = NULL, *head2 = NULL;
	int m,n; cin>>m>>n;
	int A[m], B[n],i;
	for (i = 0; i < m; i++)
	{
	    cin>>A[i];
		push(&head1, A[i]);
    }
	for (i = 0; i < n; i++)
	{
		cin>>B[i];
		push(&head2, B[i]);
    }
	Node* ans = add2Num(head1, head2);
	printL(ans);

	return 0;
}
