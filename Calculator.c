#include <stdio.h>
#include <string.h>
int main() {
    printf("Hesap makinesine hoşgeldiniz!\n");
    int x = 0;
    int y = 0;
    char işlem[20];
    printf("hangi işlemi yapmak istersiniz?\n");
    scanf("%s", &işlem);
    if (strcmp(işlem, "toplama") == 0)
    {
        printf("x sayisini giriniz\n");
    scanf("%i", &x);

    printf("y sayisini giriniz\n");
    scanf("%i", &y);
    printf("işlem sonucu (toplama): %i\n", x+y);     /* code */
    }

    else if (strcmp(işlem, "cikartma") == 0)
    {
        printf("x sayisini giriniz\n");
        scanf("%i", &x);
        printf("y sayisini giriniz\n");
        scanf("%i", &y);
        printf("işlem sonucu (çıkartma): %i", x-y);
    }
    else if (strcmp(işlem, "carpma") == 0)
    {
        printf("x sayisini giriniz\n");
        scanf("%i", &x);
        printf("y sayisini giriniz\n");
        scanf("%i", &y);
        printf("işlem sonucu (çarpma): %i", x*y);
    }
    else if (strcmp(işlem, "bolme") == 0)
    {
        printf("x sayisini giriniz\n");
        scanf("%i", &x);
        printf("y sayisini giriniz\n");
        scanf("%i", &y);
        printf("işlem sonucu (bölme): %i", x/y);
    }
     return 0;
}