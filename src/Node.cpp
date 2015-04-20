#include "Node.h"

Node::Node(int data)
{
    this->data=data;
    countchildren=0;
}

void Node:: append(Node *child){
    (this->children)[countchildren]=child;
    child->parent=this;
    countchildren++;
    }

int Node:: count()
{
    int amount=1;
    for(int i=0;i<countchildren;i++){
        amount+=(this->children)[i]->count();
    }
    return amount;
}

Node* Node:: getParent(){
    return (this->parent);
    }

int Node::getValue(){
    return this->data;
    }

Node::~Node()
{
    //dtor
}
