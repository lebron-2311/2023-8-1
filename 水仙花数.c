//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Dight(int num)   //求一个数字一共有多少位
//{
//	int n = 1;  //初始化位数是1
//	while (num > 9)//比9大就加一位
//	{
//		num = num / 10;
//		n++;
//	}
//	return n;
//}
//int pow(int n, int k)//参数 n是我们要输入的数字，参数K是我们要输入的k次方
//{
//	if (n == 0)
//	{
//		return 0;  //0的多少次方都是0
//	}
//	int p = 1;
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		p = p * n;  //k到几就是几次方
//	}
//	return p;
//}
//int is_shuixianhuashu(int num)
//{
//	int n = Dight(num);
//	int sum = 0;
//	int number = num;
//	for (int i = 0; i < n; i++)
//	{
//		sum = sum + pow(number % 10, n);
//		number = number / 10;
//	}
//	if (sum == num)
//	{
//		return 1;
//	}
//	else return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if (is_shuixianhuashu(i)==1)
//		{
//			printf("%d ", i);
//		}
//	}
//}
