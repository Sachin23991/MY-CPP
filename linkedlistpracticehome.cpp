// #include <iostream>
// using namespace std;

// class node {
//     public:
//     int data;
//     node* next;
//     node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAtHead(node*& head, int data) {
//     node* temp = new node(data);
//     temp->next = head;
//     head = temp;
// }

// void InsertAtEnd(node*& head, int data) {
//     node* n1 = new node(data);
//     if (head == NULL) {
//         head = n1;
//         return;
//     }
//     node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = n1;
// }

// void InsertAtPosition(node*& head, int pos, int data) {
//     if (pos == 0) {
//         InsertAtHead(head, data);
//         return;
//     }
    
//     node* temp = head;
//     for (int i = 1; i < pos && temp != nullptr; ++i) {
//         temp = temp->next;
//     }
//     node* n1 = new node(data);
//     n1->next = temp->next;
//     temp->next = n1;
// }

// void UpdateAtPosition(node*& head, int pos, int data) {
//     node* temp = head;
//     int curr_pos = 0;
//     while (curr_pos != pos) {
//         temp = temp->next;
//         curr_pos++;
//     }
//     temp->data = data;
// }

// void DeleteAtHead(node*& head) {
//     node* temp = head;
//     head = head->next;
//     delete temp;
// }

// void DeleteAtEnd(node*& head) {
//     if (head == NULL) return;
//     if (head->next == NULL) {
//         delete head;
//         head = NULL;
//         return;
//     }
//     node* second_last = head;
//     while (second_last->next->next != NULL) {
//         second_last = second_last->next;
//     }
//     delete second_last->next;
//     second_last->next = NULL;
// }

// void DeleteAtPosition(node*& head, int pos) {
//     if (pos == 0) {
//         DeleteAtHead(head);
//         return;
//     }
//     int curr_pos = 0;
//     node* temp = head;
//     while (curr_pos = pos-1) {
//         temp = temp->next;
//         curr_pos++;
//     }
//     node* temp1 = temp->next;
//     temp->next = temp->next->next;
//     delete temp1;
// }

// node* reverse(node*& head, int m, int n) {
//     if (!head || m == n) {
//         return head;
//     }
//     node* n1 = new node(0);
//     n1->next = head;
//     node* prev = n1;

//     for (int i = 1; i < m; i++) {
//         prev = prev->next;
//         // we are traversing upto m location or we can say that we are traversing upto 
//         // starting starting location
//     }
//     node* start = prev->next;
//     node* then = start->next;

//     for (int i = 0; i < n - m; i++) {
//         start->next = then->next;
//         then->next = prev->next;
//         prev->next = then;
//         then = start->next;
//     }
//     return n1->next;
// }

// void print_ll(node*& head) {
//     node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << "-->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     node* head = NULL;
//     InsertAtHead(head, 1);
//     print_ll(head);
//     InsertAtHead(head, 2);
//     print_ll(head);
//     InsertAtEnd(head, 3);
//     print_ll(head);
//      InsertAtPosition(head, 1, 9);
//     print_ll(head);
//     UpdateAtPosition(head, 2, 5);
//     print_ll(head);
//     InsertAtEnd(head, 3);
//     InsertAtEnd(head, 4);
//     InsertAtEnd(head, 6);
//     InsertAtEnd(head, 8);
//     print_ll(head);
//     head = reverse(head, 1, 4);
//     print_ll(head);
//      DeleteAtHead(head);
//      print_ll(head);
//      DeleteAtEnd(head);
//      print_ll(head);
//      DeleteAtPosition(head, 3);
//      print_ll(head);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node (int data){
//         this->data = data;
//         this->next = NULL;
//     }

// };
// void insertathead(node * &head,int data){
//     node * temp = new node(data);
//     temp->next = head;
//     head = temp;
// }
// void insertatend(node * &head,int data){
//     node * temp = head;
//     node * n1 = new node(data);
//     if(head == NULL){
//         head = n1;
//         return;
//     }
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = n1;
// }
// void insertatmiddle(node *&head,int pos ,int data){
//     node * temp = head;
//     node * n1 = new node(data);
//     int curr_pos = 1;
//     while(curr_pos != pos){
//         temp = temp->next;
//         curr_pos++;
//     }
//     n1->next = temp->next;
//     temp->next = n1;
// }
// void deleteathead(node * &head){
//     node * &temp = head;
//     temp = temp->next;
//     delete head;
// }
// void deleteatend(node * &head){
//     node * temp = head;
//     while(temp->next->next != NULL){
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = NULL;
    
