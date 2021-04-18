#include<iostream>
#include<unordered_set>
using namespace std;

struct Node 
{
	int data;
	struct Node* next;
};
struct Node *head = NULL;

bool has_cycle() 
{
    unordered_set<Node*> us;
    while(head!= NULL)
    {
        if(us.find(head) != us.end())
            return true;
        us.insert(head);
        head = head->next;
    }
    return false;
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
     int num, c=0, res;
     cin>>num;
     for( int i =0; i<num; i++)
     {
         cin>>c;
         insertatlast(c);
     }
     //head->next->next = head; 
     res = has_cycle();
     cout<<res;
     return 0;
 }
