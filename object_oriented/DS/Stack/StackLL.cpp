#include <iostream>
#include "../LinkedList/LinkedList.cpp"

class Stack {
    private:
       LinkedList* l;
    public:
        Stack() {
            l = new LinkedList(); 
        } 
        ~Stack() {
            delete l;
        }
        void push(int val) {
            l->insert_back(val);
        }
        void pop(){
            l->delete_back();
        }
        void display(){
            l->display();
        }
};
