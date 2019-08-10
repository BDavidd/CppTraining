#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <memory>
#include "HtmlBuilder.h"

void naiveCreateParagraph(const std::string& text)
{
	std::string output;
	output += "<p>";
	output += text;
	output += "</p>";

	std::cout << __FUNCTION__ << ' ' << output << std::endl;
}

void printfCreateParagraph(const std::string& text)
{
	std::cout << __FUNCTION__ << ' ';
	printf("<p>%s</p>\n", text.c_str());
}

void createList(std::string* begin, std::string* end)
{
	std::ostringstream oss;
	oss << "\n<ul>\n";
	for (auto x = begin; x != end; ++x)
	{
		oss << "\t<li>" << *x << "</li>\n";
	}
	oss << "</ul>";

	std::cout << __FUNCTION__ << oss.str() << std::endl;
}

void withoutBuilderMain()
{
	auto text = "hello";
	naiveCreateParagraph(text);
	printfCreateParagraph(text);

	std::string words[] = { "hello", "world" };
	createList(std::begin(words), std::end(words));
}

void withBuilderMain()
{
	HtmlBuilder builder{ "ul" };
	builder.addChild("li", "hello")
		   .addChild("li", "world");

	HtmlElement e = HtmlElement::build("ul").addChild("li", "hello");

	HtmlElement* ee = HtmlElement::create("ul")->addChildPtr("li", "world");

	std::cout << builder.str();
	std::cout << e.str();
}

int main()
{
	//withoutBuilderMain();
	withBuilderMain();

	return 0;
}
