/*
Name:Vincent Melvin Kimanthi
Reg:PA106/G/29386/25
Description: program to compute the volume and surface area 
volume=pi * r^2 * h
surface area = (2pi * r^2) + (2pi * r * h)
*/
#include <stdio.h>
#define pi 3.1428
int main() {
    float r, h, volume, surface_area;
    
    //prompt the user to input the radius
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);

    //prompt the user to input the height
    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);
    
    // Calculate volume and surface area
    volume = pi * r * r * h;
    surface_area = (2 * pi * r * r) + (2 * pi * r * h);
    
    // Output the results
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);
    
    return 0;
}
