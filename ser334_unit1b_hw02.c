////////////////////////////////////////////////////////////////////////////////
//INCLUDES
#include <math.h>
#include <stdio.h>

int main(void)
{
    //Add a prompt for the number of cylinders to sum. Make sure to use the control
    //symbol for integers. [2 points]
    float height;
    float radius;
    float volume;
    int sum;
    int num;
    int i;
    printf("Enter the number of cylinders to sum: ");
    scanf("%d", &num);

    //Create a loop based on the number of cylinders the user enters. [2 points]
    for(i = 0; i < num; i++){

    //    Within the loop, prompt for height and radius parameters (allow floating
    //    point numbers), and calculate the volume for that particular cylinder.
    //    [4 points]
    printf("Enter both the height and radius of the cylinders: ");
    scanf("%f %f",&height, &radius);

    double product = pow(radius,2);
    volume = product * height * M_PI;
    

    //Display the total volume sum back to the user. Make sure to use the right control
    //symbol. [2 points]

    printf("Volume: %.3f \n", volume);
    
    }

    return 0;
}