#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
/*栈内存*/
//栈内存是先进后出,栈内存放的是局部变量,如果是局部变量它会优先使用高地址,再使用低地址
//int main() {
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	//这个时候存在数组越界的问题,非法访问数组内的其他地址,又因为数组在栈内存中是由低到高存放,如果数组存在越界的问题
//	//那么可能会涉及到数组之前定义的变量,会导致程序出错,或者陷入死循环
//	for (i = 0; i < 13; i++)
//	{
//		printf("hello");
//		arr[i] = 0;
//	}
//	return 0;
//}

/*拷贝字符串*/
//可以利用c库的strcopy()函数实现,也可以自定义方法实现
//方法一
//void my_strcopy(char* arr1,char* arr2) {
//	while (*arr2!='\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}

//方法二
//void my_strcopy(char* arr1, char* arr2) {
//	while (*arr2 != '\0')
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = *arr2;
//}

//方法三,判断是否等于空,不能让指针为空
//void my_strcopy(char* arr1, char* arr2) {
//	if (arr1!=NULL&&arr2!=NULL) {
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//	
//}

//方法四,断言,代码最优能让你知道错误在哪里
//void my_strcopy(char* arr1, char* arr2) {
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}	
//}

//方法五,利用const来修饰可以使得arr2不能被修改,并且返回目的地址,代码最优
//char* my_strcopy(char* arr1,const char* arr2) {
//	char* ret = arr1;
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
// //把arr2的字符串拷贝到arr1中,包含'\0'字符,因为在c语言中非0代表是真
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main() {
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	printf("%s", my_strcopy(arr1, arr2));
//	return 0;
//}


/*const指针操作*/
int main() {
	const int num = 10;
	//const放在指针变量的*左边时,修饰的是*p,也就是说:不能通过*p去改了(num)的值
	const int* p = &num;
	*p = 20;//err
	//const放在指针变量的*右边时,修饰的是指针变量p,p不能被改变
	int* const c = &num;
	c = &num;//err
	return 0;
}