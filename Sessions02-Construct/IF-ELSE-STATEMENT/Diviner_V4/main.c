#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Mo cop xe Innova, lay hang ra choi
                   // cai hom chua do choi dung nhieu lan
                   // day la tap tin tren HDD/SSD chua cac ham
                   //Cac xu li co san ma ta loi ra xai
                   //Ta can biet hom nao chua do gi
                   //Ten hom.h ~~~ cac cop xe chua do choi
                   //Ten mon do choi la cac ham nam trong cop xe
                   //ctype.h
                   //iclude <> mo cop xe tuong ung
                   //da mo thi lay hang/ham ra ma xai!!!
                   //.h duoc goi la LIBRARY
                   //NHIEU DO CHOI DUNG CHUNG, XAI LAI NHIEU LAN

// Write an app to diviner the destiny through first character in the user's first name

// Apply the IPO to diviner the character user, so to solve this problem, what's we need?
// INPUT ?: get the first letter in the first name!!!
// PROCESS ?: Tuy ki tu ten la gi A, B, C, D, E thi ta se in/ghe voi tinh cach da duoc tong ket san
// boi cach tinh cua nhan loai
// if(chu cai la A) thi tinh cach la...
// if(chu cai ten dung la B) thi tinh cach la...
// OUTPUT ?: in ra/thong bao ra tinh cach tuong ung cho nguoi dung thay - printf/alert("cau thong bao gi do?")

/*
    TIPS:
    - Cu co bao nhieu input <-> co bay nhieu bien!!!
    - Cu co output thi se co xac suat can them bien de luu gia tri output, tru truong hop output la in cau gi do thi khong can
    Ex: ouput cua nghiem PT bac 2: 2 nghiem can in ra la x1, x2
    - Phan thuat toan(algorithm) co kha nang can them bien trung gian de luu cac gia tri trong qua trinh tinh toan
    Ex: in tuoi theo nam sinh thi, age = 2022 - yob;
    -> variable age chinh la bien trung gian

    Bai giai PT bac 2: delta = b^2 - 4ac, delta la bien trung gian
    ouput thuc suc can cua pt bac 2: 2 nghiem la x1, x2
    vay cu the o day
    INTPUT: dua vao gia tri cua a, b, c
    PROCESS: xu ly trung gian delta = b^2 - 4ac;
    OUTPUT: nghiem x1, x2
*/

int main()
{
    // Input: first letter in your name
    char firstLetter;
    // Process: has first letter so use if check condition then print the result
    // Output: just print out the result, no need the varible to save value here
    printf("Welcome to Mac diviner.\n");
    printf("You are required to input the 1st letter in your first name.\n");
    printf("I will show you your destiny/fate\n");
    printf("Input your character: ");
    scanf("%c", &firstLetter); // Co duoc ten roi, chi co 1 ki tu thoi.
    // Toi uu code lai coi A va a deu la a noi chung
    //  Ta chi can so sanh firstLetter voi A la du, neu go a thuong ta convert thanh A luon
    
    firstLetter = toupper(firstLetter);

    if (firstLetter == 'A')
    {
        printf("Dua cot khong phai la so truong cua ban!!!\n");
    }
    else if (firstLetter == 'B')
    {
        printf("Ban nang gioi tinh cua ban rat tu nhien...\n");
    }
    else if (firstLetter == 'C')
    {
        printf("Ban co tinh cam tu nhien, gan gui va rat than mat...\n");
    }

    // else la nguoc lai cua if ngay sat no
    return 0;
}