#define _CRT_SECURE_NO_WARNINGS //使得scanf无法使用的警告失效    scanf,strcpy,strlen,strcat均为C语言的函数在vs中提示不安全
// _CRT_SECURE_NO_WARNINGS必须加在源文件的第一行


#include <stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf是C语言提供的，scanf_s是vs提供的，建议使用scanf，scanf_s只能在vs使用
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);//双引号里面的普通文字只是给人看的，不改变程序里面变量的数据。建议输入英文
//	return 0;
//}
//常量和变量
//字面常量,const修饰的常变量，#define定义的标识符常量，枚举常量
#define MAX 10

//int main()
//{
//	//3;//字面常量(确定的值）
//	// const修饰的常变量
//	      //const int num = 4;//const常属性，使得变量变为常量（constant   永恒的，一成不变的  const 常数）
//	      //printf("%d\n", num);
//	      //num = 8;
//	      //printf("%d\n", num);
//	      //const int n = 10;
//	      //int arr[n] = { 0 };//arr中必须是常量，而const修饰的n是常变量（具有常属性的变量）依然是变量，无法放入arr中
//	//#define定义的标识符常量
//	      //int arr[MAX] = { 0 };//arr数组，与num类似，全拼array
//	      //printf("%d\n", MAX);
//	
//	
//	return 0;
//}
//枚举常量
	      //枚举--一一列举
	      //枚举关键字  -  enum
enum sex
{
	male,
	female,
	secret,
};
//male,female,secret为枚举常量
int main()
{
	enum sex s = female;
	printf("%d\n", male);//0
	printf("%d\n", female);//1
	printf("%d\n", secret);//2
	return 0;
}


