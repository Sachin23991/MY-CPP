#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node * prev;
    node (int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
class doublylinkedlist{
    public:
    node * head;// it points towards the starting point
    node * tail;// it points at the end  of the list

    doublylinkedlist(){
            head = NULL;
            tail = NULL;
    }
    void insertathead(int data){
            node * n1 = new node(data);
            if(head == NULL){
                head = n1;
                tail = n1;
                return;
            }
            n1->next = head;
            head->prev = n1;
            head = n1;
    }
    void insertatend(int data){
        node * temp = head;
        node * n1 = new node(data);
        if(tail==NULL){
            head = n1;
            tail = n1;
            return;
        }
        
        tail->next = n1;
        n1->prev = tail;
        tail = n1;

    }
    void insertatposition(int pos,int data){
        node * temp = head;
        node * n1 = new node(data);
        int count = 1;
        while(count<(pos-1)){
            temp = temp->next;
            count++;
        }
        n1->next = temp->next;
        temp->next = n1;

        n1->prev = temp;
        n1->next->prev = n1;
        return;
    }
    void deleteatfirst(){
        if (head == NULL){
            return ;
        }
        node * temp = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
        }
        else{
            head->prev = NULL;
        }
        delete temp;
        return;
    }
    void deleteatlast(){
        if(head == NULL)return;
        node * temp = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        }
        else{
            tail->next = NULL;
        }
    }
    void deleteatspecificposition(int pos){
        node * temp = head;
        int count = 1;
        
        while(count<(pos)){
            
            temp = temp->next;
            count++;
        }
       
        
        

    }
    void display(){
        node * temp = head;
        while(temp!= NULL){
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    doublylinkedlist dll;
    dll.insertathead(1);
    dll.insertathead(2);
    dll.insertathead(3);
    dll.insertathead(4);
    dll.insertatend(5);
    dll.insertatend(6);
    dll.insertatposition(3,8);
    dll.deleteatfirst();
    dll.deleteatspecificposition(3);
    dll.display();
}