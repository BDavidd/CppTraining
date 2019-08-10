// LinkedList.cpp : Defines the entry point for the application.
//

#include "LinkedList.h"
#include "Node.h"
#include <iostream>


template <typename T>
std::shared_ptr<Node<T>> LinkedList<T>::head() const
{
	return mHead;
}

template <typename T>
void LinkedList<T>::add(T value)
{
	addHead(value);
}

template <typename T>
void LinkedList<T>::addHead(T value)
{
	auto node = std::make_shared<Node<T>>(value);
	if (mTail == nullptr)
	{
		mTail = node;
	}
	node->setNext(mHead);
	mHead = node;
}

template <typename T>
void LinkedList<T>::addTail(T value)
{
	auto node = std::make_shared<Node<T>>(value);
	if (mHead == nullptr)
	{
		mHead = node;
	}
	if (mTail)
	{
		mTail->setNext(node);
	}
	mTail = node;
}

template <typename T>
void LinkedList<T>::removeHead()
{
	std::cout << __FUNCTION__ << std::endl;
	if (mHead)
	{
		mHead->setNext(mHead->next());
	}
}

template <typename T>
void LinkedList<T>::clear()
{
	std::cout << __FUNCTION__ << std::endl;
	if (!mHead) { return; }
	
	auto previous = mHead;
	auto current = mHead->next();

	while (current)
	{
		previous->setNext(nullptr);
		previous = current;
		current = current->next();
	}
	mHead = nullptr;
	mTail = nullptr;
}

int main()
{
	{
		LinkedList<int> list;
		list.addHead(5);
		list.addHead(7);
		list.addHead(9);
		list.addHead(4);
		std::cout << list << std::endl;
	}

	{
		LinkedList<int> list;
		list.addTail(5);
		list.addTail(7);
		list.addTail(9);
		list.addTail(4);
		std::cout << list << std::endl;
	}

	{
		LinkedList<int> list;
		list.addTail(5);
		list.addTail(7);
		list.addTail(9);
		list.addTail(4);

		list.removeHead();
		
		list.clear();
		
		std::cout << list << std::endl;
	}
	
	return 0;
}
