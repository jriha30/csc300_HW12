class Node
{
    private:
        int payload;
        Node* leftChild;
        Node* rightChild;

    public:
        Node(int payload);
        int getPayload();
        Node* getLeftChild();
        Node* getRightChild();
        void setLeftChild(Node* c);
        void setRightChild(Node* c);
};