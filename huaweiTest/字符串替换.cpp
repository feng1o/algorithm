#if 0
#define  _CRT_SECURE_NO_WARNINGS

#include< stdio.h>
#include< stdlib.h>
#include<string.h>
#define MAXLEN 100
int ReplaceStr(char *sSrc, char *sMatchStr, char *sReplaceStr)
{
	int  StringLen;
	char caNewString[MAXLEN];
	char *FindPos = strstr(sSrc, sMatchStr);//�ҵ���һ��ƥ���ַ������������׵�ַ
	if ((!FindPos) || (!sMatchStr))
		return -1;
	while (FindPos)
	{
		memset(caNewString, 0, sizeof(caNewString));
		StringLen = FindPos - sSrc;
		strncpy(caNewString, sSrc, StringLen);
		strcat(caNewString, sReplaceStr);
		strcat(caNewString, FindPos + strlen(sMatchStr));//����һ��ƥ���ַ��������׵�ַFindPos+ strlen(sMatchStr)���ȵ� ָ����Ϊʣ���ַ�                                                                                    //  /�����׵�ַ
		strcpy(sSrc, caNewString);
		FindPos = strstr(sSrc, sMatchStr);
	}
	return 0;
}
int main()
{
	char *serverIp = "�˵���";
	char endpoint[100] = "http:///vss/service/ /IVSSServices/ ";//�����ַ����飬�������ַ�ָ�룩
	printf("%s\n", strstr(endpoint, "service"));
	printf("%s\n", strchr(endpoint, 'v'));
	char *space = "";
	printf("Դ���� =>:%s\n", endpoint);
	//ReplaceStr(endpoint, space, serverIp);
	printf("��� =>:%s\n", endpoint);
}
#endif