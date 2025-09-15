#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};


Node* insertAtPosition(Node* head, int data, int position) {
    Node* newNode = new Node(data);

    
    if (position == 0) {
        newNode->next = head;
        return newNode;
    }

    Node* current = head;
    for (int i = 0; i < position - 1; ++i) {
        if (current == nullptr) break;
        current = current->next;
    }

   
    newNode->next = current->next;
    current->next = newNode;

    return head;
}


void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next) cout << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        Node* newNode = new Node(x);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int data, position;
    cin >> data >> position;

    head = insertAtPosition(head, data, position);

    printList(head);

    return 0;
}
