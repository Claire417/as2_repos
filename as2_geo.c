// Name : Lai Wei
#include <stdio.h>
#include <math.h>

double square_area(double l) { return l*l;}
double sphere_volum(double r) { return ( pow(r, 3)* M_PI *4 ) / 3;}
double cube_area(double e) { return pow(e,2)*6 ;}

int main()
{   
    int c;
    double l,r,e;
;

    do
    {
        printf("\n1) Compute the area of a square\n2) Compute the volume of a sphere\n3) Compute the surface area of a cube\n4) Quit\nEnter an option: ");
        scanf("%d",&c);

        switch (c)
        {
            case 1:
                printf("\nEnter the side length (cm): ");
                scanf("%lf",&l);
                printf("Area of the square: %.2lf (cm)\n", square_area(l));
                break;
            case 2:
                printf("\nEnter the radius (cm): ");
                scanf("%lf",&r);
                printf("Volume of the sphere: %.2lf (cm)\n", sphere_volum(r));
                break;
            case 3:
                printf("\nEnter the edge of the cube: ");
                scanf("%lf",&e);
                printf("Surface area of the cube: %.2lf (cm)\n", cube_area(e));      
                break;            
            case 4:
                printf("\nGoodbye!\n\n");
                break;
            default:
                printf("\nEnter number from 1 to 4.\n\n");
                break;
        }

    }while (c !=4);

    return 0;
}
