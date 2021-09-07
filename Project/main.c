#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int array[5000][5000];
void main(){

int n;
int i,j;
printf("Enter n: ");
scanf("%d",&n);
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        array[i][j]=rand()%2;
        array[j][i]=array[i][j];
    }
}
    int degree[7000];
    int s=0;
    for(i=0;i<n;i++){
        degree[i]=0;
        printf("\n");
    for(j=0;j<n;j++){
        printf("%d\t",array[i][j]);
    if(i==j){
            degree[i]=degree[i]+(2*array[i][j]);
    }
    else{
    degree[i]=degree[i]+array[i][j];
}
    }
    s=s+degree[i];
}
    for(i=0;i<n;i++){
        printf("\nDegree of %d is %d",i+1,degree[i]);
    }
        int edge=s/2;
        printf("\nThere are %d edges \n",edge);
        float t=clock();
        printf("Time is %f\n",(float)pow(10,9)*t/CLOCKS_PER_SEC);
    }
