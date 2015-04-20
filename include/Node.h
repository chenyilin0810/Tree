#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node(int);
        int count();
        void append(Node *);
        int countchildren;
        Node* getParent();
        int getValue();
        virtual ~Node();
    protected:
    private:
        int data;
        Node *children[10];
        Node *parent;

};

#endif // NODE_H
