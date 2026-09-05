const int MAX = 1000005;

struct Queue {
    int arr[MAX];
    int head = 0, tail = 0;

    void push(int val) { arr[tail++] = val; }
    void pop() { head++; }
    int front() { return arr[head]; }
    bool empty() { return head == tail; }
    int size() { return tail - head; }
};