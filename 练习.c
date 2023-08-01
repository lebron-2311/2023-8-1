//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
////int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//括号的最后一个是C的值
//	printf("c=%d\n", c);
//	return 0;
//}
//struct Book
//{
//	char name[20];
//	int price;
//};
//
////结构体变量.成员
////结构体指针->成员
//
//void Print(struct Book* pb)
//{
//	printf("%s %d\n", (*pb).name, (*pb).price);
//	printf("%s %d\n", pb->name, pb->price);
//}
//
//int main()
//{
//	struct Book b = { "C语言指南", 55 };
//	printf("%s %d\n", b.name, b.price);
//
//	Print(&b);
//
//	return 0;
//}

//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//int main()
//{
//	/*int m = 0, n = 0;
//	scanf("%d%d", &m, &n);*/
//	int arr1 = {0};
//	int arr2 = {0};
//	int arr3 = {0};
//	
//	printf("输入：");
//	while ((scanf("%d", &arr1) != EOF))
//	{
//		printf("%d ", arr1);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[100] = {0};
//	int arr2[100] = {0};
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr1[i]);
//	for (j = 0; j < m; j++)
//		scanf("%d", &arr2[j]);
//	i = 0, j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j] && i < n && j < m)
//			printf("%d ", arr1[i++]);
//		else
//			printf("%d ", arr2[j++]);
//	}
//	while (i < n)
//	{
//		printf("%d ", arr1[i++]);
//	}
//	while (j < m)
//	{
//		printf("%d ", arr1[j++]);
//	}
//	return 0;
//
//}

//int main()
//{
//    int n, m, a, b;
//    scanf("%d%d", &n, &m);//n，m为两个数组中整数的个数
//    int num1[1000] = { 0 };
//    int num2[1000] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &num1[i]);//输入第一个数组的元素
//    for (i = 0; i < m; i++)
//        scanf("%d", &num2[i]);//输入第二个数组的元素
//    i = 0;
//    while (i < n && j < m)
//    {
//        if (num1[i] < num2[j] && i < n && j < m)
//            printf("%d ", num1[i++]);//如果第一个数组中的第一个元素小于第二个数组中的第一个元素，就输出第一个数组中的第一个元素，
//        else                         //并将i+1，用第一个数组中的第二个元素与第二个数字中的第一个元素进行比较
//            printf("%d ", num2[j++]);//否则，输出第二个数组中的第一个元素，并将第二个数组中的第二个元素与第一个数组中的第一个元素进行比较
//    }
//    //最后输出的是从小到大的两个数组中的经过比较的元素
//    while (i < n)
//        printf("%d ", num1[i++]);//输出没有比较的元素
//    while (j < m)
//        printf("%d ", num2[j++]);//输出没有比较的元素
//    return 0;
//}
//void bubble_sort(int *arr3[],int len )
//{
//	for (int i = 0; i < len - 1; ++i)
//	{
//		for (int j = 1; j < len - i; ++j)
//		{
//			if (arr3[j - 1] > arr3[j])
//			{
//				int tmp = arr3[j - 1];
//				arr3[j - 1]=arr3[j];
//				arr3[j]=tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n=0, m=0;
//	int len = n + m;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int arr3[100] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int k = 0,i=0;
//	for (i = 0; i < len; i++)
//	{
//		for (k=0;k<n;k++)
//			arr3[i] = arr1[i];
//		for (k = n; k < len; k++)
//			arr3[i] = arr2[i];
//	}
//	bubble_sort(arr3[len], len);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ",arr3[i]);
//	}
//}
//void bubble_sort(int* arr[], int len)
//{
//	for (int i = 0; i < len - 1; ++i)
//	{
//		for (int j = 1; j < len - i; ++j)
//		{
//			if (arr[j - 1] > arr[j])
//			{
//				int tmp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 0, m = 0,i=0;
//	int len = n + m;
//	int arr[100] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < len; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, len);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void bubble_sort(int* arr[], int len)
//{
//	for (int i = 0; i < len - 1; ++i)
//	{
//		for (int j = 1; j < len - i; ++j)
//		{
//			if (arr[j - 1] > arr[j])
//			{
//				int tmp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 0, m = 0,i=0;
//	int len = n + m;
//	int arr[100] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < len; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, len);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <10; i++)
//	{
//		/**p = -1;
//		p++;
//		printf("%d ", arr[i]);*/
//		*(p++) = 101;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 435,2,2,3,4,3,5,6,7,88 };
//	int* p = arr;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//void print(int *p, int len)
//{
//	int* q = p + len;
//	while (p < q)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//}
//int main()
//{
//	int arr[10] = { 435,2,2,3,4,3,5,6,7,88 };
//	int* p = arr;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(p, len);
//	return 0;
//}
//
//void reverse(char* p, int len)
//{
//	int j = 0;
//	for (j = len; j >= 0; j--)
//	{
//		printf("%s ", *p);
//		p--;
//	}
//}
//
//int main()
//{
//     /*char arr[10] = { "a","b" ,"c" ,"d" ,"e" ,"f" ,"g" ,"h" ,"i" ,"j" };*/
//	 char arr[10] = { "abcdefg"};
//	char* p = arr;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverse(*p, len);
//	return 0;
//}

//#include<string.h>
//void reverse(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//
//}

//#define N_VALUES 5
//
//int main()
//{
//	int values[N_VALUES];
//	int * vp=values;
//	int i = 0;
//	for (i = 0; i < N_VALUES; i++)
//	{
//		values[i] = 0;
//		printf("%d\n", * vp);
//	}
//	
//	
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++=1;
//		printf("%d ", *vp);
//	}
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", &arr[9] - &arr[1]);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);
//	printf("%p\n", &arr[9] - &arr[1]);
//	return 0;
//}
//size_t my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//}

///*--打印菱形--*/
//#include<stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	int j = 0;
//	//上面
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//下面
//
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//
//		//打印*
//		for (j = 0; j < (line - 1 - i) * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		putchar('\n');
//	}
//	return 0;
//}

//void reverse(char* p, int len)
//{
//	int j = 0;
//	for (j = len; j >= 0; j--)
//	{
//		printf("%s ", p);
//		p--;
//	}
//}
//
//int main()
//{
//	/*char arr[10] = { "a","b" ,"c" ,"d" ,"e" ,"f" ,"g" ,"h" ,"i" ,"j" };*/
//	/*char arr[10] = { "abcdefg" };*/
//
//	char arr[10] = { "abcd" };
//	char* p = arr;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverse(p, len);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	pa = 0X00112233;
//	printf("%d\n", a);
//	printf("%p\n", pa);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*int* pa = &a;*/
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	printf("%p\n", pa);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	//4 / 8
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pa = (char*)&a;
//	printf("%p\n", pa);
//}


//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa=%p\n", pa);
//	printf("pa+1=%p\n", pa+1);
//	return 0;
//}

//int main()
//{
//	/*int arr[10] = { 0x11223344,0x11223344,0x11223344,0x11223344,0x11223344,
//		      0x11223344,0x11223344,0x11223344,0x11223344,0x11223344 };*/
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	short* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 0;
//		p++;
//		printf("%d\n", arr[i]);
//		printf("%p\n", arr[i]);
//	}
//	return 0;
//}

//#include<assert.h>
//size_t my_strlen(const char *p)
//{
//	assert(*p != NULL);
//	/*assert(str);*/
//	size_t len =0;
//	while(*p!='\0')
//	{
//		len++;
//		p++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = "abcedf";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}