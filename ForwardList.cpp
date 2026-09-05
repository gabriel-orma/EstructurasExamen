
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

    long long front() {
        return head->val; 
    }

    bool empty() {
        return head == nullptr;
    }
};
