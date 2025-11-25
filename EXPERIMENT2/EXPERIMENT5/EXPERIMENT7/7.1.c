// Reading a complex number.  

#include <stdio.h>
// Define a structure to represent a complex number
struct Complex {
    float real;  // real part
    float imag;  // imaginary part
};
// Function to read a complex number from user 
struct complex readcomplex() {
    struct complex c; //create a variable of type complex
    printf("real part");
    scanf("%f",&c.real); //access structure member using . operator
    printf("imaginary part");
    scanf("%f",&c.imag);
    return c;
}
//function to display complex numbers
void displaycomplex(){
    printf("complex number: %.2f %.2f \n", c.real,c.image);

}
// add 2 complex numbers
struct complex addcomplex()
{
    struct complex real //structure to store result
    result.real = c1.real + c2.real;
    result.imag = c1.real + c2.real;
    return result;
}