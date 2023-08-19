/*
    Task	: timing
    Author	: Belle
    School	: Kasetsart University
    Language	: C
    Created	: 12 August 2023 [18:27]
    Algo	: 
    Status	: 
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
     int n=100;
    clock_t start,end;
    double time;
    start = clock();
    for(int i=0;i<n;i++){
        printf("HELLO WORLD\n");
    }
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Time with I/O = %lf\n",time);
    printf("\n");

    start = clock();
    for(int i=0;i<n;i++){
        int x = 0;
    }
    end = clock();
    time = (double)(end-start)/CLOCKS_PER_SEC;
    printf("Time without I/O= %lf\n",time); 
    return 0;
}