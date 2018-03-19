/*
pa2.cpp
Matthew Petela
3/19/2018
COP3503 Section 1B02
*/

#include <iostream> //Used for inputs and outputs
#include <string> //Used for strings 

#include "pa2.h" //Imports the header file




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

LinkedList::LinkedList(int value){
    const int i = 1;
    tail =  new Node(value);
    head = tail;
    (*head).value = i;
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

void LinkedList::clear(){
    
    
}

int main(int argc, char **argv){
    
    if (argc != 2 || argv[argc-1][0] != 'b' && argv[argc-1][0] != 'B' && argv[argc-1][0] != 'w' && argv[argc-1][0] != 'W'){
            std::cout<<"ERROR: Expecting best fit or worst fit\n";
            return 0;
        }
        
    const int MAX_PAGE_NUM = 32;
    
    LinkedList freeSpaceList(MAX_PAGE_NUM);
    LinkedList usedSpaceList();
    
    int choice;
    
    while(std::cin >> choice){
        std::cout<<"\t1. Add program\n\t2. Kill program\n\t3. Fragmentation\n\t4. Print memory\n\t5. Exit";
        
        
    }
    
    
        
        
        
    
}
    


