/* What output would you expect from the following program?
 * 
 * The expected output would that all printf statements are on a
 * single line, because \n the newline character is missing
 * 
 */
 
 #include <stdio.h>
 
 int main (void)
 {
    printf ("Testing...");
    printf ("....1");
    printf ("...2");
    printf ("..3");
    printf ("\n");
    
    return 0;
 }