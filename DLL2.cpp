#include<iostream>
using namespace std;
//in singly linked list you can not go back
//in doubly linked list the node storing the data as well as pointer to next node and pointer to previous node
class Node{
    public : 
    int data;
    Node* next;
    Node* prev;
    
    Node(int data1,Node* next1 , Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};
Node* convertToDll(Node* head,vector<int> &arr,int n){
    Node* temp2 = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);
        temp->prev = temp2;
        temp2->next = temp;
        temp2 = temp;
    }
    return head;
}
void printDll(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int countNodes(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
//Insert Node before head
Node* insertBeforeHead(Node* head , int val){
    if(head==NULL){
        head = new Node(val,nullptr,nullptr);
        return head;
    }
    Node* temp = new Node(val,head,nullptr);
    head->prev = temp;
    head = temp;
    return head;
}
//Insert a node before tail
Node* insertBeforeTail(Node* head,int val){
    if(head==NULL && head->next==NULL){
        return insertBeforeHead(head,val);
    }
    Node* beforeTail = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    beforeTail->next = temp;
    beforeTail->prev = temp->prev;
    temp->prev->next = beforeTail;
    temp->prev = beforeTail;
    return head;
}
//insert Node before kth pos
Node* insertBeforeKth(Node* head,int val,int pos){
    if(head==NULL & head->next==NULL){
        return insertBeforeHead(head,val);
    }
    Node* temp =head;
    int count= 0;
    while(temp->next!=NULL){
        count++;
        if(count==pos){
            break;
        }
        temp = temp->next;
    }
    Node* beforeKth = new Node(val);
    beforeKth->next = temp;
    beforeKth->prev = temp->prev;
    temp->prev->next = beforeKth;
    temp->prev = beforeKth;
    return head;
}
//Insert Node before Node
void insertBeforeNode(Node* givenNode, int val){
    Node* temp = givenNode->prev;
    Node* newNode = new Node(val,givenNode,temp);
    temp->next = newNode;
    givenNode->prev = newNode;
    return;
}
int main()
{
    vector<int> arr = {2,3,4,6,7,8,10};
    int count = 0;
    int n = arr.size();
    //convert array into DLL
    Node* head = new Node(arr[0]);
    head = convertToDll(head,arr,n);
    cout<<"Double Linked List is : "<<" "; 
    printDll(head);
    cout<<endl;

    //count the nodes
    count = countNodes(head);
    cout<<"Total Nodes in List are : "<<count<<endl;
    cout<<endl;

    int val;
    //Insert the node before head
    cout<<"Enter a value you want to add before head : ";
    cin>>val;
    head = insertBeforeHead(head,val);
    printDll(head);
    cout<<endl;

    //Insert node before tail
    int val2;
    cout<<"Enter a value you want to add before the tail: ";
    cin>>val2;
    head = insertBeforeTail(head,val2);
    printDll(head);
    cout<<endl;

    //insert node before kth pos
    int pos;
    int val3;
    cout<<"Enter a position : ";
    cin>>pos;
    cout<<"Enter a node you want to insert before "<<pos<<"th position : ";
    cin>>val3;
    head = insertBeforeKth(head,val3,pos);
    printDll(head);
    cout<<endl;

    //Insert a node bofore a node;
    cout<<"I am add 105 before the node which value is 4 : ";
    cout<<endl;
    insertBeforeNode(head->next->next->next,105);
    printDll(head);
    cout<<endl;
    return 0;
}