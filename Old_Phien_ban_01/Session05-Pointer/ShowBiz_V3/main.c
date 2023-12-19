#include <stdio.h>
#include <stdlib.h>

/*
    Vấn đề:
        - TT đi Mĩ mang theo 5k$
        - TT có xài mua LV hết 1000$
        - Sau đó TT đưa ví cho Hari dùng

        Sau đó về VN, Hari đi uống cafe với Tiến Đạt
        Tiến Đạt cũng mua tặng Hari một túi HM
*/

int main()
{

    int tranThanh = 5000;
    int tienDat = 4000;
    int* hari; // Chưa trỏ ai cả, tăm tia từ từ!!!

    printf("1st, TT has %d; TD has %d\n", tranThanh, tienDat);
    printf("1st, vi' TT is at %u; vi' TD is at %u\n", &tranThanh, &tienDat);
    // @ ví là sát nhau, hàng xóm, vùng RAM TD 08 09 10 11
    //                                      TT 12 13 14 15

    hari = &tienDat; // Hari trỏ ví Tiến Đạt
    // Hỏi Tiến Đạt có bao nhiêu tiền?
    printf("1st, Hari said, TD now has %d\n", tienDat);
    printf("1st, Hari said, TD now has %d\n", *hari); // 4K *hari là cú pháp đang trỏ tới tọa độ của Tiến Đạt lấy giá trị ở vùng Nhớ Tiến Đạt mà hiển thị
    printf("Before Hari didn't go to the new house\n");
    printf("The Coordinates before Hari didn't move to the new house: %u\n", hari);
    hari++; // Ở đây tui là danh bạ, ++ nghĩa là tui đi sang căn nhà kế, địa chỉ kế
    // Tui là hộp lưu số nhà, số nhà ++ nghĩa là đi sang kế 1 căn
    printf("After Hari go to the new house\n");
    printf("The coordinates after Hari moved to the new house: %u\n", hari);
    printf("2nd, Hari said, now she has %d\n", *hari);

    // ++ TĂNG TỌA ĐỘ LÊN
    // -- GIẢM TỌA ĐỘ XUỐNG
    // ++ BIẾN CON TRỎ LÀ NHẢY 1 CĂN NHÀ (NHẢY HẲN SANG 1 VÙNG TỌA ĐỘ MỚI CỦA BIẾN KHÁC)
    // CĂN NHÀ BAO NHIÊU BYTE THÌ NHẢY BẤY NHIÊU BYTE
    // ++ TĂNG 1, Ở ĐÂY LÀ 1 CĂN (4 BYTE/8 BYTE) CHỨ KO PHẢI LÀ 1 BYTE
    // ++ nhưng là + 4, vì 1 biến int chứa 4 byte
    // Tui đang trả tọa độ 84 -> 84++ ko là tăng tự thân thành 85 như bình thường, mà ở đây là nhảy cóc 1 căn nhà(nhảy sang hẳn 1 vùng RAM hàng xóm)
    
    // VÍ DỤ NGOÀI ĐỜI: Nhà tao số 2, nếu cùng 1 bên liền kề thì nhà mày là số 4, còn số 3 là bên kia đường, đối diện
    // LƯU Ý: CHƠI TRÒ NÀY CHỈ VỚI KHI BIẾT LÀ 2 VÙNG RAM LIỀN KỀ NHAU/SÁT NHAU(HÀNG XÓM VỚI NHAU), VÌ KO CHẮC HAI VÙNG RAM SÁT NHAU
    // CHƠI THẾ LÀ NHẢY SANG BIẾN HOẶC VÙNG RAM KHÁC LÀ THẤY BÀ

    (*hari)++; // *hari++ thì ko nói rõ đến vùng RAM của Trấn Thành tăng lên 1 => SAI, ĐÚNG => (*hari)++ -> 5000 + 1 => 5001;
     ++(*hari); // ++ -- của biến có giá trị bình thường thôi;
    printf("Now Tran Thanh has %d\n", tranThanh);

    printf("3rd, Hari points to %u\n", hari);
    hari--;
    printf("4th, after -- Hari points to %u\n", hari);
    return 0;
}