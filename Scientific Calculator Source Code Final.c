#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
void menu();
void view();
void add();
void substrct();
void multiply();
void divide();
void squareroot();
void xTowy();
void xTow2();
void xTow3();
void oneBx();
void xTowOneBy();
void xTowYbY();
void tenTowx();
void xfac();
void percentage();
void logTenX();
void modul();
void sinx();
void cosx();
void tanx();
void cosecx();
void cotx();
void secx();
void numericSystem();
void deciTobinary();
void deciToOctal();
void deciToHexa();
void binaryTodeci();
void binaryToOctal();
void binaryToHexa();
void octalTodeci();
void octalToBinary();
void octalToHexa();
void hexaTodeci();
void hexaToOctal();
void hexaToBinary();
void matrixmenu();
void addmatrix();
void submatrix();
void complexmenu();
struct complex
{
    int real, img;
};
void addcomplex();
void subcomplex();
void mulcomplex();
void divcomplex();

int main()
{
    printf("\t\t\t---------------< SCIENTIFIC CALCULATOR >----------------\n");
    printf("\t\t\t-------------< Press any key to continue >--------------\n");
    getch();
    menu();
}
void menu()
{
    fflush(stdin);
    int choice;
    system("cls");
    printf("---------------------------------< MENU >-------------------------------------\n");
    printf("-----------------------< Enter a option from below >--------------------------\n\n");
    printf("1. Addition\t 2. Subtraction\t\t 3. Multiplication\t 4. Division\n\n");
    printf("5. Square root\t 6. X ^ Y\t\t 7. X ^ 2\t\t 8. X ^ 3\n\n");
    printf("9. 1 / X\t 10. X ^ (1 / Y)\t 11. X ^ (Y1 / Y2)\t 12. 10 ^ X\n\n");
    printf("13. X !\t\t 14. X %%\t\t 15. log10(x)\t\t 16. Modulus\n\n");
    printf("17. Sin(X)\t 18. Cos(X)\t\t 19. Tan(X)\t\t 20. Cosec(X)\n\n");
    printf("21. Cot(X)\t 22. Sec(X)\t\t 23. Numeric Convertion Menu\n\n");
    printf("24. Matrix Calculation Menu\t\t25. Complex Calculations Menu\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("26. View File\t\t 27. Exit\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    fflush(stdin);
    switch(choice)
    {
    case 1:
        add();
        break;

    case 2:
        substrct();
        break;

    case 3:
        multiply();
        break;

    case 4:
        divide();
        break;

    case 5:
        squareroot();
        break;

    case 6:
        xTowy();
        break;

    case 7:
        xTow2();
        break;

    case 8:
        xTow3();
        break;

    case 9:
        oneBx();
        break;

    case 10:
        xTowOneBy();
        break;

    case 11:
        xTowYbY();
        break;

    case 12:
        tenTowx();
        break;

    case 13:
        xfac();
        break;

    case 14:
        percentage();
        break;

    case 15:
        logTenX();
        break;

    case 16:
        modul();
        break;

    case 17:
        sinx();
        break;

    case 18:
        cosx();
        break;

    case 19:
        tanx();
        break;

    case 20:
        cosecx();
        break;

    case 21:
        cotx();
        break;

    case 22:
        secx();
        break;

    case 23:
        numericSystem();
        break;

    case 24:
        matrixmenu();
        break;

    case 25:
        complexmenu();
        break;

    case 27:
        exit(1);
        break;

    case 26:
        view();
        break;

    }

}
void view()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","r");

    char temp[10000];
    char choice;
    fgets(temp, sizeof(temp), fp);
    while(!feof(fp))
    {
        printf("%s", temp);
        fgets(temp, sizeof(temp), fp);
    }
    printf("\n\nTo exit press 'y'\nTo return to numeric menu press 'n'\nTo return to main menu press any key");
    choice = getch();
    if(choice == 'y')
    {
        exit(1);
    }
    else if(choice == 'n')
    {
        numericSystem();
    }
    else
    {
        menu();
    }

}
void add()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, y, sum;
    char choice;
    printf("---------------< Addition >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    printf("Enter Y: ");
    scanf("%lf", &y);
    sum = x + y;
    printf("\nAddition of (%.2f + %.2f) = %.2f\n\n", x, y, sum);
    fprintf(fp,"Addition of (%.2f + %.2f)  =  %.2f\n\n", x, y, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        add();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }


}
void substrct()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, y, sum;
    char choice;
    printf("---------------< Subtraction >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    printf("Enter Y: ");
    scanf("%lf", &y);
    sum = x - y;
    printf("\nSubtraction of (%.2f - %.2f) = %.2f\n\n", x, y, sum);
    fprintf(fp,"Subtraction of (%.2f - %.2f)  =  %.2f\n\n", x, y, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        substrct();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void multiply()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, y, sum;
    char choice;
    printf("---------------< Multiplication >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    printf("Enter Y: ");
    scanf("%lf", &y);
    sum = x * y;
    printf("\nMultiplication of (%.2f x %.2f) = %.2f\n\n", x, y, sum);
    fprintf(fp,"Multiplication of (%.2f x %.2f)  =  %.2f\n\n", x, y, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        multiply();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void divide()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, y, sum;
    char choice;
    printf("---------------< Division >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    printf("Enter Y: ");
    scanf("%lf", &y);
    sum = x / y;
    printf("\nDivision of (%.2f / %.2f) = %.2f\n\n", x, y, sum);
    fprintf(fp,"Division of (%.2f / %.2f)  =  %.2f\n\n", x, y, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        divide();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void squareroot()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    fflush(stdin);
    double x, y, sum;
    char choice;
    printf("---------------< Square Root >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    sum = sqrt(x);
    printf("\nSquare root of (%.2f) = %.2f\n\n", x, sum);
    fprintf(fp,"Square root of (%.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        squareroot();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void xTowy()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");


    double x, y, sum;
    char choice;
    printf("---------------< X ^ Y >----------------\n");

    printf("Enter X: ");
    scanf("%lf", &x);
    printf("Enter Y: ");
    scanf("%lf", &y);
    sum = pow (x, y);
    printf("\n(%.2f ^ %.2f)  =  %.2f\n\n", x, y, sum);
    fprintf(fp,"X ^ Y (%.2f ^ %.2f)  =  %.2f\n\n", x, y, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        xTowy();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void xTow2()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, sum;
    char choice;
    printf("---------------< X ^ 2 >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    sum = pow (x, 2);
    printf("\n(%.2f ^ 2)  =  %.2f\n\n", x, sum);
    fprintf(fp,"X ^ 2 (%.2f ^ 2)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        xTow2();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void xTow3()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, sum;
    char choice;
    printf("---------------< X ^ 3 >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    sum = pow (x, 3);
    printf("\n(%.2f ^ 3)  =  %.2f\n\n", x, sum);
    fprintf(fp,"X ^ 3 (%.2f ^ 3)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        xTow3();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void oneBx()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, sum;
    char choice;
    printf("---------------< 1 / X >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    sum = pow (x, -1);
    printf("\n(1 / %.2f)  =  %.2f\n\n", x, sum);
    fprintf(fp,"1 / X (1 / %.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        oneBx();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void xTowOneBy()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, y, sum;
    char choice;
    printf("---------------< X ^ (1 / Y) >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    printf("Enter Y: ");
    scanf("%lf", &y);
    sum = pow (x, (1/y));
    printf("\n(%.2f ^ 1 / %.2f)  =  %.2f\n\n", x, y, sum);
    fprintf(fp,"(%.2f ^ 1 / %.2f)  =  %.2f\n\n", x, y, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        xTowOneBy();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void xTowYbY()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, y1, y2, sum;
    char choice;
    printf("---------------< X ^ (Y1 / Y2) >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    printf("Enter Y1: ");
    scanf("%lf", &y1);
    printf("Enter Y2: ");
    scanf("%lf", &y2);
    sum = pow (x, (y1/y2));
    printf("\n(%.2f ^ %.2f / %.2f)  =  %.2f\n\n", x, y1, y2, sum);
    fprintf(fp,"(%.2f ^ %.2f / %.2f)  =  %.2f\n\n", x, y1, y2, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        xTowYbY();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void tenTowx()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    double x, sum;
    char choice;
    printf("---------------< 10 ^ X >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    sum = pow (10, x);
    printf("\n(10 ^ %.2f)  =  %.2f\n\n", x, sum);
    fprintf(fp,"(10 ^ %.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        tenTowx();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void xfac()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i;
    long long x, sum;
    char choice;
    printf("---------------< X ! >----------------\n");
    printf("Enter X: ");
    scanf("%lld", &x);
    sum = 1;
    for(i=1; i<=x; i++)
    {
        sum = sum * i;
    }
    printf("\n(%lld) !  =  %lld\n\n", x, sum);
    fprintf(fp,"(%lld) !  =  %lld\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        xfac();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void percentage()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i;
    double x, sum;
    char choice;
    printf("---------------< X % >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    sum = x / 100;
    printf("\n%.2f %%  =  %.2f\n\n", x, sum);
    fprintf(fp, "%.2f %%=  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        percentage();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void logTenX()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i;
    double x, sum;
    char choice;
    printf("---------------< log10(x) >----------------\n");
    printf("Enter X: ");
    scanf("%lf", &x);
    sum = log10(x);
    printf("\nlog10(%.2f)  =  %.2f\n\n", x, sum);
    fprintf(fp, "log10(%.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        logTenX();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void modul()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i, x, y;
    double sum;
    char choice;
    printf("---------------< Modulus (X %% Y) >----------------\n");
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    sum = x % y;
    printf("\nModulus (%d %% %d)  =  %.2f\n\n", x, y, sum);
    fprintf(fp, "Modulus (%d %% %d)  =  %.2f\n\n", x, y, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        modul();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void sinx()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i;
    double x, sum;
    char choice;
    printf("---------------< Sin(X) >----------------\n");
    printf("Enter X (degree): ");
    scanf("%lf", &x);
    sum = sin(x * 3.14159 / 180);
    printf("\nSin (%.2f)  =  %.2f\n\n", x, sum);
    fprintf(fp, "Sin (%.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        sinx();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void cosx()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i;
    double x, sum;
    char choice;
    printf("---------------< Cos(X) >----------------\n");
    printf("Enter X (degree): ");
    scanf("%lf", &x);
    sum = cos(x * 3.14159 / 180);
    printf("\nCos (%.2f)  =  %.2f\n\n", x, sum);
    fprintf(fp, "Cos (%.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        cosx();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void tanx()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i;
    double x, sum;
    char choice;
    printf("---------------< Tan(X) >----------------\n");
    printf("Enter X (degree): ");
    scanf("%lf", &x);
    sum = tan(x * 3.14159 / 180);
    printf("\nTan (%.2f)  =  %.2f\n\n", x, sum);
    fprintf(fp, "Tan (%.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        tanx();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void cosecx()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i;
    double x, sum;
    char choice;
    printf("---------------< Cosec(X) >----------------\n");
    printf("Enter X (degree): ");
    scanf("%lf", &x);
    sum = 1 / sin(x * 3.14159 / 180);
    printf("\nCosec (%.2f)  =  %.2f\n\n", x, sum);
    fprintf(fp, "Cosec (%.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        cosecx();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void cotx()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i;
    double x, sum;
    char choice;
    printf("---------------< Cot(X) >----------------\n");
    printf("Enter X (degree): ");
    scanf("%lf", &x);
    sum = 1 / tan(x * 3.14159 / 180);
    printf("\nCot (%.2f)  =  %.2f\n\n", x, sum);
    fprintf(fp, "Cot (%.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        cotx();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void secx()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int i;
    double x, sum;
    char choice;
    printf("---------------< Sec(X) >----------------\n");
    printf("Enter X (degree): ");
    scanf("%lf", &x);
    sum = 1 / cos(x * 3.14159 / 180);
    printf("\nSec (%.2f)  =  %.2f\n\n", x, sum);
    fprintf(fp, "Sec (%.2f)  =  %.2f\n\n", x, sum);
    printf("---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        secx();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        menu();
    }
}
void numericSystem()
{
    fflush(stdin);
    int choice;
    system("cls");
    printf("-----------------------------< NUMERIC CONVERTION MENU >---------------------------------\n");
    printf("----------------------------< Enter a option from below >--------------------------------\n\n");
    printf(" 1. Decimal to Binary\n 2. Decimal to Octal\n 3. Decimal to Hexadecimal\n");
    printf("--------------------------------\n");
    printf(" 4. Binary to Decimal\n 5. Binary to Octal\n 6. Binary to Hexadecimal\n");
    printf("--------------------------------\n");
    printf(" 7. Octal to Decimal\n 8. Octal to Binary\n 9. Octal to Hexadecimal\n");
    printf("--------------------------------\n");
    printf("10. Hexadecimal to Decimal\n11. Hexadecimal to Octal\n12. Hexadecimal to Binary\n");
    printf("--------------------------------\n");
    printf("13. Return to Main Menu\n14. View File\t\t15. Exit\n");
    printf("--------------------------------\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 13:
        menu();
        break;

    case 14:
        view();
        break;

    case 15:
        exit(1);
        break;

    case 1:
        deciTobinary();
        break;

    case 2:
        deciToOctal();
        break;

    case 3:
        deciToHexa();
        break;

    case 4:
        binaryTodeci();
        break;

    case 5:
        binaryToOctal();
        break;

    case 6:
        binaryToHexa();
        break;

    case 7:
        octalTodeci();
        break;

    case 8:
        octalToBinary();
        break;

    case 9:
        octalToHexa();
        break;

    case 10:
        hexaTodeci();
        break;

    case 11:
        hexaToOctal();
        break;

    case 12:
        hexaToBinary();
        break;
    }
}
void deciTobinary()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    long int rem[50];
    long int num, i = 0, length = 0, store;
    char choice;
    printf("---------------< Decimal to Binary >----------------\n");
    printf("Enter the decimal number: ");
    scanf("%ld", &num);
    store = num;
    while(num>0)
    {
        rem[i] = num % 2;
        num = num / 2;
        i++;
        length++;
    }
    printf("\nBinary number is: ");
    fprintf(fp,"Decimal (%ld) to Binary  =  ",store);
    for(i = length - 1; i >=0; i--)
    {
        printf("%ld", rem[i]);
        fprintf(fp,"%ld", rem[i]);
    }
    fprintf(fp,"\n\n");
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        deciTobinary();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void deciToOctal()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    long int rem[50];
    long int num, i = 0, length = 0, store;
    char choice;
    printf("---------------< Decimal to Octal >----------------\n");
    printf("Enter the decimal number: ");
    scanf("%ld", &num);
    store = num;
    while(num>0)
    {
        rem[i] = num % 8;
        num = num / 8;
        i++;
        length++;
    }
    printf("\nOctal number is: ");
    fprintf(fp,"Decimal (%ld) to Octal  =  ",store);
    for(i = length - 1; i >=0; i--)
    {
        printf("%ld", rem[i]);
        fprintf(fp,"%ld", rem[i]);
    }
    fprintf(fp,"\n\n");
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        deciToOctal();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void deciToHexa()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    long int rem[50];
    long int num, i = 0, length = 0, store;
    char choice;
    printf("---------------< Decimal to Hexadecimal >----------------\n");
    printf("Enter the decimal number: ");
    scanf("%ld", &num);
    store = num;
    while(num>0)
    {
        rem[i] = num % 16;
        num = num / 16;
        i++;
        length++;
    }
    printf("\nHexadecimal number is: ");
    fprintf(fp,"Decimal (%ld) to Hexadecimal  =  ",store);
    for(i = length - 1; i >=0; i--)
    {
        switch(rem[i])
        {
        case 10:
            printf("A");
            fprintf(fp,"A");
            break;
        case 11:
            printf("B");
            fprintf(fp,"B");
            break;
        case 12:
            printf("C");
            fprintf(fp,"C");
            break;
        case 13:
            printf("D");
            fprintf(fp,"D");
            break;
        case 14:
            printf("E");
            fprintf(fp,"E");
            break;
        case 15:
            printf("F");
            fprintf(fp,"F");
            break;
        default:
            printf("%ld", rem[i]);
            fprintf(fp,"%ld", rem[i]);
        }
    }
    fprintf(fp,"\n\n");
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        deciToHexa();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void binaryTodeci()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    long int rem;
    long int num, deci = 0, base = 1, store;
    char choice;
    printf("---------------< Binary to Decimal >----------------\n");
    printf("Enter binary number: ");
    scanf("%ld", &num);
    store = num;
    while (num > 0)
    {
        rem = num % 10;
        deci = deci + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("\nDecimal number is: %ld", deci);
    fprintf(fp,"Binary (%ld) to Decimal  =  %ld\n\n", store, deci);
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        binaryTodeci();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void binaryToOctal()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    long int num, octal = 0, j = 1, store, remainder;
    char choice;
    printf("---------------< Binary to Octal >----------------\n");
    printf("Enter binary number: ");
    scanf("%ld", &num);
    store = num;
    while (num!=0)
    {
        remainder = num % 10;
        octal = octal + remainder * j;
        j = j * 2;
        num = num / 10 ;

    }
    printf("\nOctal number is: %lo", octal);
    fprintf(fp,"Binary (%ld) to Octal  =  %lo\n\n", store, octal);
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        binaryToOctal();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void binaryToHexa()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    long int num, hexa = 0, j = 1, store, remainder;
    char choice;
    printf("---------------< Binary to Hexadecimal >----------------\n");
    printf("Enter binary number: ");
    scanf("%ld", &num);
    store = num;
    while (num!=0)
    {
        remainder = num % 10;
        hexa = hexa + remainder * j;
        j = j * 2;
        num = num / 10 ;

    }
    printf("\nHexadecimal number is: %lX", hexa);
    fprintf(fp,"Binary (%ld) to Hexadecimal  =  %lX\n\n", store, hexa);
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        binaryToHexa();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void octalTodeci()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    long int octal, deci = 0, store;
    int i = 0;
    char choice;
    printf("---------------< Octal to Decimal >----------------\n");
    printf("Enter Octal number: ");
    scanf("%ld", &octal);
    store = octal;
    while (octal!=0)
    {
        deci = deci +(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }
    printf("\nDecimal number is: %ld", deci);
    fprintf(fp,"Octal (%ld) to Decimal  =  %ld\n\n", store, deci);
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        octalTodeci();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void octalToBinary()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    long i = 0;
    char octalnum[1000], store[1000];
    char choice;
    printf("---------------< Octal to Binary >----------------\n");
    printf("Enter Octal number: ");
    scanf("%s", &octalnum);
    printf("\nBinary number is: ");
    fprintf(fp,"Octal (%s) to Binary  =  ", octalnum);
    while (octalnum[i])
    {
        switch(octalnum[i])
        {
        case '0':
            printf("000");
            fprintf(fp,"000");
            break;
        case '1':
            printf("001");
            fprintf(fp,"001");
            break;
        case '2':
            printf("010");
            fprintf(fp,"010");
            break;
        case '3':
            printf("011");
            fprintf(fp,"011");
            break;
        case '4':
            printf("100");
            fprintf(fp,"100");
            break;
        case '5':
            printf("101");
            fprintf(fp,"101");
            break;
        case '6':
            printf("110");
            fprintf(fp,"110");
            break;
        case '7':
            printf("111");
            fprintf(fp,"111");
            break;
        default:
            printf("\n Invalid octal digit %c ", octalnum[i]);
            return 0;
        }
        i++;
    }
    fprintf(fp,"\n\n");
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        octalToBinary();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void octalToHexa()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long octal, tempOctal, binary, place, store;
    char choice;
    char hex[65] = "";
    int rem;

    place = 1;
    binary = 0;

    printf("---------------< Octal to Hexadecimal >----------------\n");
    printf("Enter Octal number: ");
    scanf("%lld", &octal);
    tempOctal = octal;
    store = octal;

    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;

        place *= 1000;
    }


    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }

    strrev(hex);

    printf("\nHexadecimal number: %s", hex);
    fprintf(fp,"Octal (%lld) to Hexadecimal =  %s\n\n", store, hex);
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        octalToHexa();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void hexaTodeci()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    char choice;
    char hex[40];
    long long decimal = 0, base = 1;
    int i = 0, value, length;
    printf("---------------< Hexadecimal to Decimal >----------------\n");
    printf("Enter hexadecimal number: ");
    fflush(stdin);
    gets(hex);
    length = strlen(hex);

    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    printf("\nDecimal number: %lld", decimal);
    fprintf(fp,"Hexadecimal (%s) to Decimal  =  %lld\n\n", hex, decimal);
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        hexaTodeci();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }

}
void hexaToOctal()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    char choice;
    char hex[17];
    long long octal, binary, place;
    int i = 0, remainder, value;

    printf("---------------< Hexadecimal to Octal >----------------\n");
    printf("Enter the hexadecimal number: ");
    fflush(stdin);
    gets(hex);

    octal = 0ll;
    binary = 0ll;
    place = 0ll;

    for(i=0; hex[i]!='\0'; i++)
    {
        binary = binary * place;

        switch(hex[i])
        {
            case '0':
                binary += 0;
                break;
            case '1':
                binary += 1;
                break;
            case '2':
                binary += 10;
                break;
            case '3':
                binary += 11;
                break;
            case '4':
                binary += 100;
                break;
            case '5':
                binary += 101;
                break;
            case '6':
                binary += 110;
                break;
            case '7':
                binary += 111;
                break;
            case '8':
                binary += 1000;
                break;
            case '9':
                binary += 1001;
                break;
            case 'a':
            case 'A':
                binary += 1010;
                break;
            case 'b':
            case 'B':
                binary += 1011;
                break;
            case 'c':
            case 'C':
                binary += 1100;
                break;
            case 'd':
            case 'D':
                binary += 1101;
                break;
            case 'e':
            case 'E':
                binary += 1110;
                break;
            case 'f':
            case 'F':
                binary += 1111;
                break;
            default:
                printf("Please Enter correct hexadecimal input.");
        }

        place = 10000;
    }

    place = 1;

    while(binary > 0)
    {
        remainder = binary % 1000;

        switch(remainder)
        {
            case 0:
                value = 0;
                break;
            case 1:
                value = 1;
                break;
            case 10:
                value = 2;
                break;
            case 11:
                value = 3;
                break;
            case 100:
                value = 4;
                break;
            case 101:
                value = 5;
                break;
            case 110:
                value = 6;
                break;
            case 111:
                value = 7;
                break;
        }

        octal = (value * place) + octal;
        binary /= 1000;

        place *= 10;
    }
    printf("\nOctal number = %lld", octal);
    fprintf(fp,"Hexadecimal (%s) to Octal  =  %lld\n\n", hex, octal);
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        hexaToOctal();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void hexaToBinary()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    long i = 0;
    char binarynum[1000], hexa[1000];
    char choice;
    printf("---------------< Hexadecimal to Binary >----------------\n");
    printf("Enter Hexadecimal number: ");
    scanf("%s", &hexa);
    printf("\nBinary number is: ");
    fprintf(fp,"Hexadecimal (%s) to Binary  =  ", hexa);
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000");
            fprintf(fp,"0000");
            break;
        case '1':
            printf("0001");
            fprintf(fp,"0001");
            break;
        case '2':
            printf("0010");
            fprintf(fp,"0010");
            break;
        case '3':
            printf("0011");
            fprintf(fp,"0011");
            break;
        case '4':
            printf("0100");
            fprintf(fp,"0100");
            break;
        case '5':
            printf("0101");
            fprintf(fp,"0101");
            break;
        case '6':
            printf("0110");
            fprintf(fp,"0110");
            break;
        case '7':
            printf("0111");
            fprintf(fp,"0111");
            break;
        case '8':
            printf("1000");
            fprintf(fp,"1000");
            break;
        case '9':
            printf("1001");
            fprintf(fp,"1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            fprintf(fp,"1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            fprintf(fp,"1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            fprintf(fp,"1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            fprintf(fp,"1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            fprintf(fp,"1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            fprintf(fp,"1111");
            break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            return 0;
        }
        i++;
    }
    fprintf(fp,"\n\n");
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        hexaToBinary();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        numericSystem();
    }
}
void matrixmenu()
{
    fflush(stdin);
    system("cls");
    int choice;
    printf("-----------------------------< MATRIX CALCULATION MENU >---------------------------------\n");
    printf("----------------------------< Enter a option from below >--------------------------------\n\n");
    printf("1. Addition of two matrices\n2. Subtraction of two matrices\n");
    printf("3. Return to main menu\n4. Exit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 4:
        exit(1);
        break;

    case 1:
        addmatrix();
        break;

    case 2:
        submatrix();
        break;

    case 3:
        menu();
        break;
    }

}
void addmatrix()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    char choice;
    printf("---------------< Addition of two matrices >----------------\n\n");
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }



    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }



    printf("\nSum of two matrices: \n");
    fprintf(fp,"Addition of two matrices:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("(%d + %d) = %d    ", a[i][j], b[i][j], sum[i][j]);
            fprintf(fp,"(%d + %d) = %d    ", a[i][j], b[i][j], sum[i][j]);

        }
        fprintf(fp,"\n\n");
        printf("\n\n");
    }
    fprintf(fp,"\n");
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        addmatrix();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        matrixmenu();
    }
}
void submatrix()
{
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    int r, c, a[100][100], b[100][100], sub[100][100], i, j;
    char choice;
    printf("---------------< Subtraction of two matrices >----------------\n\n");
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }


    // subtracting two matrices
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }


    // printing the result
    printf("\nSubtraction of two matrices: \n");
    fprintf(fp,"Subtraction of two matrices:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("(%d - %d) = %d    ", a[i][j], b[i][j], sub[i][j]);
            fprintf(fp,"(%d - %d) = %d    ", a[i][j], b[i][j], sub[i][j]);

        }
        fprintf(fp,"\n\n");
        printf("\n\n");
    }
    fprintf(fp,"\n");
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        submatrix();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        matrixmenu();
    }
}
void complexmenu()
{
    fflush(stdin);
    system("cls");
    int choice;
    printf("-----------------------------< COMPLEX CALCULATIONS MENU >---------------------------------\n");
    printf("----------------------------< Enter a option from below >--------------------------------\n\n");
    printf("1. Add two complex numbers\n2. Subtract two complex numbers\n");
    printf("3. Multiply two complex numbers\n4. Divide two complex numbers\n5. Return to main menu\n");
    printf("6. Exit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 5:
        menu();
        break;

    case 6:
        exit(1);
        break;

    case 1:
        addcomplex();
        break;

    case 2:
        subcomplex();
        break;

    case 3:
        mulcomplex();
        break;

    case 4:
        divcomplex();
        break;
    }
}
void addcomplex()
{
    fflush(stdin);
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    struct complex a,b,c;
    char choice;
    printf("---------------< Add two complex numbers >----------------\n\n");
    printf("Enter a and b where a + ib is the first complex number.");
    printf("\na = ");
    scanf("%d", &a.real);
    printf("b = ");
    scanf("%d", &a.img);
    printf("Enter c and d where c + id is the second complex number.");
    printf("\nc = ");
    scanf("%d", &b.real);
    printf("d = ");
    scanf("%d", &b.img);
    c.real = a.real + b.real;
    c.img = a.img + b.img;

    if (c.img >= 0)
    {
        printf("\nAddition of the complex numbers = %d + %di", c.real, c.img);
        fprintf(fp,"Addition of two complex numbers result = %d + %di\n\n", c.real, c.img);
    }
    else
    {
        printf("\nAddition of the complex numbers = %d%di", c.real, c.img);
        fprintf(fp,"Addition of two complex numbers result = %d%di\n\n", c.real, c.img);
    }
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        addcomplex();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        complexmenu();
    }
}
void subcomplex()
{
    fflush(stdin);
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    struct complex a,b,c;
    char choice;
    printf("---------------< Subtract two complex numbers >----------------\n\n");
    printf("Enter a and b where a + ib is the first complex number.");
    printf("\na = ");
    scanf("%d", &a.real);
    printf("b = ");
    scanf("%d", &a.img);
    printf("Enter c and d where c + id is the second complex number.");
    printf("\nc = ");
    scanf("%d", &b.real);
    printf("d = ");
    scanf("%d", &b.img);
    c.real = a.real - b.real;
    c.img = a.img - b.img;

    if (c.img >= 0)
    {
        printf("\nDifference of the complex numbers = %d + %di", c.real, c.img);
        fprintf(fp,"Difference of two complex numbers result = %d + %di\n\n", c.real, c.img);
    }
    else
    {
        printf("\nDifference of the complex numbers = %d%di", c.real, c.img);
        fprintf(fp,"Difference of two complex numbers result = %d%di\n\n", c.real, c.img);
    }
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        subcomplex();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        complexmenu();
    }
}
void mulcomplex()
{
    fflush(stdin);
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    struct complex a,b,c;
    char choice;
    printf("---------------< Multiply two complex numbers >----------------\n\n");
    printf("Enter a and b where a + ib is the first complex number.");
    printf("\na = ");
    scanf("%d", &a.real);
    printf("b = ");
    scanf("%d", &a.img);
    printf("Enter c and d where c + id is the second complex number.");
    printf("\nc = ");
    scanf("%d", &b.real);
    printf("d = ");
    scanf("%d", &b.img);
    c.real = a.real*b.real - a.img*b.img;
    c.img = a.img*b.real + a.real*b.img;

    if (c.img >= 0)
    {
        printf("\nMultiplication of the complex numbers = %d + %di", c.real, c.img);
        fprintf(fp,"Multiplication of two complex numbers result = %d + %di\n\n", c.real, c.img);
    }
    else
    {
        printf("\nMultiplication of the complex numbers = %d%di", c.real, c.img);
        fprintf(fp,"Multiplication of two complex numbers result = %d%di\n\n", c.real, c.img);
    }
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        mulcomplex();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        complexmenu();
    }
}
void divcomplex()
{
    fflush(stdin);
    system("cls");
    FILE *fp;
    fp = fopen("results.txt","a");

    struct complex a,b,c;
    int x, y, z;
    char choice;
    printf("---------------< Divide two complex numbers >----------------\n\n");
    printf("Enter a and b where a + ib is the first complex number.");
    printf("\na = ");
    scanf("%d", &a.real);
    printf("b = ");
    scanf("%d", &a.img);
    printf("Enter c and d where c + id is the second complex number.");
    printf("\nc = ");
    scanf("%d", &b.real);
    printf("d = ");
    scanf("%d", &b.img);
    x = a.real*b.real + a.img*b.img;
    y = a.img*b.real - a.real*b.img;
    z = b.real*b.real + b.img*b.img;

    if (x%z == 0 && y%z == 0)
    {
        if (y/z >= 0)
        {
            printf("\nDivision of the complex numbers = %d + %di", x/z, y/z);
            fprintf(fp,"Division of the complex numbers = %d + %di\n\n", x/z, y/z);
        }
        else
        {
            printf("\nDivision of the complex numbers = %d%di", x/z, y/z);
            fprintf(fp,"Division of the complex numbers = %d%di\n\n", x/z, y/z);
        }
    }
    else if (x%z == 0 && y%z != 0)
    {
        if (y/z >= 0)
        {
            printf("\nDivision of two complex numbers = %d + %d/%di\n", x/z, y, z);
            fprintf(fp,"Division of two complex numbers = %d + %d/%di\n\n", x/z, y, z);
        }
        else
        {
            printf("\nDivision of two complex numbers = %d%d/%di\n", x/z, y, z);
            fprintf(fp,"Division of two complex numbers = %d%d/%di\n\n", x/z, y, z);
        }
    }
    else if (x%z != 0 && y%z == 0)
    {
        if (y/z >= 0)
        {
            printf("\nDivision of two complex numbers = %d/%d + %di\n", x, z, y/z);
            fprintf(fp,"Division of two complex numbers = %d/%d + %di\n\n", x, z, y/z);
        }
        else
        {
            printf("\nDivision of two complex numbers = %d%d/%di\n", x, z, y/z);
            fprintf(fp,"Division of two complex numbers = %d%d/%di\n\n", x, z, y/z);
        }
    }
    else
    {
        if (y/z >= 0)
        {
            printf("\nDivision of two complex numbers = %d/%d + %d/%di\n",x, z, y, z);
            fprintf(fp,"Division of two complex numbers = %d/%d + %d/%di\n\n",x, z, y, z);
        }
        else
        {
            printf("\nDivision of two complex numbers = %d/%d%d/%di\n", x, z, y, z);
            fprintf(fp,"Division of two complex numbers = %d/%d%d/%di\n\n", x, z, y, z);
        }
    }
    printf("\n\n---------< SUCCESFULLY WRITTEN IN FILE >--------\n");
    fclose(fp);
    printf("\nTo continue, press 'y'\nTo exit, press 'n'\nTo return to menu press any key\n\n");
    choice = getch();
    if(choice == 'y')
    {
        divcomplex();
    }
    else if(choice == 'n')
    {
        exit(1);
    }
    else
    {
        complexmenu();
    }
}
