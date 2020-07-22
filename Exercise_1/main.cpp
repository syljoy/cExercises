/*****************************************************************************
Copyright: 
File name: Verify username and password
Description: 
Author: syljoy
Version: v0.1
Date: 20200713
History: 暂无
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
	username = (char*)malloc(sizeof(char) * 20); // 申请20个char长度的空间
	pwd = (char*)malloc(sizeof(char) * 20); // 申请20个char长度的空间
	printf("\t请输入用户名：");
	scanf("%s", username);
	int index = indexOfChar(usernames, username);
	if(index == -1)
	{
		printf("用户不存在！\n");
		return;
	}
	printf("\t请输入密码：");
	scanf("%s", pwd);
	if(strcmp(passwords[index], pwd) == 0)
	{
		printf("欢迎！\n");
		return;
	}
	printf("密码错误！\n");
}
void improvement_1(){
	char *username, *pwd;
	username = (char*)malloc(sizeof(char) * 20); // 申请20个char长度的空间
	pwd = (char*)malloc(sizeof(char) * 20); // 申请20个char长度的空间
	printf("\t请输入用户名：");
	scanf("%s", username);
	int index = indexOfChar(usernames, username);
	if(index == -1)
	{
		printf("用户不存在！\n");
		return;
	}
	for(int i=0;i<3;i++)
	{
		printf("\t请输入密码：");
		scanf("%s", pwd);
		if(strcmp(passwords[index], pwd) == 0)
		{
			printf("欢迎！\n");
			return;
		}
		printf("密码错误！\n");
	}
}
void improvement_2(){
	char *username, *pwd;
	username = (char*)malloc(sizeof(char) * 20); // 申请20个char长度的空间
	pwd = (char*)malloc(sizeof(char) * 20); // 申请20个char长度的空间
	for(int k=0;k<3;k++)
	{
		printf("\t请输入用户名：");
		scanf("%s", username);
		int index = indexOfChar(usernames, username);
		if(index == -1)
		{
			printf("用户不存在！\n");
			continue;
		}
		for(int i=0;i<3;i++)
		{
			printf("\t请输入密码：");
			scanf("%s", pwd);
			if(strcmp(passwords[index], pwd) == 0)
			{
				printf("欢迎！\n");
				return;
			}
			printf("密码错误！\n");
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