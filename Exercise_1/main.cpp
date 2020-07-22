/*****************************************************************************
Copyright: 
File name: Verify username and password
Description: 
Author: syljoy
Version: v0.1
Date: 20200713
History: ����
*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *usernames[]= {"a","b","c"};
const char *passwords[]= {"111","222","333"};

void base();
void improvement_1();
void improvement_2();
int indexOfChar(const char *list[], char *tar);


int main()
{
	base();
//	improvement_1();
//	improvement_2();
	system("pause");
	return 0;
}

void base()
{
	char *username, *pwd;
	username = (char*)malloc(sizeof(char) * 20); // ����20��char���ȵĿռ�
	pwd = (char*)malloc(sizeof(char) * 20); // ����20��char���ȵĿռ�
	printf("\t�������û�����");
	scanf("%s", username);
	int index = indexOfChar(usernames, username);
	if(index == -1)
	{
		printf("�û������ڣ�\n");
		return;
	}
	printf("\t���������룺");
	scanf("%s", pwd);
	if(strcmp(passwords[index], pwd) == 0)
	{
		printf("��ӭ��\n");
		return;
	}
	printf("�������\n");
}
void improvement_1(){
	char *username, *pwd;
	username = (char*)malloc(sizeof(char) * 20); // ����20��char���ȵĿռ�
	pwd = (char*)malloc(sizeof(char) * 20); // ����20��char���ȵĿռ�
	printf("\t�������û�����");
	scanf("%s", username);
	int index = indexOfChar(usernames, username);
	if(index == -1)
	{
		printf("�û������ڣ�\n");
		return;
	}
	for(int i=0;i<3;i++)
	{
		printf("\t���������룺");
		scanf("%s", pwd);
		if(strcmp(passwords[index], pwd) == 0)
		{
			printf("��ӭ��\n");
			return;
		}
		printf("�������\n");
	}
}
void improvement_2(){
	char *username, *pwd;
	username = (char*)malloc(sizeof(char) * 20); // ����20��char���ȵĿռ�
	pwd = (char*)malloc(sizeof(char) * 20); // ����20��char���ȵĿռ�
	for(int k=0;k<3;k++)
	{
		printf("\t�������û�����");
		scanf("%s", username);
		int index = indexOfChar(usernames, username);
		if(index == -1)
		{
			printf("�û������ڣ�\n");
			continue;
		}
		for(int i=0;i<3;i++)
		{
			printf("\t���������룺");
			scanf("%s", pwd);
			if(strcmp(passwords[index], pwd) == 0)
			{
				printf("��ӭ��\n");
				return;
			}
			printf("�������\n");
		}
	}
}

int indexOfChar(const char *list[], char* tar){
	for(int i=0; i<3; i++)
	{
		if(strcmp(list[i], tar) == 0){
			return i;
		}
	}
	return -1;
}