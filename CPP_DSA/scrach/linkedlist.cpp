#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* addFirst(int data,Node *head){
    if(head==NULL){
        Node *newNode = new Node(data);
        head=newNode;
        return head;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
}
Node* addLast(int data,Node *head){
    if(head==NULL){
        Node *newNode = new Node(data);
        head=newNode;
        return head;
    }
    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    Node *newNode = new Node(data);
 
    temp->next = newNode;
    return head;  
}
Node* addIndex(Node* head,int ele,int ind){
    if(ind==0){
        return addFirst(ele,head);
    }
    Node* temp=head;
    while(temp->next!=NULL && ind>1){
        temp=temp->next;
        ind--;
    }
    Node* newNode = new Node(ele);
    newNode->next=temp->next;
    temp->next=newNode;
    return head;

}
Node *reverse(Node* head){
    Node *curr=head,*next=NULL,*prev=NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
void printN(Node *head){
    Node *temp = head;
    while (temp)
    {
        cout<< temp->data<<"-> ";
        temp  = temp->next;
    }
    cout<<"N";
    cout<<endl;
}
Node* deleteFirst(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    head= head->next;
    return head;
}
Node* deleteLast(Node *head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}
int main(){
    Node *head = NULL;
    head = addFirst(1,head);
    head = addFirst(2,head);
    head = addFirst(3,head);
    head = addFirst(4,head);
    head = addLast(5,head);
    printN(head);
    head=deleteFirst(head);
    printN(head);
     head=deleteLast(head);
    printN(head);
    head=addIndex(head,4,1);
   

    printN(head);
     head=addIndex(head,5,0);
     printN(head);
     head = reverse(head);
     printN(head);




    
    return 0;
}