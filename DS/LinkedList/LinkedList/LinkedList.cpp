// LinkedList.cpp : Defines the entry point for the application.
//

#include "LinkedList.h"
#include "Node.h"
#include <iostream>


template <typename T>
LinkedList<T>::LinkedList(const std::initializer_list<T>& list)
{
	for (const auto& item : list)
	{
		addTail(item);
	}
}

template <typename T>
Node<T>* LinkedList<T>::begin()
{
	std::cout << __FUNCTION__ << mHead->value() << " " << mHead.get() << std::endl;
	return mHead.get();
}

template <typename T>
Node<T>* LinkedList<T>::end()
{
	std::cout << __FUNCTION__ << mTail->value() << " " << mTail.get() << std::endl;
	return mTail.get();
}

template <typename T>
void LinkedList<T>::addHead(T value)
{
	auto node = std::make_shared<Node<T>>(value);
	addHead(node);
}

template <typename T>
void LinkedList<T>::addTail(T value)
{
	auto node = std::make_shared<Node<T>>(value);
	addTail(node);
}

template<typename T>
void LinkedList<T>::addHead(std::shared_ptr<Node<T>> node)
{
	add(node, true);
}

template<typename T>
void LinkedList<T>::addTail(std::shared_ptr<Node<T>> node)
{
	add(node, false);
}

template <typename T>
void LinkedList<T>::removeHead()
{
	std::cout << __FUNCTION__ << std::endl;
	remove(mHead->value(), false);
}

template <typename T>
void LinkedList<T>::removeTail()
{
	std::cout << __FUNCTION__ << std::endl;
	remove(mTail->value(), false);
}

template <typename T>
void LinkedList<T>::removeFirst(T value)
{
	remove(value, false);
}

template<typename T>
void LinkedList<T>::removeFirst(std::shared_ptr<Node<T>> node)
{
	remove(node->value(), false);
}

template <typename T>
void LinkedList<T>::removeAll(T value)
{
	remove(value, true);
}

template<typename T>
void LinkedList<T>::removeAll(std::shared_ptr<Node<T>> node)
{
	remove(node->value(), true);
}

template <typename T>
void LinkedList<T>::add(std::shared_ptr<Node<T>> node, bool atHead)
{
	++mSize;
	if (atHead)
	{
		node->setNext(mHead);
		mHead = node;
	}
	else
	{
		if (mTail)
		{
			mTail->setNext(node);
		}
		mTail = node;
	}

	if (mTail == nullptr)
	{
		mTail = node;
	}
	if (mHead == nullptr)
	{
		mHead = node;
	}
}

template<typename T>
void LinkedList<T>::remove(T value, bool removeAll)
{
	if (!mHead) { return; }
	std::shared_ptr<Node<T>> previous = nullptr;
	auto current = mHead;
	while (current)
	{
		if (!previous && *current == value)
		{
			mHead = current->next();
			--mSize;
			if (!removeAll)
			{
				return;
			}
		}
		else if (previous && *current == value)
		{
			previous->setNext(current->next());
			if (previous->next() == nullptr)
			{
				mTail = previous;
			}
			--mSize;
			if (!removeAll)
			{
				return;
			}
		}
		previous = current;
		current = current->next();
	}
}

template <typename T>
size_t LinkedList<T>::size()
{
	return mSize;
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

		std::cout << list << std::endl;
		list.removeHead();
		std::cout << list << std::endl;
		list.removeTail();

		std::cout << list << std::endl;
		
		list.clear();
		
		std::cout << list << std::endl;
	}

	{
		LinkedList<double> list;
		list.addHead(std::make_shared<Node<double>>(3));
		list.addHead(std::make_shared<Node<double>>(4));
		list.addHead(std::make_shared<Node<double>>(5));
		list.addHead(std::make_shared<Node<double>>(6));

		std::cout << list << std::endl;
	}

	{
		LinkedList<int> list = { 0, 1, 2, 2, 3, 4 };
		std::cout << list << std::endl;

		list.removeFirst(2);
		std::cout << list << "size: " << list.size() << std::endl;

		list.removeFirst(0);
		std::cout << list << "size: " << list.size() << std::endl;

		list.removeFirst(4);
		std::cout << list << "size: " << list.size() << std::endl;

		list.removeFirst(std::make_shared<Node<int>>(1));
		std::cout << list << "size: " << list.size() << std::endl;

		for (Node<int> x : list)
		{
			std::cout << x << ' ';
		}
		std::cout << std::endl;
	}
	
	return 0;
}
