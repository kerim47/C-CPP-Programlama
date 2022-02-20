#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//f(x)=x^3+13x^2+47x+5 degerini bulan program
	
	int size;
	double fun,x;
	system("color 4");
	start:
	printf("x sayisinin degerini giriniz [En fazla 32 karakter giriniz]:");
	scanf("%lf",&x);
	size = sizeof(x);
	
	if(size<=33){
		
		fun=pow(x,3)+13*(pow(x,2))+47*x+5;
		printf(">>f(%.4lf) sonucu = %.2lf dir.",x,fun);
		
	}else{
		
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tLutfen karakter sayisini asmayiniz...\n");
		sleep(3);
		system("cls");
		goto start;
		
	}
	
	
	return 0;
}
