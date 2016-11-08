/*
 Sifer Aseph
 https://github.com/ryra
 Binary Tree
 */

#include <iostream>

//template <class T>
class Node {
public:
    friend class Tree;
    
private:
    int keyValue;
    Node * leftBranch;
    Node * rightBranch;
};

//template <class T>
class Tree {
public:
    Tree(): root(nullptr) {};
    ~Tree() {
        deleteTree();
    }
    
    void insert(int key);
    Node * search(int key);
    void deleteTree();
    
private:
    Node * root;
    
    void insert(int key, Node * leaf);
    Node * search(int key, Node * leaf);
    void deleteTree(Node * leaf) {
        if (leaf != nullptr) {
            deleteTree(leaf->leftBranch);
            deleteTree(leaf->rightBranch);
        }
    }
};

int main() {
    
    
    return 0;
}
