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
//    // �������������
//    srand(time(NULL));
//
//    // ����ַ�����
//    for (i = 0; i < 10; i++) {
//        char_array[i] = 'A' + rand() % 26; // ���������д��ĸ��A-Z��
//    }
//
//    // ��ӡ���ɵ��ַ�����
//    printf("������ɵ��ַ����飺");
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