//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int Dight(int num)   //��һ������һ���ж���λ
//{
//	int n = 1;  //��ʼ��λ����1
//	while (num > 9)//��9��ͼ�һλ
//	{
//		num = num / 10;
//		n++;
//	}
//	return n;
//}
//int pow(int n, int k)//���� n������Ҫ��������֣�����K������Ҫ�����k�η�
//{
//	if (n == 0)
//	{
//		return 0;  //0�Ķ��ٴη�����0
//	}
//	int p = 1;
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		p = p * n;  //k�������Ǽ��η�
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
