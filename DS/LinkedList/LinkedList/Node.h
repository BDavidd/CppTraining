#pragma once

#include <memory>
#include <iostream>
#include <ostream>


template<typename T>
class Node
{
public:
	explicit Node(T value);
	~Node();

	Node(const Node& other)
		: mNext(other.mNext),
		  mValue(other.mValue)
	{
	}

	Node(Node&& other) noexcept
		: mNext(std::move(other.mNext)),
		  mValue(std::move(other.mValue))
	{
	}

	Node& operator=(const Node& other)
	{
		if (this == &other)
			return *this;
		mNext = other.mNext;
		mValue = other.mValue;
		return *this;
	}

	Node& operator=(Node&& other) noexcept
	{
		if (this == &other)
			return *this;
		mNext = std::move(other.mNext);
		mValue = std::move(other.mValue);
		return *this;
	}

	bool operator!=(Node* rhs)
	{
		std::cout << __FUNCTION__ << std::endl;
		return this != rhs;
	}

	bool operator==(const Node& rhs)
	{
		return mValue == rhs.value();
	}

	bool operator==(const T& rhs)
	{
		return mValue == rhs;
	}
	
	std::shared_ptr<Node<T>> next();
	void setNext(std::shared_ptr<Node<T>> next);
	
	T value() const;

	friend std::ostream& operator<<(std::ostream& os, const Node& obj)
	{
		return os << obj.mValue;
	}

	Node<T>* operator++()
	{
		std::cout << __FUNCTION__ << std::endl;
		return this->next().get();
	}

	Node<T>* operator++(int)
	{
		std::cout << __FUNCTION__ << std::endl;
		Node<T>* result(this);
        ++(this);
    	return result; 
	}

private:
	std::shared_ptr<Node<T>> mNext;
	T mValue;
};

template <typename T>
Node<T>::Node(T value)
	: mValue(value)
{
}

template <typename T>
Node<T>::~Node()
{
	std::cout << __FUNCTION__ << std::endl;
}

template<typename T>
std::shared_ptr<Node<T>> Node<T>::next()
{
	return mNext;
}

template <typename T>
void Node<T>::setNext(std::shared_ptr<Node<T>> next)
{
	mNext = next;
}

template<typename T>
T Node<T>::value() const
{
	return mValue;
}
