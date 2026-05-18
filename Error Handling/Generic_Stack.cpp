#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

template <typename T>
class Stack {
    vector<T> data_;
    int capacity_;
public:
    Stack(int cap=100) : capacity_(cap) {}

    void push(const T& item) {
        if ((int)data_.size() >= capacity_)
            throw overflow_error("Stack overflow");
        data_.push_back(item);
    }
    void pop()    { 
     if(empty()) 
        throw underflow_error("Stack underflow"); 
     data_.pop_back(); }
    T  top()    const { 
     if(empty()) 
        throw underflow_error("Stack empty"); 
     return data_.back(); }
    bool empty()  const { return data_.empty(); }
  int  size()   const { return data_.size(); }

  void print() const {
        cout << "[top] ";
        for (int i=data_.size()-1; i>=0; --i) 
           cout << data_[i] << " ";
        cout << "[bottom]\n";
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10); intStack.push(20); intStack.push(30);
    intStack.print();         // [top] 30 20 10 [bottom]
    cout << intStack.top();   // 30
    intStack.pop();
    intStack.print();         // [top] 20 10 [bottom]

    Stack<string> strStack;
    strStack.push("Pakistan"); strStack.push("China");  
    strStack.push("USA");
    strStack.print();     // [top] USA China Pakistan [bottom]
    cout << "Same Stack class. Different type!\n";
}
