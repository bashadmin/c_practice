#include <stdio.h>

// %[flags][width][.precision]specifier

int main(void)
{
/*    int numChar;

    for( numChar  = 50; numChar <= 100; numChar++ ) {
        printf("ASCII value = %d, Character = %c\n", numChar, numChar );
}
    printf("Hello, World! \n");
    printf("\t\tAnother line of text!\n");
    printf("double quote: \" \n");
    printf("\t\\  \\\n");
    printf("");
*/

    int x = 12;
    printf("int: %d+%d=%d \n", 4, 8, x); // %d if for integers
    printf("x: %d \n", x);
    printf("x: %d\nx+1 %d\nx+2 %d\n",x ,x+1 , x+2);

    char c = 'Q';
    printf("c: %c\n", c);

    double y = 4.56;
    printf("y: %lf \n", y); // lf we use with scanf and it produces doubles, it has  more precision than floats (double the precision?)

    float z = 7.5;
    printf("z: %f \n"); // % we can use for both doubles and floats, for scanf lf is important

    char str[] = "A string to output!\n";
    printf("str: %s", str);

    printf("|||%-10d|||\n", 54321);

    printf("|||%10.2f|||\n", 4.231040);


    return 0;
}
