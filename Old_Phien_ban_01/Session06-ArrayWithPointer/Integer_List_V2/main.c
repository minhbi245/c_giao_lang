#include <stdio.h>
#include <stdlib.h>

// BÀ CON GIỮA MẢNG VÀ CON TRỎ
// MẢNG TĨNH, MẢNG ĐỘNG, CON TRỎ CÓ BÀ CON !!!
// TRUYỀN THAM CHIẾU, MẢNG/CON TRỎ LÀ ĐẦU VÀO CỦA HÀM

// LƯU VÀ IN RA MẢNG 10 SỐ NGUYÊN BẤT KÌ

int main()
{
    int a[] = {5, 10, 15, 20, 25}; // Mảng là khai báo nhiều biến cùng lúc, cùng kiểu, cùng tên, Ở SÁT NHAU!!!

    /*
        - TÊN MẢNG CŨNG LÀ 1 BIẾN, BIẾN MÁ MÌ ĐÓ, LƯU SỐ NHÀ CỦA MẢNG ĐÓ
        - VALUE CỦA BIẾN TÊN MẢNG LÀ SỐ NHÀ
        - HARI LƯU SỐ NHÀ, TỌA ĐỘ VÍ
        - TÊN MẢNG LƯU SỐ NHÀ THẰNG A[0] ĐẦU DÃY
        - TÊN MẢNG LÀ CON TRỎ RỒI, HỎI NÓ CÓ GÌ, GIỐNG HỎI  HARI CÓ GÌ
        -> EM CÓ ĐỊA CHỈ!!!!
        -> CÓ LIÊN QUAN ĐẾN BÀI GRADE_V3 Ở ARRAY
    */

    for (int i = 0; i < 5; i++)
    {
        printf("The address of a[%d]: %u | has value: %d\n", i, &a[i], a[i]);
    }

    printf("name a of array has value of %u\n", a); // mày là 1 biến!!!

    // Tên mảng là con trỏ int* ~~~ pointer(con trỏ)
    // a ~~~ pointer(Con trỏ) đều là int*
    
    // Hồi nãy mình đi qua mảng bằng pointer
    // Giờ này mình đi qua mảng = a kiểu con trỏ được hem?

    // In mảng
    printf("The array has values: \n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    // Biết thừa a là tên mảng, lại là biến con trỏ, nằm đầu mảng
    // &a[0] như Hari(con trỏ)

    printf("The array has values: \n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, *(a + i));    // *(a + i) ~~~ viết tắt a + i -> nhảy 4 ở mỗi vùng ram chứa biến trong mảng, xong trỏ đến (*) lấy giá trị ở từng vùng ram chứa giá trị đó 
                                                // Dùng con trỏ tên đầu biến mảng + i tăng dần để đi qua các địa chỉ tiếp theo lấy giá trị
                                                // Vẫn giữ chốt a trỏ đầu dãy, + i để dời nhà, lấy địa chỉ mới
                                                // Biến a được xem là biến con trỏ riêng (int*)
                                                // *(a + i) để lấy value vùng trỏ, mà ko mất chốt!!!
    }

    // TUY NHIÊN HÃY NHÓ:
    // int* hari là con trỏ tường minh, tức là nó thoải mái ++ -- trỏ thoải mái luôn
    // còn tên a của mảng được gọi là con trỏ ko tường minh/ngầm con trỏ hằng
    // Là con trỏ, nhưng bị bị cấm đi lung tung, việc nó là phải chốt đầu mảng, ko cho ++ hay -- như hari
    // Nhưng được dùng nó + và - để tăng tọa độ!!!!
    // ko được rời vị trí, chỉ và luôn phải trỏ thẳng a[0]
    // BIẾN CON TRỎ MÁ MÌ, QUẢN LÍ ĐÁM CHÂN DÀI NGẮN a[i]

    // => TÊN MẢNG ĐỨNG 1 MÌNH LÀ CON TRỎ ~~~ INT* HARI
    // TẠI SAO TÊN MẢNG, NGƯỜI TA KÍ HIỆU LUÔN LÀ CON TRỎ
    // int f(int a[]) ~~~ int f(int* a)
    return 0;
}