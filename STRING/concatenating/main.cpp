#include <iostream>

int main ()
{
    std::string str1 = "whath a ";
    std::string str2 = "beautiful day";
    std::cout << "first string : "<< str1 <<std::endl;
    std::cout << "second string : "<< str2 << std::endl;
    std::cout << "concatenated sentence" << str1.append(str2) << std::endl;
}

// concatenating using array 