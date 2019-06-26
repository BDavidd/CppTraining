#include <iostream>
#include <string>


template <typename T>
struct Maybe;

template<typename T>
Maybe<T> maybe(T* context)
{
	return Maybe<T>(context);
}

template <typename T>
struct Maybe
{
	T* context;

	explicit Maybe(T* const context)
		: context{context}
	{
	}

	template<typename Func>
	auto with(Func evaluator)
	{
		if (context == nullptr)
		{
			return Maybe<typename std::remove_pointer<decltype(evaluator(context))>::type>(nullptr);
		}
		else
		{
			return maybe(evaluator(context));
		}
	}

	template<typename Func>
	auto run(Func action)
	{
		if (context != nullptr)
		{
			action(context);
		}
		return *this;
	}
};

struct Address
{
	std::string* houseName = nullptr;
};

struct Person
{
	Address* address = nullptr;
};

void printHouseName(Person* p)
{
	//if (p != nullptr && p->address != nullptr && p->address->houseName != nullptr)
	//{
	//	std::cout << *p->address->houseName << std::endl;
	//}
	maybe(p).with([](auto x) { return x->address; })
		    .with([](auto x) { return x->houseName; })
		    .run([](auto x) { std::cout << *x << std::endl; });
}

int main()
{
	Person p;
	p.address = new Address;
	p.address->houseName = new std::string("name");

	printHouseName(&p);

	delete p.address->houseName;
	delete p.address;

	return 0;
}
