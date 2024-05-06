#include<stdio.h>
#include<stdlib.h>
int main(){
	int password,n=1;
	printf("請輸入4個數字的密碼\n");
	scanf("%d",&password);
	while(1){
		if(password==2024){
			break;
		}
		else if(n<3){
			printf("密碼錯誤\n");
			n++;
			scanf("%d",&password);
		}
		else{
			printf("警告\n");
			printf("%c",'\a');	//輸出警告聲響
			return 0;
		}	
	}
	system("CLS");	// 清除螢幕
	char a[0];
	printf("----------------------\n");
	printf("| a. 畫出直角三角形  |\n");
	printf("| b. 顯示乘法表      |\n");
	printf("| c. 結束            |\n");
	printf("----------------------\n");
	scanf("%s",&a[0]);
	printf("eeeee\n");
	printf("%c\n",a[0]);
	return 0;
}
