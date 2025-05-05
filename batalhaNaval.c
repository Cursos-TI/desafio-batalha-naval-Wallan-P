#include <stdio.h>

int conef(int cone[][5]){

    printf("cone\n");

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 5; j++){
        
            
            if (i==2 || (i==1 && j<4 && j>0) || i==0 && j==2  ){
                cone[i][j]=5;
            };
        }
    }
}

int cruzf(int cruz[][5]){

    printf("\ncruz\n");

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 5; j++){
        
            
            if (j==2 ||i==1  ){
                cruz[i][j]=5;
            };
        }
    }
}

int octaedrof(int octaedro[][5]){

    printf("\noctaedro\n");

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 5; j++){
        
            
            if (j==2 ||i==1 && j>0 && j<4  ){
                octaedro[i][j]=5;
            };
        }
    }
}




int main(){

int cone[3][5]={0};
int cruz[3][5]={0};
int octaedro[3][5]={0};
int tabuleiro[10][10] = {0};

conef(cone);
cruzf(cruz);
octaedrof(octaedro);
printf("\n");


for (int i = 0; i < 10; i++){

    for (int j = 0; j < 10; j++){
    
        if (i==7 && j==7) {

            tabuleiro[i][j]=3;
            tabuleiro[i][j+1]=3;
            tabuleiro[i][j+2]=3;
    
    
           };
         if (i==3 && j==4) {
    
            tabuleiro[i][j]=3;
            tabuleiro[i+1][j]=3;
            tabuleiro[i+2][j]=3;
    
    
       };
    
         if (i==0 && j==7) {
    
            tabuleiro[i][j]=3;
            tabuleiro[i+1][j+1]=3;
            tabuleiro[i+2][j+2]=3;
    
    
       };
    
         if (i==7 && j==2) {
    
            tabuleiro[i][j]=3;
            tabuleiro[i+1][j+1]=3;
            tabuleiro[i+2][j+2]=3;
        };
    
      
        if(i<3 && j<5) {tabuleiro[i][j] = cone[i][j];} 

        if(i>=3 && i<=5 && j>=5 && j<=9) {tabuleiro[i][j] = cruz[i-3][j-5];} 

        if(i>=6 && i<=8 && j<=5) {tabuleiro[i][j] = octaedro[i-6][j-1];} 

        

 
        printf("%d ",tabuleiro[i][j]);

    }
    printf("\n");
}
printf("\n\n\n");



return 0;
};


 