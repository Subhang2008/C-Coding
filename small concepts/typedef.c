//  typedef = reserved keyword that gives an existing datatype a "nickname"
//            which helps simplify complex data types and improves code readability

// SYNTAX =   typedef existing_datatype new_name ; (it must be used outside in global section)

#include <stdio.h>

typedef int number;
typedef char string[50];   // can use pointer to avoid using the size, will learn in future
typedef char initials[5];  // can use pointer to avoid using the size, will learn in future

int main(){

    number x = 3;
    number y = 4;
    number z = x + y;

    printf("%d\n",z);

    string sentence = "\nThis program is explaing typedef's applications\n";

    printf("%s",sentence);

    initials Subhang_Amaram = "SA";
    initials Chocolate_Cake = "CK";
    initials katharnak_khatri = "KK";
    initials Keloggs_cornflakes = "KC";

    printf("\nThe initials are :\n%s\n%s\n%s\n%s",Subhang_Amaram,Chocolate_Cake,katharnak_khatri,Keloggs_cornflakes);
    
    return 0;

}