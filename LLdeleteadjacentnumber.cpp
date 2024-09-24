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
void insertathead(node *&head,int data){
    node * temp = head;
    node * n1 = new node(data);
    n1->next = head;
    head = n1;
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
void deleteatposition(node* &head,int pos){
	node * temp = head;
	int curr_pos = 0;
	
	while(curr_pos < pos-1){
		temp = temp->next;
		curr_pos++;
	}
	node * temp1 = temp->next;
	temp->next = temp->next->next;
	delete temp1;

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
    cout<<"Orignal Linked List: ";
    for(int i = 0;i<n;i++){
        int data;
        cin>>data;
        insertatend(head,data);
    }
    print_ll(head);
    cout<<endl;
    cout<<"Final Linked List: ";
	int i = 1;
	while(i<n){
		deleteatposition(head,i);
		n--;
		i++;
	}
    
	print_ll(head);
    
    
}