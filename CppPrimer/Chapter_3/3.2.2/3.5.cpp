 #include <iostream>
 #include <string>

 int main()
 {
    std::string containerString;
    std::string inputString;

    std::cout << "Enter a string: ";
    std::cin >> inputString;
    containerString += inputString + ' ';

    std::cout << "Enter another string: ";
    std::cin >> inputString;
    containerString += inputString;

    std::cout << "The concatenated strings: " << containerString << std::endl;

     return 0;
 }
