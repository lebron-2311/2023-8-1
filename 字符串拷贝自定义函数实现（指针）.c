//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////void my_strcopy(char*dest,char*src)
////{
////	while (*src != '\0')
////	{
////		*dest = *src;
////		src++;
////		dest++;
////	}
////	*dest = *src;
////}
//
//void my_strcopy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//src='\0'里面为假，跳出循环
//	{
//		;
//	}
//}
//char* my_strcopy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[20] = { "abcdfe" };
//	my_strcopy(&arr1, &arr2);
//	printf("%s\n", arr1);
//	printf("%s", my_strcopy(&arr1, &arr2));
//	return 0;
//}
////int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = { "abcdfe" };
//	my_strcopy(NULL, &arr2);
//	printf("%s\n", arr1);
//	printf("%s", my_strcopy(&arr1, &arr2));
//	return 0;
//}