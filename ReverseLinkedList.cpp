# include <iostream>
using namespace std;


class Node{

    public:
    int data;
    Node *next;

    Node(int value){
        this->data=value;
        this->next=NULL;

    }
};

Node* reverse_LL(Node *&head){

    // base case
    if(head==NULL || head->next==NULL){
        return head;
    }
   
   Node * curr=head;
   Node * prev=NULL;
   Node * forward=NULL;

   while(curr!=NULL){

      forward=curr->next;
      curr->next=prev;
      prev=curr;
      curr=forward;
   }

   // head=prev

  return prev;
}


int main(){
    
    Node *head;
    reverse_LL(head);

    return 0;
}
