#include<iostream>
using namespace std;
//Linked list 
// Func 1)Insert 2) remove 3)Empty 4) reverse
struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next = nullptr;
    }
};
class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head=nullptr;
    }
    LinkedList(int data){
        head = new Node(data);
    }
    ~LinkedList(){
        Node* temp;
        while(head!=nullptr){
            temp=head;
            head=head->next;
            delete temp;
        }
    }
    void insertFront(int data){
        Node* newNode = new Node(data);
        if(empty()){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }

    void insertLast(int data){
        Node* newNode = new Node(data);
        Node* temp=head;
        if(empty()){
            head=newNode;
        }
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void remove(int val){
        if(empty()) return;
        //delete node is head
        if(head->data == val){
            Node* temp = head;
            head=head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while(temp->next!=nullptr && temp->next->data!=val){
            temp=temp->next;
        }
        if(temp->next==nullptr) return;
        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
        return;
    }

    bool empty(){
        return head==nullptr;
    }

    void reverse(){
        Node *curr=head,*prev=nullptr,*next=nullptr;
        while (curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }

    void printList(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList list;
    list.insertFront(10);
    list.insertFront(20);
    list.insertFront(30);
    list.insertFront(40);
    list.insertLast(140);
    list.insertLast(110);

    list.printList();
    list.remove(20);
    list.printList();
    list.reverse();
    list.printList();

    LinkedList list2(10);
    list2.printList();


    return 0;
}