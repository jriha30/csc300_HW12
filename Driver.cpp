#include <iostream>
#include "BinaryTree.hpp"

using namespace std;

int main(int argc, char** argv)
{
    Node* n1 = new Node(1);
    Node* n2 = new Node(0);
    Node* n3 = new Node(8);
    Node* n4 = new Node(2);
    Node* n5 = new Node(4);
    Node* n6 = new Node(7);
    Node* n7 = new Node(12);
    Node* n8 = new Node(9);
    
    BinaryTree* bt = new BinaryTree();

    bt->addNode(n1, bt->getRoot());
    bt->addNode(n2, bt->getRoot());
    bt->addNode(n3, bt->getRoot());
    bt->addNode(n4, bt->getRoot());
    bt->addNode(n5, bt->getRoot());
    bt->addNode(n6, bt->getRoot());
    bt->addNode(n7, bt->getRoot());
    bt->addNode(n8, bt->getRoot());

    bt->display();
}