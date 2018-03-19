/*
pa2.cpp
Matthew Petela
3/19/2018
COP3503 Section 1B02
*/

#include <iostream> //Used for inputs and outputs
#include <string> //Used for strings 
#include <iomanip>

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

LinkedList::~LinkedList(){
    clear();
}

int LinkedList::worstFit(int size){
    
    return 1;
}

int LinkedList::bestFit(int size){
    
    Node *current = head;
    
    
    return 1;
}

void LinkedList::addNode(int location, std::string name, int memSize){
    
    
}

bool LinkedList::isRunning(std::string name){
    
}

void LinkedList::print(){
    
    Node *current = head;
    const char space = ' ';
    const int spaace = 11;
    
    if (head == NULL){
        
        for (int i = 1; i <= 31; i++){
            
            std::cout<<std::left<<std::setw(spaace)<<"FREE";
            
        }
        
    }
    
    for(int i = 1; i <= 32; i++){
        if ((*current).value == i){
            std::cout << std::left << std::setw(spaace) << 
            std::setfill(space) << current->name;
			if ((*current).next != NULL) {
				current = (*current).next;
			}
        }
        else{
            std::cout<<std::left<<std::setw(spaace)<<std::setfill(space)<<"FREE";
        }

        
    }
    
}

void LinkedList::clear(){
    Node *current = head;
    Node *next;
    
    while (current !=NULL){
        next = (*current).next;
        delete current;
        current = next;
    }
    
}

int kbToLinkedSize(int kbSize){
    if (kbSize <= 0 || kbSize > 128){
        std::cout<<"Error: Program size must be between 1kb and 128kb";
    }
    
    else{
        
        if (kbSize % 4 == 0){
            return kbSize/4;
        }
        else{
            return (kbSize + 3)/4;
        }
        
    }
    
}

int main(int argc, char **argv){
    
    if (argc != 2 || argv[argc-1][0] != 'b' && argv[argc-1][0] != 'B' && argv[argc-1][0] != 'w' && argv[argc-1][0] != 'W'){
            std::cout<<"ERROR: Expecting best fit or worst fit\n";
            return 0;
        }
        
    if (argv[argc-1][0] == 'b' || argv[argc-1][0] == 'B'){
        std::cout << "Using best fit algorithm" << std::endl<<std::endl;
    }
    
    if (argv[argc-1][0] == 'w' || argv[argc-1][0] == 'W'){
        std::cout << "Using worst fit algorithm" << std::endl<<std::endl;
    }
        
    const int MAX_PAGE_NUM = 32;
    
    LinkedList freeSpaceList(MAX_PAGE_NUM);
    LinkedList usedSpaceList;
    
    int choice;
    int prgSizeKB;
    int prgSizeIRL;
    
    std::string output = "\t1. Add program\n\t2. Kill program\n\t3. Fragmentation\n\t4. Print memory\n\t5. Exit\n\nchoice - ";
    std::string programName;
    

    while(std::cin){
        std::cout<<output;
        std::cin>>choice;
        
        if (choice == 1){
            std::cout<<"Program name - ";
            std::cin>>programName;
            std::cout<<"Program size (KB) - ";
            std::cin>>prgSizeKB;
            prgSizeIRL = kbToLinkedSize(prgSizeKB);
            
            
        }
        
        if (choice == 2){
            
            
        }
        
        if (choice == 3){
            
            
        }
        
        if (choice == 4){
            
            usedSpaceList.print();
        }
        
        if (choice == 5){
            break;
        }
        
        
        
    }
    
    
        
        
    usedSpaceList.clear();
    freeSpaceList.clear();
    
}
    


