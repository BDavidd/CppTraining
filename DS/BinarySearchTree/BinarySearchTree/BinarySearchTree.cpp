// BinarySearchTree.cpp : Defines the entry point for the application.
//

#include "BinarySearchTree.h"
#include <iostream>
#include <stack>


template <typename T>
void BinaryTree<T>::add(T value)
{
	if (!mRoot)
	{
		mRoot = std::make_shared<BinaryTreeNode<T>>(value);
	}
	else
	{
		addTo(mRoot, value);
	}
}

template <typename T>
void BinaryTree<T>::addTo(std::shared_ptr<BinaryTreeNode<T>> node, T value)
{
	if (node > value)
	{
		if (node->mLeft == nullptr)
		{
			node->mLeft = std::make_shared<BinaryTreeNode<T>>(value);
		}
		else
		{
			addTo(node->mLeft, value);
		}
	}
	else
	{
		if (node->mRight == nullptr)
		{
			node->mRight = std::make_shared<BinaryTreeNode<T>>(value);
		}
		else
		{
			addTo(node->mRight, value);
		}
	}
}

template <typename T>
void BinaryTree<T>::remove(T value)
{
	auto searchResult = findWithParent(value);
	if (!searchResult.first)
	{
		return;
	}

	auto parent = searchResult.second;
	auto current = searchResult.first;
	
	// case 1: no right child -> left child takes the place of removed
	if (current->mRight == nullptr)
	{
		std::cout << "Case 1" << std::endl;
		removeNode(std::make_pair(current, parent), current->mLeft);
	}
	else if (current->mLeft != nullptr && current->mRight != nullptr)
	{
		std::cout << "Case 2" << std::endl;
		// case 2: removed right child has no left child -> right child takes the place of removed
		if (current->mRight->mLeft == nullptr)
		{
			// make left child of removed the left child of the replacer
			current->mRight->mLeft = current->mLeft;
			removeNode(std::make_pair(current, parent), current->mRight);
		}
		// case 3: removed right child has a left child -> leftmost child of right child takes the place of removed
		else
		{
			std::cout << "Case 3" << std::endl;
			// find leftmost child and its parent
			auto leftMost = current->mRight->mLeft;
			auto leftMostParent = current->mRight;
			
			while(leftMost->mLeft)
			{
				leftMostParent = leftMost;
				leftMost = leftMost->mLeft;
			}
			std::cout << '\n' << *leftMost << ' ' << *leftMostParent << std::endl;

			leftMostParent->mLeft = leftMost->mRight;
			leftMost->mLeft = current->mLeft;
			leftMost->mRight = current->mRight;

			removeNode(std::make_pair(current, parent), leftMost);
		}
	}
	
}

template <typename T>
std::shared_ptr<BinaryTreeNode<T>> BinaryTree<T>::find(T value)
{
	return find(mRoot, value);
}

template <typename T>
void BinaryTree<T>::printPre(bool recursive)
{
	if (recursive)
	{
		printPreRecursive(mRoot);
	}
	else
	{
		printPreIterative();
	}
}

template <typename T>
void BinaryTree<T>::printIn(bool recursive)
{
	if (recursive)
	{
		printInRecursive(mRoot);
	}
	else
	{
		printInIterative();
	}
}

template <typename T>
void BinaryTree<T>::printPost(bool recursive)
{
	if (recursive)
	{
		printPostRecursive(mRoot);
	}
}

template <typename T>
std::shared_ptr<BinaryTreeNode<T>> BinaryTree<T>::find(std::shared_ptr<BinaryTreeNode<T>> node, T value)
{
	if (node == nullptr)
	{
		return nullptr;
	}
	if (node > value)
	{
		return find(node->mLeft, value);
	}
	else if (node == value)
	{
		return node;
	}
	else
	{
		return find(node->mRight, value);
	}
}

