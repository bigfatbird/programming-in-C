/* 
    Which of the following are invalid variable names? Why?
   
    Int             char    6_05
    Calloc          Xx      alpha_beta_routine
    floating        _1312   z
    ReInitialize    _       A$
*/

#include <stdio.h>

int main (void)
{
    int Int;
    // int char;  not allowed, reserved word
    // int 6_05;  Variable names cannot start with a number
    int Calloc;
    int floating;
    int ReInitialize;
    int Xx;
    int _1312;
    int _;
    int alpha_beta_routine;
    int z;
    int A$; //worked for me, although it shouldn't have worked

    return 0;
}
