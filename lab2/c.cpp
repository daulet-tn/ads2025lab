#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

struct LinkedList{
    Node* head;
    LinkedList(){
        head = nullptr;
    }

    void push_back(int value){
        Node* newNode = new Node(value);
        if(!head){
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteEverySecond() {
        if (!head) return;
        Node* current = head;
        while (current && current->next) {
            Node* toDelete = current->next;
            current->next = toDelete->next;
            delete toDelete;
            current = current->next;
        }
    }

    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    LinkedList list;
    int n;
    cin >> n; 

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        list.push_back(x);
    }

    list.deleteEverySecond();
    list.print();

    return 0;
}

