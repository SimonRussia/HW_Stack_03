//  "Copyright [2017] <Ovcharov Anisim>"
#ifndef DESKTOP_WORKSPACE_HOMEWORK_STACK_02_INCLUDE_STACK_HPP_
#define DESKTOP_WORKSPACE_HOMEWORK_STACK_02_INCLUDE_STACK_HPP_

#include <iostream>
#include <string>
#include <stdexcept>
using std::string;
using std::cout;
using std::endl;

template <typename T>
class Stack {
 public:
    Stack() noexcept;
    explicit Stack(size_t s) noexcept;
    size_t count() const noexcept;
    bool empty() const noexcept;
    void push(T const &) noexcept;
    T& top() const noexcept;
    T& pop() noexcept;
    ~Stack() noexcept;
    T& operator[](int pos) noexcept {
        return array_[pos];
    }
 private:
    T* array_;
    size_t array_size_;
    size_t count_;
};

//ВНЕШНЯЯ РЕАЛИЗАЦИЯ МЕТОДОВ КЛАССА STACK
template <typename T>
Stack<T>::Stack() noexcept : Stack(100) {}

template <typename T>
Stack<T>::Stack(size_t s) noexcept : array_size_(s), array_(new T[s]), count_(0) {}

template <typename T>
Stack<T>::~Stack() noexcept {
    delete[] array_;
}

template <typename T>
void Stack<T>::push(T const &val) noexcept {
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
T& Stack<T>::pop() noexcept {
    if(count_ == 0) throw std::runtime_error("\tERROR:\tStack empty...");
    --count_;
    return top();
}

template <typename T>
size_t Stack<T>::count() const noexcept {
    return count_;
}

template <typename T>
bool Stack<T>::empty() const noexcept {
    if (count() == 0) return true;
    return false;
}

template <typename T>
T& Stack<T>::top() const noexcept {
    return array_[count_];
}

#endif  // DESKTOP_WORKSPACE_HOMEWORK_STACK_02_INCLUDE_STACK_HPP_"
