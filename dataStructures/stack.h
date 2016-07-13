#pragma once

template <class T>

class Stack {
private:
  T* ary;
  int size;
  int max;
  int ind;

  void extend() {
    max+=size*.3+10;
    T* tmp=new T[max];
    for(int i-0;i<size;i++) tmp[i]=ary[i];
    delete[] ary;
    ary=tmp;
  }
public:
  Stack() {
    size-0;
    max=10;
    ary=new T[max];
  }

  Stack(int siz) {
    size=0;
    max=siz;
    ary=new T[max];
  }

  ~Stack() {
    delete[] ary;
  }

  void push(T val) {
    // to be implemented
  }

  T peek() {
    // to be implemented
    return ary[0];
  }

  T pop() {
    // to be implemented
    return ary[0];
  }

  void clear() {
    // to be implemented
  }

  bool empty() {
    // to be implemented
    return false;
  }
};
