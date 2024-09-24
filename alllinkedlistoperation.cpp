// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertathead(node * &head,int data){
//     node * temp = new node(data);
//     if(head == NULL){
//         head = temp;
//         return;
//     }
//     temp->next = head;
//     head = temp;
// }
// void insertatend(node *&head,int data){
//     node * temp = head;
//     if(head == NULL){
//         head = temp;
//         return;
//     }
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     node * n1 = new node(data);
//     temp->next = n1;
// }
// void insertatposition(node * &head,int pos ,int data){
//     if (pos == 0){
//         insertathead(head,data);
//     }
//     node * temp = head;
//     node * n1 = new node(data);
//     int curr_pos = 1;
//     while(curr_pos!=pos&&temp!=NULL){
//         temp = temp->next;
//         curr_pos++;
//     }
//     node * n2 = temp->next;
//     temp->next = n1;
//     n1->next = n2;
// }
// void updateatposition(node *&head,int pos,int data){
    
//     node * temp = head;
//     node * n1 = new node(data);
//     int curr_pos = 1;
//     while(curr_pos!=pos&&temp!=NULL){
//         temp = temp->next;
//         curr_pos++;
//     }
     
//     n1->next = temp->next->next;
//     temp->next = n1;
// }
// void deleteatstart(node * &head){
//     node * temp = head;
//     head = head->next;
//     delete temp;

// }
// void deleteatend(node * &head){
//     node * temp = head;
//     while(temp->next->next != NULL){
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = NULL;
// }
// void deleteatspecificposition(node * & head,int pos){
//     if(pos == 0){
//         deleteatstart(head);
//     }
//     node * temp = head;
//     int curr_pos = 1;
//     node * prev = head;
//     while(curr_pos != pos){
//         prev = temp;
//         temp = temp->next;
//         curr_pos++;
//     }
//     temp->next = temp->next->next;
//     delete prev->next;

// }
// void reverse(node* &head) {
//     node* prev = NULL;
//     node* current = head;
//     while (current != NULL) {
//         node* nextptr = current->next;
//         current->next = prev;
//         prev = current;
//         current = nextptr;
//     }
//     head = prev;
// }
// void sortList(node* &head) {
//     if (head == NULL || head->next == NULL) {
//         return;
//     }
//     node* end = NULL;
//     while (end != head->next) {
//         node* current = head;
//         while (current->next != end) {
//             if (current->data > current->next->data) {
//                 swap(current->data, current->next->data);
//             }
//             current = current->next;
//         }
//         end = current;
//     }
// }

// void print_sl(node * &head){
//     node * temp = head;
//     while(temp!=NULL){
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
//     print_sl(head);
//     insertatend(head,5);
//     insertatend(head,6);
//     print_sl(head);
//     insertatposition(head,3,7);
//     print_sl(head);
//     updateatposition(head,3,8);
//     print_sl(head);
//     deleteatstart(head);
//     print_sl(head);
//     deleteatend(head);
//     print_sl(head);
//     deleteatspecificposition(head,2);
//     print_sl(head);
//     reverse(head);
//     print_sl(head);
//     sortList(head);
//     print_sl(head);
// }
// ---------------------------------Circular linked list--------------------------
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void insertatstart(node *&head,int data){
//     node * n1 = new node(data);
//     if (head == NULL){
//         head = n1;
//         n1->next = head;
//         return;
//     }
//     node * temp = head;
//     while(temp->next != head){
//         temp = temp->next;
//     }
//     temp->next = n1;
//     n1->next = head;
//     head = n1;
// }
// void insertatend(node * &head,int data){
//     node * temp = head;
//     while(temp->next != head){
//         temp = temp->next;
//     }
//     node * n1 = new node(data);
//     temp->next = n1;
//     n1->next = head;
// }
// void insertatspecificposition(node * &head,int pos,int data){
//     node * temp = head;
//     if(pos == 0){
//         insertatstart(head,data);
//     }
//     node * n1 = new node(data);
//     int curr = 1;
//     while(temp->next!=head && curr!=pos){
//         temp = temp->next;
//         curr++;
//     }
//     node * n = temp->next;
//     n1->next = n;
//     temp->next = n1;
// }
// void print_cl(node * &head){
//    if (head == NULL) return;
//     node *temp = head;
//     do {
//         cout << temp->data << "-->";
//         temp = temp->next;
//     } while (temp != head);
//     cout<<endl;
// }
// int main(){
//     node * head = NULL;
//     insertatstart(head,1);
//     insertatstart(head,2);
//     insertatstart(head,3);
//     insertatstart(head,4);
//     print_cl(head);
//     insertatend(head , 5);
//     insertatend(head,6);
//     print_cl(head);
//     insertatspecificposition(head,3,7);
//     print_cl(head);
// }