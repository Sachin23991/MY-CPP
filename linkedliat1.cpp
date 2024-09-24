#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertathead(node* &head,int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;

}
void print_ll(node * &head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node * head = NULL;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int data;
        cin>>data;
        insertathead(head,data);
    }
    print_ll(head);

}