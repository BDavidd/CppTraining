#ifndef LSP_H
#define LSP_H
#include <iostream>

class Rectangle
{
public:
	Rectangle(const int width, const int height)
		: width{width}
		, height{height}
	{
		
	}

	virtual ~Rectangle() = default;

	virtual int getWidth() const
	{
		return width;
	}

	virtual void setWidth(const int width)
	{
		this->width = width;
	}

	virtual int getHeight() const
	{
		return height;
	}

	virtual void setHeight(const int height)
	{
		this->height = height;
	}

	int area() const { return width * height;  }

protected:
	int width;
	int height;
};

class Square : public Rectangle
{
public:
	explicit Square(int size) : Rectangle{ size, size } {}

	void setSize(int size)
	{
		this->width = size;
		this->height = height;
	}

private:
	void setWidth(const int width) override
	{
		this->width = width;
		this->height = width;
	}

	void setHeight(const int height) override
	{
		this->width = height;
		this->height = height;
	}
};

struct RectangleFactory
{
	static Rectangle createRectangle(int width, int height);
	static Rectangle createSquare(int size);
};

inline void process(Rectangle& r)
{
	int w = r.getWidth();
	r.setHeight(10);

	std::cout << "expect area: " << w * 10 << " ,got " << r.area() << std::endl;
}

inline void lspMain()
{
	Rectangle r{5, 5};
	process(r);

	//Square s{ 5 };
	//process(s);
}

#endif
