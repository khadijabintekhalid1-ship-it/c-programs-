#include <stdio.h>
int main ()
{
    int m;
    printf("1. translated to english \n");
    printf("2. translated to turkish \n");
    printf("3. translated to sindhi \n");
    printf("4. translated to hindi \n");
    printf("5. translated to urdu \n");
    printf("6. translated to french \n");
    
    printf("Select Language: ");
    scanf("%d", &m);
    
    switch (m) {
        case 1:
            printf("Translated to English");
            break;
        case 2:
            printf("Translated to Turkish");
            break;
        case 3:
            printf("Translated to Sindhi");
            break;
        case 4:
            printf("Translated to Hindi");
            break;
        case 5:
            printf("Translated to Urdu");
            break;
        case 6:
            printf("Translated to French");
            break;
        default:
            printf("No language found");
    }
    return 0;
}
