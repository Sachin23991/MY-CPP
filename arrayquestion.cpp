// #include<iostream>
// using namespace std;
// int main(){
//     int r1,c1;
//     cin >> r1 >>c1;
//     int a[r1][c1];
//     for(int i = 0;i<r1;i++){
//         for(int j =0;j<c1;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i = 0;i<r1;i++){
//         int mul =1;
//         for(int j = 0;j<c1;j++){
//             mul *= a[i][j];
//         }
//         for(int j = 0;j<c1;j++){
//             a[i][j] = mul;
//         }
//     }
//     for(int i = 0;i<r1;i++){
//         for(int j =0;j<c1;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int r2,c2;
//     cin >>r2>>c2;
//     int b[r2][c2];
//     for(int i = 0;i<r2;i++){
//         for(int j =0;j<c2;j++){
//             cin>>b[i][j];
//         }
//     }
//     for(int i = 0;i<r2;i++){
//         int mul =1;
//         for(int j = 0;j<c2;j++){
//             mul *= b[i][j];
//         }
//         for(int j = 0;j<c2;j++){
//             b[i][j] = mul;
//         }
//     }
//     for(int i = 0;i<r2;i++){
//         for(int j =0;j<c2;j++){
//             cout<<b[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i = 0;i<n;i++){
//         cin>>a[i];
//     }
//     int max = a[0];
//     for(int i =0;i<n;i++){
//         if(a[i]>max){
//             max = a[i];
//         }
//     }
//     int count[max+1]={0};
//     for(int i = 0;i<n;i++){
//         count[a[i]]++;
//     }
//     for(int i = 0;i<max+1;i++){
//         if(count[i]==1){
//             cout<<i<<" ";
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i = 0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i = 0;i<n;i++){
//         if(a[i]>a[i-1]&&a[i]>a[i+1]){
//             cout<<a[i]<<" ";
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i = 0;i<n;i++){
//         cin>>a[i];
//     }
//     int max = a[0];
//     int min = a[0];
//     for(int i =0;i<n;i++){
//         if(a[i]>max){
//             max = a[i];
//         }
//     }
//     for(int i =0;i<n;i++){
//         if(a[i]<min){
//             min = a[i];
//         }
//     }
//     cout<<"Max: "<<max;
//     cout<<endl;
//     cout<<"Min: "<<min;
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i = 0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i = 0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     sort(a.begin(),a.end());
//     for(int i = 0;i<n;i++){
//         cout<<a[i]<<" ";
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int start , end;
//     cin >> start >> end;
//     for(int i = start;i<=end;i++){
//         int flag = 1;
//         for(int j = 2;j<i;j++){
//             if(i%j == 0){
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 1)cout<<i<<" ";
//     }
// }
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
// void insertathead(node *&head,int data){
//     node*temp = new node(data);
//     temp->next=head;
//     head = temp;
// }
// void insertatend(node*&head,int data){
//     node * temp = head;
//     node * n1 = new node(data);
//     if(head == NULL){
//         head = n1;
//         return;
//     }
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = n1;
// }
// void insertatposition(node *&head,int pos,int data){
//     if(pos==0){
//         insertathead(head,data);
//     }
//     node * temp = head;
//     node * n1 = new node(data);
//     int curr_pos = 1;
//     while(temp!=NULL&&curr_pos!=pos){
//         temp=temp->next;
//         curr_pos++;
//     }
//     n1->next = temp->next;
//     temp->next = n1;
// }
// void deleteatstart(node *&head){
//     node * temp = head;
//     head = head->next;
//     delete temp;
// }
// void deleteatend(node *&head){
    
//     node * temp = head;
//     while(temp->next->next!=NULL){
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = NULL;
// }
// void deleteatpos(node *&head,int pos){
//     if(pos==0){
//         deleteatstart(head);
//     }
//     node * temp = head;
//     int curr_pos = 1;
//     while(temp!=NULL&&curr_pos!=pos){
//         temp=temp->next;
//         curr_pos++;
//     }
//     node * prev = temp->next;
//     temp->next = temp->next->next;
//     delete prev;

// }
// void deleteatalternate(node *&head){
//     if (head == NULL)return;
//     node * temp = head;
//     node *current = NULL;
//     while(temp->next!=NULL){
//         current = temp->next;
//         temp->next = current->next;
//         delete current;
//         temp = temp->next;
//     }
// }
// void reverse(node *&head){
//     node * temp = head;
//     node * prev = NULL;
//     while(temp!=NULL){
//        node *current = temp->next;
//         temp->next = prev;
//         prev = temp;
//         temp = current;

