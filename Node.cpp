#include "Node.hpp"
#include <stdlib.h>

Node::Node(int payload)
{
    this->payload = payload;
    this->leftChild = NULL;
    this->rightChild = NULL;
}

int Node::getPayload()
{
    return this->payload;
}

Node* Node::getLeftChild()
{
    return this->leftChild;
}

Node* Node::getRightChild()
{
    return this->rightChild;
}

void Node::setLeftChild(Node* c)
{
    this->leftChild = c;
}

void Node::setRightChild(Node* c)
{
    this->rightChild = c;
}