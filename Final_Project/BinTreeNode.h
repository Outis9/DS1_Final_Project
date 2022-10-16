#ifndef _BIN_TREE_NODE_H
#define _BIN_TREE_NODE_H

//define BinTreeNode class
template<class ElemType>
struct BinTreeNode{
    ElemType data;
    BinTreeNode<ElemType> *leftChild;
    BinTreeNode<ElemType> *rightChild;

    BinTreeNode();
    BinTreeNode(const ElemType &d,BinTreeNode<ElemType> *lChild=nullptr,BinTreeNode<ElemType> *rChild=nullptr);
};

//complete the func
template<class ElemType>
BinTreeNode<ElemType>::BinTreeNode(){
    leftChild = rightChild = nullptr;
}

template<class ElemType>
BinTreeNode<ElemType>::BinTreeNode(const ElemType &d,BinTreeNode<ElemType> *lChild,BinTreeNode<ElemType> *rChild){
    data=d;
    leftChild=lChild;
    rightChild=rChild;
}


#endif