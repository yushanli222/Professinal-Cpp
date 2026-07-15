#include <iostream>

//自己定义的函数，必须有return 值，并且函数不能嵌套
int test()
{

	std::cout << "嗨！";
	return 0;	
}
//程序唯一的入口
int main()
{
	std::cout << "一切顺利\n";
	test();//调用函数test
	return 0;
}
