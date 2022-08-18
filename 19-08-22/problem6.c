#include <stdio.h>
int main()
{
    char Alphabet;
    printf("Enter Any word");
    scanf("%c",&Alphabet);

    if(Alphabet == 'a'|| Alphabet == 'e' || Alphabet == 'i' || Alphabet == 'o' ||  Alphabet == 'u'){
        printf("Vowel Word");
    }else if(Alphabet == 'A'|| Alphabet == 'E' || Alphabet == 'I' || Alphabet == 'O' ||  Alphabet == 'U'){

        printf("Vowel Word");
    }else{
        printf("Consonant Word");
    }

}

