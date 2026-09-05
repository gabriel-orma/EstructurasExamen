const int MAX = 1000005;


struct Deque {
    int arr[MAX * 2];
    int head = MAX, tail = MAX;

    void push_back(int val) { arr[tail++] = val; }
    void push_front(int val) { arr[--head] = val; }
    void pop_back() { tail--; }
    void pop_front() { head++; }
    
    int front() { return arr[head]; }
    int back() { return arr[tail - 1]; }
    bool empty() { return head == tail; }
    int size() { return tail - head; }
};
