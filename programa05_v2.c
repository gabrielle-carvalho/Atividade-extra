#include <stdio.h>

main() {
float sb, grat, imp, newsb; 
    printf("Digite o salário do funcionário ");
    scanf("%f", &sb);

    grat=sb*0.05;
    imp=sb*0.07;
    sb= sb + grat - imp;
       printf("Gratificação: % 0.2f", grat);
          printf("\nImposto: % 0.2f", imp);
          
    printf("\nSalário final:  %.2f", sb);

}
