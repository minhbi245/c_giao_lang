#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Dùng lib, kho đồ chơi, nơi chứa hàm liên quan chuỗi, y = f(x) = x^2


void storeName(); // Khai báo chuỗi kiểu mảng 'S', 'O', 'S'

void storeNameV2(); // Khai báo chuỗi kiểu "" cho hiệu quả, tự chèn null vào cuối chuỗi ko phải cuối mảng | "SOS"

void storeNameV3(); // Đổi kí tự thường sang hoa, thường sang hoa của một chuỗi

void storeNameV4(); // Đổi từ thường sang hoa

void storeNameV5(); // Nhập chuỗi từ bàn phím, tuy nhiên %s không thèm lấy tên sau dấu cách đầu tiên

void storeNameV6(); // Nhập chuỗi từ bàn phím, lấy luônc chuỗi có dấu cách, hãy xem enter như là phím duy nhất để kết thúc việc nhập
                    // Dấu cách là data thường, ko dùng dấu cách mặc định để phân tách các value trong quá trình nhập

void storeNameV7(); // Nếu nhập chuỗi bị lố chiều dài của mảng đã định nghĩa trước thì sao?

void storeNameV8(); // Nhập chuỗi có chặn độ dài, chấp nhận dấu cách là 1 phần tất yếu

void storeNameV9(); // Nhập chuỗi ko có chặn độ dài, dễ viết hơn!!!

char *strlwr(char *s); // Đổi từ HOA sang thường
char *strupr(char *s); // Đổi từ thường sang HOA

int main()
{
    // storeName();
    // storeNameV2();
    // storeNameV3();
    // storeNameV4();
    // storeNameV5();
    // storeNameV6();
    // storeNameV7();
    storeNameV9();
    printf("\n");
    return 0;
}

void storeName()
{
    // char name[] = {'S', '0', 'S', '\0', '$', '!'};
    char name[] = {65, '0', 'S', 0, '$', '!'};

    // Kí tự được quyền xài theo 2 cách  mã ASCII hoặc bản thân kí tự
    // Kí tự nháy đơn, mã ASCII là con số nguyên

    // Hàm xem độ dài của chuỗi/ tên mình strlen(đưa chuỗi vào) -> độ dài
    int len = strlen(name);
    printf("The lenght of your name: %d\n", len);

    printf("Your name: %s", name);
    // %s quét chuỗi/mảng cho đến khi gặp \0 | NULL dừng ngay!!!
    // Báo hiệu hết chuối rồi, ko cần đi hết mảng

    // Còn muốn in phần sau null, thì xài for bình thường
    // for bình thường sẽ quét qua từng phần tử mảng
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%c", name[i]);
    }
}

void storeNameV2()
{

    char name[50] = "E't-O-E't";
    // Khai báo chuỗi nhanh hơn, khỏi cần từng kí tự nháy đôi ''
    // C tự chèn thêm kí tự null vào cuối chuỗi!!!
    int lenght = strlen(name);

    printf("Your name: %s\n", name);
    printf("Your name's lenght: %d\n", lenght);

    // Kiểm tra phần còn lại của mảng-chuổi là gì
    // 50 [byte]: E't-O-E't NULL, RÁC HAY CÁI MẸ GÌ CHƯA BIẾT
    printf("The rest of array after the name/NULL \n"); // Sau kí tự 10 là gì???
    for (int i = 0; i < 50; i++)
    {
        printf("%c", name[i]);
    }
}

void storeNameV3()
{
    char name[50] = "khanh.nvm";             // đổi tên thành chữ hoa
    printf("The original name: %s\n", name); // C tự động * các kí tự
    int lenght = strlen(name);
    // Đổi từ thường sang hoa
    // Chúng ta sẽ phải quét qua các kí tự, +- 32 đơn vị tùy hoa thường

    // for (int i = 0; i < lenght; i++) {
    //     name[i] = name[i] - 32;
    // }
    // Toang vì dấu cách, dáu gạch nang -32 ra kí tự khác
    // Chỉ đổi nếu là A-Z

    for (int i = 0; i < lenght; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32; // Tao chỉ đổi thành HOA nếu mày là thường trong khoảng kí tự từ 'a' -> 'z'
        }
    }
    printf("The name after convert to upper case is %s\n", name);
}

