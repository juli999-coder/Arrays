/*Juliet Mbugua
BCS-05-0218/2026
Array Assignment
*/




#include<stdio.h>
int main(){
float revenue[7];
float total,average;
int i;
printf("Total weekly revenue\n");
printf("--------------\n");
for(i=0;i<7;i++){
printf("Enter total revenue for each day\n");
scanf("%f\n",&revenue);

}
for(i=0;i<7;i++){
total=total+revenue[i];
}
average=total/7;


printf("\n-----results-------\n");
printf("total revenue:%.2f",total);
printf("average :%.2f",average);
return 0;

}
















