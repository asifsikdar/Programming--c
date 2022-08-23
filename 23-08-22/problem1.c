#include <stdio.h>
int main()
{
    char alphabet,vowel,consonant;
    printf("Enter any alphabet");
    scanf("%c",&alphabet);

    switch(alphabet)
    {
      case 'a':
        printf("Vowel %c",alphabet);
        break;

      case 'e':
        printf("Vowel %c",alphabet);
        break;

      case 'i':
        printf("Vowel %c",alphabet);
        break;

      case 'o':
        printf("Vowel %c",alphabet);
        break;

      case 'u':
        printf("Vowel %c",alphabet);
        break;

      default:
        printf("Consonant");
        break;
    }

}
