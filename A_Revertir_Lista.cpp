#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;


const int MAX = 1000005;

struct Node {
    long long val;
    Node* next;
    Node* prev;
    
    Node(long long v) {
        val = v;
        next = nullptr;
        prev = nullptr;
    }
};

struct LinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;

    void push_back(long long val) {
        Node* nuevo = new Node(val);
        if (head == nullptr) {
            head = tail = nuevo;
        } else {
            tail->next = nuevo;
            nuevo->prev = tail; 
            tail = nuevo;
        }
    }

    void push_front(long long val) {
        Node* nuevo = new Node(val);
        if (head == nullptr) {
            head = tail = nuevo;
        } else {
            nuevo->next = head;
            head->prev = nuevo;
            head = nuevo;
        }
    }
    
    bool empty() { return head == nullptr; }
};



int main() {

    LinkedList lista;

    int n;
    cin >> n;
    int k;
    for (int i = 0; i < n; i ++ ) {
        cin>>k;
        lista.push_front(k);
    }

    Node* temp = lista.head;
    while(temp!= nullptr) {
        cout << temp->val;
        if (temp->next != nullptr) cout << " ";
        temp = temp->next;

    }


    
    return 0;
}