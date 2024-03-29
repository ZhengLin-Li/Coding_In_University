#include "huffnode.h"

#ifndef FINAL_HUFFTREE_H
#define FINAL_HUFFTREE_H

// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// HuffTree is a template of two parameters: the element
//  type being coded and a comparator for two such elements.
template<typename E>
class HuffTree {
private:
    HuffNode<E> *Root;         // Tree root
public:
    HuffTree(E &val) // Leaf constructor
    { Root = new LeafNode<E>(val); }

    // Internal node constructor
    HuffTree(HuffTree<E> *l, HuffTree<E> *r) { Root = new IntlNode<E>(l->root(), r->root()); }//��¼���Һ���
    ~HuffTree() {}                          // Destructor
    HuffNode<E> *root() { return Root; }    // Get root
//    int weight() { return Root->weight(); } // Root weight
};


#endif //FINAL_HUFFTREE_H
