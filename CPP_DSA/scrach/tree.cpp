#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* insert(Node* root,int ele){
    if(root==NULL){
        Node *newNode = new Node(ele);
        root=newNode;
        return root;
       
    }
    if(root->data ==ele){
        cout<<"Dupilcates element are not allow";
        return root;
    }
    if(root->data<ele){
        root->right = insert(root->right,ele);
    }else if(root->data>ele){
        root->left = insert(root->left,ele);
    }
    return root;
}
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"-> ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<"-> ";
    inOrder(root->right);
}
void search(Node *root,int ele){
    if(root==NULL){
        cout<<"element not found";
        return;
    }
    if(root->data==ele){
        cout<<"element are found";
        return;
    }else if(root->data>ele){
        search(root->left,ele);
    }else{
        search(root->right,ele);
    }
}
void levelOrder(Node *root){
    if(root==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            if(q.empty()){
                break;;
            }else{
                q.push(NULL);   
            }
        }else{
            cout<<curr->data<<"->";
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }

}
int main(){
    Node* root = NULL;
    root=insert(root,10);
    root=insert(root,5);
    root=insert(root,12);
    root=insert(root,4);
    root=insert(root,6);
    root=insert(root,9);
    root=insert(root,13);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    // search(root,10);
    cout<<endl;
    levelOrder(root);



    return 0;
}