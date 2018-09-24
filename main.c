#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void noiHoVaTen(char ho[], char ten[]){
    printf("Độ dài của họ là: %d\n", strlen(ho));
    printf("Độ dài của tên là: %d\n", strlen(ten));
    int doDaiHo = strlen(ho);
    int doDaiTen = strlen(ten);
    int tong = doDaiHo + doDaiTen;
    printf("Độ dài của cả họ và tên là: %d\n", tong);
    tong++;
    char hoVaTen[tong];
    strcat(hoVaTen, ho);
    strcat(hoVaTen, " ");
    strcat(hoVaTen, ten);
    printf("%s", hoVaTen);
}
int main() {
    char ho[50], ten[50];
//    Kiểm tra độ dài họ.
    printf("Vui lòng nhập họ của bạn: ");
    gets(ho);
//    Kiểm tra độ dài tên.
    printf("Vui lòng nhập tên của bạn: ");
    gets(ten);
    printf("Họ và tên của bạn là: ");
    noiHoVaTen(ho,ten);
    return 0;
}

