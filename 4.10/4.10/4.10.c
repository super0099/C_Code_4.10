#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
/*ջ�ڴ�*/
//ջ�ڴ����Ƚ����,ջ�ڴ�ŵ��Ǿֲ�����,����Ǿֲ�������������ʹ�øߵ�ַ,��ʹ�õ͵�ַ
//int main() {
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	//���ʱ���������Խ�������,�Ƿ����������ڵ�������ַ,����Ϊ������ջ�ڴ������ɵ͵��ߴ��,����������Խ�������
//	//��ô���ܻ��漰������֮ǰ����ı���,�ᵼ�³������,����������ѭ��
//	for (i = 0; i < 13; i++)
//	{
//		printf("hello");
//		arr[i] = 0;
//	}
//	return 0;
//}

/*�����ַ���*/
//��������c���strcopy()����ʵ��,Ҳ�����Զ��巽��ʵ��
//����һ
//void my_strcopy(char* arr1,char* arr2) {
//	while (*arr2!='\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}

//������
//void my_strcopy(char* arr1, char* arr2) {
//	while (*arr2 != '\0')
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = *arr2;
//}

//������,�ж��Ƿ���ڿ�,������ָ��Ϊ��
//void my_strcopy(char* arr1, char* arr2) {
//	if (arr1!=NULL&&arr2!=NULL) {
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//	
//}

//������,����,��������������֪������������
//void my_strcopy(char* arr1, char* arr2) {
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}	
//}

//������,����const�����ο���ʹ��arr2���ܱ��޸�,���ҷ���Ŀ�ĵ�ַ,��������
//char* my_strcopy(char* arr1,const char* arr2) {
//	char* ret = arr1;
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
// //��arr2���ַ���������arr1��,����'\0'�ַ�,��Ϊ��c�����з�0��������
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


/*constָ�����*/
int main() {
	const int num = 10;
	//const����ָ�������*���ʱ,���ε���*p,Ҳ����˵:����ͨ��*pȥ����(num)��ֵ
	const int* p = &num;
	*p = 20;//err
	//const����ָ�������*�ұ�ʱ,���ε���ָ�����p,p���ܱ��ı�
	int* const c = &num;
	c = &num;//err
	return 0;
}