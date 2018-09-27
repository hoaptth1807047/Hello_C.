#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void noiHoVaTen(char ho[], char ten[]) {
//    printf("Độ dài của họ là: %d\n", strlen(ho));
//    printf("Độ dài của tên là: %d\n", strlen(ten));
//    int doDaiHo = strlen(ho);
//    int doDaiTen = strlen(ten);
//    int tong = doDaiHo + doDaiTen;
//    printf("Độ dài của cả họ và tên là: %d\n", tong);
//    tong++;
//    char hoVaTen[tong];
//    strcpy(hoVaTen, ho);
//    strcat(hoVaTen, " ");
//    strcat(hoVaTen, ten);
//    printf("Họ và tên của bạn là: ");
//    puts(hoVaTen);
//}
//
//int main() {
//    char ho[10], ten[10];
//    printf("Vui lòng nhập họ của bạn: ");
//    fgets(ho, 10, stdin);
//    puts(ho);
//    if(!strchr(ho, '\n')) {
//        while (fgetc(stdin) != '\n');
//    }
//        printf("Vui lòng nhập tên của bạn: ");
//        fgets(ten, 10, stdin);
//        puts(ten);
//    noiHoVaTen(ho, ten);
//    return 0;
//}


typedef struct {
    char city[50];
    char distric[50];
} Address;


typedef struct Pig {
    int pig_id;
    char name_of_pig[10];
    int age_of_pig;
    int weight_of_pig;
    Address address;
} Piggy;

//int main() {
//    struct Pig inforOfYourPig;
//    printf("Vui lòng nhập tên: ");
//    fgets(inforOfYourPig.name_of_pig, 10, stdin);
//    printf("Tên của con heo là: %s\n", inforOfYourPig.name_of_pig);
//    printf("Vui lòng nhập tuổi: ");
//    scanf("%d", inforOfYourPig.age_of_pig);
//    printf("Tuổi của con heo là: %d\n", inforOfYourPig.age_of_pig);
//    printf("Vui lòng nhập cân nặng: ");
//    scanf("%d", inforOfYourPig.weight_of_pig);
//    printf("Cân nặng của con heo là: %d\n", inforOfYourPig.weight_of_pig);
//    return 0;
//}

int main() {
    int size;
    int a, b, c;
    printf("Vui lòng nhập số lượng heo: \n");
    scanf("%d", &size);
    Piggy inforOfPig[size];
    for (int i = 0; i < size; ++i) {
        printf("Vui lòng nhập số id của heo thứ %d: \n", i + 1);
        scanf("%d", &inforOfPig[i].pig_id);
        printf("Vui lòng nhập tên của con heo thứ %d: \n", i + 1);
//        scanf("%s", &inforOfPig[i].name_of_pig);
        fgetc(stdin);
        fgets(inforOfPig[i].name_of_pig, 10, stdin);
        //        getchar();
//        if (!strchr(inforOfPig[i].name_of_pig, '\n')) {
//            while (fgetc(stdin) != '\n');
//        }
        printf("Vui lòng nhập tuổi của con heo thứ %d: \n", i + 1);
        scanf("%d", &inforOfPig[i].age_of_pig);
        printf("Vui lòng nhập cân nặng của con heo thứ %d: \n", i + 1);
        scanf("%d", &inforOfPig[i].weight_of_pig);
        printf("Vui lòng nhập tên thành phố của con heo thứ %d: \n", i + 1);
        fgetc(stdin);
        fgets(inforOfPig[i].address.city, 50, stdin);

//        getchar();
//        if (!strchr(inforOfPig[i].address.city, '\n')) {
//            while (fgetc(stdin) != '\n');
//        }

        printf("Vui lòng nhập tên quận: ");
        fgetc(stdin);
        fgets(inforOfPig[i].address.distric, 50, stdin);

//        getchar();
//        if (!strchr(inforOfPig[i].address.distric, '\n')) {
//            while (fgetc(stdin) != '\n');
//        }

    }
    for (int j = 0; j < size; ++j) {
        printf("Mã id của heo thứ %d là: %d\n", j + 1, inforOfPig[j].pig_id);
        printf("Tên heo thứ %d là: %s\n", j + 1, inforOfPig[j].name_of_pig);
        printf("Tuổi của heo thứ %dlà: %d\n", j + 1, inforOfPig[j].age_of_pig);
        printf("Cân nặng của heo thứ %dlà: %d\n", j + 1, inforOfPig[j].weight_of_pig);
        printf("Thành phố của heo thứ %d là: %s\n", j + 1, inforOfPig[j].address.city);
        printf("Quận của heo thứ %d là: %s\n", j + 1, inforOfPig[j].address.distric);
    }
    return 0;
}



//inforOfPig.pig_id = 1;
//strcpy(inforOfPig.name_of_pig, "Pig");
//inforOfPig.age_of_pig = 10;
//inforOfPig.weight_of_pig = 30;
//strcpy(inforOfPig.address.city, "Hà Nội");
//strcpy(inforOfPig.address.distric, "Thanh Xuân");