#include<stdio.h>
#include<stdlib.h>
void dm();
void tr(char ch);
void mult(int n);

int main() {
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
			printf("密碼錯誤警告\n");
			printf("%c",'\a');	//輸出警告聲響
			return 0;
		}
	}
	system("CLS");	// 清除螢幕
    
    char a;

    do {
        dm();
        printf("輸入選項:");
        scanf(" %c", &a);

        switch (a) {
            case 'a':
            case 'A':
                // Step 3: Draw right angle triangle
                char ch;
                printf("請輸入一個'a'到'n'的字元:");
                scanf(" %c", &ch);
                tr(ch);
                break;
            case 'b':
            case 'B':
                // Step 4: Draw multiplication table
                int n;
                printf("請輸入一個1至9的整數n:");
                scanf("%d", &n);
                mult(n);
                break;
            case 'c':
            case 'C':
                // Step 5: Continue or exit
                char yn;
                printf("Continue? (y/n): ");
                scanf(" %c", &yn);
                if (yn == 'n' || yn == 'N') {
                    printf("結束程式\n");
                    return 0;
                } else if (yn != 'y' && yn != 'Y') {
                    printf("錯誤重新輸入\n");
                }
                break;
            default:
                printf("錯誤重新輸入\n");
        }
    } while (1);

    return 0;
}

void dm() {
	printf("----------------------\n");
	printf("| a. 畫出直角三角形  |\n");
	printf("| b. 顯示乘法表      |\n");
	printf("| c. 結束            |\n");
	printf("----------------------\n");
}

void tr(char ch) {
    if (ch < 'a' || ch > 'n') {
        printf("輸入字元不在a~n之間，請重新輸入\n");
        return;
    }
    

    printf("\n");

    
		int i, j;
  		for (i = 0; i <= ch - 'a'; i++) {
        	for (j = 0; j < ch - 'a' - i; j++){
        		printf(" ");
			}
        	for (j = 0; j <= i; j++){
        		printf("%c", ch - i + j);
			}	
        	printf("\n");
  		}

  		system("PAUSE");
  		system("cls");
}

void mult(int n) {
    if (n < 1 || n > 9) {
        printf("Invalid input. Please enter an integer from 1 to 9.\n");
        return;
    }

    printf("\n1*1至%d*%d的乘法表:\n\n",n,n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%dx%d=%d",i,j, i * j);
        	printf("\t");
		}
        printf("\n");
    }
  		system("PAUSE");
  		system("cls");
}
