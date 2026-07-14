#include <iostream>
#ifdef A
const char* str="A";
#else
const char* str="B";
#endif
int main()
{
	std::cout << str <<std::endl;
	return 0;
}

