#include <stdio.h>			// 这个头文件包含基本的输入输出函数
int main()				// 主函数，程序将从这里开始执行
{
   char *c;				// 声明一个字符串变量c
   c = "hello world!";			// 为字符串变量赋值
   printf("%s\n", c);			// 输出该变量，并输出换行符
   return 0;				// 程序结束时向操作系统返回0，表示正常退
}
