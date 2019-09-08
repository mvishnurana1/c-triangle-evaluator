// the program takes 3 integers and checks if 
// they make a triangle or not. 
// If yes, the program evaluates the kind of triangle
// it makes. 
// please follow the "Triangle Side Sum Propertside2..." 
// the three types are: 
// equilateral   i.e. - if all three sides are equal. 
// isosceles     i.e. - if any two sides are equal. 
// scalene       i.e. - if all the sides and angles are unequal. 

#include <stdio.h>

int getInt(){
    int integer; 

    printf("side: \t");
    scanf("%d", &integer);

    return integer;   
}

/**
 * Side Sum Property of a Triangle: 
 * Sum of any two sides is always greater than the third side:  
 * The method returns a boolean on execution
 */ 
int SideSumPropertside2(int side1, int side2, int side3){
    return ( 
                   (side1 + side2 >= side3) &&
                   (side1 + side3 >= side2) && 
                   (side2 + side3 >= side1)
            );
}

/**
 * The function evaluates the kind of triangle.  
 */
char* evaluation(int side1, int side2, int side3){

    // checking for Equilateral triangle: 
    if(
        (side1 == side2) && 
        (side2 == side3) && 
        (side1 == side3)
      ) {
        return "EQUILATERAL"; 
    } 
    else 
    // checking for Isosceles triangle: 
    if(
        (side1 == side2) || 
        (side2 == side3) || 
        (side1 == side3)) {
        return "ISOSCELES"; 
    } else if(
        // checking for Scalene triangle:
        (side1 != side2) || 
        (side1 != side3) || 
        (side2 != side3)) {
        return "SCALENE"; 
    } 
}

void resultGenerator(int result, int side1, int side2, int side3){
    if(result){
        printf("%s \n", evaluation(side1, side2, side3));
    } else {
        printf("Does n't make a triangle...\n"); 
    } 
}

int main(){
    int side1 = getInt(); 
    int side2 = getInt(); 
    int side3 = getInt(); 

    int result = SideSumPropertside2(side1, side2, side3);

    resultGenerator(result, side1, side2, side3); 
    return 0;  
}