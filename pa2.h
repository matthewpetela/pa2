/*
pa2.h
Matthew Petela
3/19/2018
COP3503 Section 1B02
*/



class Node{
    
    friend class LinkedList;
    
    private:
        
        Node *next, *pre;
        int value;
        std::string name;
        int pgMax;
    
    public:
    
        Node()
            : next(), pre() {}
            
        Node(int max)
            : pgMax(max), next(), pre() {}
            
        Node(int value, std::string name)
            : value(value), next(), pre(), name(name) {}
        
        std::string getName();
        
        int getValue();
        
        Node* getNext();
        
        Node* getPre();
        
        
    
};

class LinkedList{
    
    friend class Node;
    
    private:
        Node *head, *tail, *temp;
    
    public:
    
        LinkedList();
        
        LinkedList(int value, int b);
        
        ~LinkedList(); //The standard destructor
        
        void print();
        
        void addNode(int location, std::string name, int size);
        
        void clear();
        
        bool isRunning(std::string name);
        
        int worstFit(int size);
        
        int bestFit(int size);
        
    
};