#define _CRT_SECURE_NO_WARNINGS
//字符串，转义字符，注释
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	//数据在计算机上储存的时候。存的是2进制
	//给每个字符编号，A-65，a-97，......均为ASCII编码，每个字符都有对应的ASCII码值
	//字符串是由双引号引起的一段字符
/*	
	char arr1 [] = "abc";//数组      //双引号字符串自动在末尾补\0，即"abc"表示'a','b','c','\0',      \0是字符串的结束标志
	char arr2 [] = { 'a','b','c' ,'\0'};//单引号字符串不会自动在末尾补\0，即'a','b','c',后面是内存里随机垃圾值
	char arr3[] = { 'a','b','c' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;

	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };//   \0是转义字符  转变原来的意思
	printf("%d\n", strlen(arr1));//strlen    string length 计算字符串的长度(有效字符串长度)   3
	printf("%d\n", sizeof(arr1));//sizeof：算整个数组占用内存大小，包含`\0`                   4
	printf("%d\n", strlen(arr2));//strlen：求字符串有效字符个数，找`\0`停止，不包含结束符      35
	printf("%d\n", sizeof(arr2));//                                                        3
	printf("%d\n", strlen(arr3));//                                                        3
	printf("%d\n", sizeof(arr3));//                                                        4
	return 0;
*/
/*转义字符
\n   换行
\t   水平制表(tab)  
\r   回车，光标回到本行开头
\b   退格，光标回退一格
\f   换页
\\   输出\
\'   输出单引号'
\"   输出双引号"
\0   字符串结束符
\a   响铃(蜂鸣)
\ddd   八进制表示字符，\101='A'  八进制中101=十进制65    ddd表示1-3个八进制数字 每个数字不能超过8
\xhh   十六进制表示字符，\x41='A'                    
*/
//	printf("%d\n", strlen("c:\test\32\test.c"));//13     \t是一个转义字符  \32是一个转义字符，即32作为一个八进制数字所代表的十进制数字，作为ASCII码值所对应的字符
	SetConsoleOutputCP(CP_UTF8);   // 设置控制台输出为UTF‑8
	SetConsoleCP(CP_UTF8);
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？(1/0)>:");
	scanf("%d", &input);
	if(input == 1)
	    printf("好offer\n");
	else
		printf("卖红薯\n");



	return 0;
}
