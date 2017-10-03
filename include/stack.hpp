//  "Copyright [2017] <Ovcharov Anisim>"
#ifndef DESKTOP_WORKSPACE_HOMEWORK_STACK_02_INCLUDE_STACK_HPP_
#define DESKTOP_WORKSPACE_HOMEWORK_STACK_02_INCLUDE_STACK_HPP_

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

template <typename T>
class Stack {
 public:
    Stack();
    explicit Stack(size_t s);
    size_t count() const;
    bool empty() const;
    void push(T const &);
    T pop();
    ~Stack();
    T& operator[](int pos) {
        return array_[pos];
    }
 private:
    T* array_;
    size_t array_size_;
    size_t count_;
};

//ВНЕШНЯЯ РЕАЛИЗАЦИЯ МЕТОДОВ КЛАССА STACK
template <typename T>
Stack<T>::Stack() : array_size_(size_t(10)), array_(new T[10]), count_(0) {}

template <typename T>
Stack<T>::Stack(size_t s) : array_size_(s), array_(new T[s]), count_(0) {}

template <typename T>
Stack<T>::~Stack() {
    delete[] array_;
}

template <typename T>
void Stack<T>::push(T const &val) {
    if (count_ == array_size_) {
        T* array_exp_ = new T[array_size_*2];
        for (int i = 0; i < array_size_; i++) {
            array_exp_[i] = array_[i];
        }
        array_size_ *= 2;
        delete[] array_;
        array_ = array_exp_;
    }
    array_[count_++] = val;
}

template <typename T>
T Stack<T>::pop() {
    return array_[--count_];
}

template <typename T>
size_t Stack<T>::count() const {
    return count_;
}

template <typename T>
bool Stack<T>::empty() const {
    if (count() == 0) return true;
    return false;
}

#endif  // DESKTOP_WORKSPACE_HOMEWORK_STACK_02_INCLUDE_STACK_HPP_"
