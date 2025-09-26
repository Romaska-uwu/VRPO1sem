#include <iostream>
//AdamovichKarianna2006
// 41 64 61 6D 6F 76 69 63 68 4B 61 72 69 61 6E 6E 61 32 30 30 36
// 41 64 61 6D 6F 76 69 63 68 4B 61 72 69 61 6E 6E 61 32 30 30 36
// 41 64 61 6D 6F 76 69 63 68 4B 61 72 69 61 6E 6E 61 32 30 30 36

//АдамовичКарианнаПавловна2006
// C0 E7 E0 EC EE E2 E8 E7 CA E0 F0 E8 E0 ED ED E0 61 CF E0 E2 EB EE E2 ED E0 32 30 30 36
// d090,d0b4,d0b0,d0bc,d0be,d0b2,d0b8,d187,d09a,d0b0,d180,d0b8,d0b0,d0bd,d0bd,d0b0, 32, 30, 30, 36
// d090,d0b4,d0b0,d0bc,d0be,d0b2,d0b8,d187,d09a,d0b0,d180,d0b8,d0b0,d0bd,d0bd,d0b0, 32, 30, 30, 36

//Адамович2006Karianna
// C0 E7 E0 EC EE E2 E8 E7 32 30 30 36 4B 61 72 69 61 6E 6E 61
// d090,d0b4,d0b0,d0bc,d0be,d0b2,d0b8,d187,32,30,30,36,4b,61,72,69,61,6e,6e,61
// d090,d0b4,d0b0,d0bc,d0be,d0b2,d0b8,d187,32,30,30,36,4b,61,72,69,61,6e,6e,61

int main()
{
    int number = 0x12345678;
    char hello[] = "Hello,";
    char lfie[] = "AdamovichKarianna2006";
    char rfie[] = "АдамовичКарианнаПавловна2006";
    char lr[] = "Адамович2006Karianna";

    wchar_t Lfie[] = L"AdamovichKarianna2006";
    wchar_t Rfie[] = L"АдамовичКарианнаПавловна2006";
    wchar_t LR[] = L"Адамович2006Karianna";

    std::cout << hello << lfie << std::endl;
    return 0;
}
