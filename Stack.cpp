const int MAX = 1000005; 

struct Stack {
    int arr[MAX];
    int sz = 0;

    void push(int val) { arr[sz++] = val; }
    void pop() { sz--; }
    int top() { return arr[sz - 1]; }
    bool empty() { return sz == 0; }
    int size() { return sz; }
};