template <typename T>
typename BinaryTree<T>::BinaryTreeNodePair BinaryTree<T>::findWithParent(T value)
{
	std::shared_ptr<BinaryTreeNode<T>> parent = nullptr;
	std::shared_ptr<BinaryTreeNode<T>> current = mRoot;

	while (current)
	{
		if (current == value)
		{
			return std::make_pair(current, parent);
		}
		else if (current > value)
		{
			parent = current;
			current = parent->mLeft;
		}
		else
		{
			parent = current;
			current = parent->mRight;
		}
	}

	return std::make_pair(nullptr, nullptr);
}

template <typename T>
void BinaryTree<T>::printPreRecursive(std::shared_ptr<BinaryTreeNode<T>> node)
{
	if (!node)
	{
		return;
	}
	std::cout << *node << " ";
	printPreRecursive(node->mLeft);
	printPreRecursive(node->mRight);
}

template <typename T>
void BinaryTree<T>::printInRecursive(std::shared_ptr<BinaryTreeNode<T>> node)
{
	if (!node)
	{
		return;
	}
	printInRecursive(node->mLeft);
	std::cout << *node << " ";
	printInRecursive(node->mRight);
}

template <typename T>
void BinaryTree<T>::printPostRecursive(std::shared_ptr<BinaryTreeNode<T>> node)
{
	if (!node)
	{
		return;
	}
	printPostRecursive(node->mLeft);
	printPostRecursive(node->mRight);
	std::cout << *node << " ";
}

template <typename T>
void BinaryTree<T>::printPreIterative()
{
	std::stack<std::shared_ptr<BinaryTreeNode<T>>> nodeStack;
	auto current = mRoot;
	nodeStack.push(current);

	while (!nodeStack.empty())
	{
		current = nodeStack.top();
		nodeStack.pop();
		
		std::cout << *current << ' ';

		if (current->mRight)
		{
			nodeStack.push(current->mRight);
		}
		if (current->mLeft)
		{
			nodeStack.push(current->mLeft);
		}
	}
}

template <typename T>
void BinaryTree<T>::printInIterative()
{
	std::stack<std::shared_ptr<BinaryTreeNode<T>>> nodeStack;
	auto current = mRoot;
	bool goLeft = true;

	nodeStack.push(current);

	while (!nodeStack.empty())
	{
		if (goLeft)
		{
			while (current->mLeft)
			{
				nodeStack.push(current);
				current = current->mLeft;
			}
		}

		std::cout << *current << ' ';

		if (current->mRight)
		{
			current = current->mRight;
			goLeft = true;
		}
		else
		{
			current = nodeStack.top();
			nodeStack.pop();
			goLeft = false;
		}
	}
}

template <typename T>
void BinaryTree<T>::removeNode(BinaryTreeNodePair nodes, std::shared_ptr<BinaryTreeNode<T>> replacement)
{
	if (nodes.second)
	{
		if (nodes.first < nodes.second)
		{
			nodes.second->mLeft = replacement;
		}
		else
		{
			nodes.second->mRight = replacement;
		}
	}
	else
	{
		mRoot = replacement;
	}
}

int main()
{
	BinaryTree<int> tree;
	tree.add(5);
	//tree.add(8);
	tree.add(2);
	tree.add(3);
	//tree.add(6);
	tree.add(1);
	tree.add(4);
	tree.add(15);
	tree.add(16);
	tree.add(13);
	tree.add(14);
	tree.add(12);
	tree.add(10);
	tree.add(11);



	std::cout << "PreOrder: ";
	tree.printPre();
	std::cout << std::endl;

	std::cout << "InOrder: ";
	tree.printIn();
	std::cout << std::endl;

	std::cout << "PostOrder: ";
	tree.printPost();
	std::cout << std::endl;

	const auto results = tree.findWithParent(3);
	if (results.first)
	{
		std::cout << "Found 3 parent: " << *results.second << std::endl;
	}
	if (!tree.find(10))
	{
		std::cout << "Didn't find 10" << std::endl;
	}

	tree.remove(5);
	
	tree.printPre();
	std::cout << std::endl;
	tree.printPre(false);
	std::cout << std::endl;
	tree.printIn(false);
	std::cout << std::endl;
	tree.printPost();
	std::cout << std::endl;

	return 0;
}