// }
// void deleteatspecificposition(node *&head,int pos){
//     node * temp = head;
//     int curr_pos = 1;
//     while(curr_pos != pos){
//         temp = temp->next;
//         curr_pos++;
//     }
//     temp->next = temp->next->next;
//     delete temp->next;
// }
// void deleteinrange(node *&head,int p1,int p2){
//     if (head == NULL || p1 > p2) return;
//     node * temp = head;
//     node * prev = NULL;
//     int curr_pos = 1;
//     while(temp != NULL && curr_pos<p1){
//         prev = temp;
//         temp = temp->next;
//         curr_pos++;
//     }
//     while(temp != NULL && curr_pos <=p2){
//         node * next = temp->next;
// // we are storing in next because we have to take care of other node it means if we delete this withoust storing in other than there would be inconsistency
// // so we have to store that because after that it is used to print or traverse the remaining list       
//         delete temp;
//         temp = next;
//         curr_pos++;
//     }
//     if (prev != NULL) {
//         prev->next = temp;
//     } else {
//         head = temp;
//     }
// }
// void print_ll(node * &head){
//     node * temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<"-->";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     node * head = NULL;
//     insertathead(head,1);
//     insertathead(head,2);
//     insertathead(head,3);
//     insertathead(head,4);
//     insertathead(head,5);
//     insertathead(head,6);
//     insertatend(head,7);
//     insertatend(head,8);
//     insertatmiddle(head,3,9);
//     deleteathead(head);
//     deleteatend(head);
//     deleteatspecificposition(head,2);
//     deleteinrange(head,1,3);
//     print_ll(head);
// }
#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node *next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(node *&head, int data) {
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertatend(node *&head, int data) {
    node *temp = head;
    node *n1 = new node(data);
    if (head == NULL) {
        head = n1;
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n1;
}

void insertatmiddle(node *&head, int pos, int data) {
    node *temp = head;
    node *n1 = new node(data);
    int curr_pos = 1;
    while (curr_pos != pos) {
        temp = temp->next;
        curr_pos++;
    }
    n1->next = temp->next;
    temp->next = n1;
}

void deleteathead(node *&head) {
    if (head == NULL) return;
    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteatend(node *&head) {
    if (head == NULL) return;
    node *temp = head;
    if (temp->next == NULL) {
        delete temp;
        head = NULL;
        return;
    }
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void deleteatspecificposition(node *&head, int pos) {
    if (head == NULL) return;

    node *temp = head;
    if (pos == 1) {
        head = temp->next;
        delete temp;
        return;
    }

    int curr_pos = 1;
    while (temp != NULL && curr_pos < pos - 1) {
        temp = temp->next;
        curr_pos++;
    }

    if (temp == NULL || temp->next == NULL) return;

    node *next = temp->next->next;
    delete temp->next;
    temp->next = next;
}

void deleteinrange(node *&head, int p1, int p2) {
    if (head == NULL || p1 > p2) return;

    node *temp = head;
    node *prev = NULL;
    int curr_pos = 0;

    // Move to the start position
    while (temp != NULL && curr_pos < p1) {
        prev = temp;
        temp = temp->next;
        curr_pos++;
    }

    // Delete nodes in the range
    while (temp != NULL && curr_pos <= p2) {
        node *next = temp->next;
        delete temp;
        temp = next;
        curr_pos++;
    }

    // Connect the previous part with the remaining part
    if (prev != NULL) {
        prev->next = temp;
    } else {
        head = temp;
    }
}

void print_ll(node *&head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node *head = NULL;
    insertathead(head, 1);
    insertathead(head, 2);
    insertathead(head, 3);
    insertathead(head, 4);
    insertathead(head, 5);
    insertathead(head, 6);
    insertatend(head, 7);
    insertatend(head, 8);
    insertatmiddle(head, 3, 9);
    deleteathead(head);
    deleteatend(head);
    deleteatspecificposition(head, 2);
    deleteinrange(head, 1, 3);
    print_ll(head);
}
