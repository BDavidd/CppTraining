// BinarySearchTree.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include "BinaryTreeNode.h"
#include <memory>
#include <utility>


template <typename T>
class BinaryTree
{
public:
	using BinaryTreeNodePair = std::pair<std::shared_ptr<BinaryTreeNode<T>>, std::shared_ptr<BinaryTreeNode<T>>>;
	
	void add(T value);
	void addTo(std::shared_ptr<BinaryTreeNode<T>> node, T value);

	void remove(T value);

	std::shared_ptr<BinaryTreeNode<T>> find(T value);
	BinaryTreeNodePair findWithParent(T value);

	void printPre(bool recursive = true);
	void printIn(bool recursive = true);
	void printPost(bool recursive = true);
	
private:
	std::shared_ptr<BinaryTreeNode<T>> find(std::shared_ptr<BinaryTreeNode<T>> node, T value);
	
	void printPreRecursive(std::shared_ptr<BinaryTreeNode<T>> node);
	void printInRecursive(std::shared_ptr<BinaryTreeNode<T>> node);
	void printPostRecursive(std::shared_ptr<BinaryTreeNode<T>> node);

	void printPreIterative();
	void printInIterative();
	

	void removeNode(BinaryTreeNodePair nodes, std::shared_ptr<BinaryTreeNode<T>> replacement);
	
	std::shared_ptr<BinaryTreeNode<T>> mRoot;
};
