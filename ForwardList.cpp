const int MAX = 1000005;

struct Node {
    long long val;
    Node* next;
};

Node memoria[MAX];
int nodos_usados = 0;

Node* crear_nodo(long long v) {
    Node* nuevo = &memoria[nodos_usados++];
    nuevo->val = v;
    nuevo->next = nullptr;
    return nuevo;
}

struct ForwardList {
    Node* head = nullptr;

    void push_front(long long val) {
        Node* nuevo = crear_nodo(val);
        nuevo->next = head;
        head = nuevo;
    }

    void pop_front() {
        if (head != nullptr) {
            head = head->next;
        }
    }

    long long front() {
        return head->val; 
    }

    bool empty() {
        return head == nullptr;
    }
};