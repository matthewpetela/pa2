/*
pa2.cpp
Matthew Petela
3/19/2018
COP3503 Section 1B02
*/

#include <iostream>
#include <string>
#include <cstring>

#include "pa2.h"




std::string Node::getName(){
    return name;
    }
        
int Node::getValue(){
    return value;
}

Node* Node::getNext(){
    return next;
}

Node* Node::getPre(){
    return pre;
}

LinkedList::LinkedList(){
    head = NULL;
    tail = NULL;
    temp = NULL;
}

LinkedList::LinkedList(int value, int b){
    tail =  new Node(value);
    head = tail;
    (*head).value = b;
    (*head).name = "FREE";
    
}

int LinkedList::worstFit(int size){
    
    return 1;
}

int LinkedList::bestFit(int size){
    
    return 1;
}

void LinkedList::addNode(int location, std::string name, int memSize){
    
    
}

void LinkedList::print(){
    
    
}

int main(int argc, char **argv){
    
    if (argc == 2){
        
        
        
    }
    else{
        std::cout<<"\nError: Expecting best fit or worst fit argument!\n";
    }
    
    
}
    


