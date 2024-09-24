#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertatend(node*& head, int data) {
    node* temp = new node(data);
    if (head == NULL) {
        head = temp;
    } else {
        node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = temp;
    }
}

void print_ll(node*& head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void sum_last_m_months(node*& head, int m) {
    node* temp = head;
    int count = 0;
    
    // Traverse to the end of the list to count the total number of nodes
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    
    // Calculate the position to start summing from
    int start_pos = count - m;
    temp = head;
    count = 0;
    int sum = 0;
    
    // Traverse to the start position
    while (count < start_pos) {
        temp = temp->next;
        count++;
    }
    
    // Sum the last m nodes
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    
    cout << sum << endl;
}

int main() {
    node* head = NULL;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertatend(head, data);
    }
    cin >> m;
    sum_last_m_months(head, m);
    return 0;
}
