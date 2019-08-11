// LinkedList.h : Include file for standard system include files,
// or project specific include files.
#pragma once

#include "Node.h"
#include <memory>
#include <ostream>

template<typename T>
class LinkedList
{
public:
	LinkedList() = default;
	LinkedList(const std::initializer_list<T>& list);
	~LinkedList() = default;

	Node<T>* begin();
	Node<T>* end();

	void addHead(T value);
	void addTail(T value);

	void addHead(std::shared_ptr<Node<T>> node);
	void addTail(std::shared_ptr<Node<T>> node);

	void removeHead();
	void removeTail();
	void removeFirst(T value);
	void removeFirst(std::shared_ptr<Node<T>> node);
	void removeAll(T value);
	void removeAll(std::shared_ptr<Node<T>> node);

	std::shared_ptr<Node<T>> find(T value);
	bool contains(T value);
	
	size_t size();
	void clear();

	friend std::ostream& operator<<(std::ostream& os, const LinkedList& obj)
	{
		auto current = obj.mHead;
		while (current)
		{
			os << *current << " ";
			current = current->next();
		}
		return os;
	}

private:
	void add(std::shared_ptr<Node<T>> node, bool atHead);
	void remove(T value, bool removeAll);

	std::shared_ptr<Node<T>> mHead = nullptr;
	std::shared_ptr<Node<T>> mTail = nullptr;
	size_t mSize = 0;
};
