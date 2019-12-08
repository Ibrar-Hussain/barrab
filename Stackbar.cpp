#include<iostream>
using namespace std;

class node{
	public:
		node *next;
		int data;
};
class stack{
	private:
 node *head;
	public:
		stack(){
			head=NULL;
		}
	void push(int a){
			node *tptr=head;
			node *nptr=new node;
			nptr->data=a;
			nptr->next=NULL;
			if(head==NULL){
				head=nptr;
			}
			else{
				nptr->next=head;
				head=nptr;
			}
		}
		int pop(){
			int d=-1;
			if(head==NULL)
				return d;
			else
			{
				d=head->data;
				head=head->next;
				return d;
			}
			
		}
		void display(){
			node *ptr;
			ptr=head;
			while(ptr!=NULL){
				cout<<ptr->data<<endl;
				ptr=ptr->next;
			}
			
		}
		
};
int main(){
stack ss;
ss.push(3);
ss.push(4);
ss.push(5);
ss.push(6);
ss.display();
ss.pop();
ss.pop();
cout<<"After popping list is "<<endl;
ss.display();
}
