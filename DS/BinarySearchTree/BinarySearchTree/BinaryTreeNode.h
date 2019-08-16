#pragma once
#include <memory>
#include <ostream>

template <typename T>
class BinaryTreeNode
{
public:
	explicit BinaryTreeNode(T val)
	: mLeft(nullptr)
	, mRight(nullptr)
	, mValue(val)
	{}
	
	friend bool operator==(const BinaryTreeNode& lhs, const BinaryTreeNode& rhs)
	{
		return lhs.mValue == rhs.mValue;
	}

	friend bool operator<(std::shared_ptr<BinaryTreeNode<T>> lhs, std::shared_ptr<BinaryTreeNode<T>> rhs)
	{
		return lhs->mValue < rhs->mValue;
	}

	friend bool operator==(std::shared_ptr<BinaryTreeNode<T>> lhs, const T& rhs)
	{
		return lhs->mValue == rhs;
	}

	friend bool operator<(const BinaryTreeNode& lhs, const T& rhs)
	{
		return lhs.mValue < rhs;
	}

	friend bool operator>(std::shared_ptr<BinaryTreeNode<T>> lhs, const T& rhs)
	{
		return lhs->mValue > rhs;
	}

	friend std::ostream& operator<<(std::ostream& os, const BinaryTreeNode& obj)
	{
		return os << obj.mValue;
	}

	std::shared_ptr<BinaryTreeNode<T>> mLeft;
	std::shared_ptr<BinaryTreeNode<T>> mRight;
	T mValue;
};
