#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int val){
        data =val;
        next = NULL;
    }
};

void insertAtTail(node*&head,int val ){ //taking it with reference coz we need to modify the linkedlist

    node*n =new node(val);

    if(head == NULL){
        head =n;
        return;
    }
    node*temp = head;
    while(temp->next !=NULL){
        temp=temp->next;
}

    temp->next = n;  //new node inserted

}

void insertAthead(node*&head,int val){

    node* n =new node(val);
    n->next = head;
    head =n;


}

void display(node * head) //pass by value

    {
        node* temp =head;
        while(temp!= NULL)
        {
            cout<<temp->data<<"";
            temp =temp->next;
        }
        cout<<endl;
    }

    bool search(node*head ,int key)
    {
        node*temp = head;
        while(temp!=NULL)
        {
            if(temp->data ==key)
            {
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

    void deletion(node*&head,int val)
    {

        /*if(head ==NULL)
            {
                return;
            }
        if(head->next = NULL)
        {
            deleteAtHead(head);
            return;
        }*/

        node*temp = head;
        while(temp->next->data!=val){
            temp=temp->next;
        }
        node*todelete =temp->next;
        temp->next =temp->next->next;

        delete todelete;
    }

    void deleteAtHead(node*&head)
    {
        node* todelete =head;
        head =head->next;

        delete todelete;
    }
node* reverse(node* &head)
{
    if(head == NULL || head->next ==NULL)
    {
        return head;
    }

    node* prevptr = NULL;
    node* currptr =head;
    node* nextptr;

    while(currptr!= NULL){
        nextptr = currptr -> next;
        currptr -> next = prevptr;

        prevptr = currptr;
        currptr = nextptr;

    }

    return prevptr;
}
node* reverseRecursive(node* &head){

    if(head == NULL || head->next ==NULL)
    {
        return head;
    }

    node*newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next = NULL;

    return newhead;

}






    int main(){
    node*head =NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAthead(head,4);
    deleteAtHead(head);
    deletion(head,3);
    display(head);
    node* newhead = reverseRecursive(head);
    display(newhead);
    return 0;
    }
