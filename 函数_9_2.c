#define _CRT_SECURE_NO_WARNINGS
//函数
//库函数    printf...
//自定义函数   Add...

#include<stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}//此处定义Add函数



int main()
{
	//int num1 = 10;
	//int num2 = 20;
	//int sum = 0;
	//sum = num1 + num2;
	//printf("sum is %d\n", sum);
//亦或者是上节课所讲函数
	/*int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum is %d\n", sum);*/
//由此产生加法函数
	//int num1 = 10;
	//int num2 = 20;
	//int sum = 0;
	//sum = Add(num1, num2);//Add为函数，需要定义
	//printf("sum is %d\n", sum);

	//数组   一组相同类型元素的集合
	//int arr[10];//定义一个能够存放十个整型数字的数组
	//char ch[20];//
	//float arr2[5];//均为数组
	
	//数组的用法
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n", arr[4]);//用下标的方式访问元素
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d\n", arr[i]);
	//	i++;
	//}

	//操作符
	//算术操作符   +  -  *  /  %（取模，去余数）
	//移位操作符    <<  左移  >>右移
	//位操作符（二进制位）   &按位与    |按位或    ^按位异或
	//赋值操作符（复合赋值符）   =  +=   -=   *=   /=    ^=     |=    >>=    <<=
	//   =赋值   ==判断相等
	//单目操作符     !逻辑反操作
	//              -负号     通常情况+正好省略
	//              sizeof多数情况（变量）的（）可省略
	//双目操作符     
	//三目操作符    
	//C语言中判断真假    0-假   非0-真




	return 0;
}



