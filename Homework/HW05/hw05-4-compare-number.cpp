/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับค่าจากผู้ใช้จำนวน 2 ค่า และให้เปรียบเทียบกัน
    
    Test case:
        Input 1 :
            6
        Input 2 :
            29
    Output:
        Number1 lower than Number2

    Test case:
        Input 1 :
            96
        Input 2 :
            63
    Output:
        Number1 greater than Number2

    Test case:
        Input 1 :
            50
        Input 2 :
            50
    Output:
        Number1 equal Number2
*/
#include <stdio.h>
int main ()
{
    int a = 0, b = 0 ;
    printf  ("Input[1] Input[2] : " ) ;
    scanf ( "%d %d", &a, &b ) ;
    if ( a > b )
    {
        printf ( "Number1 greater than Number2" ) ;
    }
    else if ( b > a )
    {
        printf ( "Number1 lower than Number2" ) ;
    }
    else if ( a == b )
    {
        printf ( "Number1 equal Number2" ) ;
    }
    else printf ( "Error" ) ;
    
    
    return 0 ;
}