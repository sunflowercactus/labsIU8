﻿// 17 nov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;
};

class LinkedList {
    public:
        bool add_element(int data);
        bool delete_element(int data);
        bool find_element(int data);
        bool insert(int data, int position);

        LinkedList(int data);
        LinkedList();
        ~LinkedList();
    private:
        Node* first;
        Node* last;  
};

LinkedList::LinkedList() {
    first = nullptr;
    last = nullptr;
}

LinkedList::LinkedList(int data) {
    Node* nd = new Node{ data };
    first = nd;
    last = nd;
    last->next = nullptr;
}

bool LinkedList::add_element(int data) {
    Node* nd = new Node{ data, nullptr };
    if (last == nullptr) {
        first = nd;
        last = nd;
        return true;
    }
    last->next = nd;
    last = nd;
    return true;
}

bool LinkedList::find_element(int data) {
    if(last != nullptr) {
        Node* current = first;

        while (current != nullptr) {
            if (current->data == data) return true;
            current = current->next;
        }
    }
    return false;
}

bool LinkedList::insert(int data, int position) {
    if (last != nullptr) {
        Node* current = first;
        size_t i = 0;

        while (current != nullptr) {

            if (i == position - 1) {
    
                Node* nd = new Node{ data, current->next};
                current->next = nd;

                return true;
            }
            current = current->next;
            i += 1;
        }
    }

    return false;
}
bool LinkedList::delete_element(int position) { if (position == 0) {
  Node* el = first->next;  delete first;
  first = el;  return true;
 } else {
  Node* el = nullptr;  size_t i = 0;
  Node* current_el = first;  while (i != position-1) {
   ++i;   current_el = current_el->next;
  }  el = (current_el->next)->next;
  delete current_el->next;  current_el->next = el;
  return true; }
 return false;}
LinkedList::~LinkedList() {
    if (last != nullptr) {
        Node* current = first;

        while (current != nullptr) {
            delete current;

            first = first->next;
            current = first;
        }
    }
}

int main() {
    LinkedList lst;

    //Node nd;
    //Node* nd1 = new Node;
    //nd.data;
    //nd1->data;
    for (int i = 0; i < 10; ++i) {
        lst.add_element(rand());
    }
    lst.find_element(123);
    lst.~LinkedList();
    return 0;
}
