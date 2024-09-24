#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node (int data){
        this->data = data;
        this->next = NULL;
    }

};
void insertathead(node * &head,int data){
    node * temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertatend(node * &head,int data){
    node * temp = head;
    node * n1 = new node(data);
    if(head == NULL){
        head = n1;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n1;
}
void insertatmiddle(node *&head,int pos ,int data){
    node * temp = head;
    node * n1 = new node(data);
    int curr_pos = 1;
    while(curr_pos != pos){
        temp = temp->next;
        curr_pos++;
    }
    n1->next = temp->next;
    temp->next = n1;
}
void deleteathead(node * &head){
    node * &temp = head;
    temp = temp->next;
    delete head;
}
void deleteatend(node * &head){
    node * temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    
}
void deleteatspecificposition(node *&head,int pos){
    node * temp = head;
    int curr_pos = 1;
    while(curr_pos != pos){
        temp = temp->next;
        curr_pos++;
    }
    temp->next = temp->next->next;
    delete temp->next;
}
void deleteinrange(node *&head,int p1,int p2){
    node * temp = head;
    node * prev = NULL;
    int curr_pos = 1;
    while(temp != NULL && curr_pos<p1){
        prev = temp;
        temp = temp->next;
        curr_pos++;
    }
    while(temp != NULL && curr_pos <=p2){
        node * next = temp->next;
        delete temp;
        temp = next;
        curr_pos++;
    }
    if (prev != NULL) {
        prev->next = temp;
    } else {
        head = temp;
    }
}
void print_ll(node * &head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node * head = NULL;
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,3);
    insertathead(head,4);
    insertathead(head,5);
    insertathead(head,6);
    insertatend(head,7);
    insertatend(head,8);
    insertatmiddle(head,3,9);
    deleteathead(head);
    deleteatend(head);
    deleteatspecificposition(head,2);
    print_ll(head);
}