// the program takes 3 integers and checks if 
// they make a triangle or not. 
// If yes, the program evaluates the kind of triangle
// it makes. 
// please follow the "Triangle Side Sum Property..." 
// the three types are: 
// equilateral   i.e. - if all three sides are equal. 
// isosceles     i.e. - if any two sides are equal. 
// scalene       i.e. - if all the sides and angles are unequal. 

#include <stdio.h>

int getInput(){
    int integer; 

    printf("Please enter an integer...\n");
    scanf("%d", &integer);

    return integer;   
}

int SideSumProperty(int x, int y, int z){
    return ((x + y >= z) && (x + z >= y) && (y + z >= x));
}

char* evaluation(int x, int y, int z){

    if((x == y) && (y == z) && (x == z)){
        return "EQUILATERAL"; 
    } 
    else 
    if((x == y) || (y == z) || (x == z)){
        return "ISOSCELES"; 
    } else if((x != y) || (x != z) || (y != z)){
        return "SCALENE"; 
    } 
}

void resultGenerator(int result, int x, int y, int z){
    if(result){
        printf("%s \n", evaluation(x, y, z));
    } else {
        printf("Does n't make a triangle...\n"); 
    } 
}

int main(){
    int x = getInput(); 
    int y = getInput(); 
    int z = getInput(); 

    int result = SideSumProperty(x, y, z);

    resultGenerator(result, x, y, z); 
    return 0;  
}