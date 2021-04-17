#include<iostream>
#include<cstdlib>
using namespace std;

struct Node 
{
	int data;
	struct Node* next;
};
struct Node *head = NULL;
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
 
void Dellist(Node** h)
{
    Node* curr = *h;
    Node* next = NULL;
 
    while (curr != NULL)
    {
        next = curr->next;
        free(curr);
        curr = next;
    }
 
    *h = NULL;
    cout<<"Deleted";
    
}
 
 int main()
 {  
     int num, n, c=0;
     cin>>num;
     for( int i =0; i<num; i++)
     {
         cin>>c;
         insertatlast(c);
     }
     Dellist(&head);
     return 0;
 }


