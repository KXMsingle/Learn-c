#include<stdio.h>

int main(void)
{
	//�����������
	float r1;
	float s1;
	float c1;
	printf("input r��");
	//�Ӽ��̶��뾶���ڴ�뾶��������
	scanf("%f",&r1);
	//�ڴ����������ܳ�װ���Ӧ����
	s1=3.14f*r1*r1;
	c1=3.14f*2*r1;
	//��������ܳ���������д����Ļ
	printf("s1=%.2f,c1=%.2f\n",s1,c1);

	return 0;

}