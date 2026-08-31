#include<stdio.h>
//语法错误，编辑会失败提前跑会报错
// 生成解决方案（B）预执行即可

/*int num2 = 20;*///全局变量-定义在{}之外



//int main()
//{
/*
	char ch = 'A';
	printf("%c\n", ch);
	//代码写在main里面
	int age = 20;
	printf("%d\n", age);//%d表示打印整型十进制数据
	long num = 100;
	printf("%d\n", num);
	float f = 5.6;
	printf("%f\n", f);
	double d = 3.14;
	printf("%lf\n", d);
    
	printf("%d\n", sizeof(char));        //1  (字节）
	printf("%d\n", sizeof(short));       //2
	printf("%d\n", sizeof(int));         //4
	printf("%d\n", sizeof(long));         //4或8         c语言标准规定long的大小≥int
	printf("%d\n", sizeof(long long));   //8
	printf("%d\n", sizeof(float));       //4
	printf("%d\n", sizeof(double));      //8
*/
	//short age = 20;//向内存申请两个字节来存放20
	//float weight = 95.6f;//向内存申请4个字节存放小数
	/*int num1 = 10;*///局部变量-定义在{}之内，当全局变量和局部变量相同时，优先显示局部变量        建议局部变量和全局变量不要相同，容易产生误会和bug
	

//	//计算两数相加
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数
//	scanf_s("%d%d", &num1, &num2);//&取地址符号
//	
//	sum = num1 + num2;//c语言语法规定，变量要定义在当前代码块的最前面
//	printf("%d\n", sum);
//
//	return 0; 
//}


//标识符不要出现特殊的符号，
	/*  signed short  有符号短整型 占用2字节 （有符号指包含负数，无符号表示不包含负数，整型指整数类型）    同一类型的变量有符号和无符号所占储存是一样的
	*    signed int  有符号整型       4
	*    signed long  有符号长整型     4
	*     signed long long 有符号长长整型     8
	*     unsigned short  无符号短整型    2
	*     unsigned int  无符号整型    4
	*     unsigned long  无符号长整形    4
	*      unsigned long long 无符号长长整型    8
	*/

//char字符数据类型
//short短整型
//int整型
//long长整型
//long long更长的整型
//float单精度浮点数
//double双精度浮点数
// 
// 
// 
//int整型short int短整型
//%d表示打印整型
//%c表示打印字符
//%f打印浮点数字，打印小数
//%p表示以地址的形式打印
//%x表示打印16进制

///*字节
//计算机中的单位                计算机是硬件必须通电，电信号转化数字信号  正电1  负电0    1占1个比特位
//bit  比特位
//byte  字节     一字节占8个比特位
//kb 1024字节
//mb  1024kb
//gb
//tb
//pb*/
///*变量分为全局变量和局部变量*/
//变量的作用域和生命周期，作用域即变量哪里可用那里就是作用域

int global = 2026;//全局变量

void test()
{

	printf("test()--%d\n", global);

}

int main()
{
	test();
	printf("%d\n", global);
	extern int g_val;//extern声明外部文件
	printf("g_val=%d\n", g_val);//为声明的标识符

	return 0;
}