//     }
//     head = prev;
// }
// void print_sl(node *&head){
//     node * temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"-->";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     node * head = NULL;
//     int n;
//     cin>>n;
//     for(int i =0;i<n;i++){
//         int data;
//         cin>>data;
//         insertatend(head,data);
//     } 
//     print_sl(head);
//     deleteatalternate(head);
//     print_sl(head);
// }

//---------------------------Circular linked list -----------------------------
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int data){
//         this->data = data;
//         node * next = NULL;
//     }
// };
// void insertathead(node * &head,int data){
    
//     node * n1 = new node(data);
//     if(head==NULL){
//         head = n1;
//     n1->next=head;
//     return;
   
//     return;
//     }
//     node * temp= head;
//     while(temp->next!=head){
//         temp = temp->next;
//     }
//     temp->next = n1;
//     n1->next = head;
//     head = n1;


// }
// void insertatend(node*&head,int data){
//     node * temp = head;
//     while(temp->next!=head){
//         temp = temp->next;
//     }
//     node * n1 = new node(data);
//     temp->next =n1;
//     n1->next = head;
// }
// void print_cl(node * &head){
//     node * temp = head;
//     do{
//         cout<<temp->data<<"-->";
//         temp = temp->next;
//     }while(temp!=head);
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
//     insertathead(head,7);
//     print_cl(head);
//     insertatend(head,8);
//     print_cl(head);
// }
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
// void insertathead(node *&head,int data){
//     node * n1 = new node(data);
//     n1->next = head;
//     head = n1;
// }
// void insertatend(node *&head,int data){
//     node * temp = head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     node * n1 = new node(data);
//     temp->next=n1;
// }
// void insertatpos(node *&head,int pos,int data){
//     node * temp = head;
//     if(pos ==0){
//         insertathead(head,data);
//     }
//     int curr=1;
//     while(curr<pos){
//         temp = temp->next;
//         curr++;
//     }
//     node * n1 = new node(data);
//     n1->next = temp->next;
//     temp->next = n1;
// }
// void deleteathead(node*&head){
//     node * temp = head;
//     head = head->next;
//     delete temp;
// }
// void deleteatend(node *&head){
//     node * temp = head;
//     while(temp->next->next!=NULL){
//         temp = temp->next;
//     }
//     node *prev = temp->next;
//     delete prev;
//     temp->next = NULL;
// }
// void deleteatpos(node *&head,int pos){
//     node * temp = head;
//      int curr = 1;
//      while(temp!=NULL&&curr<pos){
//         temp=temp->next;
//         curr++;
//      }
//      node * prev = temp->next;
//      temp->next = temp->next->next;
//      delete prev;
// }
// void reverse(node *&head){
//     node * temp = head;
//     node * prev = NULL;
//     while(temp!=NULL){
//         node * current = temp->next;
//         temp->next = prev;
//         prev = temp;
//         temp = current;
//     }
//     head = prev;
// }
// void deleteatalternate(node*& head) {
//     if (head == NULL) return;

//     node* temp = head;
//     while (temp != NULL && temp->next != NULL) {
//         node* nodeToDelete = temp->next;
//         temp->next = nodeToDelete->next;
//         delete nodeToDelete;
//         temp = temp->next; 
//     }
// }

// void print(node *&head){
//     node * temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" --> ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     node * head = NULL;
    
//    insertathead(head,1);
//    print(head);
//    insertathead(head,2);
//     print(head);
//     insertathead(head,3);
//    print(head);
//    insertathead(head,4);
//     print(head);
//     insertathead(head,5);
//    print(head);
//    insertathead(head,6);
//     print(head);
//     insertathead(head,7);
//    print(head);
//    insertathead(head,8);
//     print(head);
//     reverse(head);
//     print(head);
    
//    insertatend(head,9);
//     print(head);
//     insertatend(head,10);
//     print(head);
//     insertatpos(head,3,11);
//     print(head);
//     deleteathead(head);
//     print(head);
//     deleteatend(head);
//       print(head);
//       deleteatpos(head,3);
//         print(head);
//         deleteatalternate(head);
//         print(head);
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    in
}