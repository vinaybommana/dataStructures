// program name :  linked list implementation
// date         :  Mon Sep 11 23:44:48 IST 2017
// adding an element at the end of the list

# include <iostream>
# include <cstdio>

using namespace std;

class Node {
    public:
        int data;
        Node* link;
};


void printList(Node* head) {//{{{
    cout << "The elements in the list are:" << endl;
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> link;
    }
    cout << endl;
}/*}}}*/


void insertAtEnd(Node** head, int x) {//{{{
    Node* temp = new Node();
    temp -> data = x;
    if(*head == NULL) {
        *head = temp;
    } else {
        Node* temp1 = new Node();
        temp1 = *head;
        while(temp1 -> link != NULL) {
            temp1 = temp1 -> link;
        }
        temp1 -> link = temp;
    }
}/*}}}*/

void insertAtBeginning(Node** head, int x) {
    Node* temp = new Node();
    temp -> data = x;
    if(*head == NULL) {
        *head = temp;
    } else {
        temp -> link = *head;
        *head = temp;
    }
}

int main(int argc, const char* argv[]) {
    Node* head = NULL;
    int n;
    cout << "Enter how many elements you want to add:" << endl;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        char option;
        cout << "Enter number: ";
        cin >> x;
        cout << "Where do you want to add the element:(end(e)/beginning(b))" << endl;
        cin >> option;
        if(option == 'e') {
            insertAtEnd(&head, x);
        } else {
            insertAtBeginning(&head, x);
        }
    }
    cout << endl;
    printList(head);
}
