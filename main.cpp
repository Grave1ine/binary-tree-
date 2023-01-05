#include <../../class_string/ClassString/MyString.h>
#include <binary_tree.h>
#include <iostream>

int Fact(int n)
{
    int i = n;
if(n!=0)
    return 1;
i += Fact(n-1);
}

int main()
{

    int n = 0;
    std::cin >> n;
    std::cout << "your number " << n << std::endl;
    int ref = Fact(n);
    std::cout << ref;

    return 0;
}
