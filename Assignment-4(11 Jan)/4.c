#include <stdio.h>

int main(){
    int n = 2;

    printf("Line: %d, n = %d\n", __LINE__, n);
    for (
        printf("Line: %d, n = %d\n", __LINE__, n);
        n, printf("Line: %d, n = %d\n", __LINE__, n);
        printf("Line: %d, n = %d\n", __LINE__, n), n--
    ){ //forever 12
        printf("Line: %d, n = %d\n", __LINE__, n);
      }
    printf("Line: %d, n = %d\n", __LINE__, n);

    return 0;
}