void storeNameV4()
{
    char name[50] = "khanh.nvm";             // đổi tên thành chữ hoa
    printf("The original name: %s\n", name); // C tự động * các kí tự
    int lenght = strlen(name);
    strupr(name); // Đù, tại sao đưa mảng cho hàm, mà hàm thay đổi
                  // mảng bị thay đổi!!!
                  // Truyền tham chiếu, truyền con trỏ, giống hàm swpa(* )
                  // tên mảng name ở main
                  // Tõ ràng name là địa chỉ name[0] đưa cho hàm
                  // -> các hàm liên quan đến chuỗi là truyền tham chiếu
    printf("The name convert to upper case: %s\n", name);
}

void storeNameV5()
{
    char name[50];
    printf("Input your name: ");
    scanf("%s", name);

    printf("Hi %s \n", name);
}

void storeNameV6()
{
    char name[50];
    printf("Input your name: ");
    scanf("%[^\n]", name); // Đưa địa chỉ thằng đầu mảng &name[0]
                           // Tự động đổ 1 loạt kí tự vào dãy biến san sát nhau
                           // Đưa nhà thằng đầu dãy, kí tự đầu
                           // Do cả đám biến liền nhau... đổ full luôn
    printf("Hi %s \n", name);
}

void storeNameV7()
{
    char name[10];
    int yob = 2002;

    // Xem địa chỉ ram
    printf("name[0] address: %u\n", name);
    printf("yob = %d; yob address: %u\n", yob, &yob);
    printf("Input your name: ");
    scanf("%[^\n]", name); // Nhập tên và nhập lố 10 kí tự, ảnh hưởng biến sau!!!
                           // Chặn độ dài khi nhập!!!

    printf("Hi %s \n", name);
    printf("Yob: %d\n", yob);
}

void storeNameV8()
{
    char name[10];
    int yob = 2002;

    // Xem địa chỉ ram
    printf("name[0] address: %u\n", name);
    printf("yob = %d; yob address: %u\n", yob, &yob);
    printf("Input your name: ");
    scanf("%9[^\n]", name); // Nhập tên và nhập lố 10 kí tự, ảnh hưởng biến sau!!!
                            // Chặn độ dài khi nhập!!!

    printf("Hi %s \n", name);
    printf("Yob: %d\n", yob);
}

void storeNameV9()
{
    char n1[50] = "Ahihi";                         // Okie gán ngay lúc khai báo ko vấn đề gì
    char n2[50] = {'A', 'h', 'i', 'h', 'i', 0};    // Kết thúc mã ASCII NULL, OKIE NHƯNG NHÌN VẤT VẢ QUÁ
    char n3[50] = {'A', 'h', 'i', 'h', 'i', '\0'}; // KÍ TỰ NULL '\0', ÉO CHƠI MÃ ASCII, CŨNG OKIE NHƯNG VẤT VẢ NHƯ n2

    char name1[50]; // Khai báo trước, gán giá trị sau
    // name1 = "Ahihi";    // Dấu = chỉ dùng lúc khai báo, hoặc gán 1 biến đơn!!! CẤM GÁN GIÁ TRỊ CHO MẢNG
    // name1 = n1; // Cố gắn lấy n1 gán vào name 1, ko sai về mặt logic, nhưng đây là tên mảng, MÁ MÌ KO CHO TRỎ LUNG TUNG, CHỐT MẢNG TỪ ĐẦU
                // chỉ được dùng cho con trỏ thuần chủng
                // Ta phải dùng đồ chơi khác

    strcpy(name1, n1); // n1 đổ vào name
    printf("After copy the string, name now is: ");
    puts(name1);
    // printf("Your string you has assigned: %s", name1);
}

char *strlwr(char *s)
{
    for (int i = 0; i < strlen(s); ++i)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 'a' - 'A';
    return s;
}

char *strupr(char *s)
{
    for (int i = 0; i < strlen(s); ++i)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    return s;
}