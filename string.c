
// _________-string__________ 
//  string is a character array terminated by a ' \o ' (null charecter ) [ the null charecter denotes string termination ]



/*  #include <stdio.h>
int main(){
    char arr[] = { 's' , 'a', 'r', 'a','n','s','h' '\o'};
for (int i = 0; i < 8; i++)
{
    printf("%c\n", arr[i]);
    
}

return 0;

}  */
//______________________________________________________________________________________________________________
// you can also in that way 

/* #include<stdio.h>

int main (){
    char arr[] = "saransh" ;

for (int i = 0; i < 8; i++)
{
    printf("%c\n", arr[i]);
    
}

} */

//___________________________________________________________________________________________________________


/*
#include <stdio.h>

int main(){
    char name[] = "mukesh";
char arr[] = { 's' , 'a', 'r', 'a','n','s','h' };
char class [] = "apna colage" ;
for (int i=0; i < 8; i++)
{
    printf("%c\t", arr[i]);
    
}

for (int n = 0; n < 7; n++)
{
    printf("%c\t", name[n]);
}

for (int j = 0; j < 10; j++)
{
    printf("%c\t", class[j]);
    
}
return 0;
}

*/

//____________________________________________________________________________________________________________________________

/* STRING  FORMOT SPECIFIRE  (%s) : */




/*
#include<stdio.h>
void printstring(char name[]);
int main (){

    char name[50] ;
    printf(" ENTER THE NAME ");
    scanf("%s",  name);
    printf("your name is %s" , name);  // we always pass the name 
    
    return 0;


}
*/


// scanf() cannot input multi word stering with spaces 
//this is the drow back of scanf
// sop here we use two new function that are "get()" &"put()" . 
// now here we use "fget()"instead of "gets".
//get(str) is dangerous also outdated function because is not tracted maximum size of string .

/*
#include<stdio.h>
int main (){
    char statement[100];
    printf("enter the string : ");
   //  gets(statement); //this functionis dangerous ..

   fgets(statement , 100 ,stdin );
    puts(statement);
    return 0;


}
*/

//______________________________________________________________________________________________________________________________________

/*#include<stdio.h>

int main (){
    char statement[100];
    printf("enter the string : ");
   //  gets(statement); //this functionis dangerous ..

   fgets(statement , 100 ,stdin );
    puts(statement);
    return 0;


}
*/

