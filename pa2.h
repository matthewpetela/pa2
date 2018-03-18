/*
pa2.h
Matthew Petela
3/19/2018
COP3503 Section 1B02
*/

#include <string>;
#include <cstring>;

class Node{
    
    friend class LinkedList;
    
    private:
        int value;
        Node *next, *prev;
        string name;
    
    public:
    
        string getName();
        
        int getValue();
    
}

class LinkedList{
    
    friend class Node;
    
    private:
        Node *head, *tail, *temp;
    
    public:
        
        void print();
        
        void addNode();
        
        void clear();
        
    
}