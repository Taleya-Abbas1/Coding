#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(int data, Node*& head) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void Print(Node* Head) {
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* getMiddle(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* Merge(Node* left, Node* right) {
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while (left != NULL && right != NULL) {
        if (left->data < right->data) {
            temp->next = left;
            left = left->next;
        } else {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }

    while (left != NULL) {
        temp->next = left;
        left = left->next;
        temp = temp->next;
    }

    while(right != NULL) {
        temp->next = right;
        right = right->next;
        temp = temp->next;
    }

    Node* result = dummy->next;
    delete dummy;
    return result;
}

Node* MergeSort(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* middle = getMiddle(head);
    Node* left = head;
    Node* right = middle->next;
    middle->next = NULL;

    left = MergeSort(left);
    right = MergeSort(right);

    return Merge(left, right);
}

int main() {
    Node* head = NULL;
    InsertAtHead(9, head);
    InsertAtHead(2, head);
    InsertAtHead(1, head);
    InsertAtHead(5, head);
    InsertAtHead(3, head);

    cout << "Original Linked List:\n";
    Print(head);

    Node* sorted = MergeSort(head);

    cout << "Sorted Linked List:\n";
    Print(sorted);

    return 0;
}
