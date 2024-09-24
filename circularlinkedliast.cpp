#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int data){
        this->data = data;
        this->next = NULL;
    }

};


void insertathead(node * &head,int data){
    node * n1 = new node(data);
    if(head == NULL){
        head = n1;
        n1->next = head;
        return;
        // for making circular linked list
    }
    node * tail = head;
    while(tail->next != head){
        tail = tail->next;

    }
    // now it is pointing to the last node
    tail->next = n1;
    n1->next = head;
    head = n1;
    // we make this because we have to point to the head after pointing then head pointing to new node


}
void insertatend(node *&head,int data){
    node * temp = head;
    node * n1 = new node(data);
    if (head == NULL){
        //insertathead(head,data);
        head = n1;
        n1->next = head;
        return ;
    }
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n1;
    n1->next = head;

}
void insertatspecificposition(node * &head,int pos,int data){
    node * temp = head;
    node * n1 = new node (data);
    if (pos == 0){
        insertathead(head,data);
    }
    int curr_pos = 1;
    while(temp->next != head && curr_pos != pos){
        temp = temp->next;
        curr_pos++;
    }
    n1->next = temp->next;
    temp->next = n1;
}
void deleteatstart(node *&head){
    node * temp = head;
    if (head == NULL){
        return;
    }

    node * tail = head;
    while(tail->next != head){
        tail = tail->next;
    }
    head = temp->next;
    tail->next = head;
    delete temp;


}
void deleteatend(node *&head){
    node * temp = head;
    
    while(temp->next->next != head){
        temp = temp->next;
    }
    node * naya = temp->next;
    temp->next = head;
    delete naya;
}
void deleteatspecificposition(node *&head,int pos){
    node * temp = head;
    if(pos == 0){
        deleteatstart(head);
        return ;
    }
    int curr_pos = 1;
    while(temp->next != head && curr_pos != pos){
        temp = temp->next;
        curr_pos++;
    }
    node * tail = temp->next;
    temp->next = temp->next->next;
    delete tail;
}
void display(node * &head){
    node * temp = head;
    do{
        cout<<temp->data<<"-->";
        temp = temp->next;
    }while(temp != head);
    // we use do while loop instead of while loop initialy the temp value is head so it is not starts initially so we are using do while loop
   cout<<endl; 
}
int main(){
    node * head = NULL;
    insertathead(head,3);
    insertathead(head,4);
    insertathead(head,5);
    insertathead(head,6);
    insertathead(head,7);
    insertatend(head,2);
    insertatend(head,1);
    insertatspecificposition(head,3,10);
    deleteatstart(head);
    deleteatend(head);
    deleteatspecificposition(head,2);
    display(head);
}