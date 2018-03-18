/*
pa2.h
Matthew Petela
3/19/2018
COP3503 Section 1B02
*/

#include <string>;
#include <cstring>;

class Node{
    
    private:
        int value;
        Node *next, *prev;
        string name;
    
    public:
    
        string getName(){
            return name;
        }
        
        int getValue(){
            return value;
        }
    
}

class LinkedList{
    
    private:
        Node *head, *tail, *temp;
    
    public:
        
        void addNode();
        
    
}