#include<bits/stdc++.h>
using namespace std;
class Node{
    public : 
        int data;
        Node* next;
    public : 
        Node(int data1,Node *next1){
            data = data1;
            next = next1;
        }

         Node(int data1){
            data = data1;
            next = nullptr;
        }
};
Node* converttoLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int lengthofLL(Node* head){
     Node* temp=head;
     int cnt =0;
    while(temp){
       
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
//check the element 
bool checkanelement(Node* head , int val){
    Node* temp=head;
    while(temp){
        if(temp->data == val) return true;
        temp = temp->next;
    }
    return false;
}
//deleting first node 
Node* deletefirst(Node *head){
    if(head==NULL){
        return head;
    }
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
int main()
{
    vector<int>arr={10,2,43,544};
    Node *y = new Node(arr[0], nullptr);
    Node *z = new Node(arr[1]); 
    cout << y<<endl; // prints memeory location
    cout << y->data<<endl;

     Node x =  Node(arr[0], nullptr);
     cout<<x.data<<endl;
     cout<<x.next<<endl;

     // Array to LL
    Node* head = converttoLL(arr);
    cout<<head->data<<endl;

    // traversal 
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    //length of LL
    int length = lengthofLL(head);
    cout<<"Length of Linked List is : "<<length<<endl;

    //Search an element 
    int val;
    cout<<"Enter a number : ";
    cin>>val;
    if(checkanelement(head,val)){
        cout<<"Present.";
    }
    else{
        cout<<"Absent.";
    }
    return 0;
}