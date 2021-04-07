#include "Node.hpp"

class BinaryTree

{
    private:
        Node* root;
    
    public:
        BinaryTree();
        Node* getRoot();
        void addNode(Node* newNode, Node* nodeToAddTo);
        void visitInOrder(Node* nodeToCheck);
        void visitPreOrder(Node* nodeToCheck);
        void visitPostOrder(Node* nodeToCheck);
        void display();
};