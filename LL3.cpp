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
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
Node* insertAtBegin(Node * head ,int val){
    Node *temp = new Node(val , head);
    return temp;
}
Node* insertAtEnd(Node *head, int val){
    Node* end = new Node(val);
    Node *temp = head;
    if(head == NULL){
        return new Node(val);
    }
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = end;
    return head;
}
Node* insertAtKth(Node* head ,int val ,int k){
    int n = lengthofLL(head);
    if(k>n+1 && k<1){
        cout<<"invalid position";
        return nullptr;
    }
    else if(head==NULL){
        if(k==1){
            return new Node(val);
        }
    }
    else if(k==1){
        Node* temp = new Node(val,head);
        return temp;
    }
    Node *temp = head;
    int counter=0;
    while(temp!=NULL){
        counter++;
        if(counter == k-1){
            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
Node* insertBeforeValue(Node* head ,int el ,int val){
    if(head==NULL){
        return NULL;
    }
    else if(head->data==val){
        return new Node(el,head);
    }
    Node *temp = head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            Node *newNode = new Node(el);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int>arr={5,6,7,8};
    Node* head = converttoLL(arr);
    //insert at beginning  : 
    // int val1;
    // cout<<"Enter a value you want to add at front : "<<endl;
    // cin>>val1;
    // head = insertAtBegin(head ,val1);

    //insert at end : 
    // int val2;
    // cout<<"Enter a value you want to add at end : "<<endl;
    // cin>>val2;
    // head = insertAtEnd(head ,val2);

    // insert at k th position
    // int val3;
    // cout<<"Enter a value you want to add: "<<endl;
    // cin>>val3;
    // int pos;
    // cout<<"Enter a position you want to add that element : "<<endl;
    // cin>>pos;
    // head = insertAtKth(head,val3,pos);
    // print(head);

    //insert an element before that value come
    int val4;
    cout<<"Enter a element you want to add : ";
    cin>>val4;
    int val5;
    cout<<"Enter a value that you want to come after that element:  ";
    cin>>val5;
    head = insertBeforeValue(head,val4,val5);
    print(head);
    return 0;
}