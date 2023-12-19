#include <stdio.h>
#include <stdlib.h>

/*
    Bài lẻ, hiểu kiến thức lí thuyết. Bài này minh họa các khái niệm
    scope của 1 biến, túc là ta đứng ở đâu thì ta mới sờ được biến,
    chỗ nào thì biến bị che khuất/ ko thấy - local và global liên quan đến scope
*/ 


int yob; // yob là biến toàn cục, global, hàm nào cũng sờ được

// int yob = 2002; cách này thì okie
// yob = 2002; // Sai nhen!!!! Không biết làm sao để CPU chạm vào!!!
            // CPU Chỉ bắt đầu từ main() trong main() sẽ có hàm nào đó được gọi
            // Lệnh nằm trong hàm, hàm trong main() - main() là hàm đb,
            // Nơi cuộc chơi bắt đầu!!!


void printYob();
void printLatestYob();

int main() {
    printf("In main(), yob is %d\n", yob); // 0 rác
    
    // Gọi hàm
    // printYob();
    // printLatestYob();
    // 0 2k10 2022

    // Gọi hàm
    printLatestYob();
    printYob();
    
    // Hàm gọi xong, main() làm tiếp, hỏi xem yob ở đây là mấy?
    printf("In main(), after calling printYob() yob finally is %d\n", yob);
    return 0;
}

void printYob() {
    printf("First calling printYob(), yob is %d\n", yob);
    yob = 2010;
    printf("In printYob(), after updating yob, yob now is %d\n", yob);
}

void printLatestYob() {
    yob = 2022;
    printf("In printLastestYob(), after updating yob, yob now is %d\n", yob);
}