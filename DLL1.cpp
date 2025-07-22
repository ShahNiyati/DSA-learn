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
Node* deleteHead(Node *head){
    //DLL is empty
    if(head==NULL){
        return head;
    }//DLL has only 1 node 
    Node* temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;

    return head;
}
Node* deleteFromEnd(Node* head){
    //DLL is empty
    //DLL has only one node
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    else{
        Node* tail = head;
        while(tail->next!=NULL){
            tail = tail->next;
        }
        Node* newTail = tail->prev;
        tail->prev = nullptr;
        newTail->next = nullptr;
        delete tail;
        return head;
    } 
}
Node* deleteFromKth(Node* head , int k){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp = temp->next;
    }
    Node* front = temp->next;
    Node* back = temp->prev;
    //DLL has only 1 element
    if(front==NULL && back==NULL){
        delete temp;
        return head;
    }// k is last position
    else if(front==NULL){
        head = deleteFromEnd(head);
        return head;
    }// k is first position
    else if(back==NULL){
        head = deleteHead(head);
        return head;
    }//remaining portion of DLL
    else{
        back->next = front;
        front->prev = back;
        temp->next = nullptr;
        temp->prev = nullptr;
        return head;
    }
}
void deleteNode(Node* temp){
    Node* front = temp->next;
    Node* back = temp->prev;

    if(front==NULL){
        back->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return;
    }
    front->prev = back;
    back->next = front;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return;
}
int main()
{
    vector<int> arr = {5,6,7,8,9,10,11,12};
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

    //delete head
    head = deleteHead(head);
    cout<<"After First Node is Deleted : "<<" "; 
    printDll(head);
    cout<<endl;
    
    //delete last node
    head = deleteFromEnd(head);
    cout<<"After Last Node is Deleted : "<<" "; 
    printDll(head);
    cout<<endl;

    //delete perticular node with position
    int pos=-1;
    cout<<"Which position's number you want to delete ? ";
    cin>>pos;
    head = deleteFromKth(head,pos);
    cout<<"After Kth Node is Deleted : "<<" "; 
    printDll(head);
    cout<<endl;

    //delete Node (it is not possible that node is head)
    deleteNode(head->next->next);
    printDll(head);
    cout<<endl;

    return 0;
}