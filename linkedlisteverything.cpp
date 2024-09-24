#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this-> next = NULL;
    }
};
void print_ll(node * &head){
    if (head == NULL){
        cout<<"The linked list is empty"<<endl;
    }
    node * temp = head;// we will do this we dont want to interupt the orignal value of head
    cout<<"The Linked List: ";
    while(temp != NULL){
        
        cout<<temp->data<<"-->";
        temp =  temp->next; // we use it because we want to acess another value now we updating the temp value
    }
    cout<<endl;
}
void insertatstart(node* &head,int data){
    node* temp = new node(data);// that we are taking this new node because we want to add it at the begining
    if (head == NULL){//we can use here head also
    cout<<"The linked list is empty"<<endl;
    }
    temp->next = head;
    head = temp;//we are assinging it as head because linked list start from the head now we are assigning that new node as head

}
void insertatend(node* &head,int data){
    node * temp = new node(data);
    if (head == NULL){// we are at last position
    cout<<"We are at last position";
    return;//returns null this means we are at the end
    }
    node* end = head; //currently this pointer as at head use for traversing the list
    while(end->next != NULL){
        end = end->next;
    }//it wil use for traversing now we at last
    if(end->next==NULL){
        end->next= temp;
    }//it inserted at the last
}
void insertatmiddle(node* &head,int pos,int data){
    node* temp = new node(data);
    if(head == NULL){
        cout<<"We are at last position";
        return;
    }
    node * mid = head;// we aree taking this to transverse upto middle
    while(mid->data != pos){// we are using here negation because upto our desired position it will traverse if we give equal then it comes out of the loop and executed only once
        mid = mid->next;
    }
    temp->next = mid->next;
    mid->next = temp;
}

void insertdataatmiddlebypointer(node * &head,int pos,int data){
    
}
void deletedata(node* &head,int data){
    node* temp = head;
    if (temp->data == data){
        /*we are using temp->data == data because it traverse upto that data
        that we want to delete*/
        head = temp->next;
    }
    node *pre;
    while(temp->data != data){
        if(temp->next == NULL){
            return;
            /*if the data we want to delete is not present in the list thats 
            why we are retturning nothing*/
        }
        pre = temp;
        temp = temp->next;
    }
    pre->next = pre->next->next;
    /*we are taking pre->next->next because the data we want to delete will be deleted
    and we should assign the data to deleted element next node means we have linked list
    like 1 2 3 4 5 and we want to delete 4 so we should assign 3 next to 4th next to next
    which is 5 thats why we are using this*/

    // this is using for last
    if(temp->next == NULL){
        pre->next = temp->next;
    }
}
/*#include<iostream>
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
    if (head == NULL) return;

    node* temp = head;

    if (pos == 0) {
        head = head->next;
        delete temp;
        return;
    }

    node* prev = NULL;
    int curr_pos = 0;
    while (temp != NULL && curr_pos != pos) {
        prev = temp;
        temp = temp->next;
        curr_pos++;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    delete temp;
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
}*/
int main(){
    // we assign head to the first element address of linked list
    node * head =NULL;// we do it because it refers to first element
    node* n1 = new node(3);
    cout<<"First element: "<<n1->data<<endl;//basic
    head = n1;
    node* n2 = new node(5);
    n1->next  = n2;
    cout<<"Second element: "<<n1->next->data<<endl;
    cout<<"Our Linked List: "<<endl;
    print_ll(head);
    insertatstart(head,7);
    print_ll(head);
    insertatend(head,9);
    print_ll(head);
    insertatmiddle(head,5,6);
    print_ll(head);
     insertatstart(head,2);
    print_ll(head);
     insertatstart(head,1);
    print_ll(head);
    insertatmiddle(head,6,8);
    print_ll(head);
    deletedata(head,1);
    print_ll(head);
    deletedata(head,3);
    print_ll(head);
    deletedata(head,9);
    print_ll(head);
    return 0;

}