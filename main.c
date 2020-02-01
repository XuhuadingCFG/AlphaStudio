#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define   VK_v  0x56
 
int main(void)
{
	/* 读取文件内容 */
	char data[2000],data1[2000];
	int j,i;
	j = NULL;
	puts("C语言刷屏器 AlphaStudio徐华玎编写");
	FILE *file=fopen("sendtext.txt","r");
	if (!file)
	{
		printf("请将要发送的信息写到该文件目录下的 sendtext.txt 文件中\n如果没有，请新建一个sendtext.txt文件！\n");
		puts("注意：不能超过2000个字符，一个中文字等于2个字符，不能有空格！");
		system("pause");
		return 0;
	} else if(!feof(file))
	{
		/* 读入文件数据 */
		fscanf(file,"%s",data);
		//替换原来的剪辑板数据
		if(OpenClipboard(NULL))//打开剪辑板
		{
			if(IsClipboardFormatAvailable(CF_TEXT))
			{
				HANDLE hClip;
				char *pBuf;
				EmptyClipboard();//清空剪辑板
				hClip=GlobalAlloc(GMEM_MOVEABLE,strlen(data)+1);
				pBuf=(char *)GlobalLock(hClip);
				strcpy(pBuf,data);
				GlobalUnlock(hClip);//解锁
				SetClipboardData(CF_TEXT,pBuf);//写入新的剪辑板数据
				CloseClipboard();
				strcpy(data1,data);
			}
			else
				CloseClipboard();//关闭剪辑板
		}
	}
	fclose(file);//关闭文件
	printf("发送次数：");
	scanf("%d",&j);
	puts("刷屏开始！");
	for(i = 0;i<j;i++)
	{
		keybd_event (VK_CONTROL, 0, 0, 0);
		keybd_event (VK_v, 0, 0, 0);
		keybd_event (VK_CONTROL, 0, 2, 0);
		keybd_event (VK_v, 0, 2, 0);
		keybd_event (VK_RETURN, 0, 0, 0);
		keybd_event (VK_RETURN, 0, 2, 0);
		Sleep(100);
	}
	printf("刷屏完毕！需要刷 %d 次 一共刷了 %d 次！\n",i,j);
	keybd_event (VK_CONTROL, 0, 2, 0);
	keybd_event (VK_v, 0, 2, 0);
	keybd_event (VK_RETURN, 0, 2, 0);
	system("pause");
	return 0;
}
