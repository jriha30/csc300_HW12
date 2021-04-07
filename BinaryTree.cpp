#include "BinaryTree.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

BinaryTree::BinaryTree()
{
    this->root = NULL;
}

void BinaryTree::addNode(Node* newNode, Node* nodeToAddTo)
{
    if(this->root == NULL)
    {
        this->root = newNode;
    }
    else
    {
        Node* currNode = nodeToAddTo;
        if(newNode->getPayload() <= currNode->getPayload())
        {
            if(currNode->getLeftChild() == NULL)
            {
                currNode->setLeftChild(newNode);
            }
            else
            {
                currNode = currNode->getLeftChild();
                this->addNode(newNode, currNode);
            }
        }
        else
        {
            if(currNode->getRightChild() == NULL)
            {
                currNode->setRightChild(newNode);
            }
            else
            {
                currNode = currNode->getRightChild();
                this->addNode(newNode, currNode);
            }
        }
    }
}

void BinaryTree::visitInOrder(Node* nodeToCheck)
{
    if(this->root == NULL)
    {
        cout << "The binary tree is empty" << endl;
        return;
    }
    else
    {

        Node* currNode = nodeToCheck;
        Node* currNodeLeft = currNode->getLeftChild();
        Node* currNodeRight = currNode->getRightChild();

        if(currNodeLeft != NULL)
        {
            this->visitInOrder(currNodeLeft);
        }

        cout << currNode->getPayload() << endl;

        if(currNodeRight != NULL)
        {
            this->visitInOrder(currNodeRight);
        }
    }
}

void BinaryTree::visitPreOrder(Node* nodeToCheck) // NON-FUNCTIONAL
{
    if(this->root == NULL)
    {
        cout << "The binary tree is empty" << endl;
        return;
    }
    else
    {

        Node* currNode = nodeToCheck;
        Node* currNodeLeft = currNode->getLeftChild();
        Node* currNodeRight = currNode->getRightChild();

        cout << currNode->getPayload() << endl;
        
        if(currNodeLeft != NULL)
        {
            this->visitInOrder(currNodeLeft);
        }

        if(currNodeRight != NULL)
        {
            this->visitInOrder(currNodeRight);
        }
    }
}

void BinaryTree::visitPostOrder(Node* nodeToCheck) // NON-FUNCTIONAL
{
    if(this->root == NULL)
    {
        cout << "The binary tree is empty" << endl;
        return;
    }
    else
    {

        Node* currNode = nodeToCheck;
        Node* currNodeLeft = currNode->getLeftChild();
        Node* currNodeRight = currNode->getRightChild();

        if(currNodeLeft != NULL)
        {
            this->visitInOrder(currNodeLeft);
        }

        if(currNodeRight != NULL)
        {
            this->visitInOrder(currNodeRight);
        }

        cout << currNode->getPayload() << endl;
    }
}

Node* BinaryTree::getRoot()
{
    return this->root;
}

void BinaryTree::display()
{
    if(this->root != NULL)
    {
        this->visitPostOrder(this->root);
    }
    else
    {
        cout << "NULL" << endl;
    }
}