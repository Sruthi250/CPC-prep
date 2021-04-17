#include<iostream>
using namespace std;

struct Node 
{
	int data;
	struct Node* next;
};
struct Node *head = NULL;
void print_nthfromlast(struct Node* head, int n)
{
	int length = 0, i;
	struct Node* temp = head;
	while (temp != NULL) 
	{
		temp = temp->next;
		length++;
	}

	if (length < n)
		return;
	temp = head;
	for (i = 1; i < length-n+1; i++)
		temp = temp->next;
		
    cout << temp->data;
	return;
}


void insertatlast(int item)  
 {  
    struct Node *ptr = new Node();     
    struct Node *temp;  
    if(ptr == NULL)  
    {  
      //cout<<"Overflow";   
      exit(0);
    }  
    else  
    {  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr->next = NULL;  
            head= ptr;  
            //cout<<"Inserted head";
        }  
        else  
        {  
            temp = head;  
            while (temp->next != NULL)  
            {  
                temp = temp->next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            //cout<<"Inserted";
              
        }  
        
    }
 }    
 
 int main()
 {  
     int num, n, c=0;
     cin>>num>>n;
     for( int i =0; i<num; i++)
     {
         cin>>c;
         insertatlast(c);
     }
     print_nthfromlast(head, n);
     return 0;
 }
