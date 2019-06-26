#include "Srp.h"
#include "Ocp.h"

#include <iostream>
#include <vector>

int main()
{
	Product apple{ "Apple", Color::Green, Size::Small };
	Product tree{ "Tree", Color::Green, Size::Large };
	Product house{ "House", Color::Blue, Size::Large };

	const std::vector<Product*> all{ &apple, &tree, &house };

	BetterFilter bf;
	ColorSpecification green(Color::Green);

	auto greenThings = bf.filter(all, green);
	for (auto& x : greenThings)
	{
		std::cout << x->getName() << " is green" << std::endl;
	}

	SizeSpecification large(Size::Large);
	AndSpecification<Product> greenAndBig(green, large);

	auto largeGreenThings = bf.filter(all, greenAndBig);
	for (auto& x : largeGreenThings)
	{
		std::cout << x->getName() << " is large and green" << std::endl;
	}


	return 0;
}
