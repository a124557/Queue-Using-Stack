
#include <iostream>
#include <vector>

using namespace std;

class MyQueue {
public:
    MyQueue() {
        stack = vector<int> stack;
    }

    
    void push(int x) {
        stack.push_back(x);
    }
    
    int pop() {
        stack.pop_back();
    }
    
    int peek() {
        return stack[stack.size()-1];
    }
    
    bool empty() {
        return stack.isempty();
    }
};

int main() {
  return 0;
}