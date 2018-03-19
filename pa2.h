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
        
        Node *next, *pre;
        int value;
        string name;
        int pgMax;
    
    public:
    
        Node()
            : next(), pre() {}
            
        Node(int max)
            : pgMax(max), next(), pre {}
            
        Node(int value, string name)
            :value(value), next(), pre(), name(name) {}
        
        string getName();
        
        int getValue();
        
        Node* getNext();
        
        Node* getPre();
        
        
    
}

class LinkedList{
    
    friend class Node;
    
    private:
        Node *head, *tail, *temp;
    
    public:
    
        LinkedList();
        
        LinkedList(int value, int )
        
        void print();
        
        void addNode();
        
        void clear();
        
        bool isRunning(string name);
        
    
}