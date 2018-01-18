#include <iostream>
using namespace std;

  struct node // structure having variable for data section and a pointer for the next node. 
  {
    int data;
    node *next;
  };	
  
   class linkedList //  class  containing the functions to handle the nodes
  {
    private:
    node *head, *tail; //Declaring two important pointers, i.e. head and tail
    public:
    linkedList() //The constructer will make them NULL to avoid any garbage value.
    {
      head=NULL;
      tail=NULL;
    }
    void insert(int value)
    {
      node *temp=new node;
      temp->data=value;
      temp->next=NULL;
      if(head==NULL)
      {
        head=temp;
        tail=temp;
        temp=NULL;
      }
      else
      {	
        tail->next=temp;
        tail=temp;
      }
    }
    void insertAt(int pos,int value)// to insert element at a certain position
    {
    node *cur=new node;
    node *prev=new node;
    node *temp= new node;
    cur= head;
    temp->data=value;
    for(int i=1;i<pos;i++)
    { prev= cur;
     cur=cur->next;	
    }
    prev->next=temp;
    temp->next=cur;
    
    }
    
    void Delete()// delete element at the end of list
    {
    	node*cur=new node;
    	node*prev=new node;
    	cur=head;
    	while(cur->next!=NULL)
    	{
    	prev=cur;
    	cur=cur->next;
    	}
    	tail=prev;
    	prev->next=NULL;
    	delete cur;
    }
   void display()// to display the elements
    {
    	node*temp= new node;
    	temp=head;
    	while(temp!=NULL)
    	{
    		cout<<temp->data<<"->";
    		
    		temp=temp->next;
    	}
    cout<<"NULL"<<endl;
   }
    
  };	
int main() {
 linkedList l; // Declaring object of class linkedList
 l.insert(1);
 l.insert(2);
 l.display();
 l.insertAt(2,3);
 l.display();
 l.Delete();
 l.display();

	return 0;
}
