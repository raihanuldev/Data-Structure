#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_node_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int get_Size(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_any_pos(Node*& head, Node*& tail, int idx, int val) {
    Node* newNode = new Node(val);
    int count = get_Size(head);

    // Handle invalid indices
    if (idx < 0 || idx > count) {
        cout << "Invalid" << endl;
        return;
    }

    // Insert at head
    if (idx == 0) {
        newNode->next = head;
        head = newNode;
        if (tail == NULL) tail = newNode; // Update tail for empty list
        return;
    }

    // Insert at tail
    if (idx == count) {
        insert_node_tail(head, tail, val);
        return;
    }

    // Insert at any other position
    Node* temp = head;
    for (int i = 1; i < idx; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void printing_node(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Input for linked list
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_node_tail(head, tail, val);
    }

    // Queries for insertion
    int pos, element;
    while (true) {
        cin >> pos >> element;
        if (pos == -1) {
            break;
        }
        insert_any_pos(head, tail, pos, element);
        printing_node(head);
    }

    return 0;
}
