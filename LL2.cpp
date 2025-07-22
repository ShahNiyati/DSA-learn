#include<iostream>
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
//array to LL
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
//traversal
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
//deleting last node 
Node* deletelast(Node* head){
    if(head==NULL || head->next==NULL){
        head=NULL;
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}
//deleting kth node 
Node* deleteKth(Node* head,int k){
    if(head == NULL){
        return NULL;
    }
    else if(k==1){
        Node* temp = head;
        head = temp->next;
        free(temp);
        return head;
    }
    else{
        Node *temp =head;
        Node *prev = NULL;
        int counter = 0;
        while(temp!=NULL){
            counter++;
            if(counter == k){
                prev->next = prev->next->next;
                free(temp);
                return head;
            }
            prev=temp;
            temp = temp->next;
        }
        return head;
    }
}
//deleting an element 
Node* deleteEl(Node* head,int val){
    if(head == NULL){
        return NULL;
    }
    else if(val==head->data){
        Node* temp = head;
        head = temp->next;
        free(temp);
        return head;
    }
    else{
        Node *temp =head;
        Node *prev = NULL;
        while(temp!=NULL){
            if(temp->data == val){
                prev->next = prev->next->next;
                free(temp);
                return head;
            }
            prev=temp;
            temp = temp->next;
        }
        return head;
    }
}
int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8};
    Node* head = converttoLL(arr);
    cout<<"Delete 1st element from the Linked List : "<<endl;
    head = deletefirst(head);
    print(head);
    cout<<"Delete last element from the Linked List : "<<endl;
    head = deletelast(head);
    print(head);
    cout<<"Delete Kth element from the Linked List : "<<endl;
    head = deleteKth(head,8);
    print(head);
    cout<<"Delete an element from the Linked List : "<<endl;
    head = deleteEl(head,3);
    print(head);

    return 0;
}