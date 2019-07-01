#ifndef HTMLBUILDER_H
#define HTMLBUILDER_H

#include <sstream>
#include <string>
#include <utility>
#include <vector>


class HtmlElement
{
public:
	HtmlElement() = default;
	HtmlElement(std::string name, std::string text)
		: name{std::move(name)}
		, text{std::move(text)}
	{	
	}

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
	constexpr static size_t indentSize = 4;
};

class HtmlBuilder
{
public:
	explicit HtmlBuilder(const std::string& rootName)
		: root{rootName, ""}
	{
		
	}

	void addChild(std::string childName, std::string childText)
	{
		HtmlElement e(std::move(childName), std::move(childText));
		root.addElement(e);
	}

	std::string str() const
	{
		return root.str();
	}

private:
	HtmlElement root;
};

#endif
