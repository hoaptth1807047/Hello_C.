#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void noiHoVaTen(char ho[], char ten[]) {
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
    printf("Họ và tên của bạn là: ");
    puts(hoVaTen);
}

int main() {
    char ho[10], ten[10];

    while (1 == 1) {
//    Kiểm tra độ dài họ.
        printf("Vui lòng nhập họ của bạn: ");
        gets(ho);
        if (strlen(ho) > 10) {
            printf("Lỗi. Bạn đã nhập quá số lượng. Vui lòng nhập lại.\n");
        } else
            break;
    }
    while (1 == 1) {
//    Kiểm tra độ dài tên.
        printf("Vui lòng nhập tên của bạn: ");
        gets(ten);
        if (strlen(ten) > 10) {
            printf("Lỗi. Bạn đã nhập quá số lượng. Vui lòng nhập lại.");
        } else
            break;
    }
    noiHoVaTen(ho, ten);
    return 0;
}

//void noiHoVaTen(char ho[], char ten[]) {
//    printf("Độ dài của họ là: %d\n", strlen(ho));
//    printf("Độ dài của tên là: %d\n", strlen(ten));
//    int dodaiHo = strlen(ho);
//    int dodaTen = strlen(ten);
//    int tong = dodaiHo + dodaTen;
//    printf("Độ dài của cả họ và tên là: %d\n", tong);
//    tong++;
//    char hovaten[tong];
//    strcat(hovaten, ho);
//    strcat(hovaten, " ");
//    strcat(hovaten, ten);
//    printf("%s", hovaten);
//}
//
//int main() {
//    char ho[50], ten[50];
//    printf("Vui lòng nhập họ của bạn: \n");
//    gets(ho);
//    //Kiểm tra độ dài họ.
//    printf("Vui lòng nhập tên của bạn: \n");
//    gets(ten);
//    //Kiểm tra độ dài tên.
//    printf("Họ và tên của bạn là: \n");
//    noiHoVaTen(ho, ten);
//    return 0;
//}
