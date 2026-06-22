#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T value) {
        data = value;
        next = nullptr;
    }
};

template <typename T>
class LinkedList {
private:
    Node<int>* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void add(int value) {
        Node<int>* newNode = new Node<int>(value);
        newNode->next = head;
        head = newNode;
    }

    void remove(T value) {
        Node<T>* current = head;
        Node<T>* previous = nullptr;

        while (current != nullptr) {
            if (current->data == value) {
                if (previous == nullptr) {
                    head = current->next;
                } else {
                    previous->next = current->next;
                }

                delete current;
                return;
            }

            previous = current;
            current = current->next;
        }
    }

    void print() {
        Node<T>* current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }
};