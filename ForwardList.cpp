
struct ForwardNode {
    long long val;
    ForwardNode* next;
};

struct ForwardList {
    ForwardNode* head = nullptr;

    void push_front(long long val) {
        ForwardNode* nuevo = new ForwardNode; 
        nuevo->val = val;
        nuevo->next = head;
        
        head = nuevo; 
    }

    void pop_front() {
        if (head != nullptr) {
            ForwardNode* temp = head; 
            head = head->next;                
            delete temp;
        }
    }

    void insert(ForwardNode* prev_node, long long val) {
        if (prev_node == nullptr) return;

        ForwardNode* nuevo = new ForwardNode;
        nuevo->val = val;
        
        nuevo->next = prev_node->next;
        prev_node->next = nuevo;
    }

    long long front() {
        return head->val; 
    }

    bool empty() {
        return head == nullptr;
    }
};
