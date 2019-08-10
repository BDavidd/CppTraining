#ifndef HTMLBUILDER_H
#define HTMLBUILDER_H

#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <memory>

class HtmlBuilder;


class HtmlElement
{
public:
	HtmlElement() = default;
	HtmlElement(std::string name, std::string text)
		: name{std::move(name)}
		, text{std::move(text)}
	{	
	}

	static HtmlBuilder build(const std::string& rootName);

	static std::unique_ptr<HtmlBuilder> create(const std::string& rootName);

	void addElement(HtmlElement e)
	{
		children.emplace_back(e);
	}

	std::string str(int indent = 0) const
	{
		std::ostringstream oss;
		const std::string i(indentSize * indent, ' ');
		oss << i << "<" << name << ">" << std::endl;

		if (!text.empty())
		{
			oss << std::string(indentSize * (indent + 1), ' ') << text << std::endl;
		}

		for (const auto& child : children)
		{
			oss << child.str(indent + 1);
		}

		oss << i << "</" << name << ">" << std::endl;
		return oss.str();
	}

private:
	std::string name;
	std::string text;
	std::vector<HtmlElement> children;
	static constexpr size_t indentSize = 4;
};

class HtmlBuilder
{
public:
	explicit HtmlBuilder(const std::string& rootName)
		: root{rootName, ""}
	{
		
	}

	HtmlBuilder& addChild(std::string childName, std::string childText)
	{
		HtmlElement e(std::move(childName), std::move(childText));
		root.addElement(e);
		return *this;
	}

	HtmlBuilder* addChildPtr(std::string childName, std::string childText)
	{
		HtmlElement e(std::move(childName), std::move(childText));
		root.addElement(e);
		return this;
	}

	operator HtmlElement() const
	{
		return root;
	}

	operator HtmlElement*() const
	{
		return &root;
	}

	std::string str() const
	{
		return root.str();
	}

private:
	HtmlElement root;
};

HtmlBuilder HtmlElement::build(const std::string& rootName)
{
	return HtmlBuilder{ rootName };
}

inline std::unique_ptr<HtmlBuilder> HtmlElement::create(const std::string& rootName)
{
	return std::make_unique<HtmlBuilder>(rootName);
}

#endif
