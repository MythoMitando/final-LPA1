#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matrix [5][5], i, j, a, b, x, y;
	
	for(i=0; i<5; i++){
		
		for(j=0; j<5; j++){
			
			matrix[i][j] = 0;
			
		}
		//printf("\n");
	}
	
	system("cls");
	printf("Digite a coordenada nº 1 do seu assento(0 à 4):\n\n");
	scanf("%d", &i);
	printf("\nDigite a coordenada nº 2 do seu assento(0 à 4):\n\n");
	scanf("%d", &j);
	printf("\n\nConfirmar?\n\n\n");
	system("pause");
	system("cls");
	
		x = 0;
		y = 0;
		a = 0;
		b = 0;
	
	if(i == 999 || j == 999){
		
		while(x<5){
			
			matrix[a][b] = 0 -1;
			//printf("%d", matrix[a][b]);
			x++;
			a++;
			b++;
				
		}
		
		b = 0;
		a = 4;
		
		while(y<5){
			
			matrix[a][b] = -1;
			//printf("%d", matrix[a][b]);
			y++;
			a--;
			b++;
				
		}
		
		printf("Disposição de cadeiras:\n\n");
		
		for(i=0; i<5; i++){
			
			printf("%d|", i);
		
			for(j=0; j<5; j++){
			
				printf(" %d", matrix[i][j]);
			
			}
			printf("\n");
		}
		
		printf("  _____________\n");
		
		printf("#  0  1 2 3  4\n\n");
		
	}else{
	
		printf("Assento reservado:\n\n ( %d, %d)\n\n", i, j);
		printf("Disposição de cadeiras:\n\n");
	
		matrix[i][j] = -1;
	
		for(i=0; i<5; i++){
		
			printf("%d|", i);
		
			for(j=0; j<5; j++){
			
				printf(" %d", matrix[i][j]);
			
			}
			printf("\n");
		}
		
		printf("  __________\n");
		
		printf("#  0 1 2 3 4");
		
	}
	
	system("pause");
	
	
}
