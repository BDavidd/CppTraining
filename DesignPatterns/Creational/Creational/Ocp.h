#ifndef OCP_H
#define OCP_H

#include <string>
#include <utility>
#include <vector>


enum class Color
{
	Red,
	Green,
	Blue
};

enum class Size
{
	Small,
	Medium,
	Large
};

class Product
{
public:
	Product(std::string name, Color color, Size size)
		: name{std::move(name)}
		, color{color}
		, size{size}
	{
	}

	std::string getName() const { return name;  }
	Color getColor() const { return color; }
	Size  getSize() const { return size; }

private:
	std::string name;
	Color color;
	Size size;
};

class ProductFiler
{
public:
	typedef  std::vector<Product*> Items;
	static Items byColor(const Items& items, Color color)
	{
		Items result;
		for (auto& i : items)
		{
			if (i->getColor() == color)
			{
				result.push_back(i);
			}
		}
		return result;
	}

	static Items bySize(const Items& items, Size size)
	{
		Items result;
		for (auto& i : items)
		{
			if (i->getSize() == size)
			{
				result.push_back(i);
			}
		}
		return result;
	}

	static Items byColorAndSize(const Items& items, Color color, Size size)
	{
		Items result;
		for (auto& i : items)
		{
			if (i->getColor() == color && i->getSize() == size)
			{
				result.push_back(i);
			}
		}
		return result;
	}
};

template <typename T>
class ISpecification
{
public:
	ISpecification() = default;
	virtual ~ISpecification() noexcept = default;
	ISpecification(const ISpecification& rhs) = delete;
	ISpecification& operator=(const ISpecification& rhs) = delete;
	ISpecification(ISpecification&& rhs) = default;
	ISpecification& operator=(ISpecification&& rhs) = default;

	virtual bool isSatisfied(T* item) = 0;
};

template <typename T>
class AndSpecification final : public ISpecification<T>
{
public:
	AndSpecification(ISpecification<T>& first, ISpecification<T>& second)
		: first{ first }
		, second{ second }
	{

	}

	bool isSatisfied(Product* item) override
	{
		return first.isSatisfied(item) && second.isSatisfied(item);
	}

private:
	ISpecification<T>& first;
	ISpecification<T>& second;
};

template <typename T>
class IFilter
{
public:
	IFilter() = default;
	virtual ~IFilter() = default;
	IFilter(const IFilter& rhs) = delete;
	IFilter& operator=(const IFilter& rhs) = delete;
	IFilter(IFilter&& rhs) = default;
	IFilter& operator=(IFilter&& rhs) = default;

	virtual std::vector<T*> filter(std::vector<T*> items, ISpecification<T>& spec) = 0;
};

class BetterFilter final : public IFilter<Product>
{
public:
	typedef  std::vector<Product*> Items;
	std::vector<Product*> filter(std::vector<Product*> items, ISpecification<Product>& spec) override
	{
		Items result;
		for (auto& p : items)
		{
			if (spec.isSatisfied(p))
			{
				result.push_back(p);
			}
		}
		return result;
	}
};

class ColorSpecification : public ISpecification<Product>
{
public:
	explicit ColorSpecification(const Color color)
		: color{color}
	{
		
	}

	bool isSatisfied(Product* item) override
	{
		return item->getColor() == color;
	}

private:
	Color color;
};

class SizeSpecification final : public ISpecification<Product>
{
public:
	explicit SizeSpecification(const Size size)
		: size{ size }
	{

	}

	bool isSatisfied(Product* item) override
	{
		return item->getSize() == size;
	}

private:
	Size size;
};

#endif
