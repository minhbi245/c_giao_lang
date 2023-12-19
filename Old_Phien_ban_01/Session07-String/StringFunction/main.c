#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ta tự viết hàm copy 2 chuỗi. Độ lại hàm strcpy()
// Lí do viết hàm vì ta ko được gán trực tiếp 2 mảng cho nhau
// Do tên của 2 mảng kí tự là 2 còn trỏ
// -> là má mì, 2 má mì phải chốt/quản lí đúng mảng của mình, ko cho trỏ lung tung như con trỏ thuần chủng
// -> LỠ GẮN MẢNG NÀO, GẮN CHẶT MẢNG ĐÓ

// Gán chuối cho nhau bản chất là copy value của từng biến char trong mảng này sang mảng kia
// Như hai dãy chung cư đối diện mặt nhau, ném đồ sang cho nhau!!!

void strcpy1638(char *dest, char *src);

void removeChar(); // Tạm thời dùng trong nội bộ hàm cho dễ hiểu
                   // Truyền tham số thêm con trỏ dễ xoắn não

void removeCharV2();

void removeCharV3(); // Cho tao cacis chỗ mày muốn xóa, tao xóa đúng kí tự
                     // Truyền tham số cũng được

void removeCharV4(); // Xóa tất cả các kí tự là con số trong mảng, xóa nhiều lần, và dồn nhiều lần
                     // Dồn lên là 1 vòng for từ pos đến cuối mảng

void removeCharV5(char *n); // Tự thử làm 1 bài có truyền tham số vào đồng thời cũng là truyền tham chiếu

void removeCharV6(char *n); // Phiên bản cải tiến hơn so với V5 giảm từ 0(nlog) -> O(n)

int main()
{
    char name[50];
    // char n[50] = "Ahihi -do^' ngok. SOS";

    // // Tôi muốn name = Ahihi -do^' ngok. SOS luôn, đổ sang

    // strcpy1638(name, n);
    // printf("The string after pass by n is: ");
    // puts(name);
    printf("Please input your string: ");
    scanf("%[^\n]", name);
    // removeCharV4();
    // removeCharV5(name);
    removeCharV6(name);
    printf("\n");
    return 0;
}

// Duyệt từng [i] để biế có cẫn xóa ko, nếu cần thì xóa (for)
// for
// for ngoài lấy được từng kí tự, để biết có cần xóa [i] ko
// Có được [i] cần xóa, for trong dồn lên
void removeCharV4()
{
    char n[50] = "A111H";

    // Ta phải hỏi từng kí tự coi mày có là số hay ko
    for (int i = 0; i <= strlen(n); i++)
    { // Đi hết mảng để hỏi từng kí tự, coi mày có là số hay ko
        if (n[i] >= '0' && n[i] <= '9')
        { // Mỳa là số -> xứng đáng xóa, tại vị trí i - position đó
            for (int j = i; j <= strlen(n); j++)
            {
                n[j] = n[j + 1];
            }
            /*
                Dồn xong rồi dấy, tuy nhiên theo lẽ thường `i` sẽ đi tiếp qua thằng kế
                Nhưng tình huống này có thể là thằng i được dồn lên nó lại là 1 con số,
                `i` đi tiếp trong chuỗi là bí sót con số vừa dồn lên đúng vị trí i
                ko cho i đi lên sau khi dồn, vì đề phòng chỗ pos lại có con số
                -> xảy ra khi nhiều số gần nhau!!!
                Lồi lõm ko sao!!! -> cho nên giải pháp ở đây là nên i--;
                để i tự giảm lại/ bị giam lại vị trí tìm được vị trí đó là con số
            */
            i--;
        }
    }
    printf("You string after remove decimal is: ");
    puts(n);
}

void removeCharV3()
{
    char n[50] = "SOS$#Ahihi";
    // Tui muốn xóa dấu # vị trì 4 tính từ 0
    int pos = 4;

    for (int i = pos; i <= strlen(n); i++)
    {
        n[i] = n[i + 1];
    }
    printf("After removing #: ");
    puts(n);
}

void removeCharV2()
{
    char n[50] = "A1hihi";
    for (int i = 1; i <= strlen(n); i++)
    {
        n[i] = n[i + 1];
    }

    puts(n);
}

void removeChar()
{
    char n[50] = "A1hihi"; // Chuỗi này dài 6, nhưng lại xài 7 vì còn null | '\0' ở cuối
    //            A 1 h i h i 0-null

    // Xóa số 1, biết trước tại vị trí 1
    // n[0] giữ nguyên

    n[1] = n[2]; // Chữ số 1 thay bằng thằng đứng sau, chứ h đi lên
                 // Chữ h đi lên chỗ 1, nhưng h ở [2] vẫn còn đó, đổ value, gán value, vùng ram nằm cố định trong ram
                 // biến cố định tọa độ, nhưng value thì được đổi
    n[2] = n[3];
    n[3] = n[4];
    n[4] = n[5]; // Dồn hết rồi, nhưng null chưa lên, 2 chữ cuối trùng
    n[5] = n[6];
    puts(n);
}

// dest: sẽ trỏ vào đầu 1 mảng cần đổ data vào
// src: trỏ mảng đang có data, chữ, cần ném cho ai đó
// Con trỏ: trỏ đầu mảng
// TRUYỀN THAM CHIẾU RỒI, HÀM SỬA BÊN NGOÀI BỊ ẢNH HƯỞNG
void strcpy1638(char *dest, char *src)
{
    // Đi từ đầu đến cuối chuỗi gốc, copy từng giá trị sang bên kia
    for (int i = 0; i <= strlen(src); i++)
    {
        dest[i] = src[i];
    }
}

void removeCharV5(char *n) {
    for (int i = 0; i < strlen(n); i++) {
        if (n[i] >= '0' && n[i] <= '9') {
            for (int j = i; j < strlen(n); j++) {
                n[j] = n[j + 1];
            }

            for (int k = i; k < strlen(n); k++) {
                if (n[k] >= '0' && n[k] <= '9') {
                    i--;
                }
            }
        }
    }
    printf("After removing numbers the string is: ");
    puts(n);
}

void removeCharV6(char *n) {

    int len = strlen(n);
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (n[i] < '0' || n[i] > '9') {
            n[j++] = n[i];
        }
    }
    n[j] = '\0'; // Đặt kí tự kết thúc của chuỗi
    printf("After removing numbsers the string is: ");
    puts(n);
}