#include<stdio.h>
#include<stdlib.h>
int main(){
	int password,n=1;
	printf("�п�J4�ӼƦr���K�X\n");
	scanf("%d",&password);
	while(1){
		if(password==2024){
			break;
		}
		else if(n<3){
			printf("�K�X���~\n");
			n++;
			scanf("%d",&password);
		}
		else{
			printf("ĵ�i\n");
			printf("%c",'\a');	//��Xĵ�i�n�T
			return 0;
		}	
	}
	system("CLS");	// �M���ù�
	char a[0];
	printf("----------------------\n");
	printf("| a. �e�X�����T����  |\n");
	printf("| b. ��ܭ��k��      |\n");
	printf("| c. ����            |\n");
	printf("----------------------\n");
	scanf("%s",&a[0]);
	printf("eeeee\n");
	printf("%c\n",a[0]);
	return 0;
}
