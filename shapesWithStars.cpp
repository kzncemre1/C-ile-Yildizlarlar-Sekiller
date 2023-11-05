#include<stdio.h>
#include<stdlib.h>
int main() {

//Taban uzunlugu girilen dik olmayan ucgen
/*
int taban;
printf("Taban uzunlugu giriniz: "); scanf("%d",&taban);
for(int j=taban; j>=1; j--){
	for(int i=1; i<=j; i++){
	printf(" ");
}
for(int k=1; k<=taban+1-j; k++){
	printf("* ");
}

printf("\n");
}


//En uzun kenarı girilen baklava dilimi

int taban;
printf("Taban uzunlugu giriniz: "); scanf("%d",&taban);
for(int j=taban; j>=1; j--){
	for(int i=1; i<=j; i++){
	printf(" ");
}
for(int k=1; k<=taban+1-j; k++){
	printf("* ");
}

printf("\n");
}
for(int l=1; l<=taban; l++){
	for(int m=1; m<=l+1; m++){
		printf(" ");
	}
	for(int n=1; n<=taban-l; n++){
		printf("* ");
	}
	printf("\n");
	
}
*/

//KUM SAATİ
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 6 - i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int l = 4; l >= 1; l--) {
        for (int m = 1; m <= l; m++) {
            printf(" ");
        }
        for (int n = 1; n <= 6 - l; n++) {
            printf("* ");
        }
        printf("\n");
    }
}

/*
// X ŞEKLİ OLUŞTURMAK

	int sayi;
   printf("Bir sayi giriniz: "); scanf("%d",&sayi);
	for(int i=1; i<=2*sayi-1; i++){
		for(int j=1; j<=2*sayi-1; j++){
			if(i==j)
			printf("*");
			else if(j==2*sayi-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}


//KARE YAPIMI

	int sayi;
	printf("Bir sayi giriniz: "); scanf("%d",&sayi);

	for(int i=1; i<=sayi; i++){
		for(int j=1; j<=sayi; j++){
					if(i==1|| i== sayi || j==1 || j==sayi){
			printf("* ");
		}
		else
		printf("  ");
			}
			
				printf("\n");
		}


//EV YAPIMI
		int taban;
	printf("Taban uzunlugu giriniz: "); scanf("%d",&taban);
	for(int i=0; i<=taban-1; i++){
	for(int j=0; j<taban+i; j++){
			if(taban+i-1==j || taban-i-1==j)
				printf("* ");
			else
				printf("  "); 
                               }	
	printf("\n");
								}
		for(int i=0; i<=taban+taban-1; i++){
		for(int j=0; j<=taban+taban-1; j++){
			if(i==0|| i== taban+taban-1)
			printf("* ");
			else{
				if(j==0 || j==taban+taban-1)
					printf("* ");
				else
				printf("  ");
			}
		
		
                                        	}
       		printf("\n");
	                                     	}

		return 0;
	}
 */





	



