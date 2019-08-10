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
	std::shared_ptr<Node<T>> head() const;
	void add(T value);
	void addHead(T value);
	void addTail(T value);

	void removeHead();
	
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
	std::shared_ptr<Node<T>> mHead;
	std::shared_ptr<Node<T>> mTail;
};
