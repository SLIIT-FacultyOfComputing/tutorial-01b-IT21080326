/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

â€¢	Input the distance the van has travelled
â€¢	The first 30 km is at a rate of 50/= per km.
â€¢	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int x;
  float distance,price;

printf("Enter the distance : ");
scanf("%f",&distance);

if(distance<=30){
  price = distance*50; 
  printf("Price : %.2f",price);
}
else if(distance>30){
  x=distance-30;
  price = 30*50 + x*40;
  printf("Price : %.2f",price);
  
}
  return 0;
}