//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main() {
//    char char_array[10];
//    int i;
//
//    // 设置随机数种子
//    srand(time(NULL));
//
//    // 填充字符数组
//    for (i = 0; i < 10; i++) {
//        char_array[i] = 'A' + rand() % 26; // 生成随机大写字母（A-Z）
//    }
//
//    // 打印生成的字符数组
//    printf("随机生成的字符数组：");
//    for (i = 0; i < 10; i++) {
//        printf("%c ", char_array[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//int main()
//{
//	/*int arr[10] = { 0x11223344,0x11223344,0x11223344,0x11223344,0x11223344,
//			  0x11223344,0x11223344,0x11223344,0x11223344,0x11223344 };*/
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