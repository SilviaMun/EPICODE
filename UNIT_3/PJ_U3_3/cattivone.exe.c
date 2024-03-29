#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <wchar.h>
#include <windows.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;
typedef int64_t int864_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;
typedef long double float80_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * e0;
    struct _LIST_ENTRY * e1;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY * e0;
    struct _LIST_ENTRY * e1;
};

struct _OVERLAPPED {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t * e3;
};

struct _RTL_CRITICAL_SECTION {
    struct _RTL_CRITICAL_SECTION_DEBUG * e0;
    int32_t e1;
    int32_t e2;
    int32_t * e3;
    int32_t * e4;
    int32_t e5;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    int16_t e0;
    int16_t e1;
    struct _RTL_CRITICAL_SECTION * e2;
    struct _LIST_ENTRY e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int16_t e7;
    int16_t e8;
};

struct _WSABUF {
    int32_t e0;
    char * e1;
};

// ------------------- Function Prototypes --------------------

int32_t entry_point(void);
int32_t function_10e1167(void);
int32_t function_1101516(void);
int32_t function_113b24f(void);
int32_t function_124077c3(void);
int32_t function_1353a16(void);
int32_t function_1405a97(void);
int32_t function_16260077(void);
int32_t function_16401374(int32_t a1, int32_t a2);
int32_t function_1724606e(void);
int32_t function_1e40cbfc(void);
int32_t function_1e40fffc(void);
int32_t function_2502fac1(void);
int32_t function_2e47448a(int32_t a1);
int32_t function_2f408fdb(void);
int32_t function_310312eb(void);
int32_t function_332afd2a(void);
int32_t function_34010a0(void);
int32_t function_3b4077df(void);
int32_t function_3c402e7b(void);
int32_t function_401000(void);
int32_t function_401032(void);
int32_t function_401067(void);
int32_t function_4010c7(void);
int32_t function_4010ce(void);
int32_t function_4010e9(void);
int32_t function_401107(void);
int32_t function_40110c(void);
int32_t function_401116(void);
int32_t function_40112a(void);
int32_t function_401162(void);
int32_t function_40116d(void);
int32_t function_401181(void);
int32_t function_40118c(int32_t a1);
int32_t function_40123d(void);
int32_t function_40125b(int32_t a1);
int32_t function_40126d(void);
int32_t function_401274(void);
int32_t function_4012ce(int32_t a1);
int32_t function_401492(void);
int32_t function_4014a8(void);
int32_t function_4014cd(void);
int32_t function_4014df(void);
int32_t function_4014ef(void);
int32_t function_4014f3(void);
int32_t function_401513(int16_t a1);
int32_t function_4015d7(void);
int32_t function_4015e6(int32_t a1);
int32_t function_401750(int32_t a1, int32_t a2);
int32_t function_4018d2(void);
int32_t function_4018df(void);
int32_t function_4018e4(void);
int32_t function_401976(void);
int32_t function_4019d0(int32_t a1);
int32_t function_4019fd(void);
int32_t function_401a24(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10);
int32_t function_401b2f(void);
int32_t function_401b98(void);
int32_t function_401b9f(void);
int32_t function_401ba8(void);
int32_t function_401c7a(void);
int32_t function_401c85(void);
int32_t function_401d18(int16_t a1);
int32_t function_401da4(void);
int32_t function_401dda(void);
int32_t function_401de0(void);
int32_t function_401e05(void);
int32_t function_401e13(int32_t a1, int32_t a2, int32_t a3);
int32_t function_401ea0(void);
float80_t function_401eb4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t function_402058(void);
int32_t function_402082(void);
int32_t function_40208d(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t result);
int32_t function_4020b7(void);
int32_t function_4020c0(void);
int32_t function_4021c1(void);
int32_t function_402233(void);
int32_t function_4022fb(void);
int32_t function_402306(void);
int32_t function_402396(void);
int32_t function_4023fc(int32_t a1);
int32_t function_402438(int32_t a1);
int32_t function_40246e(int32_t a1, int32_t a2);
int32_t function_402477(void);
int32_t function_402479(void);
int32_t function_40247c(void);
int32_t function_4024a7(void);
int32_t function_4024a9(void);
int32_t function_402502(int32_t a1, int32_t a2);
int32_t function_40251c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_40265a(void);
int32_t function_402669(void);
int32_t function_40267d(void);
int32_t function_402697(int32_t a1);
int32_t function_4026ab(void);
int32_t function_4026c5(void);
int32_t function_40272e(void);
int32_t function_402735(int32_t a1);
int32_t function_402752(int32_t a1, int32_t a2);
int32_t function_402805(void);
int32_t function_402806(void);
int32_t function_402870(void);
int32_t function_402890(int16_t a1, int32_t a2);
int32_t function_402a58(void);
int32_t function_402a66(int32_t a1);
float80_t function_402a6d(int16_t a1);
int32_t function_402ae5(void);
int32_t function_402b50(void);
int32_t function_402b54(void);
int32_t function_402b86(void);
int32_t function_402be7(void);
int32_t function_402c16(void);
int32_t function_402c84(void);
int32_t function_402c95(void);
float80_t function_402cb4(void);
int32_t function_402ce6(void);
int32_t function_402cfe(void);
int32_t function_402d62(void);
int32_t function_402d63(char * a1);
int32_t function_402e34(void);
int32_t function_402e7b(void);
int32_t function_402e8c(void);
int32_t function_402ec0(void);
int32_t function_402f90(void);
int32_t function_403094(void);
int32_t function_4030b7(int32_t a1);
int32_t function_4030dc(void);
int32_t function_403106(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40319e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_4032ed(void);
int32_t function_403390(void);
int32_t function_40342e(void);
int32_t function_40346e(void);
int32_t function_403477(int32_t a1);
int32_t function_403487(void);
int32_t function_4034aa(void);
int32_t function_4034c2(int16_t a1);
int32_t function_40355f(int16_t a1);
int32_t function_40395a(int32_t a1);
int32_t function_4039b5(char * a1, int32_t a2);
int32_t function_4039f8(void);
int32_t function_4039fd(void);
int32_t function_403a2a(int32_t a1);
int32_t function_403a5d(int32_t a1);
int32_t function_403a90(void);
int32_t function_403aad(void);
int32_t function_403ac4(void);
int32_t function_403b27(void);
int32_t function_403c33(void);
int32_t function_403ca9(int32_t a1, int32_t a2, int32_t a3);
int32_t function_403ee8(void);
int32_t function_403eec(void);
int32_t function_403ef3(void);
int32_t function_403efb(void);
int32_t function_40403d(void);
int32_t function_40403f(int32_t a1);
int32_t function_40404b(void);
int32_t function_404052(void);
int32_t function_4040bb(int32_t a1);
int32_t function_40429f(void);
int32_t function_4042b9(void);
int32_t function_4042d2(void);
int32_t function_4042d8(void);
int32_t function_4042df(void);
int32_t function_4042e9(void);
int32_t function_4042f0(void);
int32_t function_4042f7(void);
int32_t function_4042fe(void);
int32_t function_404305(void);
int32_t function_404342(void);
int32_t function_40436d(void);
int32_t function_404385(uint32_t a1, int32_t a2);
int32_t function_404504(void);
int32_t function_40450e(void);
int32_t function_404520(void);
int32_t function_404530(void);
int32_t function_404538(void);
int32_t function_404544(int32_t a1, int32_t a2);
int32_t function_404565(void);
int32_t function_404591(void);
int32_t function_4045ac(void);
int32_t function_4045e1(void);
int32_t function_4045e6(int32_t a1);
int32_t function_4045ee(void);
int32_t function_404705(int32_t a1, int32_t a2);
int32_t function_4047df(void);
int32_t function_404812(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_4048b0(void);
int32_t function_404945(void);
int32_t function_4049b1(void);
int32_t function_404a05(void);
int32_t function_404a09(void);
int32_t function_404a44(int32_t a1);
int32_t function_404a60(int32_t a1);
int32_t function_404a69(int32_t a1, int32_t a2, int32_t a3);
int32_t function_404d0d(void);
int32_t function_404d7a(void);
int32_t function_404d9b(void);
int32_t function_404da5(void);
int32_t function_404db5(void);
int32_t function_404ddf(void);
int32_t function_404de7(int32_t a1, int32_t a2, int32_t a3);
int32_t function_404e00(int32_t a1);
int32_t function_404e15(void);
int32_t function_404e19(void);
int32_t function_404ea0(void);
int32_t function_404efb(void);
int32_t function_404efd(void);
int32_t function_404f05(void);
int32_t function_404f0a(void);
int32_t function_404f0f(int16_t a1);
int32_t function_404f2e(void);
int32_t function_404f58(void);
int32_t function_404f60(int32_t a1, int32_t a2, int32_t a3);
int32_t function_404f6d(int32_t a1);
int32_t function_404ffe(void);
int32_t function_40506d(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4051f3(void);
int32_t function_4052d0(void);
int32_t function_405328(int32_t a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t function_405548(void);
int32_t function_4055c8(int32_t a1);
int32_t function_4055e3(void);
int32_t function_405600(int32_t a1);
int32_t function_405640(int32_t a1, unsigned char a2, int32_t a3, int32_t a4);
int32_t function_4057a4(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_405821(void);
int32_t function_405826(void);
int32_t function_405850(int32_t a1);
int32_t function_405890(int32_t a1, int32_t a2);
int32_t function_4058d1(void);
int32_t function_4058d3(void);
int32_t function_4058e3(void);
int32_t function_405931(int32_t a1, int32_t a2);
int32_t function_405954(int32_t a1);
int32_t function_405962(void);
int32_t function_40596d(int32_t a1, int32_t a2);
int32_t function_405ae4(int32_t a1, int32_t a2);
int32_t function_405b75(int16_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_405cbf(int32_t a1, int32_t a2);
int32_t function_405d59(void);
int32_t function_405dfc(int32_t a1);
int32_t function_405dff(void);
int32_t function_405e3e(int32_t a1);
int32_t function_405e54(int32_t a1, int32_t a2);
int32_t function_405e85(void);
int32_t function_405ea2(void);
int32_t function_405eb4(void);
int32_t function_405f18(void);
int32_t function_405f66(void);
int32_t function_40600a(int32_t a1, int32_t a2);
int32_t function_406090(void);
int32_t function_40609e(void);
int32_t function_4060c0(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_406391(int16_t a1);
int32_t function_40639d(void);
int32_t function_4063ec(void);
int32_t function_4063f7(void);
int32_t function_406407(void);
int32_t function_406426(void);
int32_t function_40644b(void);
int32_t function_40645c(void);
int32_t function_4064ce(void);
int32_t function_4064e4(void);
int32_t function_4064ec(int32_t a1);
int32_t function_4064ef(int32_t a1);
int32_t function_4065b6(void);
int32_t function_4065d9(void);
int32_t function_4065de(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4065f0(void);
int32_t function_40664e(void);
int32_t function_406669(void);
int32_t function_406674(void);
int32_t function_40667d(void);
int32_t function_406681(void);
int32_t function_40668c(void);
int32_t function_406692(int32_t a1);
int32_t function_40669a(int32_t a1, int32_t a2);
int32_t function_40669f(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t function_4066ab(void);
int32_t function_4066b5(void);
int32_t function_4066be(int32_t a1);
int32_t function_4066bf(void);
int32_t function_4066cc(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_406915(void);
int32_t function_406921(int32_t a1);
int32_t function_406927(void);
int32_t function_406933(int32_t a1);
int32_t function_406941(void);
int32_t function_40694a(void);
int32_t function_40694f(int32_t a1);
int32_t function_406958(int32_t a1);
int32_t function_406961(void);
int32_t function_40696e(void);
int32_t function_40697c(int32_t a1);
int32_t function_40698f(int32_t a1);
int32_t function_406999(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_4069a1(int16_t a1);
int32_t function_4069ab(void);
int32_t function_4069b6(void);
int32_t function_4069bb(void);
int32_t function_4069c5(void);
int32_t function_4069d2(void);
int32_t function_4069dc(int32_t a1);
int32_t function_4069e6(int32_t a1);
int32_t function_4069ed(void);
int32_t function_4069fa(void);
int32_t function_406a02(void);
int32_t function_406a0e(void);
int32_t function_406a1a(void);
int32_t function_406a28(void);
int32_t function_406a4b(int32_t a1);
int32_t function_406a51(void);
int32_t function_406a52(void);
int32_t function_406a95(int32_t Offset);
int32_t function_406aa0(int16_t a1, int32_t a2);
void function_406aab(int32_t Offset, int32_t Data);
int32_t function_406ab7(void);
int32_t function_406abc(void);
int32_t function_406ac5(void);
int32_t function_406acd(void);
int32_t function_406ad2(int32_t a1);
int32_t function_406b5f(int32_t a1);
int32_t function_406bf1(int16_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_406c64(int32_t a1);
int32_t function_406c6f(int32_t a1, int32_t a2);
int32_t function_406d82(void);
int32_t function_406d8e(void);
int32_t function_406dc0(void);
int32_t function_406e16(int32_t a1, int32_t a2);
int32_t function_406e39(void);
int32_t function_406e6e(int32_t a1, int32_t a2);
int32_t function_406f6c(int32_t a1, int32_t a2);
int32_t function_406f73(void);
int32_t function_406f9a(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_407150(void);
int32_t function_407156(void);
int32_t function_4071aa(void);
int32_t function_4071b6(void);
int32_t function_4071c0(uint32_t a1);
int32_t function_4072b6(void);
int32_t function_4072bf(void);
int32_t function_4072c9(void);
int32_t function_4072db(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t function_407d58(void);
int32_t function_407d80(int32_t a1);
int32_t function_407db3(int32_t a1);
int32_t function_407dbd(void);
int32_t function_407df2(int32_t a1);
int32_t function_407dfa(void);
int32_t function_407e0c(int16_t a1);
int32_t function_407e22(void);
int32_t function_407e30(int32_t a1);
int32_t function_407e44(void);
int32_t function_407e63(void);
int32_t function_407e84(int32_t a1);
int32_t function_407eb3(void);
int32_t function_407eb7(void);
int32_t function_407ec0(int32_t a1);
int32_t function_407efd(void);
int32_t function_407f26(void);
int32_t function_407f48(void);
int32_t function_407f68(void);
int32_t function_407f77(void);
int32_t function_407f9e(void);
int32_t function_407fc1(void);
int32_t function_407fc4(int16_t a1);
int32_t function_407fcd(int32_t a1);
float80_t function_407fda(void);
int32_t function_407ff0(void);
int32_t function_407fff(void);
int32_t function_408009(void);
int32_t function_408015(void);
float80_t function_40801b(void);
float80_t function_40801d(int32_t a1);
int32_t function_408047(int32_t a1, int32_t a2);
int32_t function_4080f2(void);
int32_t function_408100(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4081a0(int32_t a1);
int32_t function_4081ab(void);
int32_t function_4081db(void);
int32_t function_4081de(void);
int32_t function_4081ef(void);
int32_t function_4081fa(int32_t a1, int32_t a2);
int32_t function_408216(void);
int32_t function_408238(int32_t a1);
int32_t function_40827c(void);
int32_t function_408294(void);
int32_t function_4082a6(int32_t a1);
int32_t function_4082c8(int32_t a1);
int32_t function_4082cd(void);
int32_t function_4082fe(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4082ff(int32_t a1, int32_t a2);
int32_t function_408316(int32_t a1);
int32_t function_40835d(void);
int32_t function_40841e(int32_t a1);
int32_t function_408421(int32_t a1, int32_t a2);
int32_t function_4084c1(void);
int32_t function_4084c3(void);
int32_t function_408549(void);
int32_t function_408559(int32_t a1);
int32_t function_408560(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int16_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_40858c(int32_t a1);
int32_t function_4085a8(void);
int32_t function_4085b8(int32_t a1);
int32_t function_4085d2(void);
int32_t function_4085ee(void);
int32_t function_4085ff(int32_t a1);
int32_t function_408618(void);
int32_t function_408625(void);
int32_t function_408638(int32_t a1);
int32_t function_408741(void);
int32_t function_408744(int32_t a1);
int32_t function_408780(void);
int32_t function_408793(int32_t a1, int32_t a2);
int32_t function_4087a3(void);
int32_t function_4087b3(int32_t a1);
int32_t function_4087d3(int32_t a1);
int32_t function_4087da(int32_t a1);
int32_t function_4087e1(void);
int32_t function_4087eb(int32_t a1, int32_t a2);
int32_t function_4087fd(int32_t a1);
int32_t function_408804(int32_t a1);
int32_t function_40880e(int32_t a1);
int32_t function_408819(int32_t a1, int32_t a2, int32_t a3);
int32_t function_408827(void);
int32_t function_408835(int32_t a1);
int32_t function_408843(void);
int32_t function_40884a(int32_t a1);
int32_t function_408851(int32_t a1);
int32_t function_408858(int32_t a1);
int32_t function_408866(int32_t a1);
int32_t function_408872(int32_t a1);
int32_t function_408878(int32_t a1);
int32_t function_408893(int32_t a1);
int32_t function_4088a8(int32_t a1);
int32_t function_4088b6(void);
int32_t function_4088be(int32_t a1);
int32_t function_4088f5(int32_t a1);
int32_t function_4088fc(int32_t a1);
int32_t function_408903(void);
int32_t function_4089a0(int32_t a1);
int32_t function_4089fd(void);
int32_t function_408a04(void);
int32_t function_408a06(void);
int32_t function_408a0b(int32_t a1, int32_t a2);
int32_t function_408a5c(void);
int32_t function_408a5f(int32_t a1);
int32_t function_408abe(int32_t a1);
int32_t function_408b1871(int32_t a1, int32_t a2, int32_t a3);
int32_t function_408b9a(int32_t a1);
int32_t function_408bc4(void);
int32_t function_408bce(void);
int32_t function_408bf9(void);
int32_t function_408c08(int32_t a1);
int32_t function_408c2b(void);
int32_t function_408c70(int32_t a1, int32_t a2, uint32_t a3);
int32_t function_408db0(int32_t a1, int32_t a2);
int32_t function_409024(int32_t a1);
int32_t function_409065(void);
int32_t function_409086(int32_t result);
int32_t function_4090ce(void);
int32_t function_4090d6(int32_t a1);
int32_t function_409140(int32_t a1);
int32_t function_409188(void);
int32_t function_409193(void);
int32_t function_4091fc(int16_t a1);
int32_t function_409216(void);
int32_t function_409223(int16_t a1);
int32_t function_40922c(void);
int32_t function_40924d(void);
int32_t function_409422(void);
int32_t function_40942b(int16_t a1, int32_t a2);
int32_t function_409463(void);
int32_t function_4094fc(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t * a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13);
int32_t function_40953e(void);
int32_t function_4095b0(void);
int32_t function_409638(void);
int32_t function_40965e(void);
int32_t function_4096b8(int32_t a1, int16_t a2);
int32_t function_4096be(void);
int32_t function_4096c0(int32_t a1);
int32_t function_409748(int32_t a1);
int32_t function_409749(void);
int32_t function_409780(void);
int32_t function_40978d(void);
int32_t function_40979d(void);
int32_t function_4097b2(int32_t a1);
int32_t function_4097bc(void);
int32_t function_4097c9(void);
int32_t function_409802(void);
int32_t function_409805(void);
int32_t function_4098a0(void);
int32_t function_4098d2(void);
int32_t function_4098e2(int32_t a1);
int32_t function_40990c(int32_t a1);
int32_t function_40991d(void);
int32_t function_4099a3(int32_t a1);
int32_t function_4099ac(void);
int32_t function_4099b2(void);
int32_t function_409a63(void);
int32_t function_409a6d(void);
int32_t function_409a7d(void);
int32_t function_409a87(void);
int32_t function_409a96(void);
int32_t function_409a9c(void);
int32_t function_409aa1(int32_t a1, int32_t a2, int32_t a3);
int32_t function_409c45(int32_t a1, int32_t a2, int32_t a3);
int32_t function_409c61(int32_t a1);
int32_t function_409cb6(void);
int32_t function_409d82(int32_t a1);
int32_t function_409d97(void);
int32_t function_409d9b(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_409e72(void);
int32_t function_409e80(void);
int32_t function_409e9b(int32_t a1, int32_t a2, int32_t a3);
int32_t function_409f8e(void);
int32_t function_409fa8(void);
int32_t function_40a03b(void);
int32_t function_40a0e0(int32_t a1);
int32_t function_40a239(void);
int32_t function_40a241(void);
int32_t function_40a257(int32_t a1, int32_t a2);
int32_t function_40a2a8(void);
int32_t function_40a2c0(void);
int32_t function_40a2ce(int32_t a1, int32_t a2);
int32_t function_40a340(int32_t a1);
int32_t function_40a358(void);
int32_t function_40a370(void);
int32_t function_40a384(int32_t a1, int32_t a2);
int32_t function_40a39c(void);
int32_t function_40a3ba(void);
int32_t function_40a416(void);
int32_t function_40a420(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_40a424(int32_t a1);
int32_t function_40a427(int16_t a1);
int32_t function_40a480(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40a49c(void);
int32_t function_40a4c3(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_40a540(int32_t a1, int32_t a2);
int32_t function_40a550(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40a671(void);
int32_t function_40a6b3(int32_t a1);
int32_t function_40a6ce(int32_t a1, int32_t a2);
int32_t function_40a715(int32_t a1, int32_t a2);
int32_t function_40a71b(char a1);
int32_t function_40a878(void);
int32_t function_40a89e(void);
int32_t function_40a8ba(void);
int32_t function_40a8cc(int32_t a1, char * a2, int32_t a3);
int32_t function_40a8f5(void);
int32_t function_40a916(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t result);
int32_t function_40a940(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_40a9bb(void);
int32_t function_40a9c0(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40ab09(void);
int32_t function_40ab0d(int32_t a1);
int32_t function_40abca(void);
int32_t function_40abcd(int32_t a1);
int32_t function_40abd4(void);
int32_t function_40ac02(int32_t a1, int32_t a2);
int32_t function_40acaf(void);
int32_t function_40ad32(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40adab(void);
int32_t function_40adec(int32_t a1);
int32_t function_40adf9(void);
int32_t function_40ae14(void);
int32_t function_40ae1d(void);
int32_t function_40ae21(void);
int32_t function_40ae3e(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40aee7(void);
int32_t function_40aee8(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40af17(int32_t a1, int32_t a2);
int32_t function_40b080(void);
int32_t function_40b08d(int32_t a1);
int32_t function_40b161(void);
int32_t function_40b246(void);
int32_t function_40b248(int32_t a1, int32_t a2);
int32_t function_40b259(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_40b268(int32_t a1, int32_t a2);
int32_t function_40b284(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40b2d0(void);
int32_t function_40b313(void);
int32_t function_40b321(void);
int32_t function_40b347(int32_t a1);
int32_t function_40b392(int32_t a1);
int32_t function_40b3a1(int32_t a1);
int32_t function_40b3ad(void);
int32_t function_40b3ed(void);
int32_t function_40b419(void);
int32_t function_40b43c(void);
int32_t function_40b440(void);
int32_t function_40b443(int32_t a1);
int32_t function_40b4c7(void);
int32_t function_40b4f0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10);
int32_t function_40b540(int32_t a1, int32_t a2, int32_t a3);
int32_t function_40b590(int32_t a1);
int32_t function_40b683(void);
int32_t function_40b715(void);
int32_t function_40b73f(void);
float80_t function_40b750(int32_t a1, int32_t a2);
int32_t function_40b765(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t function_40b804(void);
int32_t function_40b810(void);
int32_t function_40b83b(int32_t a1);
int32_t function_40b870(void);
int32_t function_40b890(void);
int32_t function_40b8b2(int32_t a1);
int32_t function_40b8ec(void);
int32_t function_40b8f3(int32_t a1, int32_t a2);
int32_t function_40b8f8(void);
int32_t function_40b92c(char * a1, char * a2);
int32_t function_40b932(int32_t a1, int32_t a2);
int32_t function_40b946(void);
int32_t function_40b947(int32_t a1);
int32_t function_40b948(void);
int32_t function_40b94e(void);
int32_t function_40b960(void);
int32_t function_40c2ea(void);
int32_t function_40d413(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14);
int32_t function_410ab8(void);
int32_t function_411306(void);
int32_t function_411615(void);
int32_t function_41805c89(void);
int32_t function_4289008(void);
int32_t function_431513(int32_t a1);
int32_t function_4365d3(void);
int32_t function_44e431(void);
int32_t function_463654(void);
int32_t function_464099(void);
int32_t function_4c07be9(char a1);
int32_t function_4f5a95(void);
int32_t function_51020dad(void);
int32_t function_521723e8(void);
int32_t function_566800f0(int32_t a1);
int32_t function_5bc1f55e(void);
int32_t function_5c404702(void);
int32_t function_6951c2(void);
int32_t function_6b4297(void);
int32_t function_6ba108c4(int32_t a1, char * a2, int32_t a3);
int32_t function_74865650(void);
int32_t function_7587ffff(void);
int32_t function_7e11baa4(void);
int32_t function_8032292a(void);
int32_t function_805e7805(void);
int32_t function_8342339f(void);
int32_t function_8440b83b(void);
int32_t function_8451b14(void);
int32_t function_87408d9d(void);
int32_t function_8a4090ef(void);
int32_t function_8bbb77b7(void);
int32_t function_8be56683(void);
int32_t function_8be63ae8(void);
int32_t function_8be650fe(void);
int32_t function_8be6778c(void);
int32_t function_8bec73b1(void);
int32_t function_8c141095(void);
int32_t function_90000cc2(int32_t a1);
int32_t function_902e905d(void);
int32_t function_90909090(void);
int32_t function_928a2502(void);
int32_t function_97707d(void);
int32_t function_9a4077df(void);
int32_t function_a06c1b31(int32_t a1, int32_t a2);
int32_t function_a10040c1(void);
int32_t function_a9401513(int32_t a1);
int32_t function_aaa59f(void);
int32_t function_ab42ba2d(void);
int32_t function_aecd3a8b(int32_t a1, int32_t a2);
int32_t function_aee24374(void);
int32_t function_b4030c5(void);
int32_t function_b5f5a5(void);
int32_t function_b63eea1(void);
int32_t function_b815ff7d(void);
int32_t function_baf31e19(void);
int32_t function_c0c65f3e(void);
int32_t function_c2704218(void);
int32_t function_c270421f(void);
int32_t function_c270e8b8(void);
int32_t function_c386b2ad(void);
int32_t function_c6fc452c(int32_t a1);
int32_t function_c7410bdf(void);
int32_t function_c7ea758d(void);
int32_t function_cb49d1f7(void);
int32_t function_cc26ac(int32_t a1, int32_t a2);
int32_t function_d31fcc79(int32_t a1);
int32_t function_d6580034(void);
int32_t function_d6ff0040(void);
int32_t function_d73f432e(void);
int32_t function_d73f4335(void);
int32_t function_d73f4343(void);
int32_t function_d73f50fd(void);
int32_t function_d8b0041(void);
int32_t function_dc4b94a7(void);
int32_t function_e740a916(void);
int32_t function_ebac8268(void);
int32_t function_ec940505(void);
int32_t function_ecc6d278(void);
int32_t function_f4335f7d(void);
int32_t function_f8403c25(void);
int32_t function_f868ef72(void);
int32_t function_fb408e31(void);
int32_t function_ff46f9df(void);
int32_t function_ff92506d(void);
int32_t function_ffff84a8(void);
int32_t function_ffffe812(void);
int32_t function_ffffe827(void);
int32_t function_ffffe83b(void);
int32_t function_ffffe9bc(void);
int32_t function_ffffeab3(void);
int32_t function_ffffee76(void);
int32_t function_fffff673(void);
int32_t function_fffff690(void);
int32_t function_fffff6c2(void);
int32_t function_fffff74c(void);
int32_t function_fffffa2a(void);
int32_t unknown_12f45d0(int32_t a1, int16_t a2);
int32_t unknown_130a2d0(int32_t a1, int16_t a2);
int32_t unknown_13cb400(int32_t a1, int32_t a2);
int32_t unknown_154123f0(char * a1);
int32_t unknown_158b0846(int16_t a1);
int32_t unknown_15af163a(void);
int32_t unknown_162933a6(void);
int32_t unknown_1e757cf8(int32_t a1);
int32_t unknown_1fa290d(int32_t a1, int32_t a2);
int32_t unknown_2240b590(void);
int32_t unknown_2540ae(void);
int32_t unknown_2b1cb590(void);
int32_t unknown_2ee09400(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t unknown_30ec69ee(void);
int32_t unknown_317d15e2(int32_t a1);
int32_t unknown_3340add0(void);
int32_t unknown_3840e000(void);
int32_t unknown_3bc98d47(int32_t a1, int32_t a2, char * a3);
int32_t unknown_3f4e90(void);
int32_t unknown_3f5d00c0(int16_t a1);
int32_t unknown_3fbc10(int32_t a1, int32_t a2, int32_t * a3, int32_t a4, int32_t a5, int32_t * a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13);
int32_t unknown_3fd950(void);
int32_t unknown_3fef80(int32_t a1, int32_t a2, int32_t a3);
int32_t unknown_41a510(void);
int32_t unknown_42a1593b(void);
int32_t unknown_43207475(int32_t a1);
int32_t unknown_4568b00(int16_t a1);
int32_t unknown_481d3780(int32_t a1, int32_t a2, int32_t a3);
int32_t unknown_4ac180(void);
int32_t unknown_4f40a4b0(int32_t a1, int32_t a2);
int32_t unknown_5140977b(void);
int32_t unknown_52126674(void);
int32_t unknown_52352b68(int32_t a1);
int32_t unknown_577521cf(int32_t a1, int32_t a2, int32_t a3);
int32_t unknown_5a1750(int32_t a1);
int32_t unknown_5b401ea0(void);
int32_t unknown_5b407119(int32_t a1, int16_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t * a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11);
int32_t unknown_5c341750(int32_t a1);
int32_t unknown_5ec599d9(void);
int32_t unknown_644061d3(int32_t a1, int32_t a2);
int32_t unknown_690b8680(void);
int32_t unknown_69ff5850(int32_t a1, int32_t a2);
int32_t unknown_6d65(void);
int32_t unknown_6d6a00(void);
int32_t unknown_6da4b0(void);
int32_t unknown_72818406(void);
int32_t unknown_73411480(int32_t a1);
int32_t unknown_7403860(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t unknown_7caa8780(int32_t a1, int32_t a2);
int32_t unknown_7d40b032(int32_t a1, int32_t a2);
int32_t unknown_80391070(int32_t a1, int32_t a2);
int32_t unknown_83403684(void);
int32_t unknown_840137a6(void);
int32_t unknown_8440393d(void);
int32_t unknown_84e25640(void);
int32_t unknown_864086b4(int32_t a1);
int32_t unknown_8a40a340(int32_t a1);
int32_t unknown_8b00000b(void);
int32_t unknown_8b0040c0(int16_t a1);
int32_t unknown_8b58cbd8(int32_t a1);
int32_t unknown_8d819301(void);
int32_t unknown_8fa9b0(void);
int32_t unknown_9040a2d0(void);
int32_t unknown_91401750(char * a1);
int32_t unknown_92ae6d60(void);
int32_t unknown_9cf8a2d0(int32_t a1);
int32_t unknown_a0408b50(int32_t a1, int32_t a2, int32_t a3);
int32_t unknown_a040b870(void);
int32_t unknown_a4056f0(int32_t a1);
int32_t unknown_a4b810(void);
int32_t unknown_aa618db0(void);
int32_t unknown_abc3c(void);
int32_t unknown_b450b590(void);
int32_t unknown_b45eaee3(void);
int32_t unknown_be9955d0(int32_t a1, char * a2, int32_t a3);
int32_t unknown_c1803600(int32_t a1);
int32_t unknown_c2a6d1(void);
int32_t unknown_c540e040(int32_t a1);
int32_t unknown_c889d0(int32_t a1, int32_t a2, int32_t a3);
int32_t unknown_cace00(int32_t a1);
int32_t unknown_cb000000(char * a1, int32_t a2);
int32_t unknown_cc40a340(void);
int32_t unknown_cc8600(void);
int32_t unknown_d3abf0(void);
int32_t unknown_d8b80(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t unknown_da5d23(int16_t a1);
int32_t unknown_dd5850(int32_t a1, int32_t a2, int32_t a3);
int32_t unknown_e00000c9(int32_t a1, int16_t * a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t * a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12);
int32_t unknown_e0b92c(int32_t * a1, int32_t * a2);
int32_t unknown_e83ffa60(void);
int32_t unknown_ef40c9a4(void);
int32_t unknown_f740acc3(int32_t a1, int32_t a2, int32_t a3);
int32_t unknown_fcbfbdb(void);
int32_t unknown_ff65da00(int16_t a1);
int32_t unknown_ff98faf0(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t unknown_ffa117eb(int32_t a1, int32_t a2);
int32_t unknown_ffae400e(void);
int32_t unknown_ffb04900(int32_t a1, int32_t a2);
int32_t unknown_fffb8cf0(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g1 = 0x340000ce; // 0x40c0bd
int32_t g2 = -0x34c80000; // 0x40c0f6
int32_t g3 = 0x70000; // 0x40c19e
int32_t g4 = -0x7ffffff4; // 0x40c1b4
int32_t g5 = -0x7fffff91; // 0x40c1d8
int32_t g6 = 0; // 0x40d00c
char * g7 = "\x01"; // 0x40d010
char * g8 = "\x01"; // 0x40d018
int32_t g9 = 0; // 0x40d023
int32_t g10 = 50; // 0x40d034
char g11[15] = " of arguments\n"; // 0x40d0ec
int32_t g12 = 10; // 0x40d480
char g13 = 0; // 0x40f3c0
char g14[24] = "et is already connected"; // 0x40f680
int32_t g15 = 0; // 0x410255
int32_t g16 = 0; // 0x41025c
int32_t g17 = 0; // 0x410260
int32_t g18 = 0; // 0x41026c
int32_t g19 = 0; // 0x410270
int32_t g20 = 0; // 0x410278
char * g21; // 0x410288
int32_t g22 = 0; // 0x41028c
int32_t g23 = 0; // 0x410290
int32_t g24 = 0; // 0x410294
int32_t g25 = 0; // 0x4102a0
int32_t g26 = 0; // 0x4102a8
char * g27; // 0x4102ac
int32_t g28 = 0; // 0x4102b4
char g29 = 0; // 0x4102b8
int32_t g30 = 0; // 0x4102c0
int32_t g31 = 0; // 0x4102d4
int32_t g32 = 0; // 0x4102d8
int32_t g33 = 0; // 0x4102e0
int32_t g34 = 0; // 0x4102ea
char g35 = 0; // 0x4102fe
int32_t g36 = 0; // 0x410301
int32_t g37 = 0; // 0x410358
int32_t g38 = 0; // 0x4104ec
int32_t g39 = 0; // 0x410684
int32_t g40 = 0; // 0x410753
int32_t g41 = 0; // 0x41075b
char g42 = 0; // 0x41080c
char * g43; // 0x4108dc
int32_t g44 = 0; // 0x410960
int32_t g45 = 0; // 0x410b0d
int32_t g46 = 0; // 0x410b1c
int32_t g47 = 0; // 0x410b6e
int32_t g48 = 0; // 0x410b99
int32_t g49 = 0; // 0x410ba0
char * g50; // 0x410ba4
int32_t g51 = 0; // 0x410bb4
int32_t g52 = 0; // 0x410bb8
int32_t g53 = 0; // 0x410bc8
int16_t g54 = 0; // 0x410bdb
int32_t g55 = 0; // 0x411017
int32_t g56 = 0; // 0x411260
int32_t g57 = 0; // 0x411727
char * g58; // 0x4117f0
int16_t g59 = 0; // 0x4117f4
int32_t g60 = 0; // 0x411800
int32_t g61 = 0; // 0x411804
char * g62; // 0x411a50
int32_t g63 = 0; // 0x413874
int16_t g64 = 0; // 0x41402d
char g65 = 0; // 0x414048
int32_t g66 = 0; // 0x414049
char g67 = 0; // 0x41404c
int32_t g68 = 0; // 0x414054
int32_t g69 = 0; // 0x414058
int32_t g70;

// ------------------------ Functions -------------------------

// Address range: 0x401000 - 0x401032
int32_t function_401000(void) {
    // 0x401000
    *(int32_t *)0x5d0b17e3 = (int32_t)&g31;
    *(int32_t *)0x4183bc = (int32_t)&g31;
    g66 = &g31;
    g61 = &g31;
    *(int32_t *)0x41f848 = (int32_t)&g31;
    int32_t v1; // 0x401000
    return &v1;
}

// Address range: 0x401032 - 0x401055
int32_t function_401032(void) {
    // 0x401032
    int32_t v1; // 0x401032
    char * v2 = (char *)(v1 + 81); // 0x401032
    int32_t v3; // 0x401032
    *v2 = *v2 | (char)v3;
    int32_t v4 = __asm_wait(); // 0x401035
    int32_t v5; // 0x401032
    unsigned char v6 = (char)v5 & 31; // 0x40103c
    if (v6 != 0) {
        char * v7 = (char *)(v4 + (int32_t)&g58); // 0x40103c
        unsigned char v8 = *v7; // 0x40103c
        *v7 = v8 >> 8 - v6 | v8 << v6;
    }
    int16_t v9; // 0x401032
    return unknown_da5d23(v9);
}

// Address range: 0x401067 - 0x40106f
int32_t function_401067(void) {
    // 0x401067
    return function_41805c89();
}

// Address range: 0x4010c7 - 0x4010ce
int32_t function_4010c7(void) {
    // 0x4010c7
    int32_t v1; // 0x4010c7
    char * v2 = (char *)(v1 - 125); // 0x4010c7
    bool v3; // 0x4010c7
    *v2 = 128 * (char)v3 | *v2 / 2;
    int32_t v4; // 0x4010c7
    int32_t v5; // 0x4010c7
    return *(int32_t *)(8 * v5 + v4);
}

// Address range: 0x4010ce - 0x4010e8
int32_t function_4010ce(void) {
    // 0x4010ce
    int32_t v1; // 0x4010ce
    bool v2; // 0x4010ce
    bool v3; // 0x4010ce
    bool v4; // 0x4010ce
    if (v3 == v2 == !v4) {
        v1 = function_409216();
    }
    // 0x4010d9
    uint32_t v5; // 0x4010ce
    *(int32_t *)v5 = v5 / 0x80000000 | 2 * v5;
    uint32_t v6; // 0x4010ce
    int32_t v7 = v1 + v6 / 256; // 0x4010dd
    int32_t v8; // 0x4010ce
    *(int32_t *)(v1 ^ v8) = __asm_insd((int16_t)v5);
    char * v9 = (char *)(v7 & 255 | v1 & -256); // 0x4010e1
    *v9 = *v9 + (char)v7;
    int16_t v10; // 0x4010ce
    return function_401513(v10);
}

// Address range: 0x4010e9 - 0x401102
int32_t function_4010e9(void) {
    // 0x4010e9
    int32_t v1; // 0x4010e9
    char * v2 = (char *)(v1 + 0x41fe900); // 0x4010ef
    int32_t v3; // 0x4010e9
    *v2 = *v2 + (char)v3;
    int32_t v4; // 0x4010e9
    int32_t v5; // 0x4010e9
    *(char *)v5 = *(char *)&v4 + (char)v5;
    return function_4015e6(0x15ee502);
}

// Address range: 0x401107 - 0x40110c
int32_t function_401107(void) {
    // 0x401107
    return function_ecc6d278();
}

// Address range: 0x40110c - 0x401116
int32_t function_40110c(void) {
    int32_t result = function_40d413((int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70); // 0x401111
    return result;
}

// Address range: 0x401116 - 0x40112a
int32_t function_401116(void) {
    // 0x401116
    int32_t v1; // 0x401116
    __asm_out_1(255, v1);
    bool v2; // 0x401116
    g18 = v1 + 0xc7c16c + (int32_t)v2;
    return function_401513((int16_t)&g70);
}

// Address range: 0x40112a - 0x401162
int32_t function_40112a(void) {
    // 0x40112a
    int32_t v1; // 0x40112a
    uint32_t v2; // 0x40112a
    if (v2 <= 0x70617663) {
        // 0x401132
        v1 = unknown_5a1750(0xf1d1d8);
    }
    // 0x40113f
    *(int32_t *)-0xcbefda0 = -0x1f0001;
    __asm_int(200);
    g52 = v1;
    int32_t v3; // 0x40112a
    return function_431513(v3);
}

// Address range: 0x401162 - 0x40116d
int32_t function_401162(void) {
    // 0x401162
    return function_1101516();
}

// Address range: 0x40116d - 0x401181
int32_t function_40116d(void) {
    // 0x40116d
    int32_t v1; // 0x40116d
    *(int32_t *)-0x75bee820 = unknown_43207475(*(int32_t *)(v1 - 118));
    return function_401513((int16_t)&g70);
}

// Address range: 0x401181 - 0x40118c
int32_t function_401181(void) {
    // 0x401181
    int32_t result; // 0x401181
    return result;
}

// Address range: 0x40118c - 0x40123d
int32_t function_40118c(int32_t a1) {
    int32_t result = unknown_5c341750(0x6ad1bc); // 0x401199
    int32_t v1; // 0x40118c
    char * v2 = (char *)(v1 - 0x3cc4fb3c); // 0x4011a9
    char v3 = *v2 + (char)result; // 0x4011a9
    *v2 = v3;
    if (v3 == 0) {
        // 0x4011b1
        g56 = -0x5bffffff;
        return result;
    }
    // 0x4011c0
    __asm_wait();
    int32_t v4 = 4 * *(int32_t *)-0x3beeaa8a; // 0x4011e1
    int32_t v5; // 0x40118c
    int32_t v6 = *(int32_t *)(v5 - 117); // 0x4011e8
    char * v7 = (char *)v4; // 0x4011ef
    char v8 = *v7 + (char)v4; // 0x4011ef
    *v7 = v8;
    if (v4 == v1) {
        // 0x4011f8
        g17 = 0xad0002;
        return function_408316((int32_t)&g70);
    }
    // 0x401217
    *v7 = v8 & 41;
    int32_t v9 = v1 & -256 | (int32_t)*(char *)(v6 + 65 + v4); // 0x40121b
    uint32_t v10 = __asm_in((int16_t)v6); // 0x401225
    char * v11 = (char *)(v9 + 0x2d50fc45); // 0x401228
    *v11 = *v11 + 53;
    char * v12 = (char *)(v9 + 0x416358); // 0x401232
    *v12 = *v12 + (char)(v10 / 256);
    return function_401513((int16_t)&g70);
}

// Address range: 0x40123d - 0x40125b
int32_t function_40123d(void) {
    // 0x40123d
    g7 = (char *)0xf050;
    int32_t v1; // 0x40123d
    return function_a9401513(*(int32_t *)(v1 - 4));
}

// Address range: 0x40125b - 0x40126d
int32_t function_40125b(int32_t a1) {
    // 0x40125b
    int32_t v1; // 0x40125b
    return (*(int32_t *)(v1 - 4) | 2) + 1;
}

// Address range: 0x40126d - 0x401274
int32_t function_40126d(void) {
    // 0x40126d
    return function_406e16((int32_t)&g70, (int32_t)&g70);
}

// Address range: 0x401274 - 0x4012ce
int32_t function_401274(void) {
    // 0x401274
    int32_t v1; // 0x401274
    int32_t v2 = v1 - 1; // 0x401277
    int32_t v3; // 0x401274
    if (v2 != 0) {
        int32_t * v4 = (int32_t *)(*(int32_t *)(v3 + 6) - 0x1fb4bdfc); // 0x4012c5
        bool v5; // 0x401274
        *v4 = v2 + (int32_t)v5 + *v4;
        int32_t result; // 0x401274
        __asm_out_1(59, result);
        return result;
    }
    char * v6 = "Cookie: "; // bp-12, 0x401283
    int32_t v7; // 0x401274
    char * v8 = (char *)(v7 + 0x117e6139); // 0x4012a3
    int32_t v9 = (int32_t)&v6; // 0x401283
    int32_t v10 = 0; // 0x401283
    while (true) {
        int32_t v11 = v9 - 4; // 0x401288
        *(int32_t *)v11 = v10;
        char * v12 = (char *)v10; // 0x40128c
        *v12 = *v12 + (char)v10;
        int32_t v13 = v10 | v11; // 0x40128e
        int32_t v14 = v13 + 163 & 255 | v13 & -256; // 0x401290
        int32_t v15 = *(int32_t *)(v3 - 4); // 0x40129b
        int32_t v16 = *(int32_t *)v15; // 0x40129e
        int32_t v17 = v14 + 193; // 0x4012a1
        *v8 = *v8 + (char)v17;
        *(int32_t *)(v16 - 4) = 8;
        v9 = v16 - 8;
        *(int32_t *)v9 = (int32_t)*(char *)v15;
        v10 = v14 + 1 & -256 | v17 & 255;
    }
}

// Address range: 0x4012ce - 0x401485
int32_t function_4012ce(int32_t a1) {
    // 0x4012ce
    int32_t v1; // 0x4012ce
    int32_t result; // 0x4012ce
    bool v2; // 0x4012ce
    if (!v2) {
        // 0x4012d0
        int32_t v3; // 0x4012ce
        *(int32_t *)(v3 - 4) = v1 + 1;
        return result;
    }
    // 0x4012d6
    int32_t v4; // 0x4012ce
    int32_t v5 = v4 | 123; // 0x4012d6
    int32_t v6; // 0x4012ce
    __asm_out_3((int16_t)v6, result);
    uint32_t v7 = function_40b392(v5); // 0x4012e1
    if (v7 >= 0xef0451) {
        // 0x4012ed
        return unknown_91401750("not mix PUT and HEAD\n");
    }
    int32_t v8 = -2 - v5; // bp-12, 0x401373
    int32_t v9 = *(int32_t *)(v7 & -256 | (int32_t)*(char *)0x3d0000); // 0x40137c
    int32_t * v10 = (int32_t *)(0x34fb0d76 * v9); // 0x401382
    uint32_t v11 = *v10; // 0x401382
    *v10 = v11 / 0x80000000 | 2 * v11;
    int32_t v12; // 0x4012ce
    int32_t * v13 = (int32_t *)(function_401750(v8, v12) + (int32_t)&v8); // 0x40138a
    *v13 = *v13 - v1;
    __asm_int(247);
    uint32_t v14 = *(int32_t *)-116; // 0x40139a
    *(int32_t *)-116 = v14 / 2 | 0x80000000 * v14;
    __asm_sti();
    return __asm_iretd();
}

// Address range: 0x401492 - 0x40149a
int32_t function_401492(void) {
    // 0x401492
    int32_t result; // 0x401492
    return result;
}

// Address range: 0x4014a8 - 0x4014ab
int32_t function_4014a8(void) {
    // 0x4014a8
    uint32_t v1; // 0x4014a8
    *(char *)v1 = (char)(v1 / 256 | v1);
    int32_t result; // 0x4014a8
    return result;
}

// Address range: 0x4014cd - 0x4014df
int32_t function_4014cd(void) {
    // 0x4014cd
    int32_t v1; // 0x4014cd
    int32_t v2; // 0x4014cd
    *(int32_t *)v2 = v2 + v1;
    int32_t v3; // 0x4014cd
    return v3 & -256 | (int32_t)(*(char *)0x75d53a42 + (char)v3);
}

// Address range: 0x4014df - 0x4014ee
int32_t function_4014df(void) {
    // 0x4014df
    int32_t v1; // 0x4014df
    char * v2 = (char *)(v1 + 1); // 0x4014e7
    int32_t v3; // 0x4014df
    int32_t result; // 0x4014df
    *v2 = (char)result + (char)v3 + *v2;
    return result;
}

// Address range: 0x4014ef - 0x4014f3
int32_t function_4014ef(void) {
    // 0x4014ef
    int32_t result; // 0x4014ef
    *(char *)result = (char)result;
    return result;
}

// Address range: 0x4014f3 - 0x401508
int32_t function_4014f3(void) {
    // 0x4014f3
    g21 = (char *)0x810001;
    int32_t v1; // 0x4014f3
    *(int32_t *)0xf717f0 = *(int32_t *)(v1 - 35);
    int32_t result; // 0x4014f3
    return result;
}

// Address range: 0x401513 - 0x4015bf
int32_t function_401513(int16_t a1) {
    // 0x401513
    int32_t v1; // 0x401513
    int32_t v2 = *(int32_t *)(v1 - 12); // 0x401516
    char * v3 = (char *)((__asm_sti() & 0x382b684f) - 23); // 0x401525
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(v1 - 123); // 0x40152a
    *v4 = -*v4;
    int32_t v5; // 0x401513
    if (v5 == 1) {
        function_34010a0();
    }
    // 0x401534
    int32_t v6; // 0x401513
    int32_t v7 = *(int32_t *)(v6 + 8); // 0x401537
    uint32_t v8 = v2 + 1; // 0x401544
    char * v9 = (char *)(v5 + 0xd8b0c9c); // 0x401545
    *v9 = 1 - (char)v7 + *v9;
    int32_t result = *(int32_t *)v8; // 0x401552
    if (v7 != 21) {
        // 0x4015be
        return result;
    }
    int32_t v10 = result + 1; // 0x401558
    char * v11 = (char *)(*(int32_t *)0x64401780 + 0x558bd6ff); // 0x401559
    *v11 = *v11 + (char)(v8 / 256);
    int32_t v12 = v10 & 116 | 139; // 0x40155f
    char * v13 = (char *)(v12 | v10 & -256); // 0x401566
    *v13 = *v13 + (char)v12;
    int32_t v14 = function_405850(v6); // 0x401582
    char v15; // 0x401513
    unsigned char v16 = (char)((*(int32_t *)((int32_t)v15 + 12) + 1) / 256); // 0x401587
    unsigned char v17 = (char)v14; // 0x40158a
    bool v18 = v17 > 153 | v16 < 211;
    int32_t v19; // 0x401513
    if ((v17 & 14) > 9 || (v16 & 15) > 18) {
        v19 = (v18 ? 154 : 250) + v14 & 255 | v14 & -256;
    } else {
        v19 = (v18 ? v14 + 160 : v14) & 255 | v14 & -256;
    }
    char * v20 = (char *)v19; // 0x40158b
    *v20 = *v20 + (char)v19;
    int32_t v21 = v19 & -120 | 99; // 0x401596
    uint32_t v22 = v21 + 1; // 0x40159a
    int32_t * v23 = (int32_t *)v22; // 0x40159b
    int32_t v24; // 0x401513
    *v23 = *v23 - (int32_t)&v24;
    uint32_t result2 = v21 - 0x2d5a; // 0x4015b0
    char * v25 = (char *)((int32_t)a1 + (int32_t)&g8); // 0x4015b7
    *v25 = *v25 + (char)(result2 / 256) + (char)(v22 < 0x2d5b);
    return result2;
}

// Address range: 0x4015d7 - 0x4015da
int32_t function_4015d7(void) {
    // 0x4015d7
    int32_t result; // 0x4015d7
    return result;
}

// Address range: 0x4015e6 - 0x401726
int32_t function_4015e6(int32_t a1) {
    // 0x4015e6
    int32_t v1; // 0x4015e6
    char * v2 = (char *)(v1 - 24); // 0x4015e8
    int32_t v3; // 0x4015e6
    *v2 = *v2 | (char)v3;
    int32_t v4; // 0x4015e6
    *(int32_t *)-0x13aa0000 = *(int32_t *)-0x13aa0000 & v4;
    int32_t v5; // 0x4015e6
    char * v6 = (char *)(v5 + 0x14c48300); // 0x4015f1
    unsigned char v7 = *v6; // 0x4015f1
    *v6 = v7 / 2 | 128 * v7;
    int32_t v8 = __asm_int1() | 0x40c0c8; // 0x401605
    int32_t * v9 = (int32_t *)((int32_t)g7 + 64); // 0x40160a
    *v9 = *v9 | -117;
    int32_t v10 = *(int32_t *)v8; // 0x401611
    int32_t result = v8 + 4; // 0x401611
    int32_t v11; // 0x4015e6
    char * v12 = (char *)(v11 + 0x1d3910c4); // 0x401628
    char v13 = *v12 + (char)result; // 0x401628
    *v12 = v13;
    int32_t v14 = v10 - 7; // 0x40162e
    int32_t v15; // 0x4015e6
    *(int32_t *)v14 = *(int32_t *)(v15 + 16);
    if (v13 != 0) {
        // 0x401634
        return result;
    }
    // 0x4016b0
    *(int32_t *)(v10 - 0x40dd) = v14;
    return result;
}

// Address range: 0x401750 - 0x40186e
int32_t function_401750(int32_t a1, int32_t a2) {
    // 0x401750
    uint32_t v1; // 0x401750
    __asm_in_4((int16_t)v1);
    __asm_wait();
    float80_t v2; // 0x401750
    *(float64_t *)&g14 = (float64_t)v2;
    int32_t v3; // 0x401750
    *(int32_t *)v3 = v3 | -47;
    int32_t v4; // 0x401750
    int32_t v5 = v4;
    *(int32_t *)v5 = v5 | 0x5924;
    int32_t v6 = *(int32_t *)0x6e2c404c; // 0x4017a0
    int32_t v7; // 0x401750
    int32_t v8; // 0x401750
    if (g20 != 0) {
        int32_t v9 = unknown_a0408b50(v6, 0x153c40, v8); // 0x4017ad
        int32_t * v10 = (int32_t *)(v1 + 0x7e4740d); // 0x4017b2
        *v10 = *v10 - v1;
        unsigned char v11 = *(char *)&v7; // 0x4017b8
        unsigned char v12 = v11 + (char)(v1 / 256); // 0x4017b8
        *(char *)v7 = v12;
        return v9 + 139 + (int32_t)(v12 < v11) & 255 | v9 & -256;
    }
    // 0x4017bf
    int32_t v13; // 0x401750
    int32_t v14 = v13 + 65; // 0x4017bf
    if (v14 >= 0) {
        // 0x401814
        *(char *)-0x14e84210 = *(char *)-0x14e84210 - 125;
        *(char *)-0x14e8fdf8 = *(char *)-0x14e8fdf8 - 125;
        char * v15 = (char *)(v13 + 63); // 0x40183e
        *v15 = *v15 & -125;
        int32_t * v16 = (int32_t *)(8 * v13 - 0x5e63393d); // 0x401842
        *v16 = *v16 | -0x5e633b7d;
        return -0x14e8fdf8;
    }
    // 0x4017c2
    *(int32_t *)0x561808 = unknown_dd5850(v13 + 64, v6, v8);
    int32_t v17 = *(int32_t *)0x40c164; // 0x4017db
    v7 = v17;
    *(int16_t *)&g51 = g59;
    if (g21 != NULL) {
        // 0x40184a
        __asm_arpl(*(int16_t *)0x35c158, (int16_t)v17);
        g45 = printf((char *)*(int32_t *)0x4098de);
        return printf((char *)*(int32_t *)&g11);
    }
    int32_t v18 = v14 & -0x10000 | (int32_t)g59; // 0x4017c8
    uint32_t v19 = (int32_t)g21; // 0x4017d4
    unsigned char v20 = *(char *)v17; // 0x4017ed
    unsigned char v21 = *(char *)&v4; // 0x4017ed
    bool v22 = v20 < v21 ? v19 + 0x31411800 + (int32_t)(v20 < v21) <= v19 : g21 > (char *)-0x31411801; // 0x4017ee
    int32_t v23 = *(int32_t *)0xb0278; // 0x4017fb
    int32_t * v24 = (int32_t *)(v18 - 123 + v23); // 0x401800
    *v24 = *v24 - 64 + (int32_t)v22;
    return v23 & -256 | (int32_t)(*(char *)(v18 - 4) + (char)v23);
}

// Address range: 0x4018d2 - 0x4018df
int32_t function_4018d2(void) {
    // 0x4018d2
    int32_t v1; // 0x4018d2
    bool v2; // 0x4018d2
    bool v3 = v2 | (uint32_t)(v1 & 14) > 9; // 0x4018d2
    int32_t v4 = (v3 ? v1 + 10 : v1) & 15; // 0x4018d2
    char * v5 = (char *)(v4 | v1 & -0x10000 | 256 * (int32_t)v3 + v1 & 0xff00); // 0x4018d3
    char v6 = v4; // 0x4018d3
    *v5 = *v5 + v6;
    g65 = v6;
    return function_4018e4();
}

// Address range: 0x4018df - 0x4018e4
int32_t function_4018df(void) {
    // 0x4018df
    return g63;
}

// Address range: 0x4018e4 - 0x40190f
int32_t function_4018e4(void) {
    // 0x4018e4
    int32_t v1; // 0x4018e4
    *(int32_t *)0xbdd4d0 = v1 & -0x7455cb00 | 0x414073;
    return function_405890((int32_t)"\r\n", 0);
}

// Address range: 0x401976 - 0x4019a7
int32_t function_401976(void) {
    // 0x401976
    int32_t v1; // 0x401976
    char * v2 = (char *)(v1 + 0x40d3efe1); // 0x40197b
    int32_t v3; // 0x401976
    char v4 = v3; // 0x40197b
    *v2 = *v2 + v4;
    int32_t v5 = v1 + 0x40d3f040 & -256 | v1 + 88 & 255; // 0x40197e
    char * v6 = (char *)(v5 - 95); // 0x401981
    *v6 = *v6 + v4;
    int32_t v7; // 0x401976
    uint32_t v8 = v7 + 2; // 0x401986
    char * v9 = (char *)(v5 + 86); // 0x401987
    *v9 = *v9 + 64;
    char * v10 = (char *)(v5 - 44); // 0x401991
    unsigned char v11 = *v10; // 0x401991
    unsigned char v12 = v11 + (char)(v8 / 256); // 0x401991
    *v10 = v12;
    uint32_t v13 = v8 & 31; // 0x401994
    bool v14 = v12 < v11; // 0x401994
    if (v13 != 0) {
        int32_t * v15 = (int32_t *)(v5 - 99); // 0x401994
        uint32_t v16 = *v15; // 0x401994
        int32_t v17 = v16 >> 32 - v13 | v16 << v13; // 0x401994
        *v15 = v17;
        v14 = (v17 & 1) != 0;
    }
    int32_t v18 = v3 & -256 | 64; // 0x401984
    int32_t v19 = 2048; // bp-8, 0x401997
    int32_t v20; // 0x401976
    int32_t v21; // 0x401976
    int32_t v22; // 0x401976
    int32_t v23; // 0x401976
    int32_t result = function_401a24(v20, v21, v22, &v19, v23, v18, v8, v5 + 0x6c69e8 + (int32_t)v14, 2048, v18); // 0x4019a5
    return result;
}

// Address range: 0x4019d0 - 0x4019d1
int32_t function_4019d0(int32_t a1) {
    // 0x4019d0
    int32_t result; // 0x4019d0
    return result;
}

// Address range: 0x4019fd - 0x401a02
int32_t function_4019fd(void) {
    // 0x4019fd
    int32_t v1; // 0x4019fd
    return v1 + 24 & 255 | v1 & -256;
}

// Address range: 0x401a24 - 0x401af7
int32_t function_401a24(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    // 0x401a24
    uint32_t v1; // 0x401a24
    if (v1 >= 2048) {
        // 0x401a2b
        int32_t v2; // 0x401a24
        float80_t v3; // 0x401a24
        *(int16_t *)v2 = (int16_t)v3;
        return v1 ^ (int32_t)"Request too long\n";
    }
    // 0x401a38
    uint32_t v4; // 0x401a24
    unsigned char v5 = (char)v4 + (char)a1; // 0x401a3a
    int32_t v6 = a1 & -256; // 0x401a3a
    int32_t v7; // 0x401a24
    if ((v6 || (int32_t)v5) >= v7) {
        // 0x401a46
        return __asm_sti();
    }
    // 0x401a6f
    int32_t v8; // 0x401a24
    char * v9 = (char *)(v8 - 0x367cffbc); // 0x401a71
    *v9 = *v9 ^ (char)(v4 / 256);
    int32_t * v10 = (int32_t *)(v4 - 125); // 0x401a82
    uint32_t v11 = *v10; // 0x401a82
    *v10 = v11 / 2 | 0x80000000 * v11;
    int32_t * v12 = (int32_t *)(v4 + 0x4117ec0d); // 0x401a86
    *v12 = *v12 + v4;
    return v6 | (int32_t)(*(char *)(v4 + 37) + v5);
}

// Address range: 0x401b2f - 0x401b38
int32_t function_401b2f(void) {
    // 0x401b2f
    int32_t result; // 0x401b2f
    return result;
}

// Address range: 0x401b98 - 0x401b9a
int32_t function_401b98(void) {
    // 0x401b98
    return function_401ba8();
}

// Address range: 0x401b9f - 0x401ba8
int32_t function_401b9f(void) {
    // 0x401b9f
    int32_t v1; // 0x401b9f
    *(int32_t *)(v1 - 16) = 0x38ffffff;
    int32_t result; // 0x401b9f
    return result;
}

// Address range: 0x401ba8 - 0x401bf0
int32_t function_401ba8(void) {
    int32_t v1 = 0x402060; // bp-4, 0x401ba8
    int32_t v2 = (int32_t)g8; // 0x401bb4
    int32_t v3; // 0x401ba8
    char * v4 = (char *)(v3 + 0x33317ef7); // 0x401bbd
    char v5 = *v4; // 0x401bbd
    int32_t v6; // bp-12, 0x401ba8
    *v4 = (char)v2 + (char)(((int32_t)&v6 ^ -8) < 8) + v5;
    int32_t v7; // 0x401ba8
    int32_t * v8 = (int32_t *)(v7 + 0x410b170d); // 0x401bc3
    *v8 = *v8 - 1;
    int32_t v9; // 0x401ba8
    char * v10 = (char *)(v9 + 0x858bdf4); // 0x401bc9
    *v10 = *v10 + (char)v9;
    int32_t v11; // 0x401ba8
    char * v12 = (char *)(v11 + (int32_t)g54); // 0x401bd7
    unsigned char v13 = *v12; // 0x401bd7
    *v12 = v13 + 80;
    int32_t v14; // 0x401ba8
    int32_t v15; // 0x401ba8
    unknown_7403860(v11, v14, v3, &v1, v7, v15, v6, v2, v1);
    int32_t result = *(int32_t *)(2 * __asm_in(g54) + v14); // 0x401be6
    int32_t * v16 = (int32_t *)(v14 + 96); // 0x401be9
    *v16 = *v16 - (v13 > 175 ? -0x67fffff7 : -0x67fffff8);
    return result;
}

// Address range: 0x401c7a - 0x401c7b
int32_t function_401c7a(void) {
    // 0x401c7a
    int32_t result; // 0x401c7a
    return result;
}

// Address range: 0x401c85 - 0x401c89
int32_t function_401c85(void) {
    // 0x401c85
    int32_t v1; // 0x401c85
    return *(int32_t *)(9 * v1);
}

// Address range: 0x401d18 - 0x401d95
int32_t function_401d18(int16_t a1) {
    // 0x401d18
    uint32_t v1; // 0x401d18
    uint32_t v2 = v1 & 31; // 0x401d18
    bool v3; // 0x401d18
    int32_t v4; // 0x401d18
    if (v2 != 0) {
        uint32_t v5 = v2 - 1; // 0x401d18
        uint32_t v6; // 0x401d18
        bool v7; // 0x401d18
        v4 = (int32_t)v7 << v5 | v6 << v2 | (int32_t)((int64_t)v6 >> (int64_t)(33 - v2));
        v3 = (0x80000000 >> v5 & v6) != 0;
    }
    // 0x401d73
    int32_t v8; // 0x401d18
    int32_t v9 = v8 + 1; // 0x401d1a
    uint32_t v10 = v1 / 256; // 0x401d1b
    int32_t v11 = v9 - v10 + (int32_t)v3; // 0x401d1b
    int32_t v12 = v11 & 255 | v9 & -256; // 0x401d1b
    int32_t * v13 = (int32_t *)v12; // 0x401d1e
    *v13 = v12 + *v13;
    int32_t v14; // 0x401d18
    char * v15 = (char *)(v14 - 0xd38ef3c); // 0x401d20
    char v16 = v11; // 0x401d20
    *v15 = *v15 + v16;
    char * v17 = (char *)v12; // 0x401d26
    *v17 = (*v17 | v16) + v16;
    int16_t v18 = __asm_arpl_5((int16_t)v1); // 0x401d2c
    int32_t v19; // 0x401d18
    int32_t v20 = (int32_t)&v19 & -0x10000 | (int32_t)v18; // 0x401d2c
    *(int16_t *)(v20 - 2) = a1;
    char * v21 = (char *)v4; // 0x401d2f
    *v21 = *v21 | v16;
    *v17 = *v17 + v16;
    __asm_out_6((int16_t)g26 + 1, v16);
    int32_t v22 = function_401ea0(); // 0x401d42
    char * v23 = (char *)v22; // 0x401d56
    *v23 = *v23 + (char)v22;
    int32_t v24; // 0x401d18
    *(int32_t *)(v24 - 40) = v22;
    int16_t v25 = v22; // 0x401d5b
    *(int16_t *)(v24 - 36) = v25;
    int16_t v26 = v25 & 255; // 0x401d5f
    int32_t v27 = v22 & -0x10000 | (int32_t)(v25 / v26 & 255) | (int32_t)(256 * (v25 % v26)); // 0x401d5f
    int32_t * v28 = (int32_t *)v27; // 0x401d62
    *v28 = v27;
    *(int32_t *)v20 = v24 - 44;
    int32_t v29; // 0x401d18
    int32_t * v30 = (int32_t *)(v29 + 0x7589e04d); // 0x401d68
    *v30 = 2 * *v30;
    char v31 = __asm_in_7(-20); // 0x401d6e
    uint32_t v32 = *v28 & -256 | (int32_t)v31; // 0x401d6e
    int32_t v33 = v10 + 96 & 255 | v14 & -256; // 0x401d73
    char * v34 = (char *)(v33 + 0x35fdcc + v32); // 0x401d7b
    *v34 = *v34 + (char)(v32 / 256);
    *(int32_t *)0x3441bbb8 = v29 + 1;
    *(int32_t *)(v24 - 75) = *(int32_t *)(v29 + 0x1b87b);
    char v35 = *(char *)((*(int32_t *)(v33 - 0x32fd4704) & v1) + 68); // 0x401d8d
    __asm_int(232);
    return v32 & -256 | (int32_t)(v35 + v31);
}

// Address range: 0x401da4 - 0x401da7
int32_t function_401da4(void) {
    // 0x401da4
    int32_t result; // 0x401da4
    return result;
}

// Address range: 0x401dda - 0x401ddb
int32_t function_401dda(void) {
    // 0x401dda
    int32_t result; // 0x401dda
    return result;
}

// Address range: 0x401de0 - 0x401e05
int32_t function_401de0(void) {
    // 0x401de0
    int32_t v1; // 0x401de0
    int32_t * v2 = (int32_t *)(v1 + 0x40d0140d); // 0x401de0
    *v2 = *v2 - 1;
    uint32_t v3; // 0x401de0
    int32_t v4; // 0x401de0
    if ((char)(v3 / 256) == -(char)v4) {
        int32_t result = function_401e13((int32_t)&g70, (int32_t)&g70, (int32_t)&g70); // 0x401e03
        return result;
    }
    // 0x401deb
    int32_t v5; // 0x401de0
    int32_t * v6 = (int32_t *)(v5 + 0x40c0c8); // 0x401deb
    int32_t v7; // 0x401de0
    *v6 = *v6 & v7 + 4;
    uint16_t v8; // 0x401de0
    int32_t result2 = (int32_t)v8 + 1; // 0x401df3
    *(int32_t *)v7 = (int32_t)"Finished %d requests\n";
    *(int32_t *)(v7 - 4) = result2;
    return result2;
}

// Address range: 0x401e05 - 0x401e13
int32_t function_401e05(void) {
    // 0x401e05
    int32_t v1; // 0x401e05
    bool v2; // 0x401e05
    if (v2) {
        v1 = function_401dda();
    }
    unsigned char v3 = *(char *)0x6415caa7; // 0x401e08
    int32_t v4 = v1 & -256; // 0x401e08
    char * v5 = (char *)(v4 | (int32_t)v3); // 0x401e0d
    *v5 = v3;
    return v4 | (int32_t)*v5;
}

// Address range: 0x401e13 - 0x401ea0
int32_t function_401e13(int32_t a1, int32_t a2, int32_t a3) {
    int32_t result = *(int32_t *)0x54410288 & -256; // 0x401e18
    *(int32_t *)result = 0x231e8;
    int32_t v1; // 0x401e13
    int32_t * v2 = (int32_t *)(2 * *(int32_t *)(v1 - 0x6f6f87a3) + (result | 86)); // 0x401e43
    *v2 = *v2 | -117;
    return result;
}

// Address range: 0x401ea0 - 0x401eb4
int32_t function_401ea0(void) {
    // 0x401ea0
    int32_t v1; // 0x401ea0
    int32_t v2; // 0x401ea0
    char * v3 = (char *)(v2 + 71 + 8 * v1); // 0x401ea0
    uint32_t v4; // 0x401ea0
    *v3 = *v3 | (char)(v4 / 256);
    int32_t v5; // 0x401ea0
    int16_t v6 = v5; // 0x401ea4
    char v7 = __asm_in_4(v6); // 0x401ea4
    unsigned char v8 = v7 - 3; // 0x401ea5
    int32_t v9 = *(int32_t *)(((v4 | (int32_t)v7) & -256 | (int32_t)v8) + 8); // 0x401ea8
    __asm_outsb(v6, *(char *)v9);
    int32_t v10; // 0x401ea0
    *(char *)v10 = v8;
    return function_8451b14();
}

// Address range: 0x401eb4 - 0x402058
float80_t function_401eb4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    // 0x401eb4
    int32_t v1; // 0x401eb4
    unsigned char v2 = (char)v1;
    unsigned char v3 = 2 * v2; // 0x401eb5
    *(char *)v1 = v3;
    int32_t v4 = (v3 < v2 ? -116 : -117) + (int32_t)g50; // 0x401ebc
    g50 = (char *)v4;
    int32_t v5; // 0x401eb4
    float80_t v6; // 0x401eb4
    float80_t result = v6 * (float80_t)*(float32_t *)(v5 - 0x3f7a27bb); // 0x401ec3
    if (v4 != 0) {
        // 0x401f0d
        return result;
    }
    // 0x401ecd
    int32_t v7; // 0x401eb4
    function_408c70(v7, (int32_t)&g70, (int32_t)&g70);
    char * v8 = (char *)(a1 + 2104); // 0x401eda
    int32_t v9; // 0x401eb4
    *v8 = (char)(((char)v9 ^ -2) < 106) + (char)a3 + *v8;
    *(int32_t *)(a1 + 24) = 0x6700;
    int32_t * v10 = (int32_t *)(a1 + 20); // 0x401ef3
    *v10 = a4;
    int32_t v11 = a5; // 0x401efd
    if (*(int32_t *)0x41a260 != 0) {
        // 0x401eff
        v11 = g19 + a4;
        *v10 = v11;
    }
    int64_t v12 = (int64_t)*(int32_t *)(a1 + 4); // 0x401f43
    int64_t v13 = -0x5708b2e5 * v12; // 0x401f43
    uint32_t v14 = v11 & 31; // 0x401f4a
    if (v14 != 0) {
        int32_t * v15 = (int32_t *)(v11 + 82); // 0x401f4a
        uint32_t v16 = *v15; // 0x401f4a
        *v15 = v16 << v14 | (int32_t)((int64_t)v16 >> (int64_t)(33 - v14)) | (int32_t)(v13 != -0x5708b2e500000000 * v12 / 0x100000000) << v14 - 1;
    }
    int32_t v17 = v13; // 0x401f43
    char * v18 = (char *)v17; // 0x401f51
    *v18 = *v18 + (char)v13;
    __asm_out_1(50, v17);
    return result;
}

// Address range: 0x402058 - 0x402082
int32_t function_402058(void) {
    // 0x402058
    int32_t v1; // 0x402058
    int32_t * v2 = (int32_t *)(v1 - 68); // 0x402063
    *v2 = *v2 + 0x75000000;
    char * v3 = (char *)(v1 - 0x17edbe3f); // 0x40206b
    int32_t v4; // 0x402058
    *v3 = *v3 | (char)v4;
    int32_t v5; // 0x402058
    char * v6 = (char *)(v5 + 0x1a0ba0); // 0x402074
    int32_t v7; // 0x402058
    uint32_t v8; // 0x402058
    *v6 = *v6 + (*(char *)(v5 - 20 + 4 * v7) | (char)(v8 / 256));
    g50 = (char *)v4;
    int32_t result = function_40208d((int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70); // 0x402080
    return result;
}

// Address range: 0x402082 - 0x40208d
int32_t function_402082(void) {
    // 0x402082
    return g49;
}

// Address range: 0x40208d - 0x40209e
int32_t function_40208d(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t result) {
    char * v1 = (char *)a3; // 0x40209b
    *v1 = *v1 + (char)((*(int32_t *)(a3 + 0x410b453d) ^ a5) / 256);
    return result;
}

// Address range: 0x4020b7 - 0x4020ba
int32_t function_4020b7(void) {
    // 0x4020b7
    int32_t result; // 0x4020b7
    return result;
}

// Address range: 0x4020c0 - 0x4021c1
int32_t function_4020c0(void) {
    // 0x4020c0
    int32_t v1; // 0x4020c0
    uint32_t v2 = v1 - 1; // 0x4020c0
    int32_t v3; // 0x4020c0
    uint32_t v4; // 0x4020c0
    int32_t v5; // 0x4020c0
    bool v6; // 0x4020c0
    if (v2 == 0 || v6) {
        char * v7 = (char *)(v5 - 104); // 0x4020c3
        *v7 = *v7 + (char)(v2 / 256);
        *(int32_t *)v3 = v2 & -0x10000 | (int32_t)g59;
        *(int32_t *)(v3 - 4) = -0xdbf20a4;
        *(int32_t *)(v3 - 8) = (v4 & 0xff00) + v4 & 0xff00 | v4 & -0xff01;
        *(int32_t *)(v3 - 12) = (int32_t)&g12;
        *(int32_t *)(v3 - 20) = (int32_t)"Document Path:          %s\n";
        return g60;
    }
    uint32_t v8 = v1 - 2; // 0x402101
    uint32_t v9 = v4 / 256; // 0x40210f
    int32_t v10 = 2 * (char)v9 < (char)v9 ? 255 : 0; // 0x402111
    int32_t v11; // 0x4020c0
    int32_t v12 = *(int32_t *)(v11 + 24); // 0x402112
    char * v13 = (char *)(v10 | v5 & -0x10000 | 256 * (int32_t)((char)v5 / 64)); // 0x402115
    unsigned char v14 = *v13; // 0x402115
    *v13 = (v14 / 128 | 2 * v14) >> ((char)v8 & 31);
    uint32_t v15 = *(int32_t *)(v3 - 44); // 0x402120
    int32_t v16 = *(int32_t *)(v12 + 20); // 0x402123
    char * v17 = (char *)(v15 - 0x53f274f2); // 0x40212c
    char v18 = *v17 + (char)(v8 / 256); // 0x40212c
    char v19 = llvm_ctpop_i8(v18); // 0x40212c
    *v17 = v18;
    if ((v19 & 1) != 0) {
        // 0x402175
        __readfsword(v16);
        bool v20; // 0x4020c0
        int32_t v21 = v20 ? -1 : 1; // 0x4021a3
        char * v22 = (char *)(v15 + 104); // 0x4021b1
        *v22 = *v22 + (char)v15;
        *(int32_t *)(v12 + v21) = *(int32_t *)0x5702d0 & 0x3f57f700 | -0x3f57f7fe;
        return function_6ba108c4(-0x7affbefe, "Write errors:           %d\n", *(int32_t *)-0x56befdf8);
    }
    int32_t v23 = 512 * v9 & 0xfe00 | v4 & -0xff01; // 0x40210f
    char * v24 = (char *)(v23 + 0x685148c4); // 0x402134
    *v24 = *v24 + (char)v16;
    *(int32_t *)-0xffbf26 = v15;
    *(int32_t *)-0xffbf2a = (int32_t)"not supported";
    char * v25 = (char *)(v1 - 0x5edb8b42); // 0x402155
    *v25 = g29 + (char)(*(int32_t *)0x2202b8 < v15) + *v25;
    int32_t result = __asm_int3(); // 0x40215b
    char * v26 = (char *)(v23 + 0x41025122); // 0x40215e
    char v27 = v2; // 0x40215e
    *v26 = *v26 + v27;
    char * v28 = (char *)(v23 + 0x4702c815); // 0x402164
    *v28 = *v28 + v27;
    int32_t * v29 = (int32_t *)v2; // 0x40216e
    *v29 = *v29 - result;
    *(int32_t *)-0xffbf2c = v2;
    *(int32_t *)-0xffbf30 = v15;
    *(int32_t *)-0xffbf34 = result;
    return result;
}

// Address range: 0x4021c1 - 0x402233
int32_t function_4021c1(void) {
    // 0x4021c1
    int32_t v1; // 0x4021c1
    int32_t * v2 = (int32_t *)(v1 | 12); // 0x4021dc
    int32_t v3; // 0x4021c1
    *v2 = v3 + 1 + *v2;
    uint32_t v4 = *(int32_t *)0x41d3b1 | 0x6b02a4; // 0x4021fe
    *(int32_t *)0x40dd7868 = v4 & -256 | (int32_t)*(char *)0x51004110;
    int32_t v5; // 0x4021c1
    if ((llvm_ctpop_i8((char)v5) & 1) != 0) {
        function_ab42ba2d();
    }
    // 0x402220
    __asm_out_1(128, v5);
    unsigned char v6 = (char)(v4 / 256); // 0x402227
    return (-1 - v6 < v6 ? 255 : 0) | v5 & -256;
}

// Address range: 0x402233 - 0x4022fb
int32_t function_402233(void) {
    int32_t v1 = *(int32_t *)0x2841ceac; // 0x402241
    int32_t v2 = v1; // 0x402248
    if (v1 == 0) {
        v2 = function_b4030c5();
    }
    // 0x40224e
    int32_t v3; // 0x402233
    int32_t v4 = v3 & 0xff00 & 256 * v2 | v3 & -0x10000; // 0x40224e
    int32_t v5 = v4 | v3 - v2 & 255; // 0x402250
    int32_t v6 = v2 + 1; // 0x402252
    uint32_t v7; // 0x402233
    float80_t v8; // 0x402233
    *(int64_t *)(v7 - 3) = (int64_t)v8;
    unsigned char v9 = *(char *)v5 + (char)((v6 + 256 * v7) / 256); // 0x402260
    unsigned char v10 = v9 + (char)v7; // 0x402262
    uint32_t v11; // 0x402233
    int32_t v12 = v10 < v9 | (v10 < v9 ? 29 : 28) > (char)(v11 / 256) ? 81 : 80; // 0x402269
    uint32_t v13 = v7 / 256; // 0x40226d
    int32_t v14 = 512 * v13; // 0x40226d
    int32_t v15 = v7 & -0xff01; // 0x40226d
    int32_t v16 = 2 * (char)v13 < (char)v13 ? 255 : 0; // 0x40226f
    int32_t v17; // 0x402233
    int32_t v18 = (256 * (int32_t)v10 | v6 & -0x10000 | v17 - v12 & 255) + 1 & -256 | v16; // 0x40226f
    int32_t v19 = *(int32_t *)0xc9d018; // 0x402270
    char * v20 = (char *)(v5 - 49); // 0x40227b
    *v20 = 2 * *v20;
    uint32_t v21 = v18 - 4; // 0x402288
    int32_t * v22 = (int32_t *)v21; // 0x402288
    *v22 = 54;
    *(float64_t *)v21 = (float64_t)((float80_t)v19 / (float80_t)(int32_t)g27);
    int32_t v23 = (v14 | v15) + v14 & 0xfe00 | v15; // 0x4022ab
    int32_t v24; // 0x402233
    float64_t v25 = *(float64_t *)(v24 - 130); // 0x4022b7
    float64_t v26 = *(float64_t *)-0x37bf3de8; // 0x4022ba
    *(float64_t *)v18 = (float64_t)(v8 * (float80_t)v25 * (float80_t)v26);
    *v22 = 0x3c40dca4;
    int32_t v27 = v4 | 96; // 0x4022ca
    int32_t v28 = *(int32_t *)-0x3b7cffbf; // 0x4022cc
    int32_t * v29 = (int32_t *)v27; // 0x4022e3
    uint32_t v30 = *v29; // 0x4022e3
    uint32_t v31 = v30 + v23; // 0x4022e3
    uint32_t v32 = v31 + (int32_t)(v21 < 8); // 0x4022e3
    bool v33 = v21 < 8 ? v32 <= v30 : v31 < v30; // 0x4022e3
    *v29 = v32;
    *(float64_t *)(v23 - 0x44102a0 + (v28 | 207)) = (float64_t)*(float32_t *)v27;
    *(int32_t *)(v18 - 16) = (int32_t)"                        %.2f kb/s sent\n";
    return v27 + (int32_t)&g25 | (int32_t)v33;
}

// Address range: 0x4022fb - 0x402306
int32_t function_4022fb(void) {
    // 0x4022fb
    return *(int32_t *)0x584102a4;
}

// Address range: 0x402306 - 0x402322
int32_t function_402306(void) {
    // 0x402306
    int32_t v1; // 0x402306
    int32_t v2; // 0x402306
    int32_t v3 = 256 * v1 + v2 & 0xff00 | v2 & -0xff01; // 0x402306
    char * v4 = (char *)v3; // 0x402308
    int32_t v5; // 0x402306
    *v4 = *v4 + (char)v5;
    int32_t v6; // 0x402306
    bool v7; // 0x402306
    *(int32_t *)((v7 ? -1 : 1) + v1) = __asm_insd((int16_t)v6);
    char * v8 = (char *)(v3 + 13); // 0x40231b
    *v8 = *v8 & 24;
    return v5 | 0x5589c713;
}

// Address range: 0x402396 - 0x402397
int32_t function_402396(void) {
    // 0x402396
    int32_t result; // 0x402396
    return result;
}

// Address range: 0x4023fc - 0x40240e
int32_t function_4023fc(int32_t a1) {
    // 0x4023fc
    int32_t v1; // 0x4023fc
    uint32_t v2 = v1 & 31; // 0x402407
    bool v3; // 0x4023fc
    if (v2 != 0) {
        bool v4; // 0x4023fc
        int32_t v5 = v4; // 0x402407
        uint32_t v6; // 0x4023fc
        *(int32_t *)v6 = v6 >> v2 | (int32_t)((int64_t)v6 << (int64_t)(33 - v2)) | v5 << 32 - v2;
        bool v7; // 0x4023fc
        v3 = v2 == 1 ? v6 / 0x80000000 != v5 : v7;
    }
    int32_t v8; // 0x4023fc
    int32_t result = v8 & -256 | (int32_t)*(char *)0x2ba44589; // 0x402409
    bool v9; // 0x4023fc
    if (v9 != v3) {
        result = function_402396();
    }
    // 0x40240b
    return result;
}

// Address range: 0x402438 - 0x40243c
int32_t function_402438(int32_t a1) {
    // 0x402438
    int32_t v1; // 0x402438
    *(char *)v1 = (char)v1 / 2;
    int32_t result; // 0x402438
    return result;
}

// Address range: 0x40246e - 0x402477
int32_t function_40246e(int32_t a1, int32_t a2) {
    // 0x40246e
    int32_t v1; // 0x40246e
    char v2 = __asm_in_4((int16_t)v1); // 0x40246e
    int32_t v3; // 0x40246e
    return (v3 | (int32_t)v2) & -256 | (int32_t)(v2 - 119);
}

// Address range: 0x402477 - 0x402479
int32_t function_402477(void) {
    // 0x402477
    return function_40247c();
}

// Address range: 0x402479 - 0x40247c
int32_t function_402479(void) {
    // 0x402479
    int32_t result; // 0x402479
    return result;
}

// Address range: 0x40247c - 0x4024a6
int32_t function_40247c(void) {
    // 0x40247c
    int32_t v1; // 0x40247c
    int32_t v2 = *(int32_t *)(v1 + 12); // 0x40247c
    int32_t v3; // 0x40247c
    int32_t * v4 = (int32_t *)(v3 - 68); // 0x40247f
    int32_t result; // 0x40247c
    if (*v4 > v2) {
        // 0x4024a6
        return result;
    }
    // 0x402486
    *(int32_t *)-0x7403e475 = *(int32_t *)-0x7403e475 | 0x178bb85d;
    int32_t v5; // 0x40247c
    char * v6 = (char *)(v5 - 39); // 0x402490
    char v7 = *v6 | (char)v2; // 0x402490
    *v6 = v7;
    if (v7 != 0) {
        // 0x4024a6
        return result;
    }
    int32_t v8 = *(int32_t *)(v3 - 4); // 0x402495
    *(int32_t *)(v3 - 72) = *(int32_t *)(v8 + 8);
    *v4 = *(int32_t *)(v8 + 12);
    return function_4024a9();
}

// Address range: 0x4024a7 - 0x4024a9
int32_t function_4024a7(void) {
    // 0x4024a7
    int32_t result; // 0x4024a7
    return result;
}

// Address range: 0x4024a9 - 0x4024ac
int32_t function_4024a9(void) {
    // 0x4024a9
    int32_t result; // 0x4024a9
    return result;
}

// Address range: 0x402502 - 0x40251c
int32_t function_402502(int32_t a1, int32_t a2) {
    int32_t result = __asm_int3(); // 0x40250f
    char * v1 = (char *)(a1 - 32); // 0x402515
    *v1 = *v1 | 3;
    return result;
}

// Address range: 0x40251c - 0x40265a
int32_t function_40251c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x40251c
    bool v1; // 0x40251c
    bool v2; // 0x40251c
    if (!v1 && !v2) {
        function_4024a7();
    }
    int32_t v3 = __asm_int3(); // 0x40251f
    int32_t v4; // 0x40251c
    int32_t v5; // 0x40251c
    *(int32_t *)v4 = __asm_insd((int16_t)v5);
    *(int32_t *)(a1 - 29) = v3 + (int32_t)v2 + *(int32_t *)(a1 - 28);
    char * v6 = (char *)(*(int32_t *)(a1 + 20) + 0x5589f445); // 0x402535
    unsigned char v7 = *v6; // 0x402535
    *v6 = v7 / 2 | 128 * v7;
    char * v8 = (char *)(v4 - 0x7613a276); // 0x402540
    int32_t v9; // 0x40251c
    char v10 = v9; // 0x402540
    *v8 = *v8 & v10;
    int32_t v11 = v5 & -0xff01 | 0x4000; // 0x402559
    int32_t v12 = function_40b590(*(int32_t *)(a3 - 65)); // 0x402565
    char v13 = *(char *)(a3 - 53); // 0x40256a
    char * v14 = (char *)v12; // 0x40257d
    *v14 = *v14 + (char)v12;
    int32_t v15 = unknown_577521cf(v9 & -256 | (int32_t)(v13 + v10), v4 + 1, v11); // 0x402585
    int32_t v16 = v15 + 0x1763aa77; // 0x40258b
    *(int32_t *)v16 = 0x10000 * v15 / 0x10000;
    int32_t * v17 = (int32_t *)v11; // 0x402593
    int32_t v18 = *v17 - v11; // 0x402593
    char v19 = llvm_ctpop_i8((char)v18); // 0x402593
    *v17 = v18;
    int32_t v20 = *(int32_t *)(a3 - 21); // 0x402597
    *(int32_t *)-0x17ba7438 = v16;
    int32_t * v21; // 0x40264f
    if ((v19 & 1) != 0) {
        // 0x4025f9
        llvm_exp2_f80(llvm_round_f80((float80_t)*(int64_t *)(v15 + 0x1763aa57)));
        float80_t v22 = 0.0; // 0x402618
        float64_t v23 = v22 * v22 * (float80_t)*(int16_t *)v20; // 0x40263c
        *(float64_t *)(a3 - 121) = v23;
        *(float64_t *)(a3 - 89) = v23;
        // 0x40264a
        v21 = (int32_t *)(*(int32_t *)(a3 - 33) - 0x72ea81ff);
        *v21 = *v21 + 80;
        return 0x32336970;
    }
    // 0x4025a2
    char * v24; // 0x40251c
    int32_t v25 = (int32_t)v24; // 0x4025a5
    *(int32_t *)a2 = a4;
    char * v26 = (char *)(v25 - 0x535e3fbb); // 0x4025a8
    *v26 = *v26 + (char)v25;
    int16_t v27; // 0x40251c
    int32_t v28; // 0x40251c
    *(int32_t *)(v28 - 60) = (int32_t)v27;
    if ((a2 & -256 | (int32_t)(*v24 + (char)a2)) < 1) {
        // 0x40264a
        v21 = (int32_t *)(v25 - 0x72ea81ff);
        *v21 = *v21 + 80;
        return 0x32336970;
    }
    float64_t v29 = (float80_t)*(int64_t *)(v28 - 104); // 0x4025c5
    *(float64_t *)v20 = v29;
    *(int32_t *)v20 = __asm_insd(v27);
    *(float64_t *)(v28 - 32) = v29;
    int64_t v30 = *(int64_t *)(v28 - 56); // 0x4025d7
    *(float64_t *)(v28 - 24) = (float64_t)(float80_t)v30;
    *(int64_t *)(v28 - 16) = *(int64_t *)(v28 - 64);
    int32_t result = v25 + 16 & -256 | (int32_t)__asm_in_4(v27); // 0x4025e9
    char * v31 = (char *)(result - 0x202bba23); // 0x4025ed
    *v31 = *v31 + g35;
    return result;
}

// Address range: 0x40265a - 0x402669
int32_t function_40265a(void) {
    // 0x40265a
    int32_t v1; // 0x40265a
    *(float64_t *)(v1 - 136) = (float64_t)sqrtl(1.0);
    return function_40267d();
}

// Address range: 0x402669 - 0x40267d
int32_t function_402669(void) {
    // 0x402669
    int32_t v1; // 0x402669
    *(int32_t *)(v1 - 136) = 177;
    *(int32_t *)(v1 - 132) = 0xc200c5;
    int32_t result; // 0x402669
    return result;
}

// Address range: 0x40267d - 0x402697
int32_t function_40267d(void) {
    // 0x40267d
    int32_t v1; // 0x40267d
    float80_t v2; // 0x40267d
    *(float64_t *)(v1 - 88) = (float64_t)sqrtl(v2);
    int32_t v3; // 0x40267d
    return v3 - 0x7600b70c;
}

// Address range: 0x402697 - 0x4026a9
int32_t function_402697(int32_t a1) {
    // 0x402697
    int32_t v1; // 0x402697
    *(int32_t *)(v1 - 110) = 50;
    *(int32_t *)(v1 + 4) = 0x4600;
    int32_t result; // 0x402697
    return result;
}

// Address range: 0x4026ab - 0x4026ae
int32_t function_4026ab(void) {
    // 0x4026ab
    int32_t result; // 0x4026ab
    return result;
}

// Address range: 0x4026c5 - 0x402700
int32_t function_4026c5(void) {
    // 0x4026c5
    int32_t v1; // 0x4026c5
    int32_t v2 = v1;
    *(char *)v2 = *(char *)&v1 + (char)v2;
    int32_t v3; // 0x4026c5
    int32_t * v4 = (int32_t *)(v3 + 19); // 0x4026cd
    int32_t v5; // 0x4026c5
    *v4 = *v4 + v5;
    int32_t v6; // 0x4026c5
    int32_t v7 = v6 - 0xbb2c50c; // 0x4026d0
    int32_t v8; // 0x4026c5
    *(char *)v3 = *(char *)&v3 + (char)v8;
    char * v9 = (char *)v7; // 0x4026e8
    *v9 = *v9 + (char)v7;
    __asm_in((int16_t)v8);
    return function_402752(32, 0x4030e0);
}

// Address range: 0x40272e - 0x402731
int32_t function_40272e(void) {
    // 0x40272e
    int32_t result; // 0x40272e
    return result;
}

// Address range: 0x402735 - 0x402744
int32_t function_402735(int32_t a1) {
    // 0x402735
    int32_t v1; // 0x402735
    uint32_t v2; // 0x402735
    uint32_t v3 = v2 + v1; // 0x402736
    unsigned char v4 = (char)v3; // 0x402740
    bool v5 = v3 < v2 | v4 > 153;
    int32_t result; // 0x402735
    if ((v2 & 15) + (v1 & 15) > 15 || (v4 & 14) > 9) {
        result = (v5 ? 154 : 250) + v3 & 255 | v3 & -256;
    } else {
        result = (v5 ? v3 + 160 : v3) & 255 | v3 & -256;
    }
    return result;
}

// Address range: 0x402752 - 0x402805
int32_t function_402752(int32_t a1, int32_t a2) {
    // 0x402752
    int32_t v1; // 0x402752
    int32_t v2 = *(int32_t *)(v1 - 0x37e27440); // 0x402752
    int32_t v3; // 0x402752
    int32_t v4; // 0x402752
    int32_t v5 = v4 | v3; // 0x402759
    int32_t v6; // 0x402752
    bool v7; // 0x402752
    char * v8 = (char *)(v6 - 0x72e3dd5 + (int32_t)v7 - v2); // 0x40275b
    *v8 = *v8 + (char)v1;
    int32_t v9; // 0x402752
    *(int32_t *)(v9 - 16) = *(int32_t *)(v5 + 16 + 2 * v5);
    __asm_bound(*(int64_t *)(v1 - 53));
    int32_t v10 = __asm_hlt(); // 0x40277a
    char v11 = v10; // 0x402781
    *(char *)0x4102aca7 = v11;
    char * v12 = (char *)(v1 - 0x7cef3c); // 0x402786
    unsigned char v13 = *v12; // 0x402786
    char v14 = v13 + v11; // 0x402786
    *v12 = v14;
    if (v14 >= 1) {
        // 0x40278f
        return g53 + 0x800000 * (v3 - (v3 >> 31));
    }
    int32_t v15 = v14 < v13 ? (int32_t)&g46 + 1 : (int32_t)&g46; // 0x4027e1
    int32_t v16 = v10 - v15; // 0x4027e1
    int32_t v17 = (v16 - (v16 >> 31)) / 2; // 0x4027e9
    int32_t * v18 = (int32_t *)(v9 + 0x48ec2703 + v17); // 0x4027eb
    *v18 = *v18 / 0x1000000;
    return *(int32_t *)(v17 + 16);
}

// Address range: 0x402805 - 0x402806
int32_t function_402805(void) {
    // 0x402805
    int32_t v1; // 0x402805
    int32_t v2; // 0x402805
    return v2 & -256 | (int32_t)__asm_in_4((int16_t)v1);
}

// Address range: 0x402806 - 0x402870
int32_t function_402806(void) {
    // 0x402806
    int32_t v1; // 0x402806
    bool v2; // 0x402806
    if (!v2) {
        // 0x402856
        int32_t v3; // 0x402806
        *(int32_t *)v3 = v3 ^ -0xeffff17;
        return v1 | 82;
    }
    // 0x402812
    int32_t v4; // 0x402806
    int32_t * v5 = (int32_t *)(v4 + 94); // 0x402812
    uint32_t v6 = *v5; // 0x402812
    bool v7; // 0x402806
    *v5 = 2048 * v6 | 1024 * (int32_t)v7 | v6 / 0x400000;
    int32_t v8; // 0x402806
    if (v8 < 2) {
        // 0x402863
        return v1 - (v8 == 0 ? -0x12bef437 : -0x12bef438) & -256 | (int32_t)__asm_in_7(43);
    }
    char * v9 = (char *)(v4 - 0x1877cb8 + v1); // 0x402829
    unsigned char v10 = *v9; // 0x402829
    char v11 = v10 + 64; // 0x402829
    *v9 = v11;
    if (v11 == 0) {
        // 0x402863
        return v1 - (v10 > 191 ? -0x12bef437 : -0x12bef438) & -256 | (int32_t)__asm_in_7(43);
    }
    int32_t * v12 = (int32_t *)(g48 + 0x61b60305); // 0x402842
    *v12 = 0x20000 * *v12;
    return *(int32_t *)293;
}

// Address range: 0x402870 - 0x402890
int32_t function_402870(void) {
    // 0x402870
    int32_t v1; // 0x402870
    int32_t result = 32 * v1; // 0x402870
    int32_t v2; // 0x402870
    int32_t * v3 = (int32_t *)(v2 - 32); // 0x402877
    uint32_t v4 = *v3; // 0x402877
    *v3 = v4 / 2 | 0x80000000 * v4;
    int32_t v5; // 0x402870
    int32_t v6 = 0x48312068 * *(int32_t *)((result | 12) + v5); // 0x40287a
    char * v7 = (char *)(v6 + 32); // 0x402882
    *v7 = *v7 + (char)(*(int32_t *)((result | 8) + v5) / 256);
    *(int32_t *)(v2 - 28) = v6;
    return result;
}

// Address range: 0x402890 - 0x4029d3
int32_t function_402890(int16_t a1, int32_t a2) {
    // 0x402890
    int32_t v1; // 0x402890
    int64_t v2; // 0x402890
    __asm_psubb(v2, *(int64_t *)&v1);
    *(char *)0x5798000 = (char)(int32_t)g27;
    v1 = -1;
    int32_t v3; // 0x402890
    uint32_t v4 = *(int32_t *)(v3 + (int32_t)&g53); // 0x4028b1
    int32_t v5 = 32 * v4 / 2; // 0x4028b9
    unsigned char v6 = (char)v5; // 0x4028bc
    int32_t v7 = v6 < 194 ? v5 : v5 + 62; // 0x4028bc
    unsigned char v8 = (char)v7; // 0x4028c0
    bool v9 = (v4 & 0x10000000) != 0 | v8 > 153;
    int32_t v10 = (v8 & 14) > 9 ? (v9 ? 154 : 250) + v7 : v9 ? v7 + 160 : v7;
    char v11 = *(char *)(v3 + 0x588b7e48); // 0x4028c1
    char * v12 = (char *)(v3 + 0x788b3c50); // 0x4028c7
    unsigned char v13 = *v12; // 0x4028c7
    char v14 = v11 != 0; // 0x4028c7
    unsigned char v15 = v11 - 1 + v14; // 0x4028c7
    char v16 = v13 - v15; // 0x4028c7
    *v12 = v16;
    int32_t v17 = v11 != 0 ? v15 != -1 | v13 < v16 - v14 : v13 < v15 ? 4 : 3; // 0x4028cd
    return 256 * (int32_t)(v6 > 193) | v5 & -0x10000 | (v10 & 254) - v17 & 255;
}

// Address range: 0x402a58 - 0x402a62
int32_t function_402a58(void) {
    // 0x402a58
    int32_t v1; // 0x402a58
    return v1 - 0x71fffe0c;
}

// Address range: 0x402a66 - 0x402a69
int32_t function_402a66(int32_t a1) {
    // 0x402a66
    int32_t result; // 0x402a66
    return result;
}

// Address range: 0x402a6d - 0x402ace
float80_t function_402a6d(int16_t a1) {
    // 0x402a6d
    int32_t v1; // 0x402a6d
    char * v2 = (char *)(v1 - 0x79d44b3); // 0x402a70
    int32_t v3; // 0x402a6d
    *v2 = *v2 + (char)v3;
    int32_t v4; // 0x402a6d
    int32_t * v5 = (int32_t *)(*(int32_t *)(v4 - 72) + 0x6fdc); // 0x402a8a
    int32_t v6; // 0x402a6d
    *v5 = *v5 & v6;
    int32_t * v7 = (int32_t *)(v6 + 0x45dd0000); // 0x402a8d
    *v7 = *v7 - 1;
    char * v8 = (char *)(v4 - 0x57a22235); // 0x402aa1
    unsigned char v9 = *v8; // 0x402aa1
    *v8 = v9 - 95;
    float64_t v10 = *(float64_t *)(v4 - 119); // 0x402aa7
    *(int32_t *)(v4 + 113) = v6;
    *(float64_t *)(v4 + 112) = (float64_t)(3.20421364495043997083e-312L * (float80_t)v10);
    float64_t v11 = *(float64_t *)(v4 - 111); // 0x402ab6
    float64_t v12 = *(float64_t *)&v6; // 0x402ab9
    int32_t v13 = v12;
    *(char *)0x75dd905d = *(char *)0x75dd905d + (char)v6;
    float64_t v14 = *(float64_t *)(((v9 > 94 ? 162 : 161) + v13 & 255 | v13 & -256) - 0x262fdf5d); // 0x402ac8
    return ((float80_t)v12 - (float80_t)v11) * (float80_t)v14;
}

// Address range: 0x402ae5 - 0x402b4f
int32_t function_402ae5(void) {
    // 0x402ae5
    uint32_t v1; // 0x402ae5
    int32_t v2; // 0x402ae5
    bool v3; // 0x402ae5
    if ((llvm_ctpop_i8((char)v2 - (char)(v1 / 256) + (char)v3) & 1) == 0) {
        // 0x402b53
        int32_t v4; // 0x402ae5
        return v4 & -256 | 165;
    }
    // 0x402b03
    function_40b590(0xb9dbd8);
    __asm_int1();
    uint16_t v5; // 0x402ae5
    int32_t v6 = v5; // 0x402b40
    int32_t v7; // 0x402ae5
    int32_t result = *(int32_t *)(v7 - 47); // 0x402b43
    *(int32_t *)(v6 - 8) = *(int32_t *)(v7 - 20);
    *(int32_t *)(v6 - 12) = *(int32_t *)(v7 + 32);
    *(int32_t *)(v6 - 16) = result;
    return result;
}

// Address range: 0x402b50 - 0x402b53
int32_t function_402b50(void) {
    // 0x402b50
    int32_t result; // 0x402b50
    return result;
}

// Address range: 0x402b54 - 0x402b6a
int32_t function_402b54(void) {
    // 0x402b54
    *(int32_t *)0x3d63 = *(int32_t *)0x3d63 + 1;
    return unknown_52352b68(0);
}

// Address range: 0x402b86 - 0x402b87
int32_t function_402b86(void) {
    // 0x402b86
    int32_t result; // 0x402b86
    return result;
}

// Address range: 0x402be7 - 0x402c16
int32_t function_402be7(void) {
    // 0x402be7
    int32_t v1; // 0x402be7
    char * v2 = (char *)(v1 - 0x74ad63b3); // 0x402bed
    *v2 = *v2 | 85;
    int32_t v3 = __asm_wait(); // 0x402bf5
    int32_t v4; // 0x402be7
    int32_t v5; // 0x402be7
    *(char *)v5 = *(char *)&v4;
    int32_t v6 = v3 & -256; // 0x402bf9
    int32_t v7; // 0x402be7
    if (v7 != 1) {
        v6 = function_402b86();
    }
    int32_t v8 = (v6 & -256 | (int32_t)*(char *)0x68515052) - 1; // 0x402c01
    *(int64_t *)(v7 - 0x55922009) = (int64_t)*(int32_t *)v8;
    int32_t * v9 = (int32_t *)(v8 + 2 * v1); // 0x402c0d
    *v9 = *v9 - (((char)v3 ^ -2) < 178 ? -33 : -34);
    return function_c270e8b8();
}

// Address range: 0x402c16 - 0x402c84
int32_t function_402c16(void) {
    // 0x402c16
    int32_t v1; // 0x402c16
    int32_t v2 = v1 - 1; // 0x402c19
    uint32_t v3; // 0x402c16
    if ((char)(v3 / 256) != -(char)v3 && v2 != 0) {
        // 0x402c64
        int32_t v4; // 0x402c16
        return v4 + 1;
    }
    // 0x402c1b
    int32_t v5; // 0x402c16
    float64_t v6 = *(float64_t *)(v5 + 68); // 0x402c21
    float64_t v7 = *(float64_t *)v2; // 0x402c24
    uint32_t v8; // 0x402c16
    *(float32_t *)(v8 - 0x1f202622) = (float32_t)((float80_t)v6 / (float80_t)v7);
    if ((*(int32_t *)-0x1f26fd86 & -0x2babbf00) == 0) {
        // 0x402c33
        function_402be7();
        return (float32_t)function_402cb4();
    }
    uint16_t v9 = (int16_t)v2 - 1; // 0x402c3f
    if (v9 != 0) {
        char * v10 = (char *)(v8 + 0x227500c7); // 0x402c75
        *v10 = *v10 + (char)(v9 / 256);
        return function_402c95();
    }
    char * v11 = (char *)(v5 + 10); // 0x402c45
    *v11 = *v11 + (char)(v8 / 256);
    __asm_ffreep(-0xf3525e8);
    unknown_15af163a();
    return __asm_sti();
}

// Address range: 0x402c84 - 0x402c95
int32_t function_402c84(void) {
    // 0x402c84
    int32_t v1; // 0x402c84
    float80_t v2; // 0x402c84
    *(int16_t *)(v1 + 127) = (int16_t)v2;
    int32_t v3; // 0x402c84
    char * v4 = (char *)(v3 - 63); // 0x402c8a
    int32_t result; // 0x402c84
    *v4 = *v4 + (char)result;
    char * v5 = (char *)(v1 - 110); // 0x402c8d
    uint32_t v6; // 0x402c84
    *v5 = *v5 + (char)(v6 / 256);
    return result;
}

// Address range: 0x402c95 - 0x402ca6
int32_t function_402c95(void) {
    // 0x402c95
    return function_c270421f();
}

// Address range: 0x402cb4 - 0x402cb6
float80_t function_402cb4(void) {
    // 0x402cb4
    float80_t v1; // 0x402cb4
    return 2 * v1;
}

// Address range: 0x402ce6 - 0x402cee
int32_t function_402ce6(void) {
    // 0x402ce6
    int32_t v1; // 0x402ce6
    int32_t v2; // 0x402ce6
    *(int32_t *)v1 = __asm_insd((int16_t)v2);
    return function_c2704218();
}

// Address range: 0x402cfe - 0x402d3e
int32_t function_402cfe(void) {
    // 0x402cfe
    int32_t v1; // 0x402cfe
    char v2 = v1;
    *(char *)v1 = v2;
    if (v2 == 0) {
        // 0x402d0e
        return function_4039b5("ERROR: The median and mean for the total time are more than twice the standard\n       deviation apart. These results are NOT reliable.\n", v1);
    }
    // 0x402d1f
    __asm_int(145);
    return function_402d63("WARNING: The median and mean for the total time are not within a normal deviation\n        These results are probably not that reliable.\n");
}

// Address range: 0x402d62 - 0x402d63
int32_t function_402d62(void) {
    // 0x402d62
    int32_t result; // 0x402d62
    return result;
}

// Address range: 0x402d63 - 0x402e34
int32_t function_402d63(char * a1) {
    // 0x402d63
    int32_t v1; // 0x402d63
    uint32_t v2; // 0x402d63
    __asm_outsb((int16_t)v2, (char)v1);
    uint32_t v3 = *(int32_t *)0x2bfc558b; // 0x402d6f
    int32_t v4; // 0x402d63
    *(int32_t *)0x2bfc558b = v4 & -256 | (int32_t)*(char *)0x24d8b51;
    int32_t v5 = *(int32_t *)(v3 - 100); // 0x402d76
    uint32_t v6; // 0x402d63
    int32_t v7 = *(int32_t *)(2 * v6); // 0x402d7b
    *(int32_t *)0x2bfc5587 = v5 + (int32_t)(v2 < v6) - v7;
    int32_t v8 = *(int32_t *)(v3 - 76); // 0x402d83
    *(char *)v6 = __asm_insb((int16_t)(v2 - v6));
    int32_t v9; // 0x402d63
    int32_t v10 = v3 - v9; // 0x402d8a
    int32_t v11 = v3 < v9; // 0x402d8e
    uint32_t v12 = v8 + v11; // 0x402d8e
    int32_t v13 = v6 - v12; // 0x402d8e
    bool v14 = v3 < v9 ? v12 != -1 | v6 < v13 - v11 : v6 < v12; // 0x402d8e
    *(int32_t *)0x2bfc5583 = v13;
    *(int32_t *)0x2bfc557b = (int32_t)"Processing: %5I64d %5I64d%5I64d\n";
    *(int32_t *)0x2bfc5577 = *(int32_t *)(v6 + 98);
    int32_t v15 = v10 + 1; // 0x402d9a
    char v16 = llvm_ctpop_i8((char)v15); // 0x402d9a
    *(int32_t *)-0x74edb279 = v15;
    bool v17; // 0x402d63
    bool v18; // 0x402d63
    bool v19; // 0x402d63
    bool v20; // 0x402d63
    *(int32_t *)-0x74edb27d = 0x4000 * (int32_t)v18 | 1024 * (int32_t)v19 | 512 * (int32_t)v20 | 256 * (int32_t)v17 | 16 * (int32_t)((v10 & 15) == 15) | 64 * (int32_t)(v15 == 0) | 128 * (int32_t)(v15 < 0) | 2048 * (int32_t)((v15 & (v10 ^ -0x80000000)) < 0) | 4 * (int32_t)((v16 & 1) == 0) | (int32_t)v14 | 2;
    *(int32_t *)-0x74edb281 = v8;
    int32_t v21 = *(int32_t *)(v13 - 104); // 0x402da3
    *(int32_t *)-0x74edb289 = v13;
    *(int32_t *)-0x74edb28d = v8;
    *(int32_t *)-0x74edb291 = v21;
    float80_t v22; // 0x402d63
    *(float32_t *)(v21 + 2 * v13) = (float32_t)v22;
    char * v23 = (char *)v21; // 0x402dbf
    char v24 = v21; // 0x402dbf
    *v23 = *v23 + v24;
    *(char *)0x50e5313d = *(char *)0x50e5313d + v24;
    char v25 = *(char *)&v9 + v24; // 0x402dc7
    int32_t v26; // 0x402d63
    *(char *)v26 = v25;
    if (v25 < 1) {
        function_1e40fffc();
    }
    // 0x402dcf
    *(int32_t *)-0x74edb291 = (int32_t)"\nPercentage of the requests served within a certain time (ms)\n";
    int32_t v27 = g10; // 0x402ddb
    if (v27 >= 0 != v27 != 0) {
        // 0x402de5
        *(int32_t *)-0x74edb291 = 0x3d40d3e0;
        return function_3c402e7b();
    }
    // 0x402df4
    *(int32_t *)-0x74edb291 = 7;
    *(int32_t *)-0x74edb295 = 0x794f;
    *(int32_t *)-0x74edb299 = g53;
    *(int32_t *)-0x74edb29d = -0x74edb299;
    int32_t v28 = g53 + v27; // 0x402e10
    int32_t v29 = __asm_hlt(); // 0x402e14
    char * v30 = (char *)v29; // 0x402e16
    unsigned char v31 = *v30; // 0x402e16
    unsigned char v32 = v31 + (char)v29; // 0x402e16
    *v30 = v32;
    int32_t v33 = *(int32_t *)(8 * v1 - 0x74edb2f5); // 0x402e18
    *(int32_t *)-0x74edb2a1 = v33 + (int32_t)(v32 < v31);
    *(int32_t *)-0x74edb2a5 = v28;
    int32_t v34 = function_40b590((int32_t)&g70); // 0x402e21
    *(int32_t *)-0x74edb2a9 = v28;
    *(int32_t *)-0x74edb2ad = v34;
    *(int32_t *)-0x74edb2b1 = (int32_t)" 100%%  %5I64d (longest request)\n";
    return function_402e7b();
}

// Address range: 0x402e34 - 0x402e7b
int32_t function_402e34(void) {
    // 0x402e34
    int32_t v1; // 0x402e34
    int32_t v2 = *(int32_t *)(v1 + (int32_t)&g15); // 0x402e3b
    int32_t v3 = *(int32_t *)(v1 - 63); // 0x402e51
    int32_t v4; // 0x402e34
    int32_t v5; // 0x402e34
    int32_t v6 = v3 * (int32_t)(0x51ebf21f * (int64_t)(v2 * v4) >> 63) + v5;
    int32_t * v7 = (int32_t *)(v6 + 16); // 0x402e5a
    int32_t v8 = *v7; // 0x402e5a
    int32_t * v9 = (int32_t *)(v6 + 20); // 0x402e5a
    int32_t v10 = *v9; // 0x402e5a
    int32_t * v11 = (int32_t *)(v6 + 24); // 0x402e5a
    int32_t v12 = *v11; // 0x402e5a
    unsigned char v13 = (char)v12; // 0x402e5b
    unsigned char v14 = *(char *)(v10 - 0x74ffffff); // 0x402e5b
    unsigned char v15 = v13 - v14; // 0x402e5b
    *(int32_t *)(v6 + 28) = v6 + 32;
    int32_t * v16 = (int32_t *)(9 * v8); // 0x402e62
    uint32_t v17 = *v16; // 0x402e62
    uint32_t v18 = v17 + v8; // 0x402e62
    uint32_t v19 = v18 + (int32_t)(v14 > v13); // 0x402e62
    bool v20 = v14 > v13 ? v19 <= v17 : v18 < v17; // 0x402e62
    *v16 = v19;
    unsigned char v21 = v15 & 31; // 0x402e65
    int32_t v22 = v10; // 0x402e65
    bool v23 = v20; // 0x402e65
    if (v21 != 0) {
        char v24 = v10; // 0x402e65
        unsigned char v25 = v21 - 1; // 0x402e65
        v22 = v10 & -256 | (int32_t)(v24 << v21 | (char)(((int16_t)v10 & 255) >> (int16_t)(9 - v21)) | (char)v20 << v25);
        v23 = (128 >> v25 & v24) != 0;
    }
    *v11 = v22;
    *v9 = v12 & -256 | (int32_t)v15;
    int32_t v26 = function_40b590((int32_t)&g70); // 0x402e69
    *v7 = v22;
    *(int32_t *)(v6 + 12) = v26;
    *(int32_t *)(v6 + 8) = *(int32_t *)v6;
    *(int32_t *)(v6 + 4) = 0x40c0ac;
    return v26 & -256 | (v23 ? 255 : 0);
}

// Address range: 0x402e7b - 0x402e8c
int32_t function_402e7b(void) {
    // 0x402e7b
    int32_t v1; // 0x402e7b
    int64_t v2; // 0x402e7b
    __asm_psrlw(v2, *(int64_t *)(v1 - 1 + 8 * v1));
    int32_t result; // 0x402e7b
    return result;
}

// Address range: 0x402e8c - 0x402ebf
int32_t function_402e8c(void) {
    // 0x402e8c
    int32_t v1; // 0x402e8c
    char * v2 = (char *)(v1 - 118); // 0x402e93
    uint32_t v3; // 0x402e8c
    *v2 = *v2 + (char)(v3 / 256);
    int32_t v4; // 0x402e8c
    int32_t v5 = v1 & -256 | (int32_t)*(char *)&v4; // 0x402e96
    *(int32_t *)-0x5162b000 = v5;
    int32_t v6 = v5 - 1; // 0x402e9c
    int32_t * v7 = (int32_t *)v6; // 0x402e9d
    uint32_t v8 = *v7; // 0x402e9d
    *v7 = v8 / 0x200000 | 2048 * v8;
    int32_t v9; // 0x402e8c
    __asm_out_6((int16_t)v9, (char)v6);
    uint32_t v10; // 0x402e8c
    return v5 + (2 * v10 < v10 ? 0x40c170 : 0x40c16f);
}

// Address range: 0x402ec0 - 0x402f90
int32_t function_402ec0(void) {
    // 0x402ed6
    int32_t v1; // 0x402ec0
    char * v2 = (char *)(v1 + 0x40c1801d); // 0x402eca
    int32_t v3; // 0x402ec0
    *v2 = (char)v3 + 63 + *v2;
    float80_t v4; // 0x402ec0
    *(int16_t *)(v1 + 24) = (int16_t)v4;
    abort();
    // UNREACHABLE
}

// Address range: 0x402f90 - 0x40303b
int32_t function_402f90(void) {
    // 0x402f90
    int32_t v1; // 0x402f90
    char * v2 = (char *)(v1 + (int32_t)&g27 - 1); // 0x402f9b
    int32_t v3; // 0x402f90
    *v2 = *v2 + (char)(((v3 + 1 & 255 | v3 & 0xff00) + 1) / 256);
    int32_t v4 = unknown_154123f0("starttime\tseconds\tctime\tdtime\tttime\twait\n"); // 0x402fa6
    char * v5 = (char *)v4; // 0x402fab
    *v5 = *v5 + (char)v4;
    int32_t v6; // 0x402f90
    int32_t v7 = *(int32_t *)(v6 + 0x14080406); // 0x402fba
    *(int32_t *)(v7 - 6) = v1 - 1;
    int32_t v8; // 0x402f90
    uint32_t v9 = v8 - 0x630046; // 0x402fc2
    *(int32_t *)(v7 - 14) = v9;
    int32_t v10; // 0x402f90
    int32_t v11; // 0x402f90
    __asm_outsb((int16_t)v11, *(char *)&v10);
    char * v12 = (char *)v9; // 0x402fcd
    unsigned char v13 = *v12; // 0x402fcd
    unsigned char v14 = (char)v9; // 0x402fcd
    unsigned char v15 = v13 + v14; // 0x402fcd
    *v12 = v15;
    *(int32_t *)(v7 - 22) = 0;
    int32_t v16 = v7 - 26; // 0x402fd7
    int32_t * v17 = (int32_t *)v16; // 0x402fd7
    *v17 = 0xae03e8;
    unsigned char v18 = v14 - 119 + (char)(v15 < v13); // 0x402fe6
    bool v19 = v15 < v13 ? v18 <= v14 : v14 > 118; // 0x402fe6
    int32_t v20 = v9 & -256 | (int32_t)v18; // 0x402fe6
    int32_t v21; // 0x402f90
    char * v22 = (char *)(*(int32_t *)(v21 + 0x44ec103d) + 0x5d8bd0c7); // 0x402ff1
    *v22 = (char)v19 - (char)(v9 / 256) + *v22;
    *v17 = v20;
    int32_t * v23 = (int32_t *)(*(int32_t *)(g53 + 28 + v10) + v16); // 0x402ffb
    *v23 = 0x2000000 * *v23;
    *(int32_t *)(v8 - 45) = v20;
    *(char *)-0x7a7c17af = v18;
    char * v24 = (char *)v20; // 0x40300b
    *v24 = *v24 + v18;
    int32_t v25 = v8 - 2; // 0x40300e
    int32_t v26 = v20 + 0xcff4; // 0x403014
    *v17 = 0;
    *(int32_t *)(v7 - 30) = v25;
    char * v27 = (char *)v26; // 0x403021
    *v27 = *v27 + (char)v26;
    int32_t result = unknown_2240b590(); // 0x403025
    *(int32_t *)(v7 - 264) = v25;
    *(int32_t *)(v7 - 268) = result;
    char * v28 = (char *)(v21 - 1); // 0x403031
    *v28 = *v28 / 2;
    char * v29 = (char *)(v21 - 0x3d5acabc); // 0x403033
    *v29 = *v29 | 82;
    return result;
}

// Address range: 0x403094 - 0x403095
int32_t function_403094(void) {
    // 0x403094
    int32_t result; // 0x403094
    return result;
}

// Address range: 0x4030b7 - 0x4030db
int32_t function_4030b7(int32_t a1) {
    // 0x4030b7
    int32_t v1; // 0x4030b7
    int32_t * v2 = (int32_t *)(v1 - 0xaf03bb); // 0x4030b7
    *v2 = *v2 - 1;
    uint32_t v3; // 0x4030b7
    *(int32_t *)v3 = v3 / 0x20000000 | 8 * v3;
    int32_t v4; // 0x4030b7
    char * v5 = (char *)(v4 + 106 + v3); // 0x4030c9
    *v5 = 2 * *v5;
    return unknown_c1803600(v3);
}

// Address range: 0x4030dc - 0x403106
int32_t function_4030dc(void) {
    // 0x4030dc
    int32_t v1; // 0x4030dc
    char v2 = *(char *)(v1 - 0x749a6f70); // 0x4030dc
    int32_t v3; // 0x4030dc
    bool v4; // 0x4030dc
    __asm_in_4((int16_t)(v3 & 0xff00 | (int32_t)((char)v4 + (char)v3 + v2)));
    int32_t v5; // 0x4030dc
    char * v6 = (char *)(v5 - 0x7558f3da); // 0x4030e5
    int32_t v7; // 0x4030dc
    *v6 = *v6 | (char)v7;
    int32_t v8 = *(int32_t *)*(int32_t *)(v7 + 16); // 0x4030f0
    int32_t v9; // 0x4030dc
    int32_t * v10 = (int32_t *)(v9 + 112); // 0x4030f7
    *v10 = *v10 / 0x10000000;
    int32_t v11 = (char)(v8 + 198 + (int32_t)((char)v8 > 116)) > 196 ? 255 : 0; // 0x4030fd
    int32_t result = v11 | v8 & -256; // 0x4030fe
    if ((char)(v8 + 198 + (int32_t)((char)v8 > 116)) <= 196) {
        result = function_403094();
    }
    // 0x403100
    *(char *)v9 = (char)result;
    return result;
}

// Address range: 0x403106 - 0x40319e
int32_t function_403106(int32_t a1, int32_t a2, int32_t a3) {
    // 0x403106
    int32_t result; // 0x403106
    int32_t v1; // 0x403106
    int32_t result2; // 0x403106
    if (result2 < v1) {
        // 0x403110
        return result;
    }
    uint32_t v2; // 0x403106
    if (result2 <= v1) {
        // 0x40310c
        result = 1;
        uint32_t v3; // 0x403106
        if (v2 > v3) {
            // 0x403110
            return result;
        }
        // 0x403110
        return result;
    }
    // 0x40314e
    if (result2 <= v1) {
        // 0x403110
        return 0;
    }
    // 0x403150
    *(int32_t *)result2 = 2 * result2;
    char * v4 = (char *)(v1 + 96); // 0x403153
    *v4 = *v4 + (char)v2;
    return result2;
}

// Address range: 0x40319e - 0x403248
int32_t function_40319e(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x40319e
    uint32_t v1; // 0x40319e
    uint32_t v2; // 0x40319e
    if (v2 >= v1) {
        // 0x4031a2
        if (v2 <= v1) {
            // 0x4031a4
            int32_t result; // 0x40319e
            return result;
        }
        // 0x4031a4
        return 0xb701;
    }
    // 0x4031b5
    int32_t v3; // 0x40319e
    char * v4 = (char *)(v3 - 104); // 0x4031b5
    unsigned char v5 = *v4; // 0x4031b5
    *v4 = v5 / 8 | 32 * (char)(v2 < v1) | 64 * v5;
    int32_t v6; // 0x40319e
    __asm_in_4((int16_t)v6);
    int32_t v7; // 0x40319e
    int32_t v8 = *(int32_t *)(v7 + 12); // 0x4031c6
    int32_t v9 = *(int32_t *)(*(int32_t *)(v7 + 8) - 13); // 0x4031d0
    int32_t v10; // 0x40319e
    if (v8 != 1) {
        char * v11 = (char *)(v3 - 0x7230e43d); // 0x40321f
        unsigned char v12 = *v11; // 0x40321f
        unsigned char v13 = v12 + (char)*(int32_t *)(v10 - 20); // 0x40321f
        *v11 = v13;
        *(int32_t *)(v7 - 52) = v8;
        return v9 + (int32_t)&g57 + (int32_t)(v13 < v12);
    }
    // 0x4031d5
    int32_t v14; // 0x40319e
    int32_t * v15 = (int32_t *)(v14 - 128); // 0x4031d7
    *v15 = *v15 / 0x10000000;
    if ((char)v9 > 196) {
        // 0x4031a4
        return -1;
    }
    int32_t v16 = (char)v9 > 196 ? 255 : 0; // 0x4031dd
    uint32_t result2 = v16 | v9 & -256; // 0x4031dd
    if (result2 < 0) {
        // 0x4031a4
        return 0;
    }
    char * v17 = (char *)result2; // 0x4031f2
    *v17 = *v17 + (char)v16;
    char * v18 = (char *)(v10 + 93); // 0x4031f4
    *v18 = *v18 + 62;
    return result2;
}

// Address range: 0x4032ed - 0x4032f4
int32_t function_4032ed(void) {
    // 0x4032ed
    return function_d6ff0040();
}

// Address range: 0x403390 - 0x403418
int32_t function_403390(void) {
    // 0x403390
    uint32_t v1; // 0x403390
    if (v1 <= 1) {
        // 0x403393
        int32_t v2; // 0x403390
        int32_t v3 = v2 + 1; // 0x403393
        int32_t v4 = *(int32_t *)0xf70244; // 0x4033a2
        int32_t v5; // 0x403390
        char v6 = *(char *)((v3 & 0xff00) + v5 & 0xff00 | v3 & -0xff01); // 0x4033ad
        int32_t v7; // 0x403390
        *(int32_t *)v7 = v4 & -256 | (int32_t)(v6 + (char)v4);
    }
    // 0x4033e1
    __asm_sti();
    return 0x2200e1e3;
}

// Address range: 0x40342e - 0x403435
int32_t function_40342e(void) {
    // 0x40342e
    return function_d8b0041();
}

// Address range: 0x40346e - 0x403476
int32_t function_40346e(void) {
    // 0x40346e
    int32_t result; // 0x40346e
    return result;
}

// Address range: 0x403477 - 0x40347a
int32_t function_403477(int32_t a1) {
    // 0x403477
    int32_t result; // 0x403477
    return result;
}

// Address range: 0x403487 - 0x40348a
int32_t function_403487(void) {
    // 0x403487
    int32_t result; // 0x403487
    return result;
}

// Address range: 0x4034aa - 0x4034ad
int32_t function_4034aa(void) {
    // 0x4034aa
    int32_t result; // 0x4034aa
    return result;
}

// Address range: 0x4034c2 - 0x40355e
int32_t function_4034c2(int16_t a1) {
    // 0x4034c2
    int32_t v1; // 0x4034c2
    char * v2 = (char *)(v1 + 0x4ddca2c4); // 0x4034c4
    int32_t v3; // 0x4034c2
    *v2 = *v2 + (char)v3;
    return *(int32_t *)0x1d5560 & -256 | (int32_t)__asm_in_7(-95);
}

// Address range: 0x40355f - 0x403959
int32_t function_40355f(int16_t a1) {
    // 0x40355f
    uint32_t v1; // 0x40355f
    bool v2; // 0x40355f
    bool v3; // 0x40355f
    if (v3 != v2) {
        // 0x403561
        __asm_hlt();
        int32_t v4; // 0x40355f
        *(int32_t *)(v4 - 48) = -1;
        *(int32_t *)(v4 - 40) = 0x19ffffff;
        *(int32_t *)(v4 - 77) = 0x79ffffff;
        if (v1 < 1) {
            function_463654();
        }
        // 0x40358d
        return function_dc4b94a7();
    }
    // 0x4035b6
    int32_t v5; // bp-8, 0x40355f
    int32_t v6 = &v5; // 0x4035b7
    int32_t v7 = v6; // bp+13753, 0x4035bb
    int32_t * v8 = (int32_t *)(v1 + 0x5589df4d);
    int32_t v9 = &v7; // 0x4035bb
    int32_t v10 = v6; // 0x4035bb
    int32_t v11; // 0x40355f
    int32_t v12; // 0x40355f
    int32_t v13; // 0x40355f
    uint32_t v14; // 0x40355f
    int32_t v15; // 0x40355f
    char v16; // 0x4035cc
    int32_t v17; // 0x4035ea
    int32_t v18; // 0x40355f
    int32_t v19; // 0x403631
    while (true) {
        // 0x4035bc
        v15 = v9;
        int32_t v20; // 0x40355f
        v14 = v20;
        int32_t v21; // 0x40355f
        v11 = v21;
        int32_t * v22 = (int32_t *)v13; // 0x4035be
        *v22 = *v22 | v11;
        int32_t v23 = v11 - 4; // 0x4035c1
        *(int32_t *)v23 = v10 + 1;
        int32_t v24 = *(int32_t *)(v1 - 0x74f53ff3); // 0x4035c5
        char v25 = v15; // 0x4035cc
        v16 = v25 - 88;
        int32_t v26 = v24 - 8; // 0x4035ce
        *(int32_t *)v26 = v23;
        int32_t * v27; // 0x40355f
        bool v28; // 0x40355f
        char v29; // 0x40355f
        bool v30; // 0x40355f
        bool v31; // 0x40355f
        if (v16 < 0 == ((v16 ^ v25) & v25 + 40) < 0 == (v16 != 0)) {
            char v32 = llvm_ctpop_i8(v16); // 0x4035cc
            v27 = (int32_t *)(v11 - 44);
            v31 = v16 == 0;
            v30 = v16 < 0;
            v28 = ((v16 ^ v25) & v25 + 40) < 0;
            v29 = v32;
        } else {
            int32_t * v33 = (int32_t *)(v11 - 44);
            uint32_t v34 = *v33; // 0x4035d7
            int32_t v35 = v34 - v14; // 0x4035d7
            char v36 = llvm_ctpop_i8((char)v35); // 0x4035d7
            v27 = v33;
            v31 = v35 == 0;
            v30 = v35 < 0;
            v28 = ((v35 ^ v34) & (v34 ^ v14)) < 0;
            v29 = v36;
            if (v34 < v14) {
                // break -> 0x4035b5
                break;
            }
        }
        // 0x4035dc
        *v27 = v14;
        *(int32_t *)(v11 - 40) = v23;
        v19 = v26;
        v12 = v23;
        if ((v29 & 1) != 0) {
            goto lab_0x40363f;
        }
        bool v37 = v28;
        bool v38 = v30;
        v17 = __asm_hlt();
        if (v38 == v37 != !v31) {
            if (v38 == v37) {
                // 0x4035f2
                if (*(int32_t *)(v11 - 20) > *(int32_t *)(v11 - 60)) {
                    goto lab_0x403606;
                } else {
                    goto lab_0x4035fa;
                }
            } else {
                goto lab_0x4035fa;
            }
        }
        // 0x40361c
        *(int32_t *)(v24 - 12) = v23;
        v10 = v24 - 16;
        *(int32_t *)v10 = v23;
        __asm_into(v18);
        int32_t v39 = __asm_int3(); // 0x403622
        uint32_t v40 = *v8; // 0x403629
        *v8 = v40 / 2 | 0x80000000 * v40;
        int32_t v41 = v14 - 1; // 0x40362f
        v21 = v39 | 1;
        v20 = v41;
        v9 = v24 + 1517;
        if (v41 == 0) {
            // 0x403631
            v19 = v24 + 1513;
            *(int32_t *)v19 = v10;
            __asm_in_7(-117);
            int32_t * v42 = (int32_t *)(v1 + 0x5589f84d); // 0x403637
            uint32_t v43 = *v42; // 0x403637
            *v42 = v43 / 2 | 0x80000000 * v43;
            __asm_in_7(-117);
            v12 = v10;
            goto lab_0x40363f;
        }
    }
    int32_t result = v15 & -256 | (int32_t)v16; // 0x40355f
  lab_0x4035b5:
    // 0x4035b5
    return result;
  lab_0x40363f:;
    int16_t v44 = v1; // 0x403640
    int32_t result2 = __asm_in(v44); // 0x403640
    int32_t v45 = v12 - 1; // 0x403646
    if (v45 != 0) {
        char * v46 = (char *)(v12 - 5); // 0x4035a2
        *v46 = *v46 | (char)v1;
        *(int32_t *)(v12 - 57) = *(int32_t *)(v1 - 8);
        return result2;
    }
    int32_t * v47 = (int32_t *)(v12 - 49); // 0x403648
    int32_t v48; // 0x40355f
    int32_t * v49 = (int32_t *)(v48 - 0x4dfffe0c); // 0x403654
    *v49 = *v49 - 0x2f7cff96;
    char * v50 = (char *)(result2 - 24); // 0x40365e
    *v50 = *v50 + (char)(*v47 / 256);
    char * v51 = (char *)(result2 + 81 + *(int32_t *)result2); // 0x403663
    *v51 = *v51 + (char)v1;
    int32_t v52 = function_40b590((int32_t)&g70); // 0x403666
    uint32_t v53 = *(int32_t *)(v12 - 37); // 0x40366b
    *v47 = v52;
    char * v54 = (char *)v52; // 0x403679
    *v54 = *v54 + (char)v52;
    int32_t v55 = unknown_83403684(); // 0x40367c
    int32_t * v56 = (int32_t *)v55; // 0x403681
    uint32_t v57 = *v56; // 0x403681
    *v56 = v57 / 0x80000000 | 2 * v57;
    *(int32_t *)(v19 - 4) = v53;
    *(int32_t *)(v19 - 8) = v55;
    unknown_b450b590();
    int32_t v58 = *(int32_t *)-0x27ba76f7; // 0x40368d
    int32_t * v59 = (int32_t *)(v12 - 17); // 0x403693
    int32_t v60 = *v59; // 0x403693
    *(int32_t *)(v58 - 4) = 90;
    *(int32_t *)(v58 - 8) = 1000;
    uint32_t v61 = v53 + (int32_t)((v60 ^ -4) < 500); // 0x4036a2
    int32_t v62 = unknown_2b1cb590(); // 0x4036aa
    uint32_t v63 = v61 - 1; // 0x4036af
    if (v61 == 0 || v63 == 0) {
        // 0x4036b1
        *v59 = v62 & -256 | (int32_t)__asm_in_4(v44);
        *(int32_t *)(v58 - 12) = -92;
        *(int32_t *)(v58 - 16) = 0x675303e8;
        __asm_into(v18);
        *(int32_t *)(v1 - 0x17afae0c) = v1 / 0x80000000 | 2 * v1;
        return *(int32_t *)(v12 - 25) + 500;
    }
    // 0x4036fe
    unknown_840137a6();
    __asm_in_4(v44);
    *(int32_t *)(v58 - 12) = v45;
    int32_t v64 = __asm_int3(); // 0x403707
    *(int32_t *)(v58 - 16) = v63;
    *(int32_t *)(v58 - 20) = v64;
    int32_t v65 = function_40b590((int32_t)&g70); // 0x40370a
    if ((v60 ^ -4) < 500 == v61 <= v53) {
        // 0x403757
        __asm_out_6(v44, (char)v48);
        __asm_int3();
        __asm_int1();
        int32_t v66 = *(int32_t *)-0x647dfd54; // 0x403761
        int32_t v67 = v66 >> 31; // 0x403767
        *(int32_t *)(v58 + 4) = -0x17acaeb0;
        *(int32_t *)(v58 + 2) = v67 + v63 / 256 & 255 | v67 & -256;
        *(int32_t *)(v58 - 2) = v66 | 0x2b0ba8;
        *(int32_t *)v1 = *(int32_t *)(v12 - 45);
        *(int32_t *)(v58 - 6) = *v47;
        *(int32_t *)(v58 - 10) = v63 & -256 | 154;
        *(int32_t *)(v58 - 14) = (int32_t)"<tr %s><th %s>Connect:</th><td %s>%5I64d</td><td %s>%5I64d</td><td %s>%5I64d</td></tr>\n";
        return (int32_t)g27;
    }
    int32_t result4 = v65 & -256 | v48 & 255; // 0x403713
    if (result4 == 0) {
        int32_t * v68 = (int32_t *)(v58 - 28); // 0x40372e
        *v68 = *(int32_t *)0x41b3a8;
        int32_t result3 = (int32_t)g58; // 0x403736
        *v68 = result3;
        *(int32_t *)(v58 - 32) = result3;
        return result3;
    }
    if (result4 != v1) {
        // 0x4038d5
        *(int32_t *)(v58 - 24) = result4;
        *(int32_t *)(v58 - 28) = 0x4ce838;
        return result4;
    }
    int32_t v69 = *(int32_t *)(v1 + 106); // 0x4038e3
    int32_t * v70 = (int32_t *)(v1 + 8); // 0x4038e6
    *v70 = *v70 + v45;
    if (function_408db0((int32_t)&g70, (int32_t)&g70) - v1 >= 0) {
        // 0x4038f3
        return unknown_42a1593b();
    }
    int32_t v71 = v48 + 1; // 0x403909
    *(int32_t *)(v69 - 8) = *(int32_t *)0x38026c;
    *(int32_t *)(v69 - 12) = 64;
    *(int32_t *)(v69 - 16) = *(int32_t *)v71;
    if (unknown_8fa9b0() != v1) {
        int32_t v72 = v48 + 2; // 0x403909
        unknown_162933a6();
        __asm_in_2(255);
        int32_t * v73 = (int32_t *)(v1 + 0xd8b08c4); // 0x40392a
        *v73 = *v73 + 1;
        *(char *)v71 = __asm_insb(0x500e);
        __asm_outsd(0x500e, *(int32_t *)v72);
        char * v74 = (char *)(v1 - 0x7f97ffe9); // 0x403933
        *v74 = *v74 + (char)v61;
        unknown_aa618db0();
        int32_t v75 = *(int32_t *)v45; // 0x403942
        int32_t * v76 = (int32_t *)v61; // 0x403947
        *v76 = 256 * (int32_t)(*(char *)(v75 + 0x1268504b) & 80) | 0x1268000e;
        int32_t * v77 = (int32_t *)(v75 + 0x3024500e + *v76); // 0x403949
        *v77 = *v77 + v72;
        return unknown_8440393d();
    }
    return result;
  lab_0x4035fa:
    // 0x4035fa
    *(int32_t *)(v14 - 16) = v13;
    *(int32_t *)(v11 - 16) = *(int32_t *)(v11 - 123);
    goto lab_0x403606;
  lab_0x403606:;
    int32_t v78 = *(int32_t *)(v11 - 64); // 0x403606
    int32_t v79 = v11 - 24; // 0x403609
    char v80 = *(char *)v79 & (char)v78; // 0x403609
    result = v17;
    if (v80 >= 0 || v80 >= 0 == (v80 != 0)) {
        goto lab_0x4035b5;
    } else {
        // 0x403615
        *(int32_t *)(v11 - 28) = v14;
        *(int32_t *)v79 = v78;
        result = v17;
        goto lab_0x4035b5;
    }
}

// Address range: 0x40395a - 0x4039a6
int32_t function_40395a(int32_t a1) {
    unsigned char v1 = *(char *)-0x76ff54f5; // 0x403961
    int32_t v2; // 0x40395a
    int32_t v3; // 0x40395a
    *(int32_t *)v2 = __asm_insd((int16_t)v3);
    int32_t v4; // 0x40395a
    *(char *)v2 = *(char *)&v4;
    bool v5; // 0x40395a
    int32_t v6 = v5 ? -1 : 1; // 0x403967
    int32_t v7; // 0x40395a
    int32_t v8 = *(int32_t *)(v7 - 85); // 0x403968
    int32_t v9; // 0x40395a
    *(int32_t *)(v6 - 0x6fa6f7d0 + v4) = v9 & -256 | (int32_t)v1 | v8;
    int32_t v10 = *(int32_t *)0x2941b6a4; // 0x403973
    *(char *)(v10 + a1) = (char)(*(int32_t *)(v6 + v2) / 256);
    char * v11 = (char *)v10; // 0x40397c
    *v11 = *v11 + (char)v10;
    switch (v10) {
        case 0: {
            // 0x403995
            function_403a5d((int32_t)&g70);
            // break -> 0x4039a1
            break;
        }
        case 0x975f1: {
            function_1353a16();
            // break -> 0x4039a1
            break;
        }
    }
    // 0x4039a1
    return function_b63eea1();
}

// Address range: 0x4039b5 - 0x4039c1
int32_t function_4039b5(char * a1, int32_t a2) {
    // 0x4039b5
    int32_t v1; // bp+20, 0x4039b5
    return &v1;
}

// Address range: 0x4039f8 - 0x4039fb
int32_t function_4039f8(void) {
    // 0x4039f8
    int32_t result; // 0x4039f8
    return result;
}

// Address range: 0x4039fd - 0x403a26
int32_t function_4039fd(void) {
    // 0x4039fd
    int32_t v1; // 0x4039fd
    char * v2 = (char *)(v1 + 104); // 0x403a00
    uint32_t v3; // 0x4039fd
    *v2 = *v2 + (char)v3;
    int32_t v4; // 0x4039fd
    int32_t v5 = 0x10000 * v4 / 0x10000; // 0x403a03
    char v6 = v5;
    int32_t v7; // 0x4039fd
    unsigned char v8 = (char)v7 & 31; // 0x403a04
    char v9 = v6; // 0x403a04
    int32_t result = v5; // 0x403a04
    if (v8 != 0) {
        v9 = v6 >> v8 | v6 << 8 - v8;
        result = v5 & -256 | (int32_t)v9;
    }
    char * v10 = (char *)(result - 0x1bcc); // 0x403a06
    *v10 = *v10 + (char)(v3 / 256);
    int32_t v11; // 0x4039fd
    *(int32_t *)(v11 + 8) = 0x7c0000;
    int32_t v12; // 0x4039fd
    char * v13 = (char *)(v11 - 1 + 8 * v12); // 0x403a17
    *v13 = *v13 ^ v9;
    int32_t * v14 = (int32_t *)(v1 + 0x5e5f0472); // 0x403a1b
    *v14 = *v14 + 1;
    return result;
}

// Address range: 0x403a2a - 0x403a5d
int32_t function_403a2a(int32_t a1) {
    // 0x403a2a
    int16_t v1; // 0x403a2a
    unknown_158b0846(v1);
    int32_t v2; // 0x403a2a
    *(int32_t *)(v2 - 16) = -0x2b067300;
    int32_t v3 = __asm_hlt(); // 0x403a48
    *(int32_t *)(v2 - 7) = v3 + 204 & 255 | v3 & -256;
    int32_t v4; // 0x403a2a
    *(int32_t *)(v2 - 3) = v4 + 1;
    int32_t result; // 0x403a2a
    return result;
}

// Address range: 0x403a5d - 0x403a81
int32_t function_403a5d(int32_t a1) {
    // 0x403a5d
    int32_t v1; // 0x403a5d
    *(int32_t *)(v1 + 8) = 2;
    int32_t v2; // 0x403a5d
    *(int32_t *)0x114102a8 = v2 + 1;
    int32_t v3; // 0x403a5d
    __asm_into(v3);
    char v4 = __asm_in_7(-45); // 0x403a74
    int32_t * v5 = (int32_t *)(v2 + 0x6d5f72c5); // 0x403a76
    *v5 = *v5 - 1;
    int32_t v6; // 0x403a5d
    return v6 & -256 | (int32_t)v4;
}

// Address range: 0x403a90 - 0x403a91
int32_t function_403a90(void) {
    // 0x403a90
    int32_t result; // 0x403a90
    return result;
}

// Address range: 0x403aad - 0x403ac4
int32_t function_403aad(void) {
    // 0x403aad
    int32_t v1; // 0x403aad
    int32_t v2 = v1 & -0xff01 | 3840; // 0x403aad
    int32_t v3; // 0x403aad
    char * v4 = (char *)(v3 + 0x6c840fc0); // 0x403ab0
    *v4 = *v4 + (char)v1;
    int32_t * v5 = (int32_t *)v2; // 0x403ab6
    *v5 = *v5 + v2;
    *(int32_t *)-0x2abefd4c = v2;
    return function_f8403c25();
}

// Address range: 0x403ac4 - 0x403b26
int32_t function_403ac4(void) {
    // 0x403ac4
    if (g28 != 1) {
        int32_t v1 = *(int32_t *)-0x36be5a7d; // 0x403ada
        int32_t v2; // 0x403ac4
        if (v2 != v1) {
            int32_t v3 = *(int32_t *)-0x46befd48; // 0x403ae3
            char v4 = *(char *)v3; // 0x403aeb
            g29 = (char)v3 + 1;
            g30 = (v1 & -256 | (int32_t)((char)v1 + 1 + v4)) + 1;
        }
    } else {
        // 0x403acd
        int32_t v5; // 0x403ac4
        g22 = *(int32_t *)(v5 + 16);
    }
    uint32_t v6 = *(int32_t *)-0x17befdb7; // 0x403afb
    int32_t v7; // 0x403ac4
    int128_t v8; // 0x403ac4
    __asm_maxps(v8, *(int128_t *)&v7);
    char * v9 = (char *)v6; // 0x403b0c
    *v9 = *v9 + (char)v6;
    int32_t v10; // 0x403ac4
    unsigned char v11 = *(char *)&v10 + 78; // 0x403b1e
    int32_t result = (231 * v6 / 256 + v6 & 255 | v6 & -0x10000) - 0x5cbc0556 & -1280 | (int32_t)v11; // 0x403b1e
    char * v12 = (char *)result; // 0x403b24
    *v12 = *v12 + v11;
    return result;
}

// Address range: 0x403b27 - 0x403c32
int32_t function_403b27(void) {
    // 0x403b27
    bool v1; // 0x403b27
    int32_t v2 = v1 ? -1 : 1; // 0x403b2c
    int32_t v3; // 0x403b27
    int32_t v4 = v2 + v3; // 0x403b2c
    int32_t v5; // 0x403b27
    *(char *)v5 = *(char *)v4;
    int32_t v6 = v2 + v5; // 0x403b2d
    int32_t v7 = v4 + v2; // 0x403b2d
    int32_t v8; // 0x403b27
    int32_t v9 = v8 | v3 & 255; // 0x403b2c
    int32_t v10; // 0x403b27
    int32_t v11 = v9 | v10 & -256; // 0x403b2e
    uint32_t v12; // 0x403b27
    *(char *)(v11 + 8) = (char)v12;
    char * v13 = (char *)v11; // 0x403b35
    *v13 = *v13 + (char)v9;
    *(char *)v6 = *(char *)v7;
    int32_t v14 = v7 + v2; // 0x403b39
    int32_t v15 = v11 - 1; // 0x403b3d
    char * v16 = (char *)v15; // 0x403b40
    char v17 = v15; // 0x403b40
    *v16 = *v16 | v17;
    char * v18 = (char *)(v8 + 0x80196); // 0x403b42
    *v18 = *v18 + (char)v8;
    char * v19 = (char *)(v11 + 6); // 0x403b48
    *v19 = *v19 + (char)(v12 / 256);
    int32_t * v20 = (int32_t *)(v14 + 2100); // 0x403b4b
    uint32_t v21 = *v20; // 0x403b4b
    *(int32_t *)(v2 + 4 + v6) = v21;
    *v16 = *v16 + v17;
    uint32_t result = *(int32_t *)(v14 + 2096); // 0x403b5a
    int32_t v22 = *v20; // 0x403b60
    int32_t v23 = *(int32_t *)(4 * result - 64 + *(int32_t *)(v22 + 2147)); // 0x403b6e
    if (v22 < v23 + (int32_t)(v21 < result)) {
        // 0x403b74
        return result;
    }
    // 0x403c2a
    return (int32_t)*(char *)0x45c71055;
}

// Address range: 0x403c33 - 0x403c60
int32_t function_403c33(void) {
    // 0x403c33
    int32_t v1; // 0x403c33
    *(char *)v1 = 2 * (char)v1;
    int32_t v2; // 0x403c33
    int32_t result = unknown_644061d3(v1, v2); // 0x403c3c
    int32_t v3; // 0x403c33
    *(char *)v3 = __asm_insb((int16_t)v3);
    *(int32_t *)(*(int32_t *)(result + 4) + 8) = 0x5a00;
    return result;
}

// Address range: 0x403ca9 - 0x403ecb
int32_t function_403ca9(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = a1;
    int32_t v2; // 0x403ca9
    char * v3 = (char *)(v2 + 0xafd57fe); // 0x403ca9
    int32_t v4; // 0x403ca9
    *v3 = *v3 + (char)v4;
    int32_t v5; // 0x403ca9
    *(char *)v5 = *(char *)&v5 + (char)v2;
    int64_t v6; // 0x403ca9
    int64_t v7; // 0x403ca9
    __asm_paddsb(v7, v6);
    uint32_t v8; // 0x403ca9
    int32_t v9 = v8 & -256; // 0x403cd1
    int32_t v10 = v9 | 4; // 0x403cd1
    uint32_t v11 = 0x5bc840f * *(int32_t *)(*(int32_t *)0x41000afc - 0x17f0000); // 0x403cd3
    char * v12 = (char *)v11; // 0x403cd9
    unsigned char v13 = (char)v11; // 0x403cd9
    *v12 = *v12 + v13;
    int32_t v14; // 0x403ca9
    int32_t v15 = v14 - 1; // 0x403cdb
    if (v15 != 0) {
        char * v16 = (char *)(v10 - 0x53977640); // 0x403d61
        *v16 = *v16 + v13;
        int32_t chars_printed = fprintf((struct _IO_FILE *)(v11 & -0x10000 | (int32_t)(v13 % 64) | 256 * (int32_t)(v13 / 64)), (char *)&g70); // 0x403d6b
        return chars_printed;
    }
    int32_t v17 = v2 - 0x501567e; // 0x403ce4
    *(int32_t *)v2 = v17;
    int32_t v18; // 0x403ca9
    if (v17 == 0) {
        char * v19 = (char *)(v14 + 65); // 0x403cf1
        *v19 = *v19 + (char)(v11 / 256);
        *(int32_t *)0x4198b4 = *(int32_t *)(v18 + 87);
        int32_t result = function_403a90(); // 0x403cfa
        int32_t * v20 = (int32_t *)v10; // 0x403cff
        *v20 = *v20 & 37;
        return result;
    }
    uint32_t v21 = v5; // 0x403d09
    if (v18 != v21) {
        int32_t v22 = *(int32_t *)0x6e4102c8; // 0x403d0d
        int32_t v23 = v22 + 1; // 0x403d18
        *(int32_t *)0x860221 = v23;
        if (g16 == v21) {
            int32_t * v24 = (int32_t *)(v23 + 8 * v15); // 0x403d7c
            uint32_t v25 = *v24; // 0x403d7c
            *v24 = v25 / 512 | 0x800000 * v25;
            return 256 * (int32_t)((char)(v21 / 256) / 8) | v21 & -0xff01;
        }
        // 0x403d23
        g29 = (char)*(int32_t *)0x1402b8 + 1;
        unknown_3f4e90();
        int32_t v26 = *(int32_t *)0x41482a; // 0x403d36
        unsigned char v27 = (char)v26; // 0x403d3e
        int32_t v28; // 0x403ca9
        if ((v27 & 14) > 9) {
            v28 = (v27 > 153 ? 102 : 6) + v26 & 255 | v26 & -256;
        } else {
            v28 = (v27 > 153 ? v26 + 96 : v26) & 255 | v26 & -256;
        }
        uint32_t result2 = v28 & 0x5888c0f; // 0x403d40
        char * v29 = (char *)(v22 + 0x5a958d57); // 0x403d45
        *v29 = *v29 + (char)(result2 / 256);
        return result2;
    }
    // 0x403d8c
    *(char *)0xc90294 = *(char *)0xc90294 | -16;
    uint32_t v30 = g23 + v2; // 0x403d98
    int32_t v31 = v18 - 0x2cc4cb10 + (int32_t)(v30 < g23); // 0x403d9a
    *(int32_t *)-0x17befd70 = v30;
    g24 = v31;
    int32_t v32 = *(int32_t *)(v18 + 12); // 0x403da8
    int32_t v33; // 0x403ca9
    int32_t v34; // 0x403ca9
    int32_t v35; // 0x403ca9
    if (v31 == v35) {
        // 0x403daf
        *(int32_t *)(v10 + 2120) = unknown_6d6a00();
        *(int32_t *)(v10 + 2124) = v31;
        v33 = v5;
        v34 = *(int32_t *)(v32 + 119);
    }
    int32_t * v36 = (int32_t *)(v10 + 12); // 0x403dc3
    int32_t v37 = *v36 + v34; // 0x403dcc
    *v36 = v37;
    if (*(int32_t *)(v10 + 0x820828) != v33) {
        function_464099();
    }
    int32_t v38 = *(int32_t *)(v32 - 0x68fff7ec); // 0x403dd9
    int32_t v39 = 2047 - v30; // 0x403de4
    *(int32_t *)(v38 + 40) = 4;
    *(int32_t *)(v38 + 21) = v39;
    *(int32_t *)-0x6c060bb3 = v39;
    char * v40 = (char *)v34; // 0x403df9
    *v40 = *v40 & (char)v37;
    char * v41 = (char *)v39; // 0x403dfb
    char v42 = *v41; // 0x403dfb
    char v43 = v39; // 0x403dfb
    *v41 = v42 + v43;
    bool v44 = (v39 & 14) > 9 | (v42 & 15) + (v43 & 15) > 15; // 0x403dff
    int32_t v45 = v44 ? v39 + 6 : v39; // 0x403dff
    *(char *)(v37 + (v9 | 36)) = (char)(v8 / 256);
    int32_t v46 = v5;
    *(int32_t *)v46 = 4 * v46;
    __asm_rep_movsd_memcpy((char *)v5, (char *)v30, v39);
    int32_t v47 = *(int32_t *)(v38 - 13); // 0x403e11
    int32_t v48 = (v45 & 15 | v39 & -0x10000 | 256 * (int32_t)v44 + v39 & 0xff00) - v47; // 0x403e17
    unsigned char v49 = (char)v48; // 0x403e19
    int32_t v50 = v49 < 164 ? v48 : v48 + 92; // 0x403e19
    *(int32_t *)(v38 + 71) = v50 & 255 | v48 & -0x10000 | 256 * (int32_t)(v49 > 163);
    bool v51; // 0x403ca9
    int32_t v52 = 2 * (v5 + v39 * (v51 ? -4 : 4)); // 0x403e24
    *(int32_t *)-0x59ff60c0 = v52;
    *(char *)(v52 - 0x59ffa6c0) = 0;
    uint32_t v53 = *(int32_t *)0x419058; // 0x403e33
    char v54 = *(char *)(2 * v47 - 115); // 0x403e3a
    int32_t result3 = unknown_3bc98d47((256 * (int32_t)(v54 + 89) | -0x59ffffe0) + 33, 0xa3e8f3, "LOG: header received:\n%s\n"); // 0x403e5e
    *(int32_t *)(v38 - 9) = result3;
    char * v55 = (char *)(result3 - 76); // 0x403e6d
    *v55 = *v55 + (char)(v53 / 256);
    if (&v1 < (int32_t *)1) {
        char * v56 = (char *)v47; // 0x403ec1
        unsigned char v57 = *v56 - 123; // 0x403ec1
        *v56 = v57 / 128 | 2 * v57;
        return result3;
    }
    // 0x403e7b
    *(int32_t *)(v38 - 17) = 0x9502;
    int32_t v58 = result3; // 0x403e85
    int32_t v59 = v53; // 0x403e85
    if (result3 == 0) {
        // 0x403e87
        v58 = result3 & -256 | (int32_t)__asm_in_4((int16_t)v47);
        *(int32_t *)(v38 - 1) = v58;
        v59 = v53 / 32 & 1792 | v53 & -0xff01;
    }
    int32_t v60 = v59;
    int32_t v61 = v58 - 0x5effffb7; // 0x403e8e
    int32_t result4 = v38 - 2; // 0x403e9e
    int32_t v62 = (256 * v61 + v60 & 0xff00 | v60 & -0xff01) - 1; // 0x403e9f
    if (v62 == 0) {
        // 0x403ea1
        return result4;
    }
    char * v63 = (char *)result4; // 0x403ea2
    *v63 = *v63 + (char)result4;
    *(int32_t *)((v61 & -256 | v58 + 214 & 255) - 62) = v62;
    return result4;
}

// Address range: 0x403ee8 - 0x403eea
int32_t function_403ee8(void) {
    // 0x403ee8
    int32_t result; // 0x403ee8
    return result;
}

// Address range: 0x403eec - 0x403ef3
int32_t function_403eec(void) {
    // 0x403eec
    return function_4040bb((int32_t)&g70);
}

// Address range: 0x403ef3 - 0x403efb
int32_t function_403ef3(void) {
    // 0x403ef3
    return g28;
}

// Address range: 0x403efb - 0x40403d
int32_t function_403efb(void) {
    // 0x403efb
    uint32_t v1; // 0x403efb
    int32_t v2; // 0x403efb
    int32_t v3 = *(int32_t *)(v1 - 60 + 4 * v2); // bp-12, 0x403f02
    int32_t v4; // 0x403efb
    char * v5 = (char *)(v4 + 0x7bb313e0); // 0x403f06
    *v5 = *v5 | (char)(v1 / 256);
    int32_t * v6 = &v3; // 0x403f0e
    int32_t v7; // 0x403efb
    if (v2 != 0) {
        int32_t * v8 = (int32_t *)(v4 - 53); // 0x403f13
        *v8 = *v8 ^ -128;
        uint32_t v9 = v4 & 0xff00 & v2 | v4 & -0xff01;
        int32_t v10; // 0x403efb
        uint32_t v11 = v10 & -256 | (int32_t)*(char *)(v2 + 8);
        int32_t v12; // 0x403efb
        int32_t v13 = v12 + 120; // 0x403f1a
        int32_t v14 = v12 & -256; // 0x403f1a
        int32_t v15 = v13 & 255 | v14; // 0x403f1a
        char v16 = *(char *)(v9 + 0x40420148); // 0x403f1c
        int32_t v17 = v11 & -256 | (int32_t)(v16 | (char)v11); // 0x403f1c
        int32_t v18 = v9 - 1; // 0x403f24
        while (v9 > 1) {
            // 0x403f8e
            if ((v9 & -v9) >= 0) {
                char v19 = (char)v13 - 48; // 0x403f93
                char v20 = *(char *)v17; // 0x403f93
                char v21 = v20 + v19; // 0x403f93
                int32_t v22; // 0x403efb
                if (v21 < 0 == ((v21 ^ v19) & (v21 ^ v20)) < 0) {
                    // 0x403fba
                    int32_t v23; // 0x403efb
                    v22 = unknown_cb000000("WARNING: Response code not 2xx (%s)\n", v23 + 8);
                    return v22 & -256 | (int32_t)((char)v22 / 2);
                }
                // 0x403fba
                v22 = v14 | (int32_t)v21;
                return v22 & -256 | (int32_t)((char)v22 / 2);
            }
            v9 = v18;
            v11 = v17;
            v13 = v15 + 120;
            v14 = v15 & -256;
            v15 = v13 & 255 | v14;
            v16 = *(char *)(v9 + 0x40420148);
            v17 = v11 & -256 | (int32_t)(v16 | (char)v11);
            v18 = v9 - 1;
        }
        // 0x403f27
        *(char *)v18 = 31;
        v7 = v15;
        int32_t v24; // bp+33, 0x403efb
        v6 = &v24;
        if (v15 == 0) {
            int32_t v25 = __asm_int1() | (int32_t)"500"; // 0x403f72
            __asm_out_1(8, v25);
            char v26 = __asm_in_4(0); // 0x403f7d
            char v27 = *(char *)(v17 + 88); // 0x403f7e
            char v28 = *(char *)(256 * (int32_t)(v27 ^ (char)(v11 / 256)) | v17 & -0xff01); // 0x403f81
            return (v25 | (int32_t)v26) & -256 | (int32_t)(v28 + v26);
        }
    }
    // 0x403f3d
    int32_t v29; // 0x403efb
    __asm_arpl_5((int16_t)v29);
    uint32_t v30 = *(int32_t *)-126; // 0x403f45
    *(int32_t *)-126 = v30 / 2 | 0x80000000 * v30;
    char * v31 = (char *)(v29 + 0x1b01); // 0x403fc1
    char v32 = *v31; // 0x403fc1
    *v31 = v32 - 1;
    *(char *)-1 = 0;
    int32_t v33 = v32 == 0 ? 0 : 255; // 0x403fcf
    int32_t v34 = *(int32_t *)0x4d9a68 & -256 | v33; // 0x403fcf
    char * v35 = (char *)v34; // 0x403fd5
    *v35 = *v35 + (char)v33;
    int32_t v36 = v1 - v34; // 0x403fd7
    int32_t v37 = unknown_ffae400e(); // 0x403fd9
    int32_t v38 = v37 & -256 | (int32_t)*(char *)((v37 & 255) + v36); // 0x403fde
    int128_t v39; // 0x403efb
    __asm_minps(v39, *(int128_t *)(v38 - 24));
    int32_t v40 = v38 + 1; // 0x403fe9
    char * v41 = (char *)(v29 - 1); // 0x403fea
    *v41 = *v41 + (char)v7;
    unsigned char v42 = *(char *)((v40 & 255) + v36); // 0x403fed
    int32_t * v43 = (int32_t *)v7; // 0x403fee
    *v43 = *v43 | 8;
    __asm_bound(*(int64_t *)((v40 & -256 | (int32_t)v42) - 92));
    int32_t v44 = unknown_abc3c(); // 0x403ff7
    int32_t v45 = v44 & -256 | (int32_t)*(char *)((v44 & 255) + v36); // 0x403ffc
    int32_t v46 = v45; // 0x404004
    if (v45 == 0) {
        int32_t v47 = (int32_t)v6;
        *(int32_t *)(v47 + 12) = 0x40ac58;
        *(int32_t *)(v47 + 4) = *(int32_t *)(2 * v45);
        v46 = v45 + 1;
    }
    char * v48 = (char *)(v36 + 2174); // 0x40401b
    char v49 = v46; // 0x40401b
    *v48 = *v48 - v49;
    char * v50 = (char *)v46; // 0x404022
    *v50 = *v50 + v49;
    char v51 = v46 / 256; // 0x404024
    *(char *)-0x53befda1 = *(char *)-0x53befda1 + v51;
    if (v51 >= 0) {
        function_ff92506d();
    }
    // 0x404033
    return function_40403f((int32_t)&g70);
}

// Address range: 0x40403d - 0x40403f
int32_t function_40403d(void) {
    // 0x40403d
    __asm_int(192);
    int32_t result; // 0x40403d
    return result;
}

// Address range: 0x40403f - 0x40404a
int32_t function_40403f(int32_t a1) {
    // 0x40403f
    return function_404052();
}

// Address range: 0x40404b - 0x404052
int32_t function_40404b(void) {
    // 0x40404b
    int32_t v1; // 0x40404b
    int32_t v2; // 0x40404b
    *(char *)v1 = (char)v2 + (char)v1;
    int32_t result; // 0x40404b
    int32_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x404052 - 0x404099
int32_t function_404052(void) {
    // 0x404052
    int32_t v1; // 0x404052
    bool v2; // 0x404052
    int32_t v3 = v1 - (int32_t)v2; // 0x404052
    int32_t v4 = v3 & 255 | v1 & -256; // 0x404052
    char * v5 = (char *)v4; // 0x404054
    *v5 = *v5 + (char)v3;
    int32_t v6; // 0x404052
    char * v7 = (char *)(v6 + 0x758bfc45); // 0x404056
    int32_t v8; // 0x404052
    *v7 = *v7 + (char)v8;
    int32_t v9; // 0x404052
    int32_t v10; // 0x404052
    __asm_outsd((int16_t)*(int32_t *)(v10 - 12), v9);
    int32_t v11 = v4 & v9 | 0x41f803; // 0x40407e
    unsigned char v12 = (char)v11; // 0x404089
    unsigned char v13 = *(char *)*(int32_t *)(v10 - 16) + v12; // 0x404089
    return (v11 & -256 | (int32_t)v13) + (int32_t)(v13 < v12);
}

// Address range: 0x4040bb - 0x40429e
int32_t function_4040bb(int32_t a1) {
    int32_t v1 = a1;
    int32_t v2; // 0x4040bb
    int32_t v3; // 0x4040bb
    if (*(int32_t *)(v3 + 0x1f000824) == v2) {
        function_6b4297();
    }
    int32_t v4 = *(int32_t *)(v3 + 73); // 0x4040c7
    uint32_t v5 = *(int32_t *)(v2 + 0xfc13b1c); // 0x4040ca
    char * v6 = (char *)v4; // 0x4040d3
    *v6 = *v6 + (char)v4;
    int32_t v7; // 0x4040bb
    int32_t * v8 = (int32_t *)(v7 + 0x2b4a3ac); // 0x4040db
    int32_t v9; // 0x4040bb
    *v8 = *v8 ^ v9;
    char * v10 = (char *)(v9 + 11); // 0x4040e2
    unsigned char v11 = *v10; // 0x4040e2
    *v10 = v11 - 46;
    __asm_in_4(-0x2d2a);
    int32_t v12 = v1; // 0x4040e6
    int32_t v13; // 0x4040bb
    char * v14 = (char *)(v13 + 0x41028c0e); // 0x4040e7
    *v14 = (char)v13 + 1 + (char)(v11 > 45) + *v14;
    char * v15 = (char *)(v2 + 0x10538b23); // 0x4040ed
    *v15 = *v15 + (char)(v5 / 256);
    if (*(int32_t *)v5 != -57) {
        uint32_t v16 = *(int32_t *)-0x76befd40 + 1; // 0x404108
        *(int32_t *)(v7 - 72) = 0x41d2d6;
        char v17 = *(char *)v16; // 0x40410c
        g30 = 256 * (int32_t)(v17 + (char)(v16 / 256)) | v16 & -0xff01;
    }
    uint32_t v18 = *(int32_t *)-0x7be5654; // 0x404114
    int32_t v19 = 0x6f74206e; // 0x404119
    while (v18 < v19) {
        // 0x404127
        if (v18 >= v19) {
            int32_t v20 = v19 + 32 * v7; // 0x404132
            int32_t v21 = *(int32_t *)-0x6ebefd50; // 0x404134
            int32_t v22 = v21 + 1; // 0x40413b
            g34 = v18 + 1;
            *(int32_t *)0x684d0231 = v22;
            *(int32_t *)(v5 - 0x42fff70b) = unknown_30ec69ee();
            int32_t v23 = *(int32_t *)(v5 + 2096); // 0x404152
            *(int32_t *)v20 = v5;
            char * v24 = (char *)v23; // 0x40415a
            char v25 = v23; // 0x40415a
            *v24 = *v24 | v25;
            char * v26 = (char *)(v21 + 0x128b8b07); // 0x40415d
            *v26 = *v26 + (char)v22;
            *v24 = *v24 | v25;
            *(int32_t *)(v20 - 79) = v22;
            __asm_bound(*(int64_t *)(v5 + 2104));
            int32_t v27 = *(int32_t *)(v5 + 0x6f30); // 0x40416f
            int32_t result = v5 ^ 8; // 0x404177
            char * v28 = (char *)(v12 + 0x20838bc8 + v27); // 0x404179
            char v29 = result; // 0x404179
            *v28 = *v28 + v29;
            char * v30 = (char *)result; // 0x404180
            *v30 = *v30 | v29;
            char * v31 = (char *)v27; // 0x404182
            *v31 = *v31 + (char)v27;
            return result;
        }
    }
    // 0x40423a
    __asm_int3();
    uint32_t v32 = unknown_3840e000(); // 0x404255
    *(int32_t *)0x940ba0 = v32;
    *(char *)v2 = (char)v7;
    int32_t v33 = *(int32_t *)-0x4bef45c; // 0x40426b
    *(int32_t *)-0x22ffef3e = v33;
    unsigned char v34 = *(char *)-0x76ff6df5; // 0x404279
    char * v35 = (char *)(v32 & -256 | (int32_t)v34); // 0x404280
    *v35 = *v35 | v34;
    char * v36 = (char *)(v33 + (int32_t)&g50); // 0x404282
    *v36 = *v36 + (char)(v32 / 256);
    *(int32_t *)((*(int32_t *)0x41d2d2 | (int32_t)&v1) - 4) = 2199;
    *(int32_t *)(v12 + 0x5a34) = v12;
    unknown_5b401ea0();
    return __asm_in_2(93);
}

// Address range: 0x40429f - 0x4042b9
int32_t function_40429f(void) {
    // 0x40429f
    int32_t v1; // 0x40429f
    int32_t * v2 = (int32_t *)(v1 - 0x2abefd78); // 0x40429f
    int32_t v3; // 0x40429f
    *v2 = *v2 | v3;
    int32_t v4; // 0x40429f
    return function_566800f0(v4);
}

// Address range: 0x4042b9 - 0x4042d2
int32_t function_4042b9(void) {
    // 0x4042b9
    int32_t v1; // 0x4042b9
    int32_t v2; // 0x4042b9
    char * v3 = (char *)(v1 + 0x40ea6868 + 8 * v2); // 0x4042b9
    int32_t v4; // 0x4042b9
    *v3 = *v3 + (char)v4;
    uint32_t v5; // 0x4042b9
    unsigned char v6 = (char)(v5 / 256); // 0x4042c0
    return (-1 - v6 < v6 ? 255 : 0) | v4 & -256;
}

// Address range: 0x4042d2 - 0x4042d6
int32_t function_4042d2(void) {
    // 0x4042d2
    int32_t result; // 0x4042d2
    return result;
}

// Address range: 0x4042d8 - 0x4042df
int32_t function_4042d8(void) {
    // 0x4042d8
    return function_d6580034();
}

// Address range: 0x4042df - 0x4042e6
int32_t function_4042df(void) {
    // 0x4042df
    return function_16260077();
}

// Address range: 0x4042e9 - 0x4042ee
int32_t function_4042e9(void) {
    // 0x4042e9
    return function_d73f432e();
}

// Address range: 0x4042f0 - 0x4042f5
int32_t function_4042f0(void) {
    // 0x4042f0
    return function_d73f4335();
}

// Address range: 0x4042f7 - 0x4042fc
int32_t function_4042f7(void) {
    // 0x4042f7
    return function_d73f50fd();
}

// Address range: 0x4042fe - 0x404303
int32_t function_4042fe(void) {
    // 0x4042fe
    return function_d73f4343();
}

// Address range: 0x404305 - 0x404308
int32_t function_404305(void) {
    // 0x404305
    int32_t v1; // 0x404305
    bool v2; // 0x404305
    return v1 - (v2 ? 140 : 139) & 255 | v1 & -256;
}

// Address range: 0x404342 - 0x404352
int32_t function_404342(void) {
    // 0x404342
    int32_t v1; // 0x404342
    *(char *)v1 = -1;
    int32_t result = v1 + 1; // 0x404348
    int32_t v2; // 0x404342
    char * v3 = (char *)(v2 - 0xafbf40); // 0x404349
    *v3 = *v3 + (char)result;
    return result;
}

// Address range: 0x40436d - 0x404370
int32_t function_40436d(void) {
    // 0x40436d
    int32_t result; // 0x40436d
    return result;
}

// Address range: 0x404385 - 0x404504
int32_t function_404385(uint32_t a1, int32_t a2) {
    // 0x404385
    int32_t v1; // 0x404385
    char * v2 = (char *)(v1 - 0x39823f); // 0x40438c
    int32_t v3; // 0x404385
    *v2 = *v2 + (char)v3;
    int32_t v4 = *(int32_t *)0x40c0e4; // 0x4043a4
    char * v5 = (char *)(v4 + 82); // 0x4043bd
    *v5 = -*v5;
    char * v6 = (char *)(a1 - 0xaebf3f); // 0x4043c1
    *v6 = (char)v4 + 99 + *v6;
    __asm_iretd();
    int32_t v7 = *(int32_t *)0x40c0c8;
    int32_t * v8 = (int32_t *)a1; // 0x404426
    uint32_t v9 = *v8; // 0x404426
    *v8 = v9 + 64;
    int32_t v10 = v9 > 0xffffffbf ? 255 : 0; // 0x40442b
    uint32_t v11 = *(int32_t *)0x3540c0c8; // 0x40442c
    int32_t v12 = v11 + 74 - (v10 | v7 - 75 & -256) + (int32_t)(v11 > 0xffffffb5); // 0x404438
    __asm_in_4((int16_t)v12);
    char * v13 = (char *)(v12 + 118); // 0x40443c
    *v13 = *v13 + (char)v12;
    int32_t v14 = *(int32_t *)0xf6b2c8; // 0x404450
    int32_t v15; // 0x404385
    bool v16; // 0x404385
    uint32_t v17 = (v16 ? -1 : 1) + v15; // 0x40445e
    uint32_t v18 = *(int32_t *)0x93c0c8; // 0x404461
    int32_t v19 = v18 > 22; // 0x404470
    uint32_t v20 = v18 - 23 + v19; // 0x404470
    int32_t v21 = v17 - v20; // 0x404470
    bool v22 = v18 > 22 ? v20 != -1 | v17 < v21 - v19 : v17 < v20; // 0x404470
    int32_t v23 = *v8; // 0x404482
    int32_t v24; // bp+48, 0x404385
    int32_t v25 = &v24; // bp-16524, 0x404484
    int32_t * v26 = (int32_t *)(v23 + 64); // 0x40448d
    *v26 = *v26 + 78 + (int32_t)v22;
    int32_t v27 = *(int32_t *)0x2a40c0c8 + 64; // 0x40449e
    int32_t v28 = *(int32_t *)0x40c0c8 + 64; // 0x4044ae
    int32_t v29 = v28; // bp+4256, 0x4044b1
    int32_t * v30 = (int32_t *)((int32_t)&v29 + 13 + (int32_t)&v25); // 0x4044b2
    *v30 = *v30 + 1;
    char v31 = __asm_in_4((int16_t)v27); // 0x4044c2
    char * v32 = (char *)(v14 + 127); // 0x4044c4
    unsigned char v33 = *v32; // 0x4044c4
    unsigned char v34 = v33 + (char)v27; // 0x4044c4
    *v32 = v34;
    int32_t v35 = v34 < v33 ? 255 : 0; // 0x4044c7
    uint32_t v36 = v14 + 192; // 0x4044d3
    int32_t * v37 = (int32_t *)v36; // 0x4044d3
    uint32_t v38 = *v37; // 0x4044d3
    *v37 = v38 + 82;
    int32_t v39 = ((v28 & -256 | (int32_t)v31) + 1 & -256 | v35) - 0x8bf3f38 + (int32_t)(v38 > 0xffffffad); // 0x4044d9
    __asm_out_1(164, v39);
    int32_t v40 = (v39 & -256 | (int32_t)__asm_in_4((int16_t)*(int32_t *)0x40c0c8)) + 1; // 0x4044e1
    char * v41 = (char *)v40; // 0x4044e2
    *v41 = *v41 + (char)(a1 / 256);
    uint32_t v42 = *(int32_t *)v21; // 0x4044e8
    uint32_t v43 = *(int32_t *)v23; // 0x4044e8
    int32_t v44 = *(int32_t *)-0x37bf3f38; // 0x4044e9
    *(int32_t *)-0x37bf3f38 = -128 - v14 + v44 + (int32_t)(v42 < v43);
    char * v45 = (char *)((v40 & -256 | (v36 < v14 + 128 ? 255 : 0)) - 107); // 0x4044ff
    *v45 = *v45 + (char)(v36 / 256);
    return function_404544(v36, 0x49ec40);
}

// Address range: 0x404504 - 0x40450c
int32_t function_404504(void) {
    // 0x404504
    int32_t v1; // 0x404504
    char * v2 = (char *)(v1 + 0x3a5240c2); // 0x404504
    unsigned char v3 = *v2; // 0x404504
    int32_t v4; // 0x404504
    unsigned char v5 = v3 + (char)v4; // 0x404504
    *v2 = v5;
    return (v5 < v3 ? 255 : 0) | v4 & -256;
}

// Address range: 0x40450e - 0x404514
int32_t function_40450e(void) {
    // 0x40450e
    int32_t v1; // 0x40450e
    char * v2 = (char *)(v1 - 79); // 0x40450f
    uint32_t v3; // 0x40450e
    *v2 = *v2 + (char)(v3 / 256);
    return v1 + 1;
}

// Address range: 0x404520 - 0x404525
int32_t function_404520(void) {
    // 0x404520
    int32_t v1; // 0x404520
    char * v2 = (char *)(v1 + 112); // 0x404520
    uint32_t v3; // 0x404520
    *v2 = *v2 + (char)(v3 / 256);
    return function_404565();
}

// Address range: 0x404530 - 0x404536
int32_t function_404530(void) {
    // 0x404530
    int32_t v1; // 0x404530
    char * v2 = (char *)(v1 + 53); // 0x404531
    uint32_t v3; // 0x404530
    *v2 = *v2 + (char)(v3 / 256);
    return v1 + 1;
}

// Address range: 0x404538 - 0x40453b
int32_t function_404538(void) {
    // 0x404538
    int32_t result; // 0x404538
    return result;
}

// Address range: 0x404544 - 0x40455b
int32_t function_404544(int32_t a1, int32_t a2) {
    // 0x404544
    int32_t v1; // 0x404544
    int32_t v2; // 0x404544
    __asm_out_3((int16_t)v1, v2);
    int32_t v3; // 0x404544
    int32_t * v4 = (int32_t *)(v3 - 0x150b9722); // 0x404545
    *v4 = *v4 | 64;
    char * v5 = (char *)(v2 - 1); // 0x40454c
    *v5 = *v5 + (char)v1;
    exit(105);
    // UNREACHABLE
}

// Address range: 0x404565 - 0x404590
int32_t function_404565(void) {
    // 0x404565
    uint32_t v1; // 0x404565
    uint32_t v2 = v1 & 31; // 0x404567
    if (v2 != 0) {
        int32_t v3; // 0x404565
        int32_t v4; // 0x404565
        int32_t * v5 = (int32_t *)(v4 & -256 | (int32_t)*(char *)((v4 & 255) + v3)); // 0x404567
        uint32_t v6 = *v5; // 0x404567
        *v5 = v6 >> 32 - v2 | v6 << v2;
    }
    int32_t v7; // 0x404565
    char * v8 = (char *)*(int32_t *)(v7 - 22); // 0x40457a
    *v8 = *v8 + (char)(v1 / 256);
    return 0x10000 * __asm_sti() / 0x10000;
}

// Address range: 0x404591 - 0x4045aa
int32_t function_404591(void) {
    // 0x404591
    int32_t v1; // 0x404591
    *(char *)v1 = 2 * (char)v1;
    int32_t v2; // 0x404591
    int32_t v3; // 0x404591
    bool v4; // 0x404591
    char * v5 = (char *)(v2 - 1 + v3 + (int32_t)v4); // 0x404595
    unsigned char v6 = *v5; // 0x404595
    uint32_t v7; // 0x404591
    unsigned char v8 = v6 + (char)(v7 / 256); // 0x404595
    *v5 = v8;
    return (v8 < v6 ? 0 : 255) | v1 & -256;
}

// Address range: 0x4045ac - 0x4045ad
int32_t function_4045ac(void) {
    // 0x4045ac
    int32_t result; // 0x4045ac
    return result;
}

// Address range: 0x4045e1 - 0x4045e6
int32_t function_4045e1(void) {
    // 0x4045e1
    return function_8be63ae8();
}

// Address range: 0x4045e6 - 0x4045e9
int32_t function_4045e6(int32_t a1) {
    // 0x4045e6
    int32_t result; // 0x4045e6
    return result;
}

// Address range: 0x4045ee - 0x404705
int32_t function_4045ee(void) {
    // 0x4045ee
    int32_t v1; // 0x4045ee
    char * v2 = (char *)(v1 - 0x3934d438); // 0x4045ee
    int32_t v3; // 0x4045ee
    *v2 = *v2 | (char)v3;
    int32_t v4; // 0x4045ee
    __asm_into(v4);
    uint32_t v5; // 0x4045ee
    *(int32_t *)v5 = 0;
    int32_t v6; // 0x4045ee
    int32_t * v7 = (int32_t *)(v6 - 0xb9703bb); // 0x4045fe
    *v7 = *v7 - v3;
    int32_t v8 = v3 + 1; // 0x404605
    char * v9 = (char *)(v5 + 104); // 0x404606
    *v9 = *v9 + g67;
    int32_t v10 = v8 + v1; // 0x404609
    unsigned char v11 = *(char *)0x280e; // 0x40460c
    unsigned char v12 = v11 + (char)v5; // 0x40460c
    *(char *)0x280e = v12;
    uint32_t v13 = 2 * v5; // 0x404612
    uint32_t v14 = v13 | (int32_t)(v12 < v11); // 0x404612
    int32_t v15 = v14 + 133 + (int32_t)(v12 < v11 ? v14 <= v5 : v13 < v5); // 0x404614
    char * v16 = (char *)(v15 & 255 | v13 & -256); // 0x404617
    *v16 = *v16 + (char)v15;
    char * v17 = (char *)((v10 & 255 | v8 & -256) + 0x411801); // 0x404619
    *v17 = *v17 + (char)(v5 / 128);
    int32_t v18 = __asm_sti(); // 0x404621
    char * v19 = (char *)v18; // 0x404624
    *v19 = *v19 + (char)v18;
    char * v20 = (char *)(v1 - 0x3f7ae2bb); // 0x404626
    char v21 = (char)v10 + 1 + *v20; // 0x404626
    *v20 = v21;
    if (v21 != 0) {
        function_5c404702();
    }
    uint32_t v22 = (int32_t)g64; // 0x404632
    int32_t v23; // 0x4045ee
    uint32_t v24 = unknown_69ff5850(v22, v23) & -256 | (int32_t)__asm_in_7(23); // 0x404640
    *(int32_t *)0x6be15b90 = v24 - 0x395d00;
    int32_t result = unknown_be9955d0(*(int32_t *)0x41d0b9, "[%s]", *(int32_t *)(v1 + 0x41a100)); // 0x40465e
    int32_t * v25 = (int32_t *)(v6 + 0xb9c9d0c); // 0x404663
    *v25 = *v25 - (v24 < 0x395d00 ? 66 : 65);
    unsigned char v26 = (char)g64; // 0x40466f
    unsigned char v27 = 2 * v26; // 0x40466f
    if (v27 >= v26 && v27 != 0) {
        // 0x404673
        return result;
    }
    // 0x4046a6
    *(int16_t *)&g3 = g64;
    int32_t * v28 = (int32_t *)((v22 & -256 | (int32_t)v27) + 106 + result); // 0x4046ac
    *v28 = *v28 | 1;
    if (g59 == 0) {
        // 0x4046ce
        *(int32_t *)0x6a1a17f4 = 0x5e5f0050;
        g47 = 0x41d3d4;
        return 0;
    }
    int32_t v29 = result & -0x10000 | (int32_t)g59; // 0x4046c3
    __asm_out_1(51, v29);
    unsigned char v30 = v27 & 30; // 0x4046f1
    if (v30 != 0) {
        char * v31 = (char *)(v23 - 117); // 0x4046f1
        *v31 = *v31 << v30;
    }
    char * v32 = (char *)((v22 / 256 + v1 & 255 | v1 & -256) + 76); // 0x4046f4
    unsigned char v33 = *v32; // 0x4046f4
    *v32 = v33 / 2 | 128 * v33;
    int32_t v34 = result >> 31; // 0x4046f7
    char * v35 = (char *)(v34 + 104); // 0x4046f9
    char v36 = v34; // 0x4046f9
    *v35 = *v35 + v36;
    char * v37 = (char *)(v29 - 23); // 0x4046ff
    *v37 = *v37 + v36;
    return v29 + 1;
}

// Address range: 0x404705 - 0x4047d5
int32_t function_404705(int32_t a1, int32_t a2) {
    // 0x404705
    int32_t v1; // 0x404705
    char * v2 = (char *)(v1 - 0x535cf33c); // 0x404705
    unsigned char v3 = *v2; // 0x404705
    int32_t result; // 0x404705
    unsigned char v4 = (char)result; // 0x404705
    unsigned char v5 = v3 + v4; // 0x404705
    *v2 = v5;
    int32_t v6; // 0x404705
    int32_t v7; // 0x404705
    if (v7 < -1) {
        // 0x40470f
        *(char *)(v6 + 94) = -1;
        return result;
    }
    // 0x40473e
    int32_t v8; // 0x404705
    int32_t v9 = *(int32_t *)(v8 + 8); // 0x404740
    bool v10 = v4 > 153 | v5 < v3;
    int32_t result2; // 0x404705
    char v11; // 0x404705
    if ((v7 & 15) == 15 || (v4 & 14) > 9) {
        char v12 = (v10 ? -102 : -6) + v4; // 0x404743
        result2 = result & -256 | (int32_t)v12;
        v11 = v12;
    } else {
        char v13 = v10 ? v4 - 96 : v4; // 0x404743
        result2 = result & -256 | (int32_t)v13;
        v11 = v13;
    }
    if (v10 || v11 == 0) {
        // 0x40473d
        return result2;
    }
    char * v14 = (char *)(v9 + 81); // 0x40474d
    int32_t v15; // 0x404705
    *v14 = *v14 | (char)v15;
    int32_t v16; // 0x404705
    int32_t v17 = unknown_2ee09400(1, 0xa710fff, v6, v16); // 0x404750
    if (v17 != 0) {
        // 0x40475b
        return ((v17 & -256) + 0x5278aa88 & -256 | 15) - 0x5eafffc0;
    }
    int32_t v18 = unknown_7d40b032(v15, -0x7e974e90); // 0x404798
    int32_t v19 = v8 - 120; // 0x4047a2
    int32_t v20 = v19; // bp-34, 0x4047a8
    int32_t * v21 = (int32_t *)v9; // 0x4047ab
    *v21 = *v21 ^ v9;
    int32_t v22 = (int32_t)&v20 | 1; // 0x4047ad
    int32_t * v23 = (int32_t *)((v19 * v19 & -0xff01 | 0x8000 * (int32_t)(v22 < 0) | 1024 * (int32_t)((llvm_ctpop_i8((char)v22) & 1) == 0) | 512) - 46); // 0x4047b8
    uint32_t v24 = *v23; // 0x4047b8
    *v23 = v24 / 1024 | 0x400000 * v24;
    bool v25; // 0x404705
    int32_t result3 = v18 + (v25 ? -4 : 4); // 0x4047c5
    char * v26 = (char *)(result3 - 117); // 0x4047cb
    unsigned char v27 = *v26; // 0x4047cb
    *v26 = v27 + 27;
    char * v28 = (char *)(v8 - 0x1c4ce3); // 0x4047cf
    unsigned char v29 = *v28; // 0x4047cf
    unsigned char v30 = (char)*(int32_t *)0x400ac8 & 31; // 0x4047cf
    if (v30 != 0) {
        *v28 = (char)(v27 < 229) << v30 - 1 | v29 << v30 | (char)((int16_t)v29 >> (int16_t)(9 - v30));
    }
    // 0x40473d
    return result3;
}

// Address range: 0x4047df - 0x404812
int32_t function_4047df(void) {
    // 0x4047df
    uint32_t v1; // 0x4047df
    char * v2 = (char *)(v1 - 0x3b3affc0); // 0x4047df
    char v3 = v1; // 0x4047df
    *v2 = *v2 - v3;
    char v4 = v1 / 256; // 0x4047e7
    int32_t v5; // 0x4047df
    *(char *)v5 = *(char *)&v5 & v4;
    int32_t v6; // 0x4047df
    char * v7 = (char *)(v6 - 0x74dc8ab7); // 0x4047ea
    unsigned char v8 = *v7; // 0x4047ea
    *v7 = v8 + 21;
    unsigned char v9 = (char)v5; // 0x4047fc
    unsigned char v10 = v9 + v3; // 0x4047fc
    bool v11 = v8 > 234 ? v10 + (char)(v8 > 234) <= v9 : v10 < v9; // 0x4047fc
    uint32_t v12 = __asm_sti() + 0x40c180 + (int32_t)v11; // 0x4047ff
    int32_t result = v12 / 256 + v12 & 255 | v12 & -256; // 0x404804
    char * v13 = (char *)(result + 0x90000c); // 0x404806
    *v13 = *v13 | v4;
    return result;
}

// Address range: 0x404812 - 0x4048af
int32_t function_404812(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = *(int32_t *)0x1a410270; // 0x404812
    int32_t v2 = __asm_in_7(0); // 0x404822
    int32_t v3; // 0x404812
    char * v4 = (char *)(v3 - 0x3b09ca10); // 0x404824
    *v4 = *v4 + (char)v1;
    int32_t v5; // 0x404812
    int32_t v6 = (v5 & -256 | v2) - 0x6a88458a; // 0x40482a
    if (v6 >= 0) {
        // 0x404831
        int32_t v7; // 0x404812
        unknown_864086b4(v7);
        fprintf((struct _IO_FILE *)(v1 - 20), (char *)0x60bee0);
        int32_t result; // 0x404812
        return result;
    }
    int32_t * v8 = (int32_t *)v6; // 0x404882
    uint32_t v9 = *v8; // 0x404882
    *v8 = v9 / 0x40000 | 0x4000 * v9;
    char * v10 = (char *)(v3 - 0x2d7a783c); // 0x404886
    unsigned char v11 = *v10; // 0x404886
    *v10 = v11 / 128 | 2 * v11;
    int32_t * v12 = (int32_t *)(v1 + 26); // 0x404898
    *v12 = *v12 / 0x80000;
    char * v13 = (char *)(v3 - 0x76541306); // 0x40489f
    unsigned char v14 = *v13; // 0x40489f
    *v13 = v14 / 4 | 64 * v14;
    return v6 & -256 | v2 + 255 & 255;
}

// Address range: 0x4048b0 - 0x40493d
int32_t function_4048b0(void) {
    // 0x4048b0
    uint16_t v1; // 0x4048b0
    int32_t v2 = v1; // 0x4048b1
    int32_t v3; // 0x4048b0
    char * v4 = (char *)(v3 - 126); // 0x4048b6
    *v4 = -1 - *v4;
    int32_t v5; // 0x4048b0
    int32_t v6 = __asm_in((int16_t)v5) + 20; // 0x4048bf
    int32_t v7; // 0x4048b0
    int32_t v8 = v7 & -256 | 229; // 0x4048c5
    int32_t v9 = *(int32_t *)v6; // 0x4048c7
    int32_t v10; // 0x4048b0
    int32_t v11; // 0x4048b0
    if (v9 != 0) {
        // 0x4048cd
        *(int32_t *)(v2 - 4) = v9;
        int32_t v12 = v9 + v5; // 0x4048d0
        char * v13 = (char *)(v10 - 16); // 0x4048da
        *v13 = 8 * *v13;
        *(char *)(2 * v11 + v8) = 117;
        int32_t result = v12 & -0x10000 | (int32_t)__asm_in_7(-117); // 0x4048e2
        *(int32_t *)(v2 - 12) = result;
        *(int32_t *)(v2 - 20) = v12;
        *(int32_t *)(v2 - 24) = v8;
        *(int32_t *)(v2 - 28) = v2 - 8;
        *(int32_t *)(v2 - 36) = v6;
        *(int32_t *)(v2 - 44) = v12;
        int32_t * v14 = (int32_t *)(v8 + 4); // 0x4048e9
        *v14 = *v14 & 95;
        return result;
    }
    int32_t v15 = v10 + 1; // 0x404914
    char * v16 = (char *)(v8 - 0x3da236c0); // 0x404915
    char v17 = v11; // 0x404915
    *v16 = *v16 | v17;
    unsigned char v18 = *(char *)v6; // 0x40491e
    int32_t v19 = v18; // 0x40491e
    *(int32_t *)(v2 - 4) = v15;
    *(int32_t *)(v2 - 8) = 58;
    char * v20 = (char *)(v8 + 0x41fd8145); // 0x404925
    *v20 = *v20 | v17;
    char * v21 = (char *)(v10 - 61); // 0x40492b
    *v21 = *v21 - 27;
    char * v22 = (char *)v19; // 0x40492e
    *v22 = *v22 | v18;
    *(int32_t *)(v19 - 4) = v15;
    return *(int32_t *)(v19 + 4) & -0xff01 | 0xdf00;
}

// Address range: 0x404945 - 0x404981
int32_t function_404945(void) {
    // 0x404945
    int32_t v1; // 0x404945
    int32_t result = v1 + 1; // 0x404947
    int32_t v2; // 0x404945
    char * v3 = (char *)(v2 - 118); // 0x404948
    unsigned char v4 = *v3; // 0x404948
    int32_t v5; // 0x404945
    unsigned char v6 = v4 + (char)v5; // 0x404948
    *v3 = v6;
    *(char *)&g32 = (char)result;
    if (v6 != 0) {
        // 0x40497b
        return result;
    }
    // 0x40495b
    int32_t v7; // 0x404945
    int32_t * v8 = (int32_t *)(v7 - 0x7a000001); // 0x404960
    *v8 = 2 * *v8 | (int32_t)(v6 < v4);
    return result;
}

// Address range: 0x4049b1 - 0x4049b3
int32_t function_4049b1(void) {
    // 0x4049b1
    return __asm_wait();
}

// Address range: 0x404a05 - 0x404a06
int32_t function_404a05(void) {
    // 0x404a05
    int32_t result; // 0x404a05
    return result;
}

// Address range: 0x404a09 - 0x404a12
int32_t function_404a09(void) {
    // 0x404a09
    int32_t v1; // 0x404a09
    int32_t * v2 = (int32_t *)(v1 - 0x74a13ff2); // 0x404a09
    *v2 = *v2 - 1;
    return __asm_in_2(198);
}

// Address range: 0x404a44 - 0x404a52
int32_t function_404a44(int32_t a1) {
    // 0x404a44
    int32_t result; // 0x404a44
    *(char *)result = 2 * (char)result;
    g33 = 0x29006b;
    return result;
}

// Address range: 0x404a60 - 0x404a61
int32_t function_404a60(int32_t a1) {
    // 0x404a60
    int32_t result; // 0x404a60
    return result;
}

// Address range: 0x404a69 - 0x404cff
int32_t function_404a69(int32_t a1, int32_t a2, int32_t a3) {
    // 0x404a69
    int32_t v1; // 0x404a69
    int32_t v2 = v1 & -8; // 0x404a6f
    int32_t v3; // 0x404a69
    int32_t v4 = *(int32_t *)(v3 + 8) + 1; // 0x404a7e
    int32_t v5; // 0x404a69
    if (v5 == 0) {
        v4 = function_404a05();
    }
    // 0x404a80
    *(char *)0x246840a = (char)v4;
    char * v6 = (char *)(v4 - 0x2f40f396); // 0x404a85
    *v6 = *v6 + (char)v2;
    uint32_t v7 = *(int32_t *)(v2 + 96); // 0x404aa4
    char * v8 = (char *)v2; // 0x404aa7
    unsigned char v9 = *v8; // 0x404aa7
    unsigned char v10 = v9 + (char)(v4 / 256); // 0x404aa7
    uint32_t v11; // 0x404a69
    unsigned char v12 = v10 + (char)(v11 < v7); // 0x404aa7
    *v8 = v12;
    int32_t v13; // 0x404a69
    int32_t * v14 = (int32_t *)(v13 - 119); // 0x404aa9
    *v14 = 0x80000000 * (int32_t)(v11 < v7 ? v12 <= v9 : v10 < v9) | *v14 / 2;
    *(int32_t *)-4 = 0x360008c2;
    return function_5bc1f55e();
}

// Address range: 0x404d0d - 0x404d11
int32_t function_404d0d(void) {
    // 0x404d0d
    int32_t v1; // 0x404d0d
    return v1 + 59 & 255 | v1 & -256;
}

// Address range: 0x404d7a - 0x404d84
int32_t function_404d7a(void) {
    // 0x404d7a
    int32_t v1; // 0x404d7a
    char * v2 = (char *)(v1 + 0x3b0a74c9); // 0x404d7b
    int32_t result; // 0x404d7a
    *v2 = *v2 | (char)result;
    return result;
}

// Address range: 0x404d9b - 0x404d9c
int32_t function_404d9b(void) {
    // 0x404d9b
    int32_t result; // 0x404d9b
    return result;
}

// Address range: 0x404da5 - 0x404da7
int32_t function_404da5(void) {
    // 0x404da5
    return function_404d9b();
}

// Address range: 0x404db5 - 0x404db7
int32_t function_404db5(void) {
    // 0x404db5
    return function_404e15();
}

// Address range: 0x404ddf - 0x404de0
int32_t function_404ddf(void) {
    // 0x404ddf
    int32_t result; // 0x404ddf
    return result;
}

// Address range: 0x404de7 - 0x404dfe
int32_t function_404de7(int32_t a1, int32_t a2, int32_t a3) {
    // 0x404de7
    bool v1; // 0x404de7
    bool v2; // 0x404de7
    bool v3; // 0x404de7
    bool v4; // 0x404de7
    if (!v4 && v3 == v2) {
        // 0x404de9
        int32_t v5; // 0x404de7
        char v6 = llvm_ctpop_i8((char)v5); // 0x404de9
        v1 = (v6 & 1) == 0;
        if (v5 != 0) {
            function_404ddf();
            v1 = (v6 & 1) == 0;
        }
    }
    // 0x404ded
    if (!v1) {
        // 0x404df9
        return __asm_in_2(93);
    }
    // 0x404df5
    int32_t v7; // 0x404de7
    return *(int32_t *)(v7 - 12);
}

// Address range: 0x404e00 - 0x404e01
int32_t function_404e00(int32_t a1) {
    // 0x404e00
    int32_t result; // 0x404e00
    return result;
}

// Address range: 0x404e15 - 0x404e19
int32_t function_404e15(void) {
    // 0x404e15
    int32_t v1; // 0x404e15
    return *(int32_t *)(v1 + 4);
}

// Address range: 0x404e19 - 0x404ea0
int32_t function_404e19(void) {
    // 0x404e19
    int32_t v1; // 0x404e19
    int32_t v2; // 0x404e19
    __asm_outsb((int16_t)v2, (char)v1);
    int32_t v3; // 0x404e19
    int32_t v4 = v3 + 38; // 0x404e1a
    int32_t v5 = v4 & 255 | v3 & -256; // 0x404e1a
    uint32_t v6; // 0x404e19
    int32_t v7 = 256 * (v6 / 0x2000 & 7 | v6 / 32 & 248) | v6 & -0xff01; // 0x404e1c
    char * v8 = (char *)v5; // 0x404e1f
    char v9 = *v8 + 2 * (char)v4; // 0x404e21
    *v8 = v9;
    *(int32_t *)(v7 + 60) = 0;
    if (v9 != 0) {
        // 0x404e2c
        function_404e00(v5);
        return *(int32_t *)(v7 + 89);
    }
    // 0x404e39
    unknown_a4056f0(v7 + 16);
    uint32_t v10 = __asm_in_2(8); // 0x404e47
    char * v11 = (char *)v10; // 0x404e49
    *v11 = *v11 + (char)v10;
    uint32_t v12 = __readfsdword(v7 - 0x3f7afa3c) + v10; // 0x404e4b
    char v13; // 0x404e19
    int32_t v14; // 0x404e19
    int32_t v15; // 0x404e19
    if (v12 == 0) {
        // 0x404e39
        v13 = v2;
        v14 = 0;
        v15 = v7;
    } else {
        char * v16 = (char *)(v2 - 24); // 0x404e56
        unsigned char v17 = *v16; // 0x404e56
        char v18 = v2;
        char v19 = v12 < v10; // 0x404e56
        unsigned char v20 = v19 + v18; // 0x404e56
        *v16 = v17 - v20;
        if (((char)v12 & 14) > 9 || v19 - (v20 & 15) + (v17 & 15) > 15) {
            // branch ->
        }
        int32_t v21 = v7 & -256; // 0x404e59
        int32_t * v22 = (int32_t *)((v21 | 16) + 0x740a85f0); // 0x404e5c
        *v22 = *v22 - 1;
        uint32_t v23; // 0x404e19
        int32_t v24 = v21 | v23 / 256 + 16 & 255; // 0x404e67
        int32_t v25 = *(int32_t *)(v24 + 12); // 0x404e71
        char * v26 = (char *)(v23 + 0x5cd10c42); // 0x404e7b
        char v27 = *v26 | (char)v23; // 0x404e7b
        *v26 = v27;
        v13 = v18;
        v14 = v25;
        v15 = v24;
        if (v27 != 0) {
            char v28 = v25;
            *(char *)v2 = v28 + v18;
            v13 = v28;
            v15 = v24 & -0xff01 | 0x5400;
        }
    }
    int32_t v29 = v14;
    *(char *)0x7aba217b = *(char *)0x7aba217b ^ v13;
    char * v30 = (char *)(v15 - 0x5b20bfb); // 0x404e96
    *v30 = *v30 + v13;
    return v29 + 199 & 255 | v29 & -256;
}

// Address range: 0x404ea0 - 0x404ee0
int32_t function_404ea0(void) {
    // 0x404ea0
    int32_t v1; // 0x404ea0
    bool v2; // 0x404ea0
    if (v2) {
        // 0x404ea2
        unknown_ffb04900(v1, -122);
    }
    // 0x404eaa
    bool v3; // 0x404ea0
    int32_t v4 = v3 ? -1 : 1; // 0x404eae
    int32_t v5 = v1 + 1 + v4; // 0x404eae
    int32_t v6; // 0x404ea0
    unknown_9cf8a2d0(__asm_in((int16_t)v6) & -256);
    int32_t v7; // 0x404ea0
    unsigned char v8 = (char)v7 & 31; // 0x404ebc
    if (v8 != 0) {
        char * v9 = (char *)v5; // 0x404ebc
        unsigned char v10 = *v9; // 0x404ebc
        *v9 = v10 >> v8 | v10 << 8 - v8;
    }
    int32_t v11; // 0x404ea0
    *(int32_t *)(v11 - 8) = *(int32_t *)(v5 + 4);
    char * v12 = (char *)(v11 + 0xe0a3bc9); // 0x404ed1
    int32_t v13; // 0x404ea0
    *v12 = *v12 | (char)*(int32_t *)(v4 + v13);
    int16_t v14; // 0x404ea0
    return function_404f0f(v14);
}

// Address range: 0x404efb - 0x404efd
int32_t function_404efb(void) {
    // 0x404efb
    return function_404f05();
}

// Address range: 0x404efd - 0x404f05
int32_t function_404efd(void) {
    // 0x404efd
    int32_t result; // 0x404efd
    return result;
}

// Address range: 0x404f05 - 0x404f0a
int32_t function_404f05(void) {
    // 0x404f05
    int32_t v1; // 0x404f05
    return v1 + 43 & 255 | v1 & -256;
}

// Address range: 0x404f0a - 0x404f0b
int32_t function_404f0a(void) {
    // 0x404f0a
    int32_t result; // 0x404f0a
    return result;
}

// Address range: 0x404f0f - 0x404f2c
int32_t function_404f0f(int16_t a1) {
    // 0x404f0f
    int32_t v1; // 0x404f0f
    return v1 + ((a1 & 1) == 0 ? -0x12ffffac : -0x12ffffab);
}

// Address range: 0x404f2e - 0x404f37
int32_t function_404f2e(void) {
    // 0x404f2e
    int32_t v1; // 0x404f2e
    bool v2; // 0x404f2e
    int32_t result = v1 + 139 + (int32_t)v2 & 255 | v1 & -256; // 0x404f2e
    int32_t * v3 = (int32_t *)result; // 0x404f32
    uint32_t v4 = *v3; // 0x404f32
    *v3 = v4 / 0x200000 | 2048 * v4;
    return result;
}

// Address range: 0x404f58 - 0x404f5d
int32_t function_404f58(void) {
    // 0x404f58
    int32_t result; // 0x404f58
    int32_t v1; // 0x404f58
    bool v2; // 0x404f58
    if (v1 != 1 && !v2) {
        result = function_404f0a();
    }
    // 0x404f5a
    return result;
}

// Address range: 0x404f60 - 0x404f61
int32_t function_404f60(int32_t a1, int32_t a2, int32_t a3) {
    // 0x404f60
    int32_t result; // 0x404f60
    return result;
}

// Address range: 0x404f6d - 0x404ffe
int32_t function_404f6d(int32_t a1) {
    // 0x404f6d
    int32_t v1; // 0x404f6d
    char * v2 = (char *)(v1 - 0x7af58a36); // 0x404f80
    int32_t v3; // 0x404f6d
    *v2 = *v2 + ((char)v3 | -35);
    int32_t v4; // 0x404f6d
    unsigned char v5 = *(char *)(v4 - 0x451dca67); // 0x404f88
    char * v6 = (char *)(v4 - 117); // 0x404f8e
    unsigned char v7 = *v6; // 0x404f8e
    int32_t v8; // 0x404f6d
    unsigned char v9 = v7 + (char)v8; // 0x404f8e
    int32_t v10; // 0x404f6d
    unsigned char v11 = v9 + (char)(v5 > (char)v10); // 0x404f8e
    *v6 = v11;
    int32_t v12; // 0x404f6d
    if (v4 == 0) {
        int32_t v13 = v5 > (char)v10 ? v11 <= v7 : v9 < v7 ? 70 : 69; // 0x404f92
        v12 = *(int32_t *)(v3 & -0x41f000 | v13 | 0x41ef18);
    }
    int32_t * v14 = (int32_t *)v12; // 0x404fb7
    uint32_t v15 = *v14; // 0x404fb7
    uint32_t v16 = v12 + 24; // 0x404fb9
    int32_t result; // 0x404ffc
    if (*(int32_t *)(v12 - 64) == 0) {
        if (v15 < 0x6b01) {
            // 0x404fc6
            __asm_int(4);
            return v16 & -256 | v12 + 155 & 255;
        }
        // 0x404fed
        unknown_5ec599d9();
        *v14 = v15;
        result = function_40506d((int32_t)&g70, (int32_t)&g70, (int32_t)&g70);
        return result;
    }
    int32_t * v17 = (int32_t *)(v15 - 0x757af0c8); // 0x404fda
    *v17 = *v17 - 1;
    *(char *)0xfd13b00 = *(char *)0xfd13b00 + (char)(v16 / 256);
    *(char *)-0x74ff9492 = *(char *)-0x74ff9492 + 80;
    // 0x404fed
    unknown_5ec599d9();
    *v14 = v15;
    result = function_40506d((int32_t)&g70, (int32_t)&g70, (int32_t)&g70);
    return result;
}

// Address range: 0x404ffe - 0x40506d
int32_t function_404ffe(void) {
    // 0x404ffe
    int32_t v1; // 0x404ffe
    unsigned char v2 = (char)v1; // 0x405000
    bool v3; // 0x404ffe
    unsigned char v4 = v2 - 115 + (char)v3; // 0x405000
    int32_t result; // 0x404ffe
    if (!((v3 ? v4 <= v2 : v2 > 114))) {
        // 0x405018
        int32_t v5; // 0x404ffe
        char * v6 = (char *)(v5 + 0x390d74f6); // 0x405018
        *v6 = *v6 ^ v4;
        bool v7; // 0x404ffe
        bool v8; // 0x404ffe
        bool v9; // 0x404ffe
        bool v10; // 0x404ffe
        result = v1 & -0x10000 | (int32_t)v4 | 256 * (64 * (int32_t)v10 | 128 * (int32_t)v9 | 16 * (int32_t)v7 | (int32_t)v3 | 4 * (int32_t)v8) | 512;
        // 0x405069
        int32_t v11; // 0x404ffe
        *(int32_t *)result = v11;
        return result;
    }
    if (v4 != 0) {
        // 0x405008
        int32_t v12; // 0x404ffe
        int16_t v13; // 0x404ffe
        unknown_130a2d0(*(int32_t *)(v12 + 13), v13);
        int32_t result2; // 0x404ffe
        return result2;
    }
    // 0x405037
    malloc(0x1000);
    int32_t v14; // 0x404ffe
    if (v14 == 0) {
        // 0x40504f
        function_405328((int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70);
        abort();
        // UNREACHABLE
    }
    int32_t v15 = v14 + 24; // 0x40504f
    *(int32_t *)v14 = 0xa00000;
    if (v14 < 1) {
        // 0x405069
        *(int32_t *)result = v15;
        return result;
    }
    // 0x405061
    *(int32_t *)(v14 + 16) = v15;
    int32_t result3; // 0x404ffe
    return result3;
}

// Address range: 0x40506d - 0x4051f3
int32_t function_40506d(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40506d
    int32_t v1; // 0x40506d
    int32_t v2 = *(int32_t *)(v1 + 13); // 0x405084
    int32_t v3; // 0x40506d
    char v4 = v3; // 0x405087
    unsigned char v5 = v4 & 31; // 0x405087
    int32_t v6 = v2; // 0x405087
    int32_t v7 = 1; // 0x405087
    if (v5 != 0) {
        unsigned char v8 = (char)v2; // 0x405087
        unsigned char v9 = v8 >> 8 - v5 | v8 << v5; // 0x405087
        v6 = v2 & -256 | (int32_t)v9;
        v7 = (v9 & 1) == 0;
    }
    int32_t v10 = unknown_8a40a340(v6); // 0x40508c
    char * v11 = (char *)v10; // 0x405096
    char v12 = v10; // 0x405096
    unsigned char v13 = *v11 + v12; // 0x405096
    char v14 = v13 + v12; // 0x405098
    *v11 = v14;
    if (v14 < 0) {
        // 0x40511d
        *(int32_t *)v3 = v10;
        return 0;
    }
    int32_t v15 = v1 + 1; // 0x405076
    uint32_t v16 = v15 - 256 * (v10 + v7);
    int32_t v17 = v16 & 0xff00 | v15 & -0xff01; // 0x405093
    char * v18 = (char *)(v17 - 0x4603efb3); // 0x40509f
    *v18 = (char)(v14 < v13) + v4 + *v18;
    int32_t v19 = (v10 + 141 & 255 | v10 & -256) + 1; // 0x4050aa
    *(int32_t *)(*(int32_t *)(v1 + 8) + 53) = v19;
    char * v20 = (char *)(v3 + 16); // 0x4050ae
    unsigned char v21 = *v20; // 0x4050ae
    *v20 = v21 - 119;
    char * v22 = (char *)(v17 + 0x77890b5d); // 0x4050b3
    unsigned char v23 = *v22; // 0x4050b3
    char v24 = v21 > 118; // 0x4050b3
    unsigned char v25 = v24 + v4; // 0x4050b3
    char v26 = v23 - v25; // 0x4050b3
    *v22 = v26;
    int32_t v27 = __asm_in_7(-119); // 0x4050b9
    int32_t v28 = v19 & -256 | v27; // 0x4050b9
    if (v26 != 0 && !((v21 > 118 ? v25 != -1 || v23 < v26 - v24 : v23 < v25))) {
        // 0x4050fa
        return v28 & -256 | v27 + 77 & 255;
    }
    // 0x4050bd
    int16_t v29; // 0x40506d
    int32_t v30 = v29; // 0x4050b2
    char * v31 = (char *)v17; // 0x4050c1
    char v32 = *v31 & (char)(v16 / 256); // 0x4050c1
    *v31 = v32;
    *(int32_t *)(v30 + 20) = 0;
    *(int32_t *)(v30 + 56) = 0;
    if (v32 != 0) {
        // 0x4050f2
        return v28 & -256 | 46;
    }
    // 0x405104
    int32_t v33; // 0x40506d
    int32_t v34 = *(int32_t *)(v3 - 117) + v33; // 0x405073
    *(int32_t *)(v34 + 12) = v34;
    *(int32_t *)(v30 + 12) = v28;
    return 0;
}

// Address range: 0x4051f3 - 0x4052cd
int32_t function_4051f3(void) {
    // 0x4051f3
    int32_t v1; // 0x4051f3
    int32_t v2 = *(int32_t *)(v1 - 32); // 0x4051f3
    *(char *)v2 = 0;
    unsigned char v3 = (char)v2; // 0x4051ff
    int32_t v4 = v3 < 194 ? v2 : v2 + 62; // 0x4051ff
    int32_t v5; // 0x4051f3
    uint32_t v6 = ((v4 & 255 | v2 & -0x10000 | 256 * (int32_t)(v3 > 193)) + 8 & -0xfc08) + v5; // 0x405209
    int32_t v7; // 0x4051f3
    *(int32_t *)(v7 + 95) = v6;
    unsigned char v8 = (char)v6; // 0x405217
    unsigned char v9 = v8 + (char)*(int32_t *)(v2 + 0x48517f51); // 0x405217
    int32_t v10 = v6 & -256; // 0x405217
    char * v11 = (char *)((v10 | (int32_t)v9) + 71); // 0x40521b
    *v11 = *v11 - (char)(v6 / 256) + (char)(v9 < v8);
    unsigned char v12 = v9 | -123; // 0x40521e
    int32_t v13 = v10 | (int32_t)v12; // 0x40521e
    bool v14; // 0x4051f3
    int32_t v15 = v14 ? -4 : 4; // 0x405225
    int32_t v16; // 0x4051f3
    int32_t v17 = v15 + v16; // 0x405225
    char * v18 = (char *)v13; // 0x405227
    *v18 = v12 + *v18;
    int32_t * v19 = (int32_t *)v17; // 0x40522e
    *v19 = *(int32_t *)(v17 + 4);
    int32_t * v20 = (int32_t *)(v17 + 8); // 0x405231
    int32_t v21 = *v20; // 0x405231
    int32_t v22 = *(int32_t *)(v1 - 4) - 1; // 0x40523c
    if (v22 == 0) {
        int32_t v23 = *(int32_t *)(v1 + 106) + v15; // 0x405225
        int32_t result = (v10 | (int32_t)(v9 | -113)) ^ -0x7a06b941; // 0x40523e
        int32_t * v24 = (int32_t *)v23;
        if (result != 0) {
            // 0x405246
            if (result > *v24) {
                // 0x40524a
                __asm_out_6((int16_t)v21, (char)result);
                // 0x40525f
                return result;
            }
        }
        // 0x405250
        __asm_outsb((int16_t)v21, *(char *)v23);
        *v24 = 0;
        // 0x40525f
        return result;
    }
    int32_t v25 = *(int32_t *)(v1 + 12); // 0x405286
    *v20 = v21;
    *v19 = v25;
    int32_t v26 = *(int32_t *)(v17 - 98); // 0x40528e
    int32_t * v27; // 0x4051f3
    int32_t v28; // 0x4051f3
    if (v26 == 0) {
        // 0x405283
        v27 = (int32_t *)(v17 - 2);
        v28 = v25;
    } else {
        int32_t * v29 = (int32_t *)(v17 - 6);
        *v29 = v26;
        v27 = v29;
        v28 = unknown_c540e040(v13);
    }
    int32_t v30 = v28 + 1; // 0x4052a3
    int32_t v31 = 2 * v30 & 254 | v30 & -256; // 0x4052a4
    int32_t * v32 = (int32_t *)v31; // 0x4052a6
    int32_t v33 = *v32; // 0x4052a6
    *v32 = v31;
    *v27 = v33;
    unsigned char v34 = *(char *)(*(int32_t *)((v28 & 255 ^ v22) + v33) + 4); // 0x4052b9
    if (v34 == 0) {
        // 0x4052c0
        return v33 & -256 | (int32_t)v34;
    }
    // 0x40525f
    return *v27;
}

// Address range: 0x4052d0 - 0x405301
int32_t function_4052d0(void) {
    // 0x4052d0
    int32_t v1; // 0x4052d0
    char v2 = v1; // 0x4052d2
    unsigned char v3 = v2 & 31; // 0x4052d2
    if (v3 != 0) {
        int32_t v4; // 0x4052d0
        char * v5 = (char *)(v1 + v4); // 0x4052d2
        unsigned char v6 = *v5; // 0x4052d2
        *v5 = v6 >> v3 | v6 << 8 - v3;
    }
    int32_t v7; // 0x4052d0
    char * v8 = (char *)(v7 + 0x51890450); // 0x4052d7
    *v8 = *v8 + v2;
    char v9 = *(char *)(((v1 & 0xff00) + v1 & 0xff00 | v1 & -0xff01) + 0x4488b01); // 0x4052df
    int32_t v10; // 0x4052d0
    char v11 = v10;
    unsigned char v12 = v11 + 21; // 0x4052e7
    int16_t v13; // 0x4052d0
    int32_t v14 = v13;
    unsigned char v15 = v11 - 118; // 0x4052ea
    bool v16 = v12 < 139 ? v12 + (char)(v12 < 139) <= v15 : v15 > 116; // 0x4052ea
    int32_t v17 = v13; // 0x4052ec
    char * v18 = (char *)(v7 - 0x7e26d4d0); // 0x4052ed
    *v18 = (v9 | v2) + (char)v16 + *v18;
    uint32_t v19 = *(int32_t *)&v13; // 0x4052f3
    *(int32_t *)v14 = v19 / 0x800000 | 512 * v19;
    int32_t v20 = (v14 & 14) > 9 ? v17 + 6 : v17; // 0x4052fb
    uint32_t v21; // 0x4052d0
    return 256 * (int32_t)((v14 & 14) > 9) + v17 & 0xff00 | v17 & -0x10000 | (v20 & 15) + v21 / 256 & 255;
}

// Address range: 0x405328 - 0x405506
int32_t function_405328(int32_t a1, int32_t a2, uint32_t a3, int32_t a4) {
    int32_t v1 = a2;
    uint32_t v2; // 0x405328
    int32_t * v3 = (int32_t *)(v2 + 0x4428910); // 0x405329
    *v3 = *v3 + v2;
    int32_t v4; // 0x405328
    char * v5 = (char *)(v4 + 16); // 0x40532f
    int32_t v6; // 0x405328
    *v5 = *v5 + (char)v6;
    int32_t v7 = __asm_in_2(93); // 0x405336
    int32_t v8 = v7; // 0x40533e
    if ((char)v7 == 0) {
        v8 = function_4052d0();
    }
    uint32_t v9 = v8;
    char * v10 = (char *)(v1 + 0x5a8b5757); // 0x405348
    char v11 = v2; // 0x405348
    *v10 = *v10 | v11;
    char * v12 = (char *)(a3 + 0xc7a8b02); // 0x40534e
    *v12 = *v12 | v11;
    uint32_t v13 = *(int32_t *)(v1 + 1); // 0x405354
    int32_t v14 = v2 - v13; // 0x405354
    char * v15 = (char *)(v14 + 0x338df445); // 0x405356
    *v15 = *v15 + (char)v14 + (char)(v2 < v13);
    char * v16 = (char *)(8 * a1 + 32 + v14); // 0x40535c
    unsigned char v17 = *v16; // 0x40535c
    unsigned char v18 = v17 + (char)(v9 / 256); // 0x40535c
    *v16 = v18;
    uint32_t v19 = v18 >= v17 ? v14 : 32;
    uint32_t v20; // 0x405328
    int32_t v21 = v19 / 256 & 255 ^ v20; // 0x405367
    char * v22 = (char *)(v9 + 0x7b75038b); // 0x405369
    *v22 = *v22 + (char)a3;
    uint32_t v23 = *(int32_t *)(v9 + 20) - *(int32_t *)(v9 + 16); // 0x405372
    if (v19 <= v23) {
        int32_t v24 = __asm_hlt(); // 0x40537c
        char * v25 = (char *)v23; // 0x40537d
        *v25 = *v25 ^ (char)(a3 / 256);
        int32_t v26 = 0x10000 * v24 / 0x10000; // 0x40537f
        int32_t v27 = *(int32_t *)(v26 + 4); // 0x405382
        *(int32_t *)(*(int32_t *)v26 + 4) = v27;
        int32_t v28 = *(int32_t *)(a3 - 74); // 0x405388
        int32_t v29 = v27 - 1 & -256 | v27 + 136 & 255; // 0x40538d
        int32_t * v30 = (int32_t *)(v28 + 0x5c43898c); // 0x40538f
        *v30 = *v30 + v28;
        *(int32_t *)(v29 + 12) = 0x620000;
        *(int32_t *)(a1 + 44) = v29;
        uint32_t v31 = *(int32_t *)(a3 + 20); // 0x40539f
        *(char *)0x14aca800 = *(char *)0x14aca800 + (char)(v31 / 256);
        char v32 = __asm_in_4((int16_t)v21); // 0x4053b6
        return (v31 - 1 | (int32_t)v32) & -256 | (int32_t)(v32 | 127);
    }
    int32_t v33 = &v1; // 0x405341
    int32_t v34 = *(int32_t *)(a1 + 24); // 0x4053ea
    uint32_t v35 = v19 + (int32_t)&g55 & -0x7f1000; // 0x4053f3
    char * v36 = (char *)v21; // 0x4053f8
    *v36 = *v36 - (char)(v20 / 256);
    *(int32_t *)(a3 - 0x42eb6a04) = v33;
    int32_t * v37 = (int32_t *)v35; // 0x405400
    uint32_t v38 = *v37; // 0x405400
    int32_t v39 = v38 + v35; // 0x405400
    *v37 = v39;
    if (v39 < 0) {
        char * v40 = (char *)v35; // 0x405404
        *v40 = *v40 + (char)(v35 / 256);
        int16_t v41; // 0x405328
        return unknown_12f45d0(*(int32_t *)(v34 + 12), v41);
    }
    int32_t v42 = (v39 < v38 ? 129 : 128) | v35; // 0x405445
    *(int32_t *)a1 = v19;
    int32_t v43 = v42 + 1; // 0x4054b7
    int32_t v44 = __asm_wait(); // 0x4054c0
    char * v45 = (char *)(v42 + 0x4aa10875 + 8 * v43); // 0x4054c2
    unsigned char v46 = *v45; // 0x4054c2
    unsigned char v47 = v46 + (char)v44; // 0x4054c2
    unsigned char v48 = v47 + (char)((v19 ^ -2) < 0x2f8b6842); // 0x4054c2
    bool v49 = (v19 ^ -2) < 0x2f8b6842 ? v48 <= v46 : v47 < v46; // 0x4054c2
    *v45 = v48;
    uint32_t v50 = *(int32_t *)(v42 + 0x42c6145b) | v43; // 0x4054cb
    char * v51 = (char *)v50; // 0x4054d1
    char v52 = *v51; // 0x4054cb
    int32_t v53 = v44 + 89 + (int32_t)v49 & 255 | v44 & -256; // 0x4054cb
    v52 = v52 + (char)false + (char)v53;
    v53 ^= 0x7358f44d;
    uint32_t v54 = v33 + a3; // 0x4054d8
    bool v55 = v54 < v33; // 0x4054da
    while (v54 < 0) {
        uint32_t v56 = v54;
        v52 = v52 + (char)v55 + (char)v53;
        v53 ^= 0x7358f44d;
        v54 = v56 + a3;
        v55 = v54 < v56;
    }
    // 0x4054dc
    bool v57; // 0x405328
    int32_t v58 = v57 ? -4 : 4; // 0x405448
    int32_t v59 = v58 + a1; // 0x405448
    int32_t v60 = a4 - 1; // 0x4054c1
    *v51 = v52;
    uint32_t v61 = v50 / 4; // 0x4054de
    __asm_rep_movsd_memcpy((char *)v59, (char *)(v34 + 4 * a1), v61);
    char * v62 = (char *)(v61 * v58 + v59); // 0x4054e8
    __asm_rep_movsb_memcpy(v62, v62, v50 & 3);
    *(int32_t *)(a4 + 7) = v53;
    *(int32_t *)v60 = *(int32_t *)(v53 + 16) + v50;
    int32_t result = __asm_in((int16_t)v60); // 0x4054fc
    *(int32_t *)(a4 - 79) = result;
    return result;
}

// Address range: 0x405548 - 0x4055c0
int32_t function_405548(void) {
    int32_t v1; // 0x405548
    uint32_t v2 = v1;
    int32_t v3; // 0x405548
    int32_t v4 = v3;
    *(int32_t *)(v4 - 4) = -19;
    __asm_in_2(139);
    v3 = v4 - 2;
    v1 = v2 - 1;
    // 0x405548
    while (v2 > 0) {
        // 0x40554e
        v2 = v1;
        v4 = v3;
        *(int32_t *)(v4 - 4) = -19;
        __asm_in_2(139);
        v3 = v4 - 2;
        v1 = v2 - 1;
    }
    int32_t v5 = *(int32_t *)(v2 - 5); // 0x405556
    *(int32_t *)(v4 - 6) = v5;
    bool v6; // 0x405548
    int32_t v7 = v6 ? -4 : 4; // 0x40555a
    int32_t v8; // 0x405548
    int32_t result = v7 + v8; // 0x40555a
    int32_t * v9 = (int32_t *)v5; // 0x40555d
    char v10 = v5; // 0x405563
    char * v11 = (char *)v5;
    int32_t v12; // 0x405548
    uint32_t v13 = v12 - 1;
    uint32_t v14 = *v9; // 0x40555d
    *v9 = v14 / 512 | 0x800000 * v14;
    *(char *)-0x74a66840 = v10;
    __asm_arpl(*(int16_t *)v5, (int16_t)v5);
    int32_t v15 = v13 / 256 + v13 & 255 | v13 & -256; // 0x405572
    *v11 = *v11 + v10;
    int32_t v16; // 0x405548
    *(int32_t *)(2 * result - 0x16ebaf96 + v16) = v15;
    int32_t v17 = v16 | 0xff00; // 0x405582
    int32_t v18 = *(int32_t *)(v15 - 119); // 0x405584
    char * v19 = (char *)(v17 + 0x4e8b0847); // 0x405587
    *v19 = *v19 | (char)v18;
    char * v20 = (char *)v17; // 0x40558d
    char v21 = *v20 | v10; // 0x40558d
    *v20 = v21;
    *(int32_t *)-0x49a876ec = v2 - 2;
    int32_t v22 = v18 - 1; // 0x405593
    v16 = v17;
    int32_t v23 = -0x49a876ed; // 0x405593
    while (v22 != 0 == v21 == 0) {
        // 0x40555d
        v13 = v22;
        v14 = *v9;
        *v9 = v14 / 512 | 0x800000 * v14;
        *(char *)-0x74a66840 = v10;
        __asm_arpl(*(int16_t *)v5, (int16_t)v5);
        v15 = v13 / 256 + v13 & 255 | v13 & -256;
        *v11 = *v11 + v10;
        *(int32_t *)(2 * result - 0x16ebaf96 + v16) = v15;
        v17 = v16 | 0xff00;
        v18 = *(int32_t *)(v15 - 119);
        v19 = (char *)(v17 + 0x4e8b0847);
        *v19 = *v19 | (char)v18;
        v20 = (char *)v17;
        v21 = *v20 | v10;
        *v20 = v21;
        *(int32_t *)-0x49a876ec = v23;
        v22 = v18 - 1;
        v16 = v17;
        v23 = -0x49a876ed;
    }
    // 0x405595
    int32_t v24; // 0x405548
    int32_t v25 = v7 + v24; // 0x40555a
    *(int32_t *)(v25 + 4) = v22;
    int32_t * v26 = (int32_t *)v17; // 0x405598
    uint32_t v27 = *v26; // 0x405598
    *v26 = v27 / 0x800000 | 512 * v27;
    char * v28 = (char *)(v17 - 0x9b523b4); // 0x40559c
    char v29 = *v28 | (char)v22; // 0x40559c
    *v28 = v29;
    if (v29 != 0) {
        // 0x4055a4
        *(int32_t *)-0x49a8bd7b = v25 + 1;
        unknown_cc40a340();
    }
    // 0x4055ad
    *(int32_t *)result = 0x1b000000;
    *(int32_t *)(result + 16) = result + 24;
    return result;
}

// Address range: 0x4055c8 - 0x4055ca
int32_t function_4055c8(int32_t a1) {
    // 0x4055c8
    int32_t result; // 0x4055c8
    return result;
}

// Address range: 0x4055e3 - 0x405600
int32_t function_4055e3(void) {
    // 0x4055e3
    int32_t v1; // 0x4055e3
    int32_t result = *(int32_t *)(v1 + 12); // 0x4055f6
    *(int32_t *)(*(int32_t *)(v1 + 8) + 40) = result;
    int32_t v2; // 0x4055e3
    int32_t v3; // 0x4055e3
    __asm_outsb((int16_t)v3, *(char *)&v2);
    return result;
}

// Address range: 0x405600 - 0x405640
int32_t function_405600(int32_t a1) {
    // 0x405600
    int32_t v1; // 0x405600
    char * v2 = (char *)(v1 - 0x74cfe50a); // 0x405606
    int32_t v3; // 0x405600
    *v2 = *v2 | (char)v3;
    *(char *)(v1 - 0x79f774f9) = 0;
    int32_t v4; // 0x405600
    int32_t result = function_404a60(v4 + 1); // 0x40561c
    int32_t v5 = *(int32_t *)(v1 - 29); // 0x405621
    *(int32_t *)(v5 + 0x14558b04) = result;
    *(int32_t *)(result + 8) = *(int32_t *)(v1 + 23);
    *(int32_t *)(result + 12) = v5;
    *(int32_t *)result = *(int32_t *)(v4 + 17);
    *(int32_t *)(v4 - 57) = result;
    return result;
}

// Address range: 0x405640 - 0x4057a3
int32_t function_405640(int32_t a1, unsigned char a2, int32_t a3, int32_t a4) {
    // 0x405640
    int32_t v1; // bp-4, 0x405640
    int32_t v2 = &v1; // 0x405641
    int32_t v3; // 0x405640
    int32_t v4 = v3 & -256; // 0x405643
    int32_t v5 = (v4 | (int32_t)a2) + 16; // 0x405656
    int32_t v6 = -16; // 0x40565b
    int32_t v7 = v2; // 0x40565b
    int32_t v8; // 0x405640
    int32_t v9; // 0x405640
    if (v5 != 0) {
        // 0x40565d
        __asm_out_1(120, v5);
        char * v10 = (char *)(v9 + 0x144a8b19); // 0x405672
        *v10 = *v10 - (char)v9;
        int32_t v11; // 0x405640
        __asm_into(v11);
        char * v12 = (char *)(v8 + 66); // 0x405679
        *v12 = *v12 | (char)(((v5 & 0xff00 | (int32_t)(a2 - 123)) + 0x7039) / 256);
        int32_t v13 = v2; // bp-8, 0x40567c
        v6 = v4 | (int32_t)(*(char *)0x1010f553 | a2);
        v7 = &v13;
    }
    int32_t v14 = __asm_int3(); // 0x405680
    __asm_out(56, (char)v14);
    bool v15 = v14 == 0; // 0x405683
    int32_t v16 = v14; // 0x405683
    int32_t v17 = v9 - 1; // 0x405683
    int32_t v18; // 0x405640
    int32_t v19; // 0x405640
    int32_t v20; // 0x40573b
    while (!v15) {
        // 0x405687
        v18 = v17;
        int32_t v21 = v16;
        if (v18 != 0) {
            // 0x405701
            *(int32_t *)(v7 - 4) = *(int32_t *)(v21 + 4) + v6;
            int32_t * v22 = (int32_t *)v7; // 0x405714
            char * v23 = (char *)((*v22 & -256 | 175) - 0x6f6f6f88); // 0x40571a
            *v23 = *v23 ^ -76;
            *(int32_t *)(v7 + 4) = v2;
            *v22 = a3;
            v20 = *(int32_t *)(v8 + 0x53088883) ^ v2;
            v19 = v7;
            goto lab_0x405748;
        }
        // 0x405689
        int64_t v24; // 0x405640
        int64_t v25; // 0x405640
        int64_t v26 = __asm_paddd(v24, v25); // 0x405690
        v16 = *(int32_t *)((v21 + 117 & 255 | v21 & -256) + 0x74087039);
        v15 = false;
        v24 = v26;
        v17 = -1;
        if (v16 == 0) {
            // 0x405699
            return v16 + 163 & 255 | v16 & -256;
        }
    }
    int32_t result = a2; // 0x4056c3
    *(int32_t *)(v7 - 8) = a3;
    *(int32_t *)(v7 - 12) = a4;
    *(int32_t *)(v7 - 16) = result;
    *(char *)a3 = a2;
    *(int32_t *)(v7 - 20) = -1;
    return result;
  lab_0x405748:;
    int32_t v27 = v19;
    *(int32_t *)(v27 - 4) = 1;
    *(int32_t *)(v27 - 8) = -74;
    *(int32_t *)(v27 - 12) = 0;
    int32_t v28 = v27 - 16; // 0x405750
    int32_t v29; // 0x405640
    *(int32_t *)v28 = *(int32_t *)v29;
    int32_t v30 = unknown_6da4b0(); // 0x405751
    if (v30 != 0x11176) {
        // 0x40575d
        return v30 & -256 | (int32_t)__asm_in_4(0x5eb4);
    }
    int32_t v31 = *(int32_t *)(v29 + 8); // 0x405764
    v19 = v28;
    v29 = v31;
    if (v31 == 0) {
        // 0x405786
        int32_t v32; // 0x405640
        int32_t v33 = *(int32_t *)(*(int32_t *)(v32 - 0x3f7afbba + 4 * v18) + 8); // 0x405786
        *(int32_t *)(a3 + 1) = __asm_insd(0x5eb4);
        *(int32_t *)(v27 - 20) = *(int32_t *)(v20 - 69 + 2 * v33);
        return unknown_92ae6d60();
    }
    goto lab_0x405748;
}

// Address range: 0x4057a4 - 0x405821
int32_t function_4057a4(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x4057a4
    int32_t v1; // 0x4057a4
    int32_t * v2 = (int32_t *)(v1 + 0x7502047e); // 0x4057a4
    *v2 = *v2 + 1;
    int32_t result = *(int32_t *)0x4cf7e8; // 0x4057b3
    int32_t v3; // 0x4057a4
    char * v4 = (char *)((*(int32_t *)0x6a345516 & v3) + 0x1d376); // 0x4057b8
    char v5 = *v4; // 0x4057b8
    int32_t v6; // 0x4057a4
    char v7 = v6; // 0x4057b8
    char v8 = v5 + v7; // 0x4057b8
    *v4 = v8;
    if (v8 != 0) {
        // 0x4057c7
        return result;
    }
    bool v9 = (result & 14) > 9 | (v5 & 15) + (v7 & 15) > 15; // 0x4057c0
    int32_t v10 = (v9 ? result + 10 : result) & 15; // 0x4057c0
    int32_t result2 = v10 | result & -0x10000 | 256 * (int32_t)v9 + result & 0xff00; // 0x4057c0
    char * v11 = (char *)result2; // 0x4057c3
    *v11 = *v11 + (char)v10;
    int32_t v12; // 0x4057a4
    if (*(int32_t *)(v12 + 17) != 0) {
        // 0x4057c7
        return result2;
    }
    int32_t v13; // 0x4057a4
    int32_t v14; // 0x4057a4
    if (v13 != 0) {
        if (result2 < 0x2dc6c0) {
            int32_t v15 = *(int32_t *)(v14 - 4); // 0x4057d9
            __asm_outsd((int16_t)a2, *(int32_t *)v15);
            return function_40b540(a1, v15, 2);
        }
    }
    int32_t v16 = *(int32_t *)(v14 + 8); // 0x405803
    if (*(int32_t *)(v16 + 4) == 108) {
        // 0x40580e
        return *(int32_t *)v16;
    }
    int32_t * v17 = (int32_t *)(v16 + 8); // 0x405818
    *v17 = *v17 ^ -0x168a097b;
    return result2;
}

// Address range: 0x405821 - 0x405826
int32_t function_405821(void) {
    // 0x405821
    int32_t v1; // 0x405821
    return *(int32_t *)(v1 + 4);
}

// Address range: 0x405826 - 0x40584b
int32_t function_405826(void) {
    // 0x405826
    int32_t v1; // 0x405826
    uint32_t v2; // 0x405826
    *(char *)v1 = (char)(v2 / 256) + (char)v1;
    unknown_4f40a4b0(v2, 0);
    int32_t v3; // 0x405826
    if (*(int32_t *)(v3 + 8) != 0) {
        function_405821();
    }
    // 0x40583d
    return __asm_in((int16_t)v2);
}

// Address range: 0x405850 - 0x40588d
int32_t function_405850(int32_t a1) {
    // 0x405850
    int32_t v1; // bp-4, 0x405850
    int32_t v2 = &v1; // 0x405850
    int32_t v3; // 0x405850
    int32_t result; // 0x405850
    int32_t v4 = result ^ v3; // 0x405857
    if (v4 == 0) {
        // 0x405888
        return result;
    }
    // 0x40585d
    *(int32_t *)(v2 - 8) = v4;
    char v5 = result;
    int32_t v6 = *(int32_t *)(result + 12); // 0x405850
    int32_t v7 = -1;
    char v8 = *(char *)v6; // 0x405863
    char v9 = v5; // 0x405863
    while (v8 != v5) {
        int32_t v10 = v7 - 1; // 0x405863
        bool v11; // 0x405850
        v6 += (v11 ? -1 : 1);
        v9 = v8;
        if (v10 == 0) {
            // break ->
            break;
        }
        v7 = v10;
        v8 = *(char *)v6;
        v9 = v5;
    }
    *(int32_t *)(v2 - 12) = v7;
    if (v9 <= v5) {
        function_405826();
    }
    // 0x405872
    return __asm_int1();
}

// Address range: 0x405890 - 0x4058cf
int32_t function_405890(int32_t a1, int32_t a2) {
    // 0x405890
    int32_t v1; // 0x405890
    __asm_in_4((int16_t)v1);
    int32_t v2; // 0x405890
    int32_t v3 = *(int32_t *)(v2 + 12); // 0x405899
    int32_t v4; // 0x405890
    if (v4 == 0) {
        // 0x4058c7
        *(int32_t *)(v3 - 4) = 0;
        int32_t v5; // 0x405890
        return *(int32_t *)(v5 + 8);
    }
    int32_t v6 = 0; // 0x4058ac
    // 0x4058a7
    int32_t v7; // 0x405890
    while (v7 != 0) {
        // 0x4058a7
        int32_t v8; // 0x405890
        int32_t v9 = v8;
        int32_t v10 = v7 - 1; // 0x4058ac
        v7 = v10;
        bool v11; // 0x405890
        v8 = v9 + (v11 ? -1 : 1);
        v6 = v10;
        if (*(char *)v9 == 0) {
            // break -> 0x4058b6
            break;
        }
        v6 = 0;
    }
    // 0x4058b6
    *(int32_t *)(v3 - 4) = -2 - v6;
    *(int32_t *)(v3 - 9) = 0;
    return 0;
}

// Address range: 0x4058d1 - 0x4058d3
int32_t function_4058d1(void) {
    // 0x4058d1
    int32_t result; // 0x4058d1
    return result;
}

// Address range: 0x4058d3 - 0x4058e3
int32_t function_4058d3(void) {
    // 0x4058d3
    return function_405931((int32_t)&g70, (int32_t)&g70);
}

// Address range: 0x4058e3 - 0x405931
int32_t function_4058e3(void) {
    // 0x4058e3
    int32_t v1; // 0x4058e3
    int32_t v2 = v1 - 18; // 0x4058e3
    int32_t * v3 = (int32_t *)(v1 - 8); // 0x4058e6
    *v3 = v2;
    bool v4; // 0x4058e3
    int32_t v5 = v4 ? -1 : 1; // 0x4058e9
    int32_t v6; // 0x4058e3
    int32_t v7 = v6;
    int32_t v8; // 0x4058e3
    int32_t v9; // 0x4058e3
    int32_t v10; // 0x4058e3
    int32_t v11; // 0x4058e3
    int32_t v12; // 0x4058e3
    int32_t v13; // 0x4058e3
    int32_t v14; // 0x4058e3
    bool v15; // 0x4058e3
    bool v16; // 0x4058e3
    int32_t * v17; // 0x4058ff
    int32_t v18; // 0x405906
    int32_t v19; // 0x405908
    int32_t v20; // 0x4058f7
    int16_t v21; // 0x4058ee
    int16_t v22; // 0x4058ee
    if (v16 == v15) {
        // 0x4058fd
        v21 = v2;
        v22 = (int16_t)v9 & 255;
        v17 = (int32_t *)(v7 - 0xdd4cc1b);
        bool v23; // 0x4058e3
        *v17 = *v17 - (v23 ? -81 : -82);
        v18 = (int64_t)(v2 & -0x10000 | (int32_t)(v21 / v22 & 255) | (int32_t)(256 * (v21 % v22))) * (int64_t)v13 / 0x100000000;
        v19 = v9 - 1;
        v8 = v19;
        v10 = v19;
        v14 = v18;
        v12 = v18;
    } else {
        // 0x4058f3
        v20 = v9 + 1;
        *(int32_t *)(v1 - 4) = v20;
        int32_t v24; // 0x4058e3
        v8 = *(int32_t *)(2 * v9 - 38 + v24);
        v10 = v20;
        v14 = v13;
        v12 = v11;
    }
    int32_t result = *v3; // 0x405918
    int32_t v25 = v10 - 1; // 0x40591e
    while (v25 != 0 == v8 == 0x108902e9) {
        // 0x405923
        __asm_rep_movsb_memcpy((char *)v12, (char *)v7, v25);
        int32_t v26 = v12 + v25 * v5; // 0x405923
        if (v26 == 0) {
            // 0x40592e
            return *(int32_t *)(v1 - 12);
        }
        int32_t v27 = result + (v8 < 0x108902e9 ? -0x7617641 : -0x7617642); // 0x405925
        v5 = 1;
        int32_t v28 = v27; // 0x4058ed
        v11 = *(int32_t *)v27;
        v7 = v26;
        int32_t v29 = *(int32_t *)(v10 - 7);
        int32_t v30 = v14;
        int32_t v31 = 0;
        if (v26 >= 0) {
            // 0x4058fd
            v21 = v28;
            v22 = (int16_t)v31 & 255;
            v17 = (int32_t *)(v7 - 0xdd4cc1b);
            *v17 = *v17 + 82;
            v18 = (int64_t)(v28 & -0x10000 | (int32_t)(v21 / v22 & 255) | (int32_t)(256 * (v21 % v22))) * (int64_t)v30 / 0x100000000;
            v19 = v31 - 1;
            v8 = v19;
            v10 = v19;
            v14 = v18;
            v12 = v18;
        } else {
            // 0x4058f3
            v20 = v31 + 1;
            *(int32_t *)(v1 - 4) = v20;
            v8 = *(int32_t *)(2 * v31 - 38 + v29);
            v10 = v20;
            v14 = v30;
            v12 = v11;
        }
        // 0x405911
        result = *v3;
        v25 = v10 - 1;
    }
    // 0x405920
    return result;
}

// Address range: 0x405931 - 0x40593b
int32_t function_405931(int32_t a1, int32_t a2) {
    // 0x405931
    int32_t v1; // 0x405931
    char * v2 = (char *)(v1 + 61); // 0x405935
    *v2 = *v2 + (char)v1;
    return __asm_in_2(93);
}

// Address range: 0x405954 - 0x405957
int32_t function_405954(int32_t a1) {
    // 0x405954
    int32_t result; // 0x405954
    return result;
}

// Address range: 0x405962 - 0x405964
int32_t function_405962(void) {
    // 0x405962
    int32_t result; // 0x405962
    return result;
}

// Address range: 0x40596d - 0x405ae3
int32_t function_40596d(int32_t a1, int32_t a2) {
    // 0x40596d
    int32_t v1; // 0x40596d
    int32_t v2 = 0x10000 * v1 / 0x10000; // 0x40596d
    int32_t v3 = v2; // 0x40596d
    bool v4; // 0x40596d
    int32_t v5; // 0x40596d
    bool v6; // 0x40596d
    bool v7; // 0x40596d
    if (v7 == v6 != !v4) {
        // 0x405972
        int32_t v8; // 0x40596d
        unsigned char v9 = (char)v8;
        int32_t v10; // 0x40596d
        __asm_into(v10);
        unsigned char v11 = (char)v5; // 0x405976
        *(char *)v8 = v9 - v11;
        *(char *)(*(int32_t *)a1 + 16) = 125;
        int32_t v12 = v9 < v11 ? (int32_t)"  - " + 1 : (int32_t)"  - "; // 0x40597c
        int32_t result = v12 + (v2 + 133 & 255 | v2 & -256); // 0x40597c
        *(char *)(result + 4) = g13;
        return result;
    }
    int32_t v13 = *(int32_t *)(v5 - 0x29743e75); // 0x4059c8
    uint32_t v14; // 0x40596d
    int32_t v15 = v5 ^ v14 & 255; // 0x4059da
    char * v16 = (char *)(v15 - 0x2f37740e); // 0x4059dd
    *v16 = *v16 + 10;
    int32_t v17; // 0x40596d
    int32_t * v18 = (int32_t *)(v17 - 51); // 0x4059e8
    *v18 = *v18 ^ 0x72000003;
    int32_t result2 = 4 * *(int32_t *)(v15 - 21); // 0x4059ef
    v3 = result2;
    if (v14 >= 0) {
        // 0x4059f7
        if (v14 == 0) {
            // 0x4059f9
            return result2;
        }
        int32_t * v19 = (int32_t *)(v17 + 2 * a1); // 0x4059fe
        *v19 = *v19 - 117;
        int32_t v20 = v3 & 122 | 133; // 0x405a02
        int32_t v21 = v20 | v3 & -256; // 0x405a02
        v3 = v21;
        char * v22 = (char *)v21; // 0x405a0b
        char v23 = *v22; // 0x405a0b
        char v24 = v23 + (char)v20; // 0x405a0b
        *v22 = v24;
        if (v24 < 0 == ((v24 ^ v23) & (v24 ^ -128)) < 0) {
            // 0x405a0f
            __asm_arpl_5((int16_t)v17);
            *(char *)v2 = *(char *)&v3 + 11;
            *(int32_t *)(v13 - 4) = v3;
            *(int32_t *)(v13 - 8) = 11;
            *(int32_t *)(v13 - 12) = -0x6d4c0c54;
            *(int32_t *)(v13 - 16) = 5;
            *(int32_t *)(v13 - 20) = 0x10758b03;
            int32_t v25 = unknown_690b8680(); // 0x405a2d
            *(int32_t *)v2 = 0x10758b03;
            int32_t v26 = v17 | 42; // 0x405a39
            bool v27; // 0x40596d
            *(int32_t *)((v27 ? -4 : 4) + v2) = __asm_insd((int16_t)v26);
            *(int32_t *)(v25 + 0x4b0337a0) = v26;
            return 0x10758b8e;
        }
    }
    int32_t v28 = v15 + 256 + 8 * v15; // 0x405a56
    int32_t result3 = (v28 >> 31 & 511) + v28; // 0x405a64
    v3 = result3;
    if (result3 >= 10) {
        // 0x4059f9
        return result3;
    }
    if (result3 < 0) {
        // 0x405a93
        return (0x10000 * v14 / 0x10000 | 0x2245a4) + 1;
    }
    int32_t v29 = *(int32_t *)(v13 + 49); // 0x405aaa
    int32_t * v30 = (int32_t *)a1; // 0x405aad
    int32_t v31 = *(int32_t *)(v13 + 45) + 1; // 0x405ab1
    *v30 = 10;
    *(int32_t *)(a1 - 4) = *v30;
    *(int32_t *)(a1 - 8) = 48;
    *(int32_t *)(a1 - 12) = v31;
    int32_t v32 = unknown_e83ffa60(); // 0x405acc
    char * v33 = (char *)(v29 + 0x389107d); // 0x405ad9
    *v33 = *v33 + (char)*(int32_t *)(8 * v29 - 0x3e7feaae + v32);
    *(int32_t *)(v32 + 1) = v31;
    return *(int32_t *)v29;
}

// Address range: 0x405ae4 - 0x405b74
int32_t function_405ae4(int32_t a1, int32_t a2) {
    // 0x405ae4
    int32_t v1; // 0x405ae4
    *(int32_t *)(v1 + 8) = *(int32_t *)-0x24bf6e38 + 64;
    int32_t v2; // 0x405ae4
    uint32_t v3; // 0x405ae4
    int32_t v4 = v3 & -256 | (int32_t)*(char *)&v2; // 0x405afc
    int16_t v5 = v4; // 0x405afe
    __asm_in_4(v5);
    *(int32_t *)(v2 + 32) = 0x792f02d4;
    char v6 = v2; // 0x405b0f
    char v7 = v6 ^ -119; // 0x405b0f
    int32_t v8 = v2 & -256 | (int32_t)v7; // 0x405b0f
    if (v7 >= 0) {
        int32_t result = v8 - 1; // 0x405b13
        __asm_out_3(v5, result);
        return result;
    }
    unsigned char v9 = (char)(v3 / 256); // 0x405b2b
    unsigned char v10 = v6 + v9; // 0x405b2b
    int32_t * v11 = (int32_t *)(v8 - 0x745b0cfd); // 0x405b30
    *v11 = *v11 + (v10 < v9 ? 12 : 11);
    char * v12 = (char *)(v2 + 0x13e61b01); // 0x405b47
    *v12 = *v12 + (char)a2;
    *(int32_t *)((256 * (int32_t)v10 | v4 & -0xff01) + 37) = 0x1a29;
    *(int32_t *)(*(int32_t *)(v2 + 1) + 12) = -0x5afff8ff;
    *(char *)-58 = -1;
    return -0x5afff832;
}

// Address range: 0x405b75 - 0x405cbf
int32_t function_405b75(int16_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = a2;
    bool v2; // 0x405b75
    if (v2) {
        // 0x405b77
        int32_t v3; // 0x405b75
        bool v4; // 0x405b75
        return v3 + 141 + (int32_t)v4 & 255 | v3 & -256;
    }
    // 0x405b7f
    int32_t v5; // 0x405b75
    int32_t v6; // 0x405b75
    uint32_t v7; // 0x405b75
    if ((llvm_ctpop_i8((char)v5) & 1) == 0) {
        char * v8 = (char *)(v7 - 20); // 0x405b92
        *v8 = *v8 + (char)v6;
        char v9; // 0x405b75
        return function_4c07be9(v9 + (char)(v7 / 256));
    }
    int32_t v10 = *(int32_t *)(v5 + 6); // 0x405b7f
    int32_t v11 = v10 & 132 | 123; // 0x405b89
    int32_t result = v11 | v10 & -256; // 0x405b89
    if (v5 == 0) {
        // 0x405cba
        return result;
    }
    int32_t v12; // 0x405b75
    int32_t v13; // 0x405b75
    int32_t v14; // 0x405b75
    int32_t v15; // 0x405b75
    int32_t v16; // 0x405b75
    int32_t v17; // 0x405b75
    if (v5 < 0) {
        int32_t v18 = unknown_52126674(); // 0x405c7c
        char * v19 = (char *)(v7 + 0x665f1056); // 0x405c89
        unsigned char v20 = *v19; // 0x405c89
        int32_t v21; // 0x405b75
        unsigned char v22 = v20 + (char)v21; // 0x405c89
        unsigned char v23 = v22 + (char)(((int32_t)&v1 ^ -16) < 16); // 0x405c89
        bool v24 = ((int32_t)&v1 ^ -16) < 16 ? v23 <= v20 : v22 < v20; // 0x405c89
        *v19 = v23;
        *(char *)v18 = (char)v7;
        *(char *)0x10069 = *(char *)0x10069 + 105 + (char)v24;
        int32_t v25 = *(int32_t *)(v5 + 28); // 0x405c9a
        int32_t v26 = *(int32_t *)(v25 + 0x401a4); // 0x405c9d
        int32_t v27 = *(int32_t *)(v17 - 96); // 0x405ca0
        *(int32_t *)v27 = v26;
        v14 = v26;
        v12 = (256 * v26 | -0xff01) & v27;
        v13 = v25;
        v15 = v5 + 1;
    } else {
        int32_t v28 = v7 + v16; // 0x405c04
        *(int32_t *)v7 = v28;
        if (v28 != 0) {
            // 0x405c08
            *(int32_t *)v17 = -0x74800000;
            char * v29 = (char *)(result - 0x7af0fd65); // 0x405c13
            *v29 = *v29 & (char)v11;
            *(char *)v7 = 2 * (char)v7;
            return function_cc26ac(v6, v5);
        }
        // 0x405c22
        *(int32_t *)(v5 + 32) = v1;
        int32_t v30 = *(int32_t *)-0x6c8bffc8; // 0x405c25
        *(int32_t *)v16 = __asm_insd((int16_t)v7);
        int32_t v31 = v30 + 137; // 0x405c2c
        int32_t v32 = v30 & -256; // 0x405c2c
        v12 = v31 & 255 | v32;
        if (v6 != -v17) {
            int32_t v33 = v31 & 116 | 139; // 0x405c33
            char * v34 = (char *)(v7 + 48); // 0x405c36
            *v34 = *v34 - (char)v33;
            return v33 | v32;
        }
    }
    unsigned char v35 = (char)v12; // 0x405ca9
    unsigned char v36 = *(char *)v13 + v35; // 0x405ca9
    char v37 = v36 < v35; // 0x405cac
    unsigned char v38 = *(char *)(v15 + 12) + v37; // 0x405cac
    unsigned char v39 = v36 - v38; // 0x405cac
    bool v40 = v36 < v35 ? v38 != -1 | v36 < v39 - v37 : v36 < v38; // 0x405cac
    char * v41 = (char *)(v14 + 0x335f104e); // 0x405cb1
    char v42 = v13; // 0x405cb1
    *v41 = *v41 + v42 + (char)v40;
    *(char *)v16 = *(char *)v15;
    *(char *)v14 = v42;
    // 0x405cba
    return v12 & -256 | (int32_t)v39;
}

// Address range: 0x405cbf - 0x405d12
int32_t function_405cbf(int32_t a1, int32_t a2) {
    // 0x405cbf
    int32_t v1; // 0x405cbf
    int32_t v2; // 0x405cbf
    int32_t * v3 = (int32_t *)(v2 + v1); // 0x405cbf
    *v3 = *v3 & -118;
    int32_t v4; // 0x405cbf
    int32_t v5; // 0x405cbf
    char * v6 = (char *)(8 * v5 - 0x74300002 + v4); // 0x405cc3
    char v7 = v2; // 0x405cc3
    *v6 = *v6 - v7;
    char * v8 = (char *)(v2 + 0x375003a); // 0x405ccb
    *v8 = *v8 & v7;
    int32_t v9; // 0x405cbf
    int32_t * v10 = (int32_t *)(v9 + 12); // 0x405cd1
    *v10 = *v10 + 1;
    int32_t v11; // 0x405cbf
    char * v12 = (char *)(v11 - 0x8568b40); // 0x405cd6
    unsigned char v13 = *v12; // 0x405cd6
    *v12 = v13 / 128 | 2 * v13;
    uint32_t v14; // 0x405cbf
    unsigned char v15 = *(char *)&v4 ^ (char)(v14 / 256); // 0x405cdc
    if (v15 == 0) {
        // 0x405cff
        *(char *)*(int32_t *)(v11 - 18) = *(char *)(v9 + 16);
        return 0x745e7c;
    }
    int32_t v16 = *(int32_t *)(v9 + 28); // 0x405ce0
    int32_t v17 = unknown_481d3780(*(int32_t *)v16, *(int32_t *)(v9 + 16), v9); // 0x405cea
    char * v18 = (char *)((256 * (int32_t)v15 | v14 & -0xff01) - 0x339795ba); // 0x405cef
    *v18 = *v18 + (char)v16;
    return v17 + 131 & 255 | v17 & -256;
}

// Address range: 0x405d59 - 0x405dfc
int32_t function_405d59(void) {
    // 0x405d59
    int16_t v1; // 0x405d59
    int32_t v2 = unknown_8b0040c0(v1); // 0x405d59
    int32_t v3; // 0x405d59
    *(char *)v3 = -1 - (char)v3;
    int32_t v4 = g36; // 0x405d63
    char v5 = llvm_ctpop_i8((char)v4); // 0x405d68
    int32_t v6; // 0x405d59
    unsigned char v7 = *(char *)&v6; // 0x405d6b
    bool v8; // 0x405d59
    bool v9; // 0x405d59
    bool v10; // 0x405d59
    bool v11; // 0x405d59
    int32_t v12 = function_40a940(3, 0x400010, v4 & -256 | (int32_t)v7, 0x4000 * (int32_t)v8 | 1024 * (int32_t)v9 | 512 * (int32_t)v10 | 256 * (int32_t)v11 | 64 * (int32_t)(v4 == 0) | 128 * (int32_t)(v4 < 0) | 4 * (int32_t)((v5 & 1) == 0) | 2, 0x10000 * v2 / 0x10000); // 0x405d74
    int32_t * v13 = (int32_t *)v12; // 0x405d79
    *v13 = *v13 ^ 12;
    g37 = v12;
    char v14 = v12; // 0x405d81
    *(char *)-0x507bf040 = v14;
    char * v15 = (char *)v12; // 0x405d86
    *v15 = *v15 + v14;
    int32_t v16; // 0x405d59
    char * v17 = (char *)(v16 - 0x3aae03b3); // 0x405d88
    int32_t v18; // 0x405d59
    *v17 = *v17 + (char)v18;
    int32_t hMem = *(int32_t *)(v16 + 12); // 0x405d99
    *(int32_t *)*(int32_t *)(v16 + 8) = hMem | 0x800482c;
    int32_t v19 = (int32_t)GlobalFree((int32_t *)hMem); // 0x405dad
    int32_t v20 = *(int32_t *)-0x69bf3fac < *(int32_t *)(v16 + 101); // 0x405dc0
    int32_t v21 = v19 - 0x35bf3e26 + v20; // 0x405dc0
    int32_t v22 = function_405e54(v21, v6); // 0x405dc6
    if (v21 >= 0) {
        // 0x405dde
        return function_8be650fe();
    }
    bool v23 = (v22 & 14) > 9 | (v19 & 15) + 10 + v20 > 15; // 0x405dcb
    int32_t v24 = v23 ? v22 + 10 : v22; // 0x405dcb
    return (v24 & 15 | v22 & -0x10000 | 256 * (int32_t)v23 + v22 & 0xff00) - 1;
}

// Address range: 0x405dfc - 0x405dff
int32_t function_405dfc(int32_t a1) {
    // 0x405dfc
    int32_t result; // 0x405dfc
    return result;
}

// Address range: 0x405dff - 0x405e38
int32_t function_405dff(void) {
    // 0x405dff
    uint32_t v1; // 0x405dff
    int32_t v2; // 0x405dff
    uint32_t v3 = v2 + v1; // 0x405dff
    int32_t v4; // 0x405dff
    *(char *)v4 = *(char *)v3;
    int32_t v5; // 0x405dff
    int32_t v6 = v5 + (int32_t)&g1 + (int32_t)(v3 < v1); // 0x405e04
    if (v6 != 0) {
        // 0x405e18
        bool v7; // 0x405dff
        int32_t v8 = v7 ? -1 : 1; // 0x405e01
        int32_t v9 = v8 + v4; // 0x405e01
        *(char *)v9 = (char)v6;
        int32_t v10; // 0x405dff
        *(int32_t *)v10 = v9 + v8;
    }
    // 0x405e2e
    return 0;
}

// Address range: 0x405e3e - 0x405e54
int32_t function_405e3e(int32_t a1) {
    // 0x405e3e
    int32_t v1; // 0x405e3e
    int32_t v2; // 0x405e3e
    __asm_outsb((int16_t)v2, (char)v1);
    int32_t v3; // 0x405e3e
    int32_t v4; // 0x405e3e
    bool v5; // 0x405e3e
    return v4 - v3 + (int32_t)v5 & 255 | v4 & -256;
}

// Address range: 0x405e54 - 0x405e84
int32_t function_405e54(int32_t a1, int32_t a2) {
    // 0x405e54
    int32_t v1; // 0x405e54
    int32_t * v2 = (int32_t *)(v1 + 12); // 0x405e54
    uint32_t v3 = *v2; // 0x405e54
    int32_t * v4 = (int32_t *)(v1 + 16); // 0x405e58
    uint32_t v5 = *v4; // 0x405e58
    char * v6 = (char *)(v5 + 1); // 0x405e60
    *v6 = *v6 + (char)(v3 > 0xdcd6247a) - (char)(v5 / 256);
    int32_t v7 = v3 + 0x2329db85;
    int16_t * v8 = (int16_t *)(2 * v7 - 0x7c99f78b); // 0x405e66
    *v8 = *v8 ^ 120;
    unsigned char v9 = *(char *)v7 + (char)v7; // 0x405e6f
    int32_t v10 = v9; // 0x405e6f
    uint32_t v11 = v7 & -256 | v10; // 0x405e6f
    while (v9 != 0) {
        // 0x405e66
        v7 = v11 + 2;
        v8 = (int16_t *)(2 * v7 - 0x7c99f78b);
        *v8 = *v8 ^ 120;
        v9 = *(char *)v7 + (char)v7;
        v10 = v9;
        v11 = v7 & -256 | v10;
    }
    uint32_t v12 = *v2; // 0x405e79
    int32_t v13 = v11 - v12; // 0x405e79
    int32_t v14 = v13; // 0x405e7c
    if (v11 <= v12) {
        v14 = function_405e3e((int32_t)&g70);
    }
    int32_t v15 = v14;
    int32_t v16 = 256 * (64 * (int32_t)(v13 == 0) | (int32_t)(v11 < v12) | 128 * (int32_t)(v13 < 0) | 16 * (int32_t)((v10 & 15) - (v12 & 15) > 15) | 4 * (int32_t)((llvm_ctpop_i8((char)v13) & 1) == 0)); // 0x405e7e
    int32_t v17; // bp-4, 0x405e54
    bool v18 = ((int32_t)&v17 & 12) > 16 | (v15 & 14) > 9; // 0x405e80
    int32_t v19 = v18 ? v15 + 6 : v15; // 0x405e80
    int32_t result = v19 & 15 | (v15 | v16) & -0x10000 | 256 * (int32_t)v18 + (v16 | 512) & 0xff00; // 0x405e80
    *v4 = result;
    return result;
}

// Address range: 0x405e85 - 0x405ea2
int32_t function_405e85(void) {
    // 0x405e85
    int32_t v1; // 0x405e85
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x405e85
    *v2 = -*v2;
    malloc((int32_t)&g70);
    int32_t v3; // 0x405e85
    *(int32_t *)(v1 - 4) = v3 + 1;
    return *(int32_t *)0x5601401d;
}

// Address range: 0x405ea2 - 0x405eb4
int32_t function_405ea2(void) {
    // 0x405ea2
    uint32_t v1; // 0x405ea2
    *(int32_t *)v1 = v1 / 0x20000000 | 8 * v1;
    int32_t result = v1 & -252; // 0x405ea8
    int32_t v2; // 0x405ea2
    *(int32_t *)v2 = result;
    return result;
}

// Address range: 0x405eb4 - 0x405f17
int32_t function_405eb4(void) {
    int32_t v1 = unknown_d3abf0(); // 0x405eb6
    int32_t v2; // 0x405eb4
    int32_t v3; // 0x405eb4
    int32_t v4 = v2 - *(int32_t *)(v3 - 4); // 0x405ec1
    int32_t v5 = unknown_1fa290d(v1, v4); // 0x405ec8
    char * v6 = (char *)v5; // 0x405ecd
    char v7 = v5; // 0x405ecd
    *v6 = *v6 + v7;
    int32_t result; // 0x405eb4
    char * v8 = (char *)(result + 0x5d3b08c4); // 0x405ecf
    char v9 = *v8 + v7; // 0x405ecf
    *v8 = v9;
    int32_t v10; // 0x405eb4
    *(int32_t *)v10 = v5;
    if (v9 < 1) {
        // 0x405f02
        *(int32_t *)(4 * result + v10) = 245;
        return result;
    }
    int32_t v11 = v10 + 4; // 0x405edc
    *(int32_t *)(v3 - 81) = result - 1;
    *(int32_t *)v11 = v4;
    return v11 | 247;
}

// Address range: 0x405f18 - 0x405f66
int32_t function_405f18(void) {
    // 0x405f18
    int32_t v1; // 0x405f18
    unsigned char v2 = __asm_in_4((int16_t)v1); // 0x405f24
    unsigned char v3 = v2 % 4; // 0x405f25
    int32_t v4; // 0x405f18
    char * v5 = (char *)((v4 | (int32_t)v2) & -0x10000 | (int32_t)v3 | 256 * (int32_t)(v2 / 4)); // 0x405f27
    *v5 = *v5 + v3;
    __asm_hlt();
    int32_t v6; // 0x405f18
    int32_t v7; // 0x405f18
    *(int32_t *)-0x191398b1 = *(int32_t *)(v6 - 0x3ca21a75) ^ v7 & 0x74fc4103;
    int32_t v8 = unknown_c2a6d1(); // 0x405f44
    uint32_t v9; // 0x405f18
    unsigned char v10 = (char)(v9 / 256); // 0x405f53
    *(int32_t *)0xbb0954 = (v8 ^ 121) + (-1 - v10 < v10 ? 0x40c0a5 : 0x40c0a4);
    return function_c0c65f3e();
}

// Address range: 0x405f66 - 0x406005
int32_t function_405f66(void) {
    // 0x405f66
    int32_t v1; // 0x405f66
    int32_t v2 = v1 - 4; // 0x405f6b
    int32_t v3; // 0x405f66
    if (function_404f60(v2, v3, v3) != 0) {
        // 0x405f78
        return 0x4e22;
    }
    int32_t v4; // 0x405f66
    if (v4 != 1) {
        // 0x405fdb
        *(int32_t *)0x22410388 = 0xf60010;
        // 0x405f78
        return 0xf60010;
    }
    // 0x405fb5
    *(int32_t *)v1 = *(int32_t *)v2;
    function_40a420(0x3cfffffe, 16, 0x52fffffe, *(int32_t *)(v1 - 56), 0x8df424);
    function_40a49c();
    return 0;
}

// Address range: 0x40600a - 0x406060
int32_t function_40600a(int32_t a1, int32_t a2) {
    // 0x40600a
    int32_t v1; // 0x40600a
    char v2 = *(char *)(v1 - 0x2d086f58); // 0x40600a
    int32_t v3; // 0x40600a
    int32_t v4 = *(int32_t *)(v3 + 0x5714450c); // 0x406011
    int32_t v5; // 0x40600a
    int32_t v6; // 0x40600a
    int32_t * v7 = (int32_t *)(v5 - 117 + (v6 & -256 | (int32_t)(v2 & (char)v6))); // 0x406017
    uint32_t v8 = *v7; // 0x406017
    int32_t v9; // 0x40600a
    uint32_t v10 = v8 + v9; // 0x406017
    *v7 = v10;
    int32_t v11; // 0x40600a
    uint32_t v12 = v11 & 31; // 0x40601d
    if (v12 != 0) {
        int32_t * v13 = (int32_t *)(v3 - 57); // 0x40601d
        uint32_t v14 = *v13; // 0x40601d
        *v13 = (int32_t)(v10 < v8) << 32 - v12 | v14 >> v12 | (int32_t)((int64_t)v14 << (int64_t)(33 - v12));
    }
    char * v15 = (char *)v4; // 0x406020
    char v16 = v4; // 0x406020
    *v15 = *v15 + 2 * v16;
    *(char *)0x11187b8 = v16;
    int32_t v17; // 0x40600a
    char * v18 = (char *)(v17 - 61); // 0x406029
    unsigned char v19 = *v18; // 0x406029
    char v20 = v5; // 0x406029
    unsigned char v21 = v19 + v20; // 0x406029
    *v18 = v21;
    *v15 = *v15 + v16 + (char)(v21 < v19);
    float80_t v22; // 0x40600a
    *(int64_t *)(v17 + 13) = (int64_t)v22;
    *v15 = *v15 + v16;
    *(int32_t *)1 = 22;
    *v18 = *v18 + v20;
    char * v23 = (char *)(v5 - 110); // 0x40604b
    char v24 = *v23; // 0x40604b
    *v23 = v24 - 1;
    *(char *)23 = *(char *)23 + 23 + (char)(v24 != 0);
    return function_7587ffff();
}

// Address range: 0x406090 - 0x40609e
int32_t function_406090(void) {
    // 0x406090
    uint32_t v1; // 0x406090
    int32_t result; // 0x406090
    bool v2; // 0x406090
    *(char *)result = (char)result - (char)(v1 / 256) + (char)v2;
    char * v3 = (char *)(result - 0xc23814); // 0x406092
    int32_t v4; // 0x406090
    *v3 = *v3 + (char)v4;
    return result;
}

// Address range: 0x40609e - 0x4060aa
int32_t function_40609e(void) {
    // 0x40609e
    int32_t v1; // 0x40609e
    int32_t * v2 = (int32_t *)(v1 + 48); // 0x40609e
    *v2 = *v2 | -0x6417ff4c;
    return function_1724606e();
}

// Address range: 0x4060c0 - 0x406391
int32_t function_4060c0(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x4060c0
    int32_t v1; // 0x4060c0
    int32_t v2 = v1 & 0x458bec61; // 0x4060c0
    int32_t v3 = *(int32_t *)(v2 | 4); // 0x4060c9
    int32_t v4 = v2; // 0x4060d1
    if (v3 == *(int32_t *)(v2 - 70)) {
        // 0x4060d3
        __asm_out(94, (char)v2);
        v4 = -0x1c083d93;
    }
    // 0x4060df
    int32_t v5; // 0x4060c0
    int32_t v6; // 0x4060c0
    int32_t v7 = v6 & 255 | v5; // 0x4060c5
    int32_t v8; // 0x4060c0
    uint32_t v9 = *(int32_t *)(v8 + 28); // 0x4060df
    char * v10 = (char *)v4; // 0x4060e2
    *v10 = *v10 ^ (char)v4;
    char * v11 = (char *)(v7 + 0xc8d0c5d); // 0x4060e4
    *v11 = *v11 + (char)v3;
    int32_t v12 = __asm_hlt(); // 0x4060ea
    int32_t v13 = 5 * v7; // 0x4060ed
    __asm_rep_movsd_memcpy((char *)v13, (char *)v7, 5);
    bool v14; // 0x4060c0
    int32_t v15 = (v14 ? -20 : 20) + v13; // 0x4060f5
    int32_t v16 = v12 + 17; // 0x4060f9
    int32_t v17 = v12 & -256; // 0x4060f9
    int32_t v18 = v16 & 255 | v17; // 0x4060f9
    int32_t * v19 = (int32_t *)v18; // 0x4060fb
    *v19 = *v19 + v18;
    char * v20 = (char *)v18; // 0x4060fd
    char v21 = v16; // 0x4060fd
    char v22 = *v20 + v21; // 0x4060fd
    *v20 = v22;
    if (v22 != 0) {
        // 0x406155
        return -0x37ff28f7;
    }
    unsigned char v23 = v21 | -117; // 0x406109
    char v24 = llvm_ctpop_i8(v23); // 0x406109
    int32_t v25 = v23; // 0x406109
    if ((v24 & 1) != 0) {
        // 0x40610d
        return v17 | v25;
    }
    int32_t v26 = *(int32_t *)v15 ^ 255; // 0x4060ff
    int32_t * v27 = (int32_t *)(v8 - 117 + v7); // 0x406111
    *v27 = 2 * *v27;
    int32_t v28 = v17 | v25 | 51; // 0x406116
    int32_t v29 = v26; // 0x40611b
    int32_t v30 = v8 + 4; // 0x40611b
    if ((v9 & v15) != 0) {
        int32_t * v31 = (int32_t *)v28; // 0x406125
        *v31 = *v31 + 109;
        v29 = v26 + 1;
        v30 = v15 & v7 + 0x8743e71 + 8 * v7;
    }
    int32_t result = v28; // 0x40612e
    int32_t v32 = v30; // 0x40612e
    if (v29 == v9) {
        uint32_t v33 = v29 < v9 ? -0x2ffbff05 : -0x2ffbff06; // 0x406130
        int32_t v34 = v28 - v33; // 0x406130
        int32_t v35 = v30 - 2; // 0x406135
        result = v34;
        v32 = v35;
        if (v29 < v9 || v28 < v33) {
            // 0x406138
            *(int32_t *)((v34 | 16) + 4 * v29) = v7;
            *(int32_t *)(v34 + 12) = *(int32_t *)(v34 + 55) + 1;
            result = v34;
            v32 = v35;
        }
    }
    // 0x406143
    if (*(int32_t *)(result + 0x1026) != 0) {
        // 0x406155
        return result;
    }
    // 0x4061c5
    *(int32_t *)(result - 0x6ffdfec) = 0;
    *(char *)0xb800 = *(char *)0xb800 - (char)v7;
    char * v36 = (char *)result; // 0x4061cf
    char v37 = result; // 0x4061cf
    char v38 = *v36 + v37; // 0x4061cf
    *v36 = v38;
    if (v38 >= 1) {
        // 0x406155
        return result;
    }
    // 0x406159
    *v36 = v38 + v37;
    *(int32_t *)(v32 - 4) = v7;
    return result;
}

// Address range: 0x406391 - 0x40639b
int32_t function_406391(int16_t a1) {
    // 0x406391
    int32_t v1; // 0x406391
    int32_t v2; // 0x406391
    char * v3 = (char *)(8 * v2 + v1); // 0x406392
    int32_t v4; // 0x406391
    *v3 = *v3 + (char)v4;
    int32_t result; // 0x406391
    return result;
}

// Address range: 0x40639d - 0x4063e8
int32_t function_40639d(void) {
    // 0x40639d
    __asm_out(236, (char)__asm_hlt());
    int32_t v1 = function_410ab8(); // 0x4063a8
    int32_t v2; // 0x40639d
    int32_t v3 = v2 + 133; // 0x4063b5
    __writefsdword(v3 & 255 | v2 & -256, 0);
    __asm_int(117);
    uint32_t v4; // 0x40639d
    if ((char)(v4 + v3 + (int32_t)(-1 - (char)v3 < (char)v4)) >= 0) {
        // 0x4063e0
        return function_406407();
    }
    // 0x4063d4
    int32_t v5; // 0x40639d
    int32_t v6 = *(int32_t *)(256 * v5 & 0xff00 | v4 & -0xff01) & (v5 & -256 | v4 / 256 & 255); // 0x4063d4
    bool v7 = v6 < 0; // 0x4063d6
    bool v8 = v6 == 0; // 0x4063d6
    if (v6 >= 0 != v6 != 0) {
        if (v6 < 0) {
            // 0x4063e0
            return function_406407();
        }
        // 0x4063da
        v7 = v1 < 0;
        v8 = v1 == 0;
    }
    // 0x4063e2
    int32_t v9; // 0x40639d
    *(int32_t *)(v9 - 3) = 0;
    if (v7 || v8) {
        function_406426();
    }
    // 0x4063e6
    return function_4063f7();
}

// Address range: 0x4063ec - 0x4063f5
int32_t function_4063ec(void) {
    // 0x4063ec
    int32_t v1; // 0x4063ec
    int32_t result = v1 & -256 | (int32_t)*(char *)0x6a2e003e; // 0x4063ec
    char * v2 = (char *)(result + 64); // 0x4063f1
    uint32_t v3; // 0x4063ec
    *v2 = *v2 + (char)(v3 / 256);
    return result;
}

// Address range: 0x4063f7 - 0x406407
int32_t function_4063f7(void) {
    // 0x4063f7
    int32_t v1; // 0x4063f7
    int16_t v2 = v1; // 0x4063fb
    __asm_in_4(v2);
    float80_t v3 = function_40b750((int32_t)&g70, (int32_t)&g70); // 0x4063fc
    int32_t v4; // 0x4063f7
    *(int32_t *)(v4 - 15) = (int32_t)(float32_t)v3;
    int32_t v5 = (float32_t)v3; // 0x406404
    int32_t v6; // 0x4063f7
    if (v6 != 1 == v4 == -1) {
        v5 = function_40644b();
    }
    // 0x406406
    return v5 & -256 | (int32_t)__asm_in_4(v2);
}

// Address range: 0x406407 - 0x406415
int32_t function_406407(void) {
    // 0x406407
    int32_t result; // 0x406407
    return result;
}

// Address range: 0x406426 - 0x406427
int32_t function_406426(void) {
    // 0x406426
    int32_t v1; // 0x406426
    int32_t result; // 0x406426
    __asm_out_3((int16_t)v1, result);
    return result;
}

// Address range: 0x40644b - 0x40644c
int32_t function_40644b(void) {
    // 0x40644b
    int32_t result; // 0x40644b
    return result;
}

// Address range: 0x40645c - 0x40649c
int32_t function_40645c(void) {
    // 0x40645c
    __asm_int(196);
    uint32_t v1; // 0x40645c
    *(int32_t *)v1 = v1 / 0x200000 | 2048 * v1;
    if (v1 == (int32_t)&g5) {
        function_4365d3();
    }
    // 0x40647c
    int32_t v2; // 0x40645c
    int32_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    return 0x11177;
}

// Address range: 0x4064ce - 0x4064d5
int32_t function_4064ce(void) {
    // 0x4064ce
    int32_t result; // 0x4064ce
    return result;
}

// Address range: 0x4064e4 - 0x4064eb
int32_t function_4064e4(void) {
    // 0x4064e4
    return function_74865650();
}

// Address range: 0x4064ec - 0x4064ef
int32_t function_4064ec(int32_t a1) {
    // 0x4064ec
    int32_t result; // 0x4064ec
    return result;
}

// Address range: 0x4064ef - 0x4065b1
int32_t function_4064ef(int32_t a1) {
    int32_t v1 = a1; // 0x4064f7
    function_40b960();
    int32_t v2 = __asm_int3(); // 0x4064fd
    int32_t v3; // 0x4064ef
    unsigned char v4 = (char)v3;
    *(char *)v3 = v4 / 16 | 16 * v4;
    int32_t v5; // 0x4064ef
    int32_t v6 = v5;
    int32_t v7; // 0x4064ef
    int32_t v8 = v7;
    char * v9 = (char *)v2; // 0x406502
    char v10 = v2; // 0x406502
    *v9 = *v9 + v10;
    int32_t v11; // 0x4064ef
    char * v12 = (char *)(v11 - 0x34cfe34d); // 0x406504
    int32_t v13; // 0x4064ef
    *v12 = *v12 + (char)(v13 / 256);
    int32_t v14 = (v8 & 0xff00) + v8 & 0xff00 | v8 & -0xff01; // 0x40650a
    char * v15 = (char *)v14; // 0x40650d
    *v15 = *v15 | v10;
    char * v16 = (char *)(8 * v11 + v2); // 0x406515
    unsigned char v17 = *v16; // 0x406515
    int32_t v18; // 0x4064ef
    char v19 = v17 + (char)v18; // 0x406515
    *v16 = v19;
    __asm_rep_movsd_memcpy((char *)v11, (char *)a1, 5);
    int32_t v20 = ((*&v1 & 1024) == 0 ? 20 : -20) + v11; // 0x40651d
    uint32_t v21 = *(int32_t *)(v14 + 0x3020); // 0x40651f
    int32_t v22 = *(int32_t *)v20; // 0x406525
    int32_t v23 = __asm_hlt(); // 0x406527
    *(int16_t *)(v21 + 10 + v23) = 0;
    int32_t * v24 = (int32_t *)(v6 - 0xd415); // 0x406535
    *v24 = v23;
    __asm_outsb((int16_t)v21, *(char *)v20);
    int32_t v25 = function_40b960(); // 0x406537
    int32_t v26 = *(int32_t *)(v6 + 9); // 0x40653c
    v5 = v6 + 1;
    while (v19 >= 0) {
        // 0x406501
        v6 = v5;
        v8 = v22;
        v9 = (char *)v25;
        v10 = v25;
        *v9 = *v9 + v10;
        v12 = (char *)(v20 - 0x34cfe34d);
        *v12 = *v12 + (char)(v21 / 256);
        v14 = (v8 & 0xff00) + v8 & 0xff00 | v8 & -0xff01;
        v15 = (char *)v14;
        *v15 = *v15 | v10;
        v16 = (char *)(8 * v20 + v25);
        v17 = *v16;
        v19 = v17;
        *v16 = v19;
        __asm_rep_movsd_memcpy((char *)v20, (char *)v26, 5);
        v20 += ((*v24 & 1024) == 0 ? 20 : -20);
        v21 = *(int32_t *)(v14 + 0x3020);
        v22 = *(int32_t *)v20;
        v23 = __asm_hlt();
        *(int16_t *)(v21 + 10 + v23) = 0;
        v24 = (int32_t *)(v6 - 0xd415);
        *v24 = v23;
        __asm_outsb((int16_t)v21, *(char *)v20);
        v25 = function_40b960();
        v26 = *(int32_t *)(v6 + 9);
        v5 = v6 + 1;
    }
    bool v27 = v19 < v17; // 0x406541
    if (v19 != 0) {
        char * v28 = (char *)v25; // 0x406545
        *v28 = (*v28 & (char)(v21 / 256)) + (char)v25;
        *(char *)-0x72fef5cf = *(char *)-0x72fef5cf - 68;
        v27 = false;
    }
    int32_t v29 = v6 - 0x1017; // 0x406552
    int32_t v30 = v6 - 0xd419; // 0x406558
    *(int32_t *)v30 = v29;
    int32_t * v31 = (int32_t *)(2 * v25); // 0x40655b
    *v31 = *v31 + v29;
    int32_t v32 = 0; // 0x406561
    int32_t v33 = v30; // 0x406561
    if (v25 != 0) {
        int32_t v34 = *(int32_t *)(v22 + 0x457e20); // 0x406563
        char * v35 = (char *)(v20 + 42); // 0x406569
        *v35 = *v35 - 10;
        v32 = v34 + 141 & 255 | v34 & -256;
        v33 = v6 - 0xd418;
    }
    // 0x406572
    *(int32_t *)(v33 - 4) = 256 * (v25 + (int32_t)v27) & 0xff00;
    *(int32_t *)(v33 - 8) = v20;
    int32_t v36 = -0x6c74f08c * v32; // 0x40657f
    float80_t v37; // 0x4064ef
    *(float80_t *)v36 = __asm_fbstp(v37);
    *(int32_t *)0x324c8000 = v36;
    char * v38 = (char *)(v32 + 0x4d8ad9d3); // 0x40659e
    *v38 = *v38 + (char)v36;
    char * v39 = (char *)(v32 - 0x4748bda9); // 0x4065a1
    *v39 = *v39 | -48;
    return function_f868ef72();
}

// Address range: 0x4065b6 - 0x4065bd
int32_t function_4065b6(void) {
    // 0x4065b6
    int32_t result; // 0x4065b6
    return result;
}

// Address range: 0x4065d9 - 0x4065de
int32_t function_4065d9(void) {
    // 0x4065d9
    return __asm_in_2(196);
}

// Address range: 0x4065de - 0x4065ec
int32_t function_4065de(int32_t a1, int32_t a2, int32_t a3) {
    // 0x4065de
    return 9;
}

// Address range: 0x4065f0 - 0x40664e
int32_t function_4065f0(void) {
    // 0x4065f0
    int32_t v1; // 0x4065f0
    char * v2 = (char *)(v1 + 98); // 0x406600
    unsigned char v3 = *v2; // 0x406600
    uint32_t v4; // 0x4065f0
    unsigned char v5 = v3 + (char)(v4 / 256); // 0x406600
    *v2 = v5;
    int32_t v6; // 0x4065f0
    char * v7 = (char *)(v6 + 0x56507875); // 0x406604
    unsigned char v8 = *v7; // 0x406604
    char v9 = v5 < v3; // 0x406604
    int32_t v10; // 0x4065f0
    unsigned char v11 = v9 + (char)v10; // 0x406604
    char v12 = v8 - v11; // 0x406604
    bool v13 = v5 < v3 ? v11 != -1 | v8 < v12 - v9 : v8 < v11; // 0x406604
    *v7 = v12;
    int32_t v14; // bp-4, 0x4065f0
    int32_t v15 = unknown_73411480(v14); // 0x40660a
    unsigned char v16 = (char)v15; // 0x406611
    unsigned char v17 = v16 - 117 + (char)v13; // 0x406611
    char * v18 = (char *)(v6 + 0x5153eac4); // 0x406614
    *v18 = v17 + *v18 + (char)(v13 ? v17 <= v16 : v16 > 116);
    int32_t v19; // 0x4065f0
    *(char *)v19 = __asm_insb((int16_t)(int32_t)&v14);
    return unknown_1e757cf8(v15 & -256 | (int32_t)v17) + 0x5cfc80;
}

// Address range: 0x40664e - 0x406664
int32_t function_40664e(void) {
    // 0x40664e
    int32_t v1; // 0x40664e
    int32_t * v2 = (int32_t *)(v1 - 36); // 0x40664e
    *v2 = -1 - *v2;
    int32_t v3; // 0x40664e
    int32_t v4; // 0x40664e
    *(char *)v3 = *(char *)&v3 | (char)v4;
    uint32_t v5; // 0x40664e
    uint32_t v6; // 0x40664e
    *(int32_t *)v4 = 2 * v4 | (int32_t)(v6 < v5);
    return function_40669a(v4, 1);
}

// Address range: 0x406669 - 0x406672
int32_t function_406669(void) {
    // 0x406669
    function_40694f((int32_t)&g70);
    return function_40667d();
}

// Address range: 0x406674 - 0x40667d
int32_t function_406674(void) {
    // 0x406674
    int32_t result; // 0x406674
    return result;
}

// Address range: 0x40667d - 0x406680
int32_t function_40667d(void) {
    // 0x40667d
    return function_40668c();
}

// Address range: 0x406681 - 0x40668c
int32_t function_406681(void) {
    // 0x406681
    int32_t v1; // 0x406681
    return v1 - 0x62dcc89e;
}

// Address range: 0x40668c - 0x406690
int32_t function_40668c(void) {
    // 0x40668c
    int32_t v1; // 0x40668c
    int32_t v2; // 0x40668c
    int32_t v3; // 0x40668c
    int32_t v4; // 0x40668c
    int32_t v5; // 0x40668c
    int32_t v6; // 0x40668c
    int32_t v7; // 0x40668c
    int32_t v8; // 0x40668c
    return function_40669f(v2, v3, v4, &v1, v5, v6, v7, v8);
}

// Address range: 0x406692 - 0x406695
int32_t function_406692(int32_t a1) {
    // 0x406692
    int32_t result; // 0x406692
    return result;
}

// Address range: 0x40669a - 0x40669e
int32_t function_40669a(int32_t a1, int32_t a2) {
    // 0x40669a
    int32_t v1; // 0x40669a
    int32_t v2; // 0x40669a
    __asm_outsb((int16_t)v2, (char)v1);
    int32_t result; // 0x40669a
    return result;
}

// Address range: 0x40669f - 0x4066ab
int32_t function_40669f(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    // 0x40669f
    __readfsdword(48);
    return function_4066b5();
}

// Address range: 0x4066ab - 0x4066b0
int32_t function_4066ab(void) {
    // 0x4066ab
    return function_baf31e19();
}

// Address range: 0x4066b5 - 0x4066be
int32_t function_4066b5(void) {
    int32_t result = function_4066cc((int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70); // 0x4066bc
    return result;
}

// Address range: 0x4066be - 0x4066bf
int32_t function_4066be(int32_t a1) {
    // 0x4066be
    int32_t result; // 0x4066be
    return result;
}

// Address range: 0x4066bf - 0x4066cc
int32_t function_4066bf(void) {
    // 0x4066bf
    int32_t v1; // 0x4066bf
    return v1 & -0x10000 | 146;
}

// Address range: 0x4066cc - 0x406915
int32_t function_4066cc(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    // 0x4066cc
    int32_t v1; // 0x4066cc
    int32_t v2 = (int32_t)*(int16_t *)(v1 + 38); // 0x4066d5
    while (v2 != 1) {
        // 0x4066d7
        v2--;
    }
    int32_t v3 = *(int32_t *)(v1 + 16); // 0x406739
    int32_t v4 = *(int32_t *)(v3 + 120 + *(int32_t *)(v3 + 60)); // 0x40674d
    if (v4 == 0) {
        // 0x406910
        return function_406921((int32_t)&g70);
    }
    int32_t v5 = v4 + v3; // 0x40676a
    int32_t v6 = *(int32_t *)(v5 + 24); // 0x40678d
    while (v6 != 0) {
        // 0x4067a5
        v6--;
        int32_t v7 = *(int32_t *)(*(int32_t *)(v5 + 32) + v3 + 4 * v6) + v3; // 0x4067b1
        uint32_t v8 = 0;
        unsigned char v9 = *(char *)v7; // 0x4067d9
        int32_t v10 = (v8 / 0x2000 | 0x80000 * v8) + (int32_t)v9; // 0x4067ed
        bool v11; // 0x4066cc
        v7 += (v11 ? -1 : 1);
        while (v9 != 0) {
            // 0x4067be
            v8 = v10;
            v9 = *(char *)v7;
            v10 = (v8 / 0x2000 | 0x80000 * v8) + (int32_t)v9;
            v7 += (v11 ? -1 : 1);
        }
        // 0x406810
        int32_t v12; // 0x4066cc
        if (*(int32_t *)(v12 - 8) + v10 == *(int32_t *)(v12 + 36)) {
            uint16_t v13 = *(int16_t *)(2 * v6 + v3 + *(int32_t *)(v5 + 36)); // 0x406864
            int32_t v14 = *(int32_t *)(v5 + 28); // 0x406878
            return *(int32_t *)(v14 + v3 + 4 * (v6 & 0x3fff0000 | (int32_t)v13)) + v3;
        }
    }
    // 0x406910
    return function_406921((int32_t)&g70);
}

// Address range: 0x406915 - 0x406921
int32_t function_406915(void) {
    // 0x406915
    int32_t v1; // 0x406915
    char * v2 = (char *)(v1 - 0x3892699a); // 0x406915
    *v2 = -*v2;
    return __asm_sti();
}

// Address range: 0x406921 - 0x406927
int32_t function_406921(int32_t a1) {
    // 0x406921
    return function_406933((int32_t)&g70);
}

// Address range: 0x406927 - 0x406933
int32_t function_406927(void) {
    // 0x406927
    int32_t v1; // 0x406927
    uint32_t v2; // 0x406927
    *(char *)(v1 + 78) = (char)(v2 / 256);
    int32_t v3; // 0x406927
    __asm_into(v3);
    int32_t result; // 0x406927
    return result;
}

// Address range: 0x406933 - 0x40693c
int32_t function_406933(int32_t a1) {
    // 0x406933
    return function_40694a();
}

// Address range: 0x406941 - 0x40694a
int32_t function_406941(void) {
    // 0x406941
    int32_t v1; // 0x406941
    uint32_t v2 = v1 & 31; // 0x406941
    int32_t v3; // 0x406941
    char v4; // 0x406941
    int32_t v5; // 0x406941
    if (v2 == 0) {
        // 0x406941
        int32_t v6; // 0x406941
        v4 = v6;
    } else {
        int32_t * v7 = (int32_t *)(v5 - 0x4896516f); // 0x406941
        *v7 = *v7 >> v2;
        int32_t v8; // 0x406941
        v3 = v8;
        v4 = *(char *)&v8;
    }
    int32_t v9; // 0x406941
    bool v10; // 0x406941
    *(int32_t *)v9 = *(int32_t *)(v3 + (v10 ? -1 : 1));
    __asm_out_6((int16_t)v5, v4);
    int32_t v11; // 0x406941
    return v11 & -256 | (int32_t)v4;
}

// Address range: 0x40694a - 0x40694f
int32_t function_40694a(void) {
    int32_t result = function_4066cc((int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70); // 0x40694a
    return result;
}

// Address range: 0x40694f - 0x406957
int32_t function_40694f(int32_t a1) {
    // 0x40694f
    return function_406961();
}

// Address range: 0x406958 - 0x406961
int32_t function_406958(int32_t a1) {
    // 0x406958
    return unknown_b45eaee3();
}

// Address range: 0x406961 - 0x40696e
int32_t function_406961(void) {
    // 0x406961
    return function_40697c(64);
}

// Address range: 0x40696e - 0x40697c
int32_t function_40696e(void) {
    // 0x40696e
    int32_t v1; // 0x40696e
    unsigned char v2 = (char)v1 & 31; // 0x40696e
    uint32_t v3; // 0x40696e
    if (v2 != 0) {
        int32_t v4; // 0x40696e
        char * v5 = (char *)(v4 - 0x31e2cdcb + 4 * v3); // 0x40696e
        unsigned char v6 = *v5; // 0x40696e
        bool v7; // 0x40696e
        *v5 = (char)v7 << v2 - 1 | v6 << v2 | (char)((int16_t)v6 >> (int16_t)(9 - v2));
    }
    int32_t result = 133 * v3 / 256 + v3 & 255 | v3 & -0x10000; // 0x406975
    __asm_out_1(125, result);
    return result;
}

// Address range: 0x40697c - 0x40698f
int32_t function_40697c(int32_t a1) {
    // 0x40697c
    int32_t v1; // 0x40697c
    return function_406999(-0x1aac5ba8, 0, v1, 0x1000);
}

// Address range: 0x40698f - 0x406994
int32_t function_40698f(int32_t a1) {
    // 0x40698f
    int32_t v1; // 0x40698f
    unsigned char v2 = (char)v1; // 0x40698f
    bool v3; // 0x40698f
    bool v4 = v2 > 153 | v3;
    int32_t result; // 0x40698f
    bool v5; // 0x40698f
    if (v5 || (v2 & 14) > 9) {
        result = (v4 ? 154 : 250) + v1 & 255 | v1 & -256;
    } else {
        result = (v4 ? v1 + 160 : v1) & 255 | v1 & -256;
    }
    return result;
}

// Address range: 0x406999 - 0x4069a1
int32_t function_406999(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x406999
    return function_4069ab();
}

// Address range: 0x4069a1 - 0x4069ab
int32_t function_4069a1(int16_t a1) {
    // 0x4069a1
    int32_t v1; // 0x4069a1
    return v1 + 204 & 255 | v1 & -256;
}

// Address range: 0x4069ab - 0x4069b2
int32_t function_4069ab(void) {
    // 0x4069ab
    return function_4069bb();
}

// Address range: 0x4069b6 - 0x4069bb
int32_t function_4069b6(void) {
    // 0x4069b6
    return function_aee24374();
}

// Address range: 0x4069bb - 0x4069c5
int32_t function_4069bb(void) {
    // 0x4069bb
    return function_4069d2();
}

// Address range: 0x4069c5 - 0x4069d2
int32_t function_4069c5(void) {
    // 0x4069c5
    int32_t v1; // 0x4069c5
    bool v2; // 0x4069c5
    bool v3; // 0x4069c5
    bool v4; // 0x4069c5
    bool v5; // 0x4069c5
    bool v6; // 0x4069c5
    int32_t v7 = v1 & -0xff01 | 256 * (64 * (int32_t)v3 | 128 * (int32_t)v2 | 16 * (int32_t)v4 | (int32_t)v6 | 4 * (int32_t)v5) | 512; // 0x4069cb
    unsigned char v8 = (char)v1; // 0x4069cc
    bool v9 = v8 > 153 | v6;
    int32_t result; // 0x4069c5
    if ((v8 & 14) > 9 || v4) {
        result = v7 & -256 | (v9 ? 102 : 6) + v1 & 255;
    } else {
        result = v7 & -256 | (v9 ? v1 + 96 : v1) & 255;
    }
    return result;
}

// Address range: 0x4069d2 - 0x4069dc
int32_t function_4069d2(void) {
    // 0x4069d2
    function_406ad2((int32_t)&g70);
    return function_4069e6((int32_t)&g70);
}

// Address range: 0x4069dc - 0x4069e6
int32_t function_4069dc(int32_t a1) {
    // 0x4069dc
    int32_t result; // 0x4069dc
    char * v1 = (char *)(result - 0x279a2af3); // 0x4069dc
    bool v2; // 0x4069dc
    *v1 = 128 * (char)v2 | *v1 / 2;
    return result;
}

// Address range: 0x4069e6 - 0x4069ec
int32_t function_4069e6(int32_t a1) {
    // 0x4069e6
    return function_4069fa();
}

// Address range: 0x4069ed - 0x4069f8
int32_t function_4069ed(void) {
    // 0x4069ed
    bool v1; // 0x4069ed
    if (!v1) {
        function_406a51();
    }
    // 0x4069ef
    int32_t v2; // 0x4069ed
    return function_d31fcc79(v2);
}

// Address range: 0x4069fa - 0x406a02
int32_t function_4069fa(void) {
    // 0x4069fa
    int32_t v1; // 0x4069fa
    int32_t v2; // 0x4069fa
    *(char *)v1 = (char)v2;
    return function_406a0e();
}

// Address range: 0x406a02 - 0x406a0b
int32_t function_406a02(void) {
    // 0x406a02
    int32_t v1; // 0x406a02
    bool v2; // 0x406a02
    bool v3; // 0x406a02
    bool v4; // 0x406a02
    bool v5; // 0x406a02
    bool v6; // 0x406a02
    bool v7; // 0x406a02
    bool v8; // 0x406a02
    bool v9; // 0x406a02
    bool v10; // 0x406a02
    bool v11; // 0x406a02
    return function_a06c1b31(0x4000 * (int32_t)v4 | 2048 * (int32_t)v5 | 1024 * (int32_t)v6 | 512 * (int32_t)v7 | 256 * (int32_t)v8 | 128 * (int32_t)v9 | 64 * (int32_t)v10 | 16 * (int32_t)v11 | (int32_t)v3 | 4 * (int32_t)v2 | 2, v1);
}

// Address range: 0x406a0e - 0x406a1a
int32_t function_406a0e(void) {
    // 0x406a0e
    __readfsdword((int32_t)&g70);
    return function_406a28();
}

// Address range: 0x406a1a - 0x406a28
int32_t function_406a1a(void) {
    // 0x406a1a
    int32_t v1; // 0x406a1a
    int16_t v2 = v1; // 0x406a22
    int32_t v3; // 0x406a1a
    int16_t v4 = (int16_t)*(char *)((v3 & -256 | 226) - 0xc92e0d5); // 0x406a22
    return v1 & -0x10000 | (int32_t)(v2 / v4 & 255) | (int32_t)(256 * (v2 % v4));
}

// Address range: 0x406a28 - 0x406a45
int32_t function_406a28(void) {
    // 0x406a28
    return function_406a52();
}

// Address range: 0x406a4b - 0x406a4e
int32_t function_406a4b(int32_t a1) {
    // 0x406a4b
    int32_t result; // 0x406a4b
    return result;
}

// Address range: 0x406a51 - 0x406a52
int32_t function_406a51(void) {
    // 0x406a51
    int32_t result; // 0x406a51
    return result;
}

// Address range: 0x406a52 - 0x406a95
int32_t function_406a52(void) {
    // 0x406a52
    int32_t result; // 0x406a52
    return result;
}

// Address range: 0x406a95 - 0x406aa0
int32_t function_406a95(int32_t Offset) {
    // 0x406a95
    __writefsdword(__readfsdword(Offset), (int32_t)&g70);
    return &g70;
}

// Address range: 0x406aa0 - 0x406aab
int32_t function_406aa0(int16_t a1, int32_t a2) {
    // 0x406aa0
    __asm_wait();
    int32_t v1; // 0x406aa0
    int16_t v2 = v1; // 0x406aa2
    int32_t v3; // 0x406aa0
    *(int32_t *)v3 = __asm_insd(v2);
    int32_t v4; // 0x406aa0
    while (v4 == 0) {
        // continue -> 0x406aa3
    }
    // 0x406aa5
    int32_t v5; // 0x406aa0
    char * v6 = (char *)(v5 - 20); // 0x406aa5
    *v6 = *v6 & 121;
    return __asm_in(v2);
}

// Address range: 0x406aab - 0x406ab4
void function_406aab(int32_t Offset, int32_t Data) {
    // 0x406aab
    __writefsdword(Offset, Data);
    function_406abc();
}

// Address range: 0x406ab7 - 0x406abc
int32_t function_406ab7(void) {
    // 0x406ab7
    int32_t result; // 0x406ab7
    return result;
}

// Address range: 0x406abc - 0x406ac4
int32_t function_406abc(void) {
    // 0x406abc
    return function_406acd();
}

// Address range: 0x406ac5 - 0x406acd
int32_t function_406ac5(void) {
    // 0x406ac5
    int32_t v1; // 0x406ac5
    return v1 + 140 & 255 | v1 & -256;
}

// Address range: 0x406acd - 0x406ad2
int32_t function_406acd(void) {
    // 0x406acd
    int32_t result; // 0x406acd
    return result;
}

// Address range: 0x406ad2 - 0x406b5f
int32_t function_406ad2(int32_t a1) {
    // 0x406ad2
    function_406b5f((int32_t)&g70);
    int32_t v1; // bp-32, 0x406ad2
    int32_t v2 = &v1; // 0x406add
    int32_t v3 = *(int32_t *)(__readfsdword(48) + 12); // 0x406ae6
    int32_t * v4 = (int32_t *)(v2 - 4);
    int32_t v5 = 0; // 0x406ae9
    int32_t v6 = v3 + 20; // 0x406ae9
    int32_t v7; // 0x406b05
    int32_t v8; // 0x406b11
    int32_t v9; // 0x406b1e
    while (true) {
        int32_t v10 = *(int32_t *)v6;
        int32_t v11 = (int32_t)*(int16_t *)(v10 + 38); // 0x406af3
        int32_t v12 = *(int32_t *)(v10 + 40); // 0x406af3
        uint32_t v13 = 0;
        char v14 = *(char *)v12; // 0x406af5
        int32_t v15 = v5 & -256 | (int32_t)(v14 < 97 ? v14 : v14 - 32);
        int32_t v16 = v15 + (v13 / 0x2000 | 0x80000 * v13); // 0x406aff
        v11--;
        int32_t v17 = v15; // 0x406b01
        v12++;
        while (v11 != 0) {
            // 0x406af5
            v13 = v16;
            v14 = *(char *)v12;
            v15 = v17 & -256 | (int32_t)(v14 < 97 ? v14 : v14 - 32);
            v16 = v15 + (v13 / 0x2000 | 0x80000 * v13);
            v11--;
            v17 = v15;
            v12++;
        }
        // 0x406b03
        *v4 = v10;
        *(int32_t *)(v2 - 8) = v16;
        v7 = *(int32_t *)(v10 + 16);
        int32_t v18 = *(int32_t *)(v7 + 120 + *(int32_t *)(v7 + 60)); // 0x406b0b
        v5 = v15;
        if (v18 != 0) {
            // 0x406b11
            v8 = v18 + v7;
            *(int32_t *)(v2 - 12) = v8;
            int32_t v19 = *(int32_t *)(v8 + 32) + v7; // 0x406b17
            int32_t v20 = *(int32_t *)(v8 + 24);
            int32_t v21 = v15;
            v5 = v21;
            while (v20 != 0) {
                // 0x406b1e
                v9 = v20 - 1;
                int32_t v22 = *(int32_t *)(v19 + 4 * v9) + v7; // 0x406b24
                uint32_t v23 = 0;
                uint32_t v24 = v21;
                unsigned char v25 = *(char *)v22; // 0x406b26
                int32_t v26 = v24 & -256 | (int32_t)v25; // 0x406b26
                int32_t v27 = v26 + (v23 / 0x2000 | 0x80000 * v23); // 0x406b2a
                v22++;
                while (v25 != (char)(v24 / 256)) {
                    // 0x406b26
                    v23 = v27;
                    v24 = v26;
                    v25 = *(char *)v22;
                    v26 = v24 & -256 | (int32_t)v25;
                    v27 = v26 + (v23 / 0x2000 | 0x80000 * v23);
                    v22++;
                }
                // 0x406b30
                int32_t v28; // 0x406ad2
                if (v27 + v28 == a1) {
                    // break (via goto) -> 0x406b38
                    goto lab_0x406b38;
                }
                v20 = v9;
                v21 = v26;
                v5 = v21;
            }
        }
        // 0x406b59
        v6 = *v4;
    }
  lab_0x406b38:;
    uint16_t v29 = *(int16_t *)(2 * v9 + v7 + *(int32_t *)(v8 + 36)); // 0x406b3e
    int32_t v30 = *(int32_t *)(v8 + 28); // 0x406b42
    int32_t result = *(int32_t *)(v30 + v7 + 4 * (v9 & 0x3fff0000 | (int32_t)v29)) + v7; // 0x406b4a
    *(int32_t *)(v2 + 28) = result;
    *(int32_t *)(v2 + 36) = *(int32_t *)(v2 + 32);
    return result;
}

// Address range: 0x406b5f - 0x406bf0
int32_t function_406b5f(int32_t a1) {
    int32_t v1 = 0x5c110002; // bp-436, 0x406b89
    int32_t v2 = -0x1f20f016; // bp-464, 0x406b98
    int32_t v3 = &v1;
    int32_t v4 = 5; // 0x406b9f
    int32_t v5 = &v2;
    *(int32_t *)(v5 - 4) = 16;
    *(int32_t *)(v5 - 8) = v3;
    *(int32_t *)(v5 - 12) = 402;
    int32_t v6 = v5 - 16; // 0x406ba4
    *(int32_t *)v6 = 0x6174a599;
    int32_t v7 = v6; // 0x406bad
    int32_t v8; // 0x406b5f
    while (v8 != 0) {
        // 0x406baf
        v4--;
        if (v4 == 0) {
            // 0x406bb4
            v7 = v5 - 20;
            *(int32_t *)v7 = 0x56a2b5f0;
            goto lab_0x406bbb;
        }
        v5 = v6;
        *(int32_t *)(v5 - 4) = 16;
        *(int32_t *)(v5 - 8) = v3;
        *(int32_t *)(v5 - 12) = 402;
        v6 = v5 - 16;
        *(int32_t *)v6 = 0x6174a599;
        v7 = v6;
    }
    goto lab_0x406bbb;
  lab_0x406bbb:
    // 0x406bbb
    *(int32_t *)(v7 - 4) = 0;
    *(int32_t *)(v7 - 8) = 4;
    *(int32_t *)(v7 - 12) = v3;
    *(int32_t *)(v7 - 16) = 402;
    *(int32_t *)(v7 - 20) = 0x5fc8d902;
    *(int32_t *)(v7 - 24) = 64;
    *(int32_t *)(v7 - 28) = 0x1000;
    *(int32_t *)(v7 - 32) = v1;
    *(int32_t *)(v7 - 36) = 0;
    *(int32_t *)(v7 - 40) = -0x1aac5ba8;
    int32_t v9 = v7 - 44; // 0x406bdc
    *(int32_t *)(v9 - 4) = 0;
    *(int32_t *)(v9 - 8) = v1;
    int32_t v10; // 0x406b5f
    *(int32_t *)(v9 - 12) = v10;
    *(int32_t *)(v9 - 16) = 402;
    int32_t v11 = v9 - 20; // 0x406be2
    *(int32_t *)v11 = 0x5fc8d902;
    int32_t result; // 0x406b5f
    int32_t v12 = v1 - result; // 0x406beb
    v10 += result;
    v9 = v11;
    int32_t v13 = v12; // 0x406bed
    while (v12 != 0) {
        // 0x406bdd
        *(int32_t *)(v9 - 4) = 0;
        *(int32_t *)(v9 - 8) = v13;
        *(int32_t *)(v9 - 12) = v10;
        *(int32_t *)(v9 - 16) = 402;
        v11 = v9 - 20;
        *(int32_t *)v11 = 0x5fc8d902;
        v12 = v13 - result;
        v10 += result;
        v9 = v11;
        v13 = v12;
    }
    // 0x406bef
    return result;
}

// Address range: 0x406bf1 - 0x406c39
int32_t function_406bf1(int16_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x406bf1
    int32_t v1; // 0x406bf1
    char * v2 = (char *)(v1 - 0x3b17410); // 0x406bf1
    int32_t v3; // 0x406bf1
    *v2 = *v2 + (char)v3;
    int32_t v4; // 0x406bf1
    int32_t v5 = *(int32_t *)(v4 + 84); // 0x406bfa
    int32_t v6; // 0x406bf1
    int32_t v7; // 0x406bf1
    int32_t v8 = *(int32_t *)(v7 - 72) + v6; // 0x406bff
    int32_t v9; // 0x406bf1
    int32_t v10 = *(int32_t *)(8 * v9 - 0x2e74fa07 + v8); // 0x406c0f
    uint64_t v11 = -0x4d5d4c3b * (int64_t)v8; // 0x406c1b
    *(int32_t *)(v3 - 30 + v10) = (v8 + (int32_t)(v11 / 0x100000000) & v5) + (int32_t)v11;
    return 0;
}

// Address range: 0x406c64 - 0x406c67
int32_t function_406c64(int32_t a1) {
    // 0x406c64
    int32_t result; // 0x406c64
    return result;
}

// Address range: 0x406c6f - 0x406d82
int32_t function_406c6f(int32_t a1, int32_t a2) {
    int32_t v1 = a2;
    uint32_t v2; // 0x406c6f
    float80_t v3; // 0x406c6f
    *(int64_t *)v2 = (int64_t)v3;
    int32_t v4; // 0x406c6f
    char * v5 = (char *)(v4 + 0x7b858d79); // 0x406c72
    unsigned char v6 = *v5; // 0x406c72
    unsigned char v7 = v6 + (char)v4; // 0x406c72
    *v5 = v7;
    int32_t v8; // 0x406c6f
    int32_t v9 = v8 + 0x2840c080 + (int32_t)(v7 < v6); // 0x406c7d
    int32_t v10; // 0x406c6f
    int32_t v11; // 0x406c6f
    if (v9 == 1) {
        int32_t v12 = *(int32_t *)(v10 - 0x6c2b8c); // 0x406cc1
        *(int32_t *)(v11 + 36) = 0;
        __writegsdword(v11 + 40, 0x3ffff * (v12 + *(int32_t *)(v10 - 224)));
        return 0;
    }
    int32_t v13 = v9 - 2; // 0x406c8b
    if (v13 == 0) {
        int32_t v14 = v13 & -255;
        char * v15 = (char *)v14; // 0x406c9c
        *v15 = *v15 + (char)v14;
        int32_t result = v14 | 10; // 0x406ca0
        int32_t v16; // 0x406c6f
        int32_t v17; // 0x406c6f
        int32_t v18 = *(int32_t *)(v17 + 2 * v16); // 0x406ca3
        int32_t v19; // bp-3, 0x406c6f
        *(int32_t *)(*(int32_t *)(v18 - 76) - 4) = (int32_t)&v19;
        if (*(int32_t *)(v10 - 224) != 1) {
            // 0x406caf
            return result;
        }
        char * v20 = (char *)v18; // 0x406cb1
        unsigned char v21 = *v20; // 0x406cb1
        unsigned char v22 = (char)(v2 / 256); // 0x406cb1
        *v20 = v21 - v22;
        char * v23 = (char *)(v18 + 18); // 0x406cb3
        unsigned char v24 = *v23; // 0x406cb3
        *v23 = 16 * v24 | v24 / 32 | 8 * (char)(v21 < v22);
        return result;
    }
    int32_t * v25 = (int32_t *)(3 * v11); // 0x406d00
    int32_t v26 = *v25 ^ v1; // 0x406d00
    int32_t v27 = v13; // 0x406d0f
    int32_t v28; // 0x406c6f
    if (v13 >= *(int32_t *)v26) {
      lab_0x406d66:;
        uint32_t v29 = v27;
        uint32_t v30 = *(int32_t *)(v10 + 8); // 0x406d66
        char * v31 = (char *)(v29 - 24); // 0x406d6a
        *v31 = *v31 + (char)(v30 / 256);
        uint32_t v32 = *(int32_t *)v29 + v29; // 0x406d6d
        int32_t v33 = v32 & -256 | (int32_t)__asm_in_4((int16_t)v28); // 0x406d72
        int32_t * v34 = (int32_t *)v30; // 0x406d73
        *v34 = *v34 - v11 + (int32_t)(v32 < v29);
        char * v35 = (char *)(v33 - 1); // 0x406d76
        unsigned char v36 = *v35; // 0x406d76
        unsigned char v37 = v36 + (char)v28; // 0x406d76
        *v35 = v37;
        return v33 + 0x40c090 + (int32_t)(v37 < v36);
    }
    int32_t v38 = v26; // 0x406d00
    int32_t v39 = *(int32_t *)-0x4abefa69; // 0x406d13
    while (v39 != 0) {
        // 0x406cee
        int32_t v40; // 0x406c6f
        int32_t v41 = v40;
        char v42 = *(char *)(*(int32_t *)((int32_t)&v1 + 4) - 0xc1d3eb5); // 0x406cee
        int32_t v43 = v39 - 1; // 0x406cf7
        int32_t v44 = 4 * (v41 & 0x3fffff00 | (int32_t)(v42 & (char)v41)); // 0x406cf8
        bool v45; // 0x406c6f
        *(char *)(v38 + (v45 ? -4 : 4)) = __asm_insb((int16_t)v44);
        v38 = *v25 ^ v11;
        v40 = v43;
        v27 = v44;
        v28 = v43;
        if (v44 >= *(int32_t *)v38) {
            goto lab_0x406d66;
        }
        v39 = *(int32_t *)-0x4abefa69;
    }
    // 0x406d1c
    *(int32_t *)(v10 - 4) = 0x850440;
    g38 = v39;
    *(int32_t *)(*(int32_t *)(v10 + 8) + 0x13341) = 0x39ab0440;
    return *(int32_t *)0x3a047b;
}

// Address range: 0x406d82 - 0x406d83
int32_t function_406d82(void) {
    // 0x406d82
    int32_t result; // 0x406d82
    return result;
}

// Address range: 0x406d8e - 0x406dbf
int32_t function_406d8e(void) {
    // 0x406d8e
    int32_t v1; // 0x406d8e
    int32_t * v2 = (int32_t *)(v1 - 0x3f139ff2); // 0x406d8e
    uint32_t v3 = *v2; // 0x406d8e
    int32_t v4; // 0x406d8e
    uint32_t v5 = v3 + v4; // 0x406d8e
    bool v6; // 0x406d8e
    uint32_t v7 = v5 + (int32_t)v6; // 0x406d8e
    bool v8 = v6 ? v7 <= v3 : v5 < v3; // 0x406d8e
    *v2 = v7;
    int32_t v9; // 0x406d8e
    char * v10 = (char *)(v9 - 117); // 0x406d95
    unsigned char v11 = *v10; // 0x406d95
    unsigned char v12 = v11 + (char)v4; // 0x406d95
    unsigned char v13 = v12 + (char)v8; // 0x406d95
    *v10 = v13;
    int32_t v14; // 0x406d8e
    if (v13 != 0) {
        v14 = function_406d82();
    }
    bool v15 = v8 ? v13 <= v11 : v12 < v11; // 0x406d95
    int32_t v16 = *(int32_t *)(v14 + 32); // 0x406d9e
    int32_t v17; // 0x406d8e
    int32_t v18; // 0x406d8e
    int32_t v19 = unknown_f740acc3(v4 + (int32_t)v15 - *(int32_t *)(v18 + 87), v16, v17); // 0x406da8
    return v19 != 0 ? v19 : 156;
}

// Address range: 0x406dc0 - 0x406dcc
int32_t function_406dc0(void) {
    // 0x406dc0
    int32_t v1; // 0x406dc0
    bool v2; // 0x406dc0
    bool v3 = v2 | (uint32_t)(v1 & 14) > 9; // 0x406dc1
    int32_t v4 = (v3 ? v1 + 6 : v1) & 15; // 0x406dc1
    int32_t v5 = 256 * (int32_t)v3 + v1 & 0xff00 | v1 & -0x10000;
    int32_t * v6 = (int32_t *)(v5 | v4); // 0x406dc2
    *v6 = *v6 + 1;
    __asm_out(192, (char)v4);
    return v5 | (int32_t)__asm_in_7(93);
}

// Address range: 0x406e16 - 0x406e1c
int32_t function_406e16(int32_t a1, int32_t a2) {
    // 0x406e16
    int32_t v1; // 0x406e16
    char * v2 = (char *)(v1 + 94); // 0x406e16
    int32_t v3; // 0x406e16
    *v2 = *v2 & (char)v3;
    int32_t result; // 0x406e16
    return result;
}

// Address range: 0x406e39 - 0x406e3a
int32_t function_406e39(void) {
    // 0x406e39
    int32_t result; // 0x406e39
    return result;
}

// Address range: 0x406e6e - 0x406f6c
int32_t function_406e6e(int32_t a1, int32_t a2) {
    // 0x406e6e
    int32_t result; // 0x406e6e
    int32_t v1; // 0x406e6e
    if (v1 != 0) {
        // 0x406e8a
        return result;
    }
    int32_t v2; // 0x406e6e
    int32_t v3 = v2;
    int32_t v4 = *(int32_t *)(v3 - 119); // 0x406ec7
    int32_t v5 = *(int32_t *)(v3 - 111); // 0x406ece
    int32_t v6 = *(int32_t *)(v3 - 107); // 0x406ecf
    int32_t v7 = v3 - 129; // 0x406ed1
    *(int32_t *)(v3 - 105) = 22;
    int32_t v8; // 0x406e6e
    *(int32_t *)(v3 - 109) = v8;
    *(int32_t *)(v3 - 117) = v5;
    *(int32_t *)(v3 - 121) = v3 - 101;
    *(int32_t *)(v3 - 125) = v6;
    *(int32_t *)v7 = *(int32_t *)(v3 - 115);
    *(int32_t *)(v3 - 133) = v4;
    char * v9 = (char *)(v6 - 0xaf51b9); // 0x406ed2
    unsigned char v10 = *v9; // 0x406ed2
    unsigned char v11 = v10 + (char)v8; // 0x406ed2
    *v9 = v11;
    int32_t v12 = v8 - 1; // 0x406ee4
    result = v5;
    // 0x406ec7
    while (v12 != 0) {
        char * v13 = v11 < v10 ? (char *)0x406e28 : (char *)0x406e27; // 0x406e79
        uint32_t v14; // 0x406e6e
        *v13 = *v13 + (char)(v14 / 256);
        unsigned char v15 = (char)v12 & 31; // 0x406e7b
        if (v15 != 0) {
            char * v16 = (char *)(v4 - 0x75f77475); // 0x406e7b
            *v16 = *v16 >> v15;
        }
        int32_t v17 = v5 + 2 & 4; // 0x406e83
        result = v17;
        if (v17 != 0) {
            // break -> 0x406e8a
            break;
        }
        v3 = v7;
        v4 = *(int32_t *)(v3 - 119);
        v5 = *(int32_t *)(v3 - 111);
        v6 = *(int32_t *)(v3 - 107);
        v7 = v3 - 129;
        *(int32_t *)(v3 - 105) = 22;
        *(int32_t *)(v3 - 109) = v12;
        *(int32_t *)(v3 - 117) = v5;
        *(int32_t *)(v3 - 121) = v3 - 101;
        *(int32_t *)(v3 - 125) = v6;
        *(int32_t *)v7 = *(int32_t *)(v3 - 115);
        *(int32_t *)(v3 - 133) = v4;
        v9 = (char *)(v6 - 0xaf51b9);
        v10 = *v9;
        v11 = v10 + (char)v12;
        *v9 = v11;
        v12--;
        result = v5;
    }
    // 0x406e8a
    return result;
}

// Address range: 0x406f6c - 0x406f73
int32_t function_406f6c(int32_t a1, int32_t a2) {
    // 0x406f6c
    return 22;
}

// Address range: 0x406f73 - 0x406f76
int32_t function_406f73(void) {
    // 0x406f73
    int32_t result; // 0x406f73
    return result;
}

// Address range: 0x406f9a - 0x40714b
int32_t function_406f9a(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    // 0x406f9a
    int32_t v1; // 0x406f9a
    bool v2; // 0x406f9a
    *(char *)v1 = (char)v2;
    int32_t v3; // 0x406f9a
    int32_t v4 = *(int32_t *)(v3 - 17); // 0x406fa8
    *(int32_t *)(v3 + 67) = v4;
    int32_t v5; // 0x406f9a
    if (v4 != 0) {
        v5 = function_406f73();
    } else {
        // 0x406f9a
        v5 = v1 ^ -0x13e7aa70;
    }
    // 0x406fb5
    int32_t v6; // 0x406f9a
    char v7 = *(char *)&v6; // 0x406fba
    char v8 = (v7 < 48 ? -48 : -57) + v7;
    int32_t v9 = v5 & -256 | (int32_t)v7; // 0x406fc6
    if (v8 < 0 == ((v7 < 48 ? 47 : 56) - v7 & v7) < 0 == (v8 != 0)) {
        v9 = function_97707d();
    }
    int32_t v10 = v9;
    __asm_arpl(*(int16_t *)v10, (int16_t)v10);
    v6 = 0xdef440;
    int32_t v11 = function_406f6c((int32_t)&g70, (int32_t)&g70);
    uint32_t v12 = *(int32_t *)57; // 0x406fe7
    *(int32_t *)57 = v12 / 2 | 0x80000000 * v12;
    uint32_t v13 = *(int32_t *)0xdef440; // 0x406fea
    *(int32_t *)0xdef440 = v13 / 2 | 0x80000000 * v13;
    *(int32_t *)(v3 - 8) = v11 + 0x1bd0c1c8;
    int32_t v14; // 0x406f9a
    __asm_in_4((int16_t)v14);
    *(int32_t *)-0x61b27610 = 0x40251c15;
    int32_t v15 = *(int32_t *)*(int32_t *)(v14 + 12) & 0x40251c15; // 0x407016
    if (v15 == 0) {
        // 0x4070c6
        return __asm_wait();
    }
    // 0x40701e
    *(int32_t *)(v3 - 9) = v15;
    *(int32_t *)(v11 + 0x1bd0c1c4 + 8 * v6) = 56;
    return (v14 + 89 & 255 | v14 & -256) ^ 218;
}

// Address range: 0x407150 - 0x407151
int32_t function_407150(void) {
    // 0x407150
    int32_t result; // 0x407150
    return result;
}

// Address range: 0x407156 - 0x4071a1
int32_t function_407156(void) {
    // 0x407156
    int32_t v1; // 0x407156
    *(char *)v1 = 2 * (char)v1;
    uint32_t v2; // 0x407156
    int32_t v3; // 0x407156
    int32_t v4 = v3 + v2; // 0x407158
    char v5 = v4; // 0x40715a
    unsigned char v6 = v5 & 31; // 0x40715a
    if (v6 != 0) {
        int32_t v7; // 0x407156
        char * v8 = (char *)(v7 + 57); // 0x40715a
        unsigned char v9 = *v8; // 0x40715a
        *v8 = v9 >> 8 - v6 | v9 << v6;
    }
    int32_t v10 = v4 & 255 | v3 & -256; // 0x407158
    int32_t * v11 = (int32_t *)(v10 + 0x4589bc45); // 0x40715d
    *v11 = *v11 + v10;
    char * v12 = (char *)(v10 + 0x5553c855); // 0x407163
    unsigned char v13 = *v12; // 0x407163
    *v12 = v13 / 16 | 16 * v13;
    int32_t v14; // 0x407156
    char * v15 = (char *)(v14 + 0x7d89fb55); // 0x407170
    *v15 = *v15 & v5;
    int32_t v16; // 0x407156
    char * v17 = (char *)(v16 + 86); // 0x407176
    *v17 = *v17 + (char)(v2 / 256);
    int32_t v18; // 0x407156
    if ((*(int32_t *)(v10 - 0x1ad2a815) ^ v1) < 0) {
        v18 = function_407150();
    }
    int32_t result = v18 + 1; // 0x40718f
    int32_t * v19 = (int32_t *)(v10 - 0x1f7cbebe); // 0x407196
    *v19 = *v19 | result;
    return result;
}

// Address range: 0x4071aa - 0x4071b6
int32_t function_4071aa(void) {
    // 0x4071aa
    return function_4071aa();
}

// Address range: 0x4071b6 - 0x4071c0
int32_t function_4071b6(void) {
    // 0x4071b6
    return function_4071aa();
}

// Address range: 0x4071c0 - 0x4072a2
int32_t function_4071c0(uint32_t a1) {
    // 0x4071c0
    int32_t v1; // 0x4071c0
    unsigned char v2 = (char)v1; // 0x4071c0
    int32_t result; // 0x4071c0
    if (v2 == 35) {
        // 0x4071c4
        return result;
    }
    if (v2 == 48) {
        // 0x4071d8
        return function_4071aa();
    }
    if (v2 >= 48) {
        // 0x4071c4
        return v1 - 0x603faa77;
    }
    // 0x40721e
    int32_t v3; // 0x4071c0
    char * v4 = (char *)(v3 + 0x3a83e08e); // 0x407223
    *v4 = *v4 + (char)v3;
    int32_t v5; // 0x4071c0
    int32_t * v6 = (int32_t *)(v5 + 74); // 0x407229
    int32_t v7; // 0x4071c0
    *v6 = *v6 + v7;
    int32_t v8 = *(int32_t *)(v3 + 71) ^ v1 - (v2 < 48 ? 0x401c7418 : 0x401c7417); // 0x40722c
    int32_t v9 = v8 + 138 & 255 | v8 & -256; // 0x40722f
    int32_t v10 = v9; // bp+5299, 0x407232
    unknown_cace00(v9);
    int32_t v11; // 0x4071c0
    int32_t * v12 = (int32_t *)(v11 + 0x40c130); // 0x407240
    *v12 = *v12 + ((int32_t)&v10 | (int32_t)(a1 < 0xffffffeb));
    int32_t v13 = __asm_hlt(); // 0x407268
    int32_t * v14 = (int32_t *)v13; // 0x40726b
    *v14 = *v14 + v13;
    char * v15 = (char *)v13; // 0x40726d
    char v16 = v13; // 0x40726d
    *v15 = *v15 + v16;
    __asm_out(38, v16);
    uint32_t v17; // 0x4071c0
    unsigned char v18 = (char)(v17 / 256) + (char)v17; // 0x407272
    result = __asm_iretd();
    if (v18 == 0) {
        // 0x407276
        return *(int32_t *)(v17 & -256 | (int32_t)v18);
    }
    // 0x4071c4
    return result;
}

// Address range: 0x4072b6 - 0x4072bf
int32_t function_4072b6(void) {
    // 0x4072b6
    int32_t v1; // 0x4072b6
    char * v2 = (char *)(v1 + 4); // 0x4072b6
    int32_t v3; // 0x4072b6
    char v4 = v3; // 0x4072b6
    bool v5; // 0x4072b6
    *v2 = (char)v5 - v4 + *v2;
    int32_t v6; // 0x4072b6
    char * v7 = (char *)v6; // 0x4072b9
    *v7 = v4;
    int32_t v8; // 0x4072b6
    *v7 = __asm_insb((int16_t)v8);
    int32_t result; // 0x4072b6
    return result;
}

// Address range: 0x4072bf - 0x4072c9
int32_t function_4072bf(void) {
    // 0x4072bf
    uint32_t v1; // 0x4072bf
    *(int32_t *)v1 = v1 / 0x20000000 | 8 * v1;
    int32_t result = function_4072db((int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70); // 0x4072c7
    return result;
}

// Address range: 0x4072c9 - 0x4072db
int32_t function_4072c9(void) {
    // 0x4072c9
    int32_t v1; // 0x4072c9
    return v1 & 255;
}

// Address range: 0x4072db - 0x407d27
int32_t function_4072db(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    // 0x4072db
    int32_t v1; // 0x4072db
    char * v2 = (char *)(v1 - 0x74c98ad6); // 0x40732e
    *v2 = *v2 & 27;
    int32_t result; // 0x4072db
    return result;
}

// Address range: 0x407d58 - 0x407d65
int32_t function_407d58(void) {
    // 0x407d58
    int32_t result; // 0x407d58
    return result;
}

// Address range: 0x407d80 - 0x407d81
int32_t function_407d80(int32_t a1) {
    // 0x407d80
    int32_t result; // 0x407d80
    return result;
}

// Address range: 0x407db3 - 0x407db6
int32_t function_407db3(int32_t a1) {
    // 0x407db3
    int32_t result; // 0x407db3
    return result;
}

// Address range: 0x407dbd - 0x407dc0
int32_t function_407dbd(void) {
    // 0x407dbd
    int32_t result; // 0x407dbd
    return result;
}

// Address range: 0x407df2 - 0x407df7
int32_t function_407df2(int32_t a1) {
    // 0x407df2
    int32_t result; // 0x407df2
    *(char *)result = (char)result ^ -117;
    return result;
}

// Address range: 0x407dfa - 0x407e01
int32_t function_407dfa(void) {
    // 0x407dfa
    return function_8bec73b1();
}

// Address range: 0x407e0c - 0x407e0d
int32_t function_407e0c(int16_t a1) {
    // 0x407e0c
    int32_t result; // 0x407e0c
    return result;
}

// Address range: 0x407e22 - 0x407e25
int32_t function_407e22(void) {
    // 0x407e22
    int32_t result; // 0x407e22
    return result;
}

// Address range: 0x407e30 - 0x407e35
int32_t function_407e30(int32_t a1) {
    // 0x407e30
    return __asm_in_2(13);
}

// Address range: 0x407e44 - 0x407e4a
int32_t function_407e44(void) {
    // 0x407e44
    int32_t v1; // 0x407e44
    return function_2e47448a(v1);
}

// Address range: 0x407e63 - 0x407e84
int32_t function_407e63(void) {
    // 0x407e63
    int32_t v1; // 0x407e63
    *(char *)v1 = 2 * (char)v1;
    __asm_bound(*(int64_t *)0x6883004);
    return __asm_hlt();
}

// Address range: 0x407e84 - 0x407eb3
int32_t function_407e84(int32_t a1) {
    // 0x407e84
    uint32_t v1; // 0x407e84
    int64_t v2 = 0x100000000 * (int64_t)((int32_t)v1 >> 31) | (int64_t)v1; // 0x407e8a
    int32_t v3; // 0x407e84
    char * v4 = (char *)(v3 - 0x47fe8136); // 0x407e8d
    unsigned char v5 = *v4; // 0x407e8d
    *v4 = v5 / 128 | 2 * v5;
    int32_t v6 = (int32_t)*(int16_t *)0x25cc1ed; // 0x407e94
    *(int32_t *)118 = *(int32_t *)118 ^ -24;
    int32_t v7; // 0x407e84
    *(char *)v7 = *(char *)&v7 | 48;
    *(char *)v7 = (char)(v6 + (int32_t)(v2 % 10));
    int32_t v8; // 0x407e84
    *(char *)v8 = *(char *)(v7 + 1);
    int32_t * v9 = (int32_t *)((int32_t)(v2 / 10) & -0x10000 | v6); // 0x407eaa
    *v9 = 256 * *v9;
    int16_t v10; // 0x407e84
    return function_407e0c(v10);
}

// Address range: 0x407eb3 - 0x407eb7
int32_t function_407eb3(void) {
    // 0x407eb3
    int32_t v1; // 0x407eb3
    int32_t v2; // 0x407eb3
    return v2 & -256 | (int32_t)*(char *)((v2 & 255) + v1);
}

// Address range: 0x407eb7 - 0x407ebe
int32_t function_407eb7(void) {
    // 0x407eb7
    int32_t v1; // 0x407eb7
    char * v2 = (char *)(v1 + 95); // 0x407eb7
    int32_t v3; // 0x407eb7
    *v2 = *v2 + (char)v3;
    int32_t result; // 0x407eb7
    return result;
}

// Address range: 0x407ec0 - 0x407ee7
int32_t function_407ec0(int32_t a1) {
    // 0x407ec0
    int32_t v1; // 0x407ec0
    int32_t v2; // 0x407ec0
    __asm_arpl(*(int16_t *)(v2 + 24), (int16_t)v1);
    int32_t v3; // 0x407ec0
    return v3 - 0x1cc4f300;
}

// Address range: 0x407efd - 0x407f0c
int32_t function_407efd(void) {
    // 0x407efd
    int32_t v1; // 0x407efd
    char * v2 = (char *)(v1 - 0x22e1ebb5); // 0x407efe
    uint32_t v3; // 0x407efd
    bool v4; // 0x407efd
    *v2 = *v2 + (char)(v3 / 256) + (char)v4;
    int32_t v5; // 0x407efd
    int32_t v6; // 0x407efd
    return 256 * v5 & 0xff00 | v6;
}

// Address range: 0x407f26 - 0x407f27
int32_t function_407f26(void) {
    // 0x407f26
    int32_t result; // 0x407f26
    return result;
}

// Address range: 0x407f48 - 0x407f51
int32_t function_407f48(void) {
    // 0x407f48
    int32_t v1; // 0x407f48
    float80_t v2; // 0x407f48
    *(float64_t *)(v1 + 0x301ddcec) = (float64_t)v2;
    int32_t result; // 0x407f48
    return result;
}

// Address range: 0x407f68 - 0x407f6b
int32_t function_407f68(void) {
    // 0x407f68
    int32_t result; // 0x407f68
    return result;
}

// Address range: 0x407f77 - 0x407f95
int32_t function_407f77(void) {
    // 0x407f77
    int32_t v1; // 0x407f77
    char * v2 = (char *)(v1 - 0x7caf13ba); // 0x407f7a
    int32_t v3; // 0x407f77
    *v2 = (char)v3 + 1 + *v2;
    float80_t v4; // 0x407f77
    *(float64_t *)(v1 - 11) = (float64_t)v4;
    int32_t v5 = __asm_fnsave(); // 0x407f8e
    int32_t v6; // 0x407f77
    int32_t v7; // 0x407f77
    *(int864_t *)(8 * v6 - 36 + v7) = (int864_t)v5;
    int32_t v8; // 0x407f77
    return v5 - (v8 + 0x6240c119 < v8 + 1 ? 9 : 8) & 255 | v5 & -256;
}

// Address range: 0x407f9e - 0x407f9f
int32_t function_407f9e(void) {
    // 0x407f9e
    int32_t result; // 0x407f9e
    return result;
}

// Address range: 0x407fc1 - 0x407fc2
int32_t function_407fc1(void) {
    // 0x407fc1
    int32_t result; // 0x407fc1
    return result;
}

// Address range: 0x407fc4 - 0x407fcd
int32_t function_407fc4(int16_t a1) {
    // 0x407fc4
    int32_t v1; // 0x407fc4
    uint32_t v2; // 0x407fc4
    if ((uint32_t)(v1 + 1) < v2) {
        function_407fc1();
    }
    // 0x407fcb
    return function_408015();
}

// Address range: 0x407fcd - 0x407fda
int32_t function_407fcd(int32_t a1) {
    int32_t v1 = __asm_fnsave(); // 0x407fcd
    int32_t v2; // 0x407fcd
    *(int864_t *)v2 = (int864_t)v1;
    bool v3; // 0x407fcd
    return v1 - (v3 ? 0x6223c231 : 0x6223c230);
}

// Address range: 0x407fda - 0x407fe8
float80_t function_407fda(void) {
    // 0x407fda
    int32_t v1; // 0x407fda
    *(char *)v1 = 2 * (char)v1;
    int32_t v2; // 0x407fda
    float80_t v3 = (float80_t)*(float64_t *)(v2 + 8); // 0x407fdf
    return v3 * v3;
}

// Address range: 0x407ff0 - 0x407ff3
int32_t function_407ff0(void) {
    // 0x407ff0
    int32_t result; // 0x407ff0
    return result;
}

// Address range: 0x407fff - 0x408003
int32_t function_407fff(void) {
    // 0x407fff
    int32_t result; // 0x407fff
    return result;
}

// Address range: 0x408009 - 0x40800c
int32_t function_408009(void) {
    // 0x408009
    int32_t result; // 0x408009
    return result;
}

// Address range: 0x408015 - 0x40801b
int32_t function_408015(void) {
    // 0x408015
    __asm_hlt();
    return (float32_t)function_40801d((int32_t)&g70);
}

// Address range: 0x40801b - 0x40801d
float80_t function_40801b(void) {
    // 0x40801b
    float80_t result; // 0x40801b
    return result;
}

// Address range: 0x40801d - 0x408047
float80_t function_40801d(int32_t a1) {
    // 0x40801d
    int32_t v1; // 0x40801d
    int32_t v2 = *(int32_t *)(v1 - 76); // 0x40801d
    int32_t v3; // 0x40801d
    while ((v2 & v3) != 0) {
        // continue -> 0x408029
    }
    int32_t * v4 = (int32_t *)(v1 + 16); // 0x408034
    *v4 = *v4 ^ (v2 + 59 & 255 | v2 & -256);
    int32_t v5; // 0x40801d
    float80_t v6; // 0x40801d
    return v6 * (float80_t)*(float32_t *)(v5 + 0x3c632);
}

// Address range: 0x408047 - 0x4080f1
int32_t function_408047(int32_t a1, int32_t a2) {
    // 0x408047
    uint32_t v1; // 0x408047
    uint32_t result2; // 0x408047
    int32_t result; // 0x408047
    if (v1 <= result2) {
        // 0x408050
        return result;
    }
    // 0x408086
    int32_t v2; // 0x408047
    if ((llvm_ctpop_i8((char)result + 55) & 1) == 0) {
        int32_t v3 = __asm_in_2(93); // 0x4080df
        return v3 & -256 | (int32_t)*(char *)((v3 & 138 | 117) + v2);
    }
    // 0x40808f
    int32_t v4; // 0x408047
    if (result2 >= *(int32_t *)(v4 - 4)) {
        // 0x408093
        *(char *)(v2 + 79) = 0;
        return __asm_in_2(93);
    }
    // 0x4080a0
    if (*(char *)(v2 + 118) == -128) {
        // 0x4080d6
        *(char *)result2 = 0;
        return result2;
    }
    char * v5 = (char *)(result2 + 5); // 0x4080b5
    *v5 = *v5 ^ (char)(*(int32_t *)(v4 + 28) / 256);
    char * v6 = (char *)(result2 - 1); // 0x4080b9
    *v6 = *v6 + 1;
    return result2;
}

// Address range: 0x4080f2 - 0x4080ff
int32_t function_4080f2(void) {
    // 0x4080f2
    int32_t v1; // 0x4080f2
    __asm_in_4((int16_t)v1);
    int32_t v2; // 0x4080f2
    int32_t result; // 0x4080f2
    *(char *)v2 = (char)result;
    int32_t v3; // 0x4080f2
    char * v4 = (char *)(v3 - 14); // 0x4080f8
    *v4 = *v4 | (char)v1;
    return result;
}

// Address range: 0x408100 - 0x40819e
int32_t function_408100(int32_t a1, int32_t a2, int32_t a3) {
    // 0x408100
    int32_t result; // 0x408100
    bool v1; // 0x408100
    if (v1) {
        int32_t v2; // 0x408100
        if (v2 != 1) {
            // 0x408190
            return result;
        }
        // 0x408115
        *(int32_t *)*(int32_t *)17 = result & -256;
        return result & -0x10000 | 512;
    }
    // 0x408105
    int32_t v3; // 0x408100
    uint32_t v4; // 0x408100
    *(char *)v3 = (char)(v4 / 256) + (char)v3;
    char v5 = __asm_in_4((int16_t)v4); // 0x40810b
    char * v6 = (char *)(result & -256 | (int32_t)v5); // 0x40810c
    *v6 = *v6 + v5;
    int32_t v7; // 0x408100
    uint32_t v8 = v7;
    uint64_t v9 = 0xcccccccd * (int64_t)v8; // 0x408129
    int32_t v10 = v9; // 0x40812e
    if ((v9 & 0x400000000) == 0) {
        v10 = function_4080f2();
    }
    // 0x408130
    int32_t v11; // 0x408100
    int32_t result2 = v11 - 1; // 0x408130
    int32_t v12 = -119 * 256 * (int16_t)v10 / 256; // 0x408131
    int32_t * v13 = (int32_t *)(v10 & -0x10000 | v12); // 0x408136
    *v13 = 256 * *v13;
    v7 = v8 - v12 & 255 | v8 & -256;
    int32_t v14; // 0x408100
    v14 += 2;
    while (v9 >= 0x800000000) {
        // 0x408122
        v8 = v7;
        v9 = 0xcccccccd * (int64_t)v8;
        v10 = v9;
        if ((v9 & 0x400000000) == 0) {
            v10 = function_4080f2();
        }
        // 0x408130
        result2--;
        v12 = -119 * 256 * (int16_t)v10 / 256;
        v13 = (int32_t *)(v10 & -0x10000 | v12);
        *v13 = 256 * *v13;
        v7 = v8 - v12 & 255 | v8 & -256;
        v14 += 2;
    }
    // 0x408140
    int32_t v15; // 0x408100
    *(int32_t *)*(int32_t *)(v15 + 126) = v3 - result2;
    return result2;
}

// Address range: 0x4081a0 - 0x4081a8
int32_t function_4081a0(int32_t a1) {
    // 0x4081a0
    int32_t v1; // 0x4081a0
    int32_t * v2 = (int32_t *)(v1 + 0x5b5f14c4); // 0x4081a0
    *v2 = *v2 + 1;
    int32_t result; // 0x4081a0
    return result;
}

// Address range: 0x4081ab - 0x4081b6
int32_t function_4081ab(void) {
    // 0x4081ab
    return function_ebac8268();
}

// Address range: 0x4081db - 0x4081dc
int32_t function_4081db(void) {
    // 0x4081db
    int32_t result; // 0x4081db
    return result;
}

// Address range: 0x4081de - 0x4081e9
int32_t function_4081de(void) {
    // 0x4081de
    return function_40b890();
}

// Address range: 0x4081ef - 0x4081f6
int32_t function_4081ef(void) {
    // 0x4081ef
    return function_8032292a();
}

// Address range: 0x4081fa - 0x408211
int32_t function_4081fa(int32_t a1, int32_t a2) {
    int32_t v1 = a2;
    int32_t v2; // 0x4081fa
    int32_t v3; // 0x4081fa
    int32_t v4; // 0x4081fa
    if ((v4 || v3) != 0) {
        v2 = function_4081db();
    }
    // 0x408200
    int32_t v5; // 0x4081fa
    *(int32_t *)(v5 + 0x5b5fc78b) = (int32_t)&v1;
    int32_t v6; // 0x4081fa
    return v2 - v6;
}

// Address range: 0x408216 - 0x40821d
int32_t function_408216(void) {
    // 0x408216
    return function_90909090();
}

// Address range: 0x408238 - 0x408240
int32_t function_408238(int32_t a1) {
    // 0x408238
    int32_t result; // 0x408238
    return result;
}

// Address range: 0x40827c - 0x408294
int32_t function_40827c(void) {
    // 0x40827c
    int32_t v1; // 0x40827c
    return function_4082fe(v1, 1, -2);
}

// Address range: 0x408294 - 0x4082a5
int32_t function_408294(void) {
    // 0x408294
    int32_t v1; // 0x408294
    unknown_fffb8cf0(v1);
    int32_t result = __asm_int1(); // 0x4082a1
    char * v2 = (char *)(result + 43); // 0x4082a2
    int32_t v3; // 0x408294
    *v2 = *v2 & (char)v3;
    return result;
}

// Address range: 0x4082a6 - 0x4082ae
int32_t function_4082a6(int32_t a1) {
    // 0x4082a6
    return __asm_in_2(93);
}

// Address range: 0x4082c8 - 0x4082c9
int32_t function_4082c8(int32_t a1) {
    // 0x4082c8
    int32_t result; // 0x4082c8
    return result;
}

// Address range: 0x4082cd - 0x4082f7
int32_t function_4082cd(void) {
    // 0x4082cd
    int32_t v1; // 0x4082cd
    unknown_ffa117eb(v1, 68);
    __asm_int(81);
    return unknown_6d65();
}

// Address range: 0x4082fe - 0x4082ff
int32_t function_4082fe(int32_t a1, int32_t a2, int32_t a3) {
    // 0x4082fe
    int32_t result; // 0x4082fe
    return result;
}

// Address range: 0x4082ff - 0x40830b
int32_t function_4082ff(int32_t a1, int32_t a2) {
    // 0x4082ff
    int32_t v1; // 0x4082ff
    *(char *)v1 = 63;
    return __asm_hlt();
}

// Address range: 0x408316 - 0x40835d
int32_t function_408316(int32_t a1) {
    // 0x408316
    __asm_in_2(251);
    int32_t v1; // 0x408316
    int32_t v2; // 0x408316
    int32_t * v3 = (int32_t *)(v1 + 0x5e77104e - v2); // 0x40832c
    *v3 = *v3 | -0x1274fe0a;
    int32_t v4; // 0x408316
    *(int32_t *)(v4 - 6) = *(int32_t *)(v4 - 16);
    *(int32_t *)(v4 - 10) = 1;
    int32_t result = v4 - 14; // 0x408356
    *(int32_t *)result = a1 + 0x5152ed4d;
    return result;
}

// Address range: 0x40835d - 0x40841e
int32_t function_40835d(void) {
    int32_t v1 = *(int32_t *)0x22407a5d & -0xff01 | 0x9000; // 0x408365
    int32_t v2; // 0x40835d
    bool v3; // 0x40835d
    bool v4 = (v2 & 14) > 9 | v3; // 0x408368
    int32_t v5 = 256 * (int32_t)v4 + v2 & 0xff00 | v2 & -0x10000;
    int32_t v6 = *(int32_t *)((v5 | (v4 ? v2 + 10 : v2) & 15) - 0x6f6f6f70); // 0x40836a
    int32_t v7; // 0x40835d
    unsigned char v8 = *(char *)(v7 - 83); // 0x408376
    int32_t v9; // 0x40835d
    int32_t v10 = *(int32_t *)(v9 + 32 + (int32_t)v4 + v6); // bp-108, 0x40837e
    int32_t v11 = *(int32_t *)(v7 + 24); // 0x40837f
    int32_t * v12 = &v10; // 0x408384
    int32_t v13 = v11; // 0x408384
    int32_t v14; // 0x40835d
    int32_t v15; // 0x40835d
    if (v8 == 102) {
        // 0x408386
        int32_t v16; // 0x40835d
        *(char *)v11 = (char)v16;
        bool v17; // 0x40835d
        v13 = v11 + (v17 ? -1 : 1);
        int32_t v18 = *(int32_t *)(v7 + 17); // 0x40838d
        int32_t v19 = *(int32_t *)(v7 + 13); // 0x408394
        int32_t v20 = v19; // bp-130, 0x40839a
        int16_t v21; // 0x40835d
        function_408560(v19, v18, v13, v7 + 25, v5 | (int32_t)v8, v21, v10, v16, v1);
        int32_t v22; // 0x40835d
        __asm_into(v22);
        v15 = v19;
        v12 = &v20;
        v14 = v7 + 1;
    }
    int32_t v23 = v13;
    char * v24 = (char *)(v14 - 0x74afe716); // 0x4083a8
    unsigned char v25 = *v24; // 0x4083a8
    unsigned char v26 = v25 + (char)v15; // 0x4083a8
    unsigned char v27 = v26 + (char)(v8 < 102); // 0x4083a8
    *v24 = v27;
    int32_t v28 = __asm_wait(); // 0x4083af
    int32_t v29 = (int32_t)v12 - 4; // 0x4083b3
    *(int32_t *)v29 = v15;
    int32_t v30 = v8 < 102 ? v27 <= v25 : v26 < v25 ? 255 : 0; // 0x4083b4
    int32_t v31 = v29;
    *(int32_t *)(v31 - 4) = v23 + 1;
    *(int32_t *)(v31 - 8) = v28;
    *(int32_t *)(v31 - 12) = *(int32_t *)(v14 + 13);
    int32_t v32 = function_407f26(); // 0x4083ba
    int32_t v33 = *(int32_t *)(v1 + 0x40c174); // 0x4083bf
    int32_t v34 = v31 - 16; // 0x4083c7
    int32_t * v35 = (int32_t *)v34;
    *v35 = v14 + 1;
    int32_t v36 = v32 & -256 | v30; // 0x4083cb
    int32_t * v37 = (int32_t *)(v33 + 21); // 0x4083cc
    *v37 = *v37 + v23;
    char * v38 = (char *)(v36 + 3); // 0x4083cf
    *v38 = *v38 / 2;
    char * v39 = (char *)v36; // 0x4083d4
    char v40 = v30; // 0x4083d4
    *v39 = *v39 + v40;
    int32_t v41 = v31 - 0x18d8; // 0x4083d8
    *(int32_t *)v41 = v36;
    *(char *)0x40c16815 = v40;
    char * v42 = (char *)(v33 + 0x15eb08c4); // 0x4083de
    *v42 = *v42 + (char)(v32 / 256);
    int32_t v43 = *(int32_t *)0x40c178; // 0x4083e4
    int32_t v44 = (int32_t)*(char *)v32; // 0x4083ec
    int16_t v45 = *(int16_t *)(2 * v44 + *(int32_t *)v43) & 480;
    v30 = 0;
    while (v45 == 0) {
        int32_t v46 = v34;
        v31 = v41;
        int32_t v47 = v32;
        *(int32_t *)(v31 - 4) = v43;
        *(int32_t *)(v31 - 8) = 0;
        *(int32_t *)(v31 - 12) = v44;
        v32 = function_407f26();
        v33 = *(int32_t *)(v47 + 0x40c174);
        v34 = v31 - 16;
        v35 = (int32_t *)v34;
        *v35 = v46;
        v36 = v32 & -256 | v30;
        v37 = (int32_t *)(v33 + 21);
        *v37 = *v37 + v23;
        v38 = (char *)(v36 + 3);
        *v38 = *v38 / 2;
        v39 = (char *)v36;
        v40 = v30;
        *v39 = *v39 + v40;
        v41 = v31 - 0x18d8;
        *(int32_t *)v41 = v36;
        *(char *)0x40c16815 = v40;
        v42 = (char *)(v33 + 0x15eb08c4);
        *v42 = *v42 + (char)(v32 / 256);
        v43 = *(int32_t *)0x40c178;
        v44 = (int32_t)*(char *)v32;
        v45 = *(int16_t *)(2 * v44 + *(int32_t *)v43) & 480;
        v30 = 0;
    }
    int32_t v48 = *(int32_t *)(int32_t)(v45 | 30); // 0x4083fd
    *v35 = *(int32_t *)v48;
    *(char *)(v48 + 0x6bd1f7f3) = 0;
    *(int32_t *)(v31 - 20) = v34;
    *(int32_t *)(v23 - 0x3e2e7470) = v23;
    return function_8be6778c();
}

// Address range: 0x40841e - 0x408421
int32_t function_40841e(int32_t a1) {
    // 0x40841e
    int32_t result; // 0x40841e
    return result;
}

// Address range: 0x408421 - 0x4084c0
int32_t function_408421(int32_t a1, int32_t a2) {
    // 0x408421
    int32_t v1; // 0x408421
    __readgsdword(v1 - 125);
    uint32_t v2; // 0x408421
    char * v3 = (char *)(v2 - 57); // 0x408428
    int32_t v4; // 0x408421
    *v3 = *v3 - (v2 > -1 - v4 ? 2 : 1);
    int32_t v5; // 0x408421
    int32_t v6 = v5;
    *(char *)v6 = *(char *)&v5 + (char)v6;
    char v7 = *(char *)&v5 + (char)v5; // 0x40842e
    *(char *)v5 = v7;
    if (v7 != 0) {
        function_ffff84a8();
    }
    int32_t v8 = *(int32_t *)-0x7ff7d6f4; // 0x40843c
    v5 = v8;
    if (v8 >= 0 != v8 != 0) {
        // 0x408443
        return 0x8000 * (int32_t)(a1 < 0) | 0x4000 * (int32_t)(a1 == 0) | 1024 * (int32_t)((llvm_ctpop_i8((char)a1) & 1) == 0) | v8 & -0xff01 | 512;
    }
    unsigned char v9 = *(char *)((v8 & 255) + v2); // 0x408484
    int32_t result = v8 & -256 | (int32_t)v9; // 0x408484
    *(int32_t *)-0x7ff7d6f4 = result;
    *(char *)-0x3bf88884 = *(char *)-0x3bf88884 | (char)(v2 / 256);
    *(char *)-0xa897281 = v9;
    return result;
}

// Address range: 0x4084c1 - 0x4084c3
int32_t function_4084c1(void) {
    // 0x4084c1
    int32_t result; // 0x4084c1
    return result;
}

// Address range: 0x4084c3 - 0x408548
int32_t function_4084c3(void) {
    // 0x4084c3
    int32_t v1; // 0x4084c3
    char v2 = *(char *)(v1 + 1); // 0x4084cb
    int32_t v3; // 0x4084c3
    int32_t v4 = 0x10000 * (0x4000 * (int32_t)(v2 == 0) | v3 & 255 | 0x8000 * (int32_t)(v2 < 0) | 1024 * (int32_t)((llvm_ctpop_i8(v2) & 1) == 0)) / 0x10000 | 512; // 0x4084d4
    int32_t result; // 0x4084c3
    int32_t * v5 = (int32_t *)(result + 116); // 0x4084d5
    int32_t v6 = *v5 - v4; // 0x4084d5
    *v5 = v6;
    unsigned char v7 = v2 & 31; // 0x4084d8
    if (v7 != 0) {
        char * v8 = (char *)(v4 - 0x76b7b9ea); // 0x4084d8
        unsigned char v9 = *v8; // 0x4084d8
        *v8 = v9 >> v7 | v9 << 8 - v7;
    }
    if (v6 != 0) {
        // 0x4084e2
        return __asm_sti();
    }
    // 0x408535
    int32_t v10; // 0x4084c3
    *(char *)(v10 + 43) = 70;
    int32_t v11; // 0x4084c3
    *(char *)(v11 + 1) = 48;
    *(char *)(v11 + 2) = 48;
    return result;
}

// Address range: 0x408549 - 0x408552
int32_t function_408549(void) {
    // 0x408549
    int32_t v1; // 0x408549
    float80_t v2; // 0x408549
    *(float64_t *)(v1 - 0x74a4a18b) = (float64_t)v2;
    return __asm_in_2(133);
}

// Address range: 0x408559 - 0x40855c
int32_t function_408559(int32_t a1) {
    // 0x408559
    int32_t result; // 0x408559
    return result;
}

// Address range: 0x408560 - 0x408587
int32_t function_408560(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int16_t a6, int32_t a7, int32_t a8, int32_t a9) {
    // 0x408560
    int32_t v1; // 0x408560
    __asm_in_4((int16_t)v1);
    int32_t v2; // 0x408560
    int32_t v3 = *(int32_t *)(v2 + 0x50145557); // 0x408567
    char * v4 = (char *)(*(int32_t *)(v2 + 16) + 81); // 0x408579
    *v4 = *v4 | (char)v3;
    int32_t v5; // 0x408560
    return unknown_ff98faf0(v3, v3, v5, 0);
}

// Address range: 0x40858c - 0x4085a8
int32_t function_40858c(int32_t a1) {
    // 0x40858c
    int32_t v1; // 0x40858c
    unsigned char v2 = (char)v1; // 0x40858c
    bool v3; // 0x40858c
    bool v4 = v2 > 153 | v3;
    int32_t v5; // 0x40858c
    bool v6; // 0x40858c
    if (v6 || (v2 & 14) > 9) {
        v5 = (v4 ? 102 : 6) + v1 & 255 | v1 & -256;
    } else {
        v5 = (v4 ? v1 + 96 : v1) & 255 | v1 & -256;
    }
    int32_t v7; // 0x40858c
    int32_t * v8 = (int32_t *)(v7 + 87); // 0x408593
    int32_t v9 = *v8; // 0x408593
    int32_t v10 = v9 + (v4 ? -116 : -117); // 0x408593
    int32_t v11 = v10 + (int32_t)v4; // 0x408593
    *v8 = v10;
    int32_t result = v5; // 0x408597
    if (v10 < 0 != ((v11 ^ v9) & (v11 ^ -0x80000000)) < 0) {
        // 0x408599
        result = a1 + 188 & 255 | a1 & -256;
    }
    // 0x4085a5
    return result;
}

// Address range: 0x4085a8 - 0x4085b8
int32_t function_4085a8(void) {
    // 0x4085a8
    int32_t v1; // 0x4085a8
    int32_t v2; // 0x4085a8
    return v2 * v1;
}

// Address range: 0x4085b8 - 0x4085c2
int32_t function_4085b8(int32_t a1) {
    // 0x4085b8
    int32_t result; // 0x4085b8
    return result;
}

// Address range: 0x4085d2 - 0x4085dc
int32_t function_4085d2(void) {
    // 0x4085d2
    int32_t v1; // 0x4085d2
    uint32_t v2; // 0x4085d2
    bool v3; // 0x4085d2
    char v4 = (char)v3 - (char)(v2 / 256) + (char)v1; // 0x4085d2
    *(char *)v1 = v4;
    int32_t result = __asm_wait(); // 0x4085d9
    if (v4 != 0) {
        result = function_408638((int32_t)&g70);
    }
    // 0x4085db
    return result;
}

// Address range: 0x4085ee - 0x4085f9
int32_t function_4085ee(void) {
    // 0x4085ee
    int32_t result; // 0x4085ee
    *(char *)result = 2 * (char)result;
    int32_t v1; // 0x4085ee
    char * v2 = (char *)(v1 + 0x2fbb1875); // 0x4085f0
    int32_t v3; // 0x4085ee
    *v2 = *v2 + (char)v3;
    return result;
}

// Address range: 0x4085ff - 0x408607
int32_t function_4085ff(int32_t a1) {
    // 0x4085ff
    int32_t v1; // 0x4085ff
    return v1 + 0x40c2d0bb;
}

// Address range: 0x408618 - 0x408625
int32_t function_408618(void) {
    // 0x408618
    int32_t v1; // 0x408618
    bool v2; // 0x408618
    int32_t result = v1 - (v2 ? 83 : 82) & 255 | v1 & -256; // 0x408618
    int128_t v3; // 0x408618
    __asm_andnps(v3, *(int128_t *)result);
    return result;
}

// Address range: 0x408625 - 0x408631
int32_t function_408625(void) {
    // 0x408625
    int32_t v1; // 0x408625
    bool v2; // 0x408625
    return v1 - 0x7cee0001 + (int32_t)v2;
}

// Address range: 0x408638 - 0x408740
int32_t function_408638(int32_t a1) {
    // 0x408638
    int32_t v1; // 0x408638
    int32_t * v2 = (int32_t *)(v1 + 0x104d8b0e); // 0x408638
    uint32_t v3 = *v2; // 0x408638
    bool v4; // 0x408638
    int32_t v5 = v4; // 0x408638
    int32_t v6; // 0x408638
    uint32_t v7 = v6 + v5; // 0x408638
    int32_t v8 = v3 - v7; // 0x408638
    bool v9 = v4 ? v7 != -1 | v3 < v8 - v5 : v3 < v7; // 0x408638
    *v2 = v8;
    int32_t v10; // 0x408638
    int32_t * v11 = (int32_t *)(v10 + 0x2b000032); // 0x40863e
    uint32_t v12 = *v11; // 0x40863e
    int32_t v13 = v9; // 0x40863e
    int32_t v14; // 0x408638
    uint32_t v15 = v14 + v13; // 0x40863e
    int32_t v16 = v12 - v15; // 0x40863e
    *v11 = v16;
    int32_t v17 = unknown_8b58cbd8(v10); // 0x408648
    int32_t v18; // 0x408638
    int32_t * v19 = (int32_t *)v18; // 0x408652
    *v19 = v17 & -256 | 95;
    int32_t v20; // 0x408638
    if (!((v9 ? v15 != -1 || v12 < v16 - v13 : v12 < v15))) {
        // 0x40866c
        return *(int32_t *)v20;
    }
    // 0x408678
    *(int32_t *)v14 = v14 + 1;
    int32_t v21; // 0x408638
    char * v22 = (char *)(v21 - 117); // 0x408685
    uint32_t v23; // 0x408638
    char v24 = v23 / 256; // 0x408685
    char v25 = *v22 | v24; // 0x408685
    *v22 = v25;
    int32_t v26; // bp+13725, 0x408638
    int32_t v27; // bp+13761, 0x408638
    int32_t v28; // 0x408638
    int32_t v29; // 0x408638
    if (v25 != 0) {
        // 0x408696
        int16_t v30; // 0x408638
        int32_t result = unknown_5b407119(v29, v30, v26, v14, v21, v29, &v27, v23, v18, v28, v20); // 0x4086b4
        if (result == -1) {
            // 0x4086c8
            return result;
        }
        // 0x4086cb
        __asm_int(67);
        int32_t result2 = __asm_in_2(93); // 0x4086cd
        int32_t * v31 = (int32_t *)(v23 - 0x6f3c0038); // 0x4086cf
        *v31 = *v31 + -1 - result2;
        return result2;
    }
    int32_t v32 = *(int32_t *)v21 & v18; // 0x40868a
    if (v32 == 0) {
        // 0x40868e
        return __asm_iretd();
    }
    // 0x4086dc
    if ((llvm_ctpop_i8((char)v32) & 1) == 0) {
        int32_t result3 = unknown_7caa8780(v20, v18); // 0x408738
        *v19 = v18 + 12;
        return result3;
    }
    // 0x4086e1
    *(char *)0xe920 = *(char *)0xe920 | v24;
    int32_t v33 = function_4094fc(2 * v14, v18, v21, &v26, v26, v14, v21, v29, &v27, v23, v18, v28, v20); // 0x4086f6
    return v33 | 93;
}

// Address range: 0x408741 - 0x408744
int32_t function_408741(void) {
    // 0x408741
    int32_t result; // 0x408741
    return result;
}

// Address range: 0x408744 - 0x40877e
int32_t function_408744(int32_t a1) {
    // 0x408744
    int32_t result; // 0x408744
    if (result <= 0x51fc7f) {
        // 0x40874b
        return result;
    }
    // 0x408764
    int32_t v1; // 0x408744
    int32_t v2 = unknown_c889d0(*(int32_t *)(v1 + 12), *(int32_t *)(v1 + 16), result - 0x45fc80); // 0x408772
    int32_t v3; // 0x408744
    int32_t v4; // 0x408744
    __asm_outsd((int16_t)v4, v3);
    return v2 | 224;
}

// Address range: 0x408780 - 0x408781
int32_t function_408780(void) {
    // 0x408780
    int32_t result; // 0x408780
    return result;
}

// Address range: 0x408793 - 0x40879a
int32_t function_408793(int32_t a1, int32_t a2) {
    // 0x408793
    int32_t result; // 0x408793
    *(char *)result = 2 * (char)result;
    __asm_int(198);
    return result;
}

// Address range: 0x4087a3 - 0x4087ae
int32_t function_4087a3(void) {
    // 0x4087a3
    int32_t v1; // 0x4087a3
    int32_t * v2 = (int32_t *)(v1 + 117); // 0x4087a9
    int32_t v3; // 0x4087a3
    *v2 = *v2 + *(int32_t *)(v3 + 0x11fa0e0b);
    int32_t result; // 0x4087a3
    return result;
}

// Address range: 0x4087b3 - 0x4087d3
int32_t function_4087b3(int32_t a1) {
    // 0x4087b3
    int32_t v1; // 0x4087b3
    *(char *)v1 = 2 * (char)v1;
    uint32_t v2; // 0x4087b3
    int32_t v3 = v2 + 25; // 0x4087bc
    *(int32_t *)v2 = v3;
    int32_t v4 = v1 - 0x1884; // 0x4087bf
    if (v2 <= 0xffffffe6 && v3 != 0) {
        v4 = function_1e40cbfc();
    }
    int32_t v5 = v4;
    int32_t v6; // 0x4087b3
    int32_t * v7 = (int32_t *)(v6 - 123); // 0x4087c5
    *v7 = *v7 - 1;
    int32_t v8 = v5 + 40 & 255 | v5 & -256; // 0x4087c8
    char * v9 = (char *)(v8 + 0x410085); // 0x4087cb
    uint32_t v10; // 0x4087b3
    *v9 = *v9 + (char)(v10 / 256);
    return v8 + 1;
}

// Address range: 0x4087d3 - 0x4087da
int32_t function_4087d3(int32_t a1) {
    // 0x4087d3
    return 0x418160;
}

// Address range: 0x4087da - 0x4087e1
int32_t function_4087da(int32_t a1) {
    // 0x4087da
    return (int32_t)"een provided";
}

// Address range: 0x4087e1 - 0x4087eb
int32_t function_4087e1(void) {
    // 0x4087e1
    return unknown_2540ae();
}

// Address range: 0x4087eb - 0x4087fd
int32_t function_4087eb(int32_t a1, int32_t a2) {
    // 0x4087eb
    int32_t v1; // 0x4087eb
    char * v2 = (char *)(v1 - 61); // 0x4087ec
    int32_t v3; // 0x4087eb
    *v2 = *v2 + (char)v3;
    return 0x3b40ffb4;
}

// Address range: 0x4087fd - 0x408804
int32_t function_4087fd(int32_t a1) {
    // 0x4087fd
    return (int32_t)"No poll structure was provided and one was required.";
}

// Address range: 0x408804 - 0x40880b
int32_t function_408804(int32_t a1) {
    // 0x408804
    return -0x22bf16e0;
}

// Address range: 0x40880e - 0x408819
int32_t function_40880e(int32_t a1) {
    // 0x40880e
    int32_t v1; // 0x40880e
    char * v2 = (char *)(v1 - 61); // 0x40880f
    int32_t v3; // 0x40880e
    *v2 = *v2 + (char)v3;
    return (int32_t)"No thread key structure was provided and one was required.";
}

// Address range: 0x408819 - 0x408827
int32_t function_408819(int32_t a1, int32_t a2, int32_t a3) {
    // 0x408819
    return 0xf4fe7c;
}

// Address range: 0x408827 - 0x408835
int32_t function_408827(void) {
    // 0x408827
    int32_t v1; // 0x408827
    char * v2 = (char *)(v1 - 61); // 0x40882b
    int32_t v3; // 0x408827
    *v2 = (char)v3 - 1 + *v2;
    return (int32_t)"The specified network mask is invalid.";
}

// Address range: 0x408835 - 0x408843
int32_t function_408835(int32_t a1) {
    // 0x408835
    return 0x68fdf4;
}

// Address range: 0x408843 - 0x40884a
int32_t function_408843(void) {
    // 0x408843
    bool v1; // 0x408843
    bool v2 = v1 | (unsigned char)(char)"e given path is relative" > 153;
    int32_t v3 = v2 ? (int32_t)((char)"e given path is relative" + 102) | (int32_t)"e given path is relative" & -256 : (int32_t)((char)"e given path is relative" + 6) | (int32_t)"e given path is relative" & -256;
    int32_t v4 = v2 ? (int32_t)((char)"e given path is relative" + 96) | (int32_t)"e given path is relative" & -256 : (int32_t)(char)"e given path is relative" | (int32_t)"e given path is relative" & -256;
    bool v5; // 0x408843
    return v5 ? v3 : v4;
}

// Address range: 0x40884a - 0x408851
int32_t function_40884a(int32_t a1) {
    // 0x40884a
    return (int32_t)"The given path was above the root path";
}

// Address range: 0x408851 - 0x408858
int32_t function_408851(int32_t a1) {
    // 0x408851
    return (int32_t)"The given path is misformatted or contained invalid characters";
}

// Address range: 0x408858 - 0x408866
int32_t function_408858(int32_t a1) {
    // 0x408858
    int32_t v1; // 0x408858
    char * v2 = (char *)(v1 - 61); // 0x40885c
    int32_t v3; // 0x408858
    *v2 = *v2 + (char)v3;
    return (int32_t)"The process is not recognized.";
}

// Address range: 0x408866 - 0x40886d
int32_t function_408866(int32_t a1) {
    // 0x408866
    return (int32_t)"Internal error";
}

// Address range: 0x408872 - 0x408874
int32_t function_408872(int32_t a1) {
    // 0x408872
    int32_t result; // 0x408872
    return result;
}

// Address range: 0x408878 - 0x408893
int32_t function_408878(int32_t a1) {
    // 0x408878
    int32_t v1; // 0x408878
    int32_t * v2 = (int32_t *)(v1 + 0x7e7716f8); // 0x408878
    *v2 = *v2 + 1;
    int32_t v3; // 0x408878
    int32_t * v4 = (int32_t *)(v3 - 123); // 0x40887e
    *v4 = *v4 + 1;
    int16_t v5; // 0x408878
    return unknown_3f5d00c0(v5);
}

// Address range: 0x408893 - 0x4088a8
int32_t function_408893(int32_t a1) {
    // 0x408893
    int32_t v1; // 0x408893
    char * v2 = (char *)(v1 - 61); // 0x40889e
    int32_t v3; // 0x408893
    *v2 = *v2 + (char)v3;
    return (int32_t)"The specified child process is not done executing";
}

// Address range: 0x4088a8 - 0x4088b6
int32_t function_4088a8(int32_t a1) {
    // 0x4088a8
    return 0x3a40fb99;
}

// Address range: 0x4088b6 - 0x4088be
int32_t function_4088b6(void) {
    // 0x4088b6
    return 0x402ea8;
}

// Address range: 0x4088be - 0x4088f5
int32_t function_4088be(int32_t a1) {
    // 0x4088be
    int32_t v1; // 0x4088be
    char * v2 = (char *)(v1 - 61); // 0x4088c1
    uint32_t v3; // 0x4088be
    char v4 = v3 / 256 + v3; // 0x4088c1
    *v2 = *v2 + v4;
    int32_t v5; // 0x4088be
    char * v6 = (char *)(v5 - 0x513473d); // 0x4088d6
    unsigned char v7 = *v6; // 0x4088d6
    unsigned char v8 = v7 + v4; // 0x4088d6
    *v6 = v8;
    char * v9 = (char *)(v1 - 34); // 0x4088dd
    *v9 = *v9 - (v8 < v7 ? -71 : -72);
    char * v10 = (char *)(v5 - 0x60f473d); // 0x4088e4
    *v10 = *v10 + 102;
    *v2 = *v2 + v4;
    return (int32_t)"This function has not been implemented on this platform";
}

// Address range: 0x4088f5 - 0x4088fc
int32_t function_4088f5(int32_t a1) {
    // 0x4088f5
    return 0x6040f99c;
}

// Address range: 0x4088fc - 0x408903
int32_t function_4088fc(int32_t a1) {
    // 0x4088fc
    return 0x7cf97c;
}

// Address range: 0x408903 - 0x408940
int32_t function_408903(void) {
    // 0x408903
    int32_t v1; // 0x408903
    int32_t v2 = *(int32_t *)(v1 + 77); // 0x408905
    *(char *)(v2 + 106) = (char)v2;
    int32_t v3; // 0x408903
    uint32_t v4 = v3 & 31; // 0x40890c
    if (v4 != 0) {
        int32_t v5; // 0x408903
        int32_t * v6 = (int32_t *)(v5 - 0x5425ffc0); // 0x40890c
        uint32_t v7 = *v6; // 0x40890c
        *v6 = v7 >> 32 - v4 | v7 << v4;
    }
    int32_t v8 = unknown_ef40c9a4(); // 0x408917
    int32_t * v9 = (int32_t *)(v8 + 81); // 0x40891d
    int32_t v10 = *v9; // 0x40891d
    *v9 = v8;
    char * v11 = (char *)(v10 + 4 * ((v2 + 1) / 256 + v3 & 255 | v3 & 0x3fffff00)); // 0x408927
    char v12 = v10; // 0x408927
    *v11 = *v11 + v12;
    *(char *)0x40880b = v12;
    __asm_out_1(0, v10 + 1);
    int32_t v13; // 0x408903
    int32_t * v14 = (int32_t *)(v13 - 11); // 0x408938
    int32_t v15; // 0x408903
    *v14 = *v14 - (*(int32_t *)(v13 - 116) & v15);
    return function_10e1167();
}

// Address range: 0x4089a0 - 0x4089a1
int32_t function_4089a0(int32_t a1) {
    // 0x4089a0
    int32_t result; // 0x4089a0
    return result;
}

// Address range: 0x4089fd - 0x4089fe
int32_t function_4089fd(void) {
    // 0x4089fd
    int32_t result; // 0x4089fd
    return result;
}

// Address range: 0x408a04 - 0x408a05
int32_t function_408a04(void) {
    // 0x408a04
    int32_t result; // 0x408a04
    return result;
}

// Address range: 0x408a06 - 0x408a09
int32_t function_408a06(void) {
    // 0x408a06
    int32_t result; // 0x408a06
    return result;
}

// Address range: 0x408a0b - 0x408a5c
int32_t function_408a0b(int32_t a1, int32_t a2) {
    // 0x408a0b
    int32_t v1; // 0x408a0b
    bool v2; // 0x408a0b
    if (v2) {
        int32_t v3 = *(int32_t *)(8 * v1 + 0x3d40c31c); // 0x408a1b
        int32_t v4; // 0x408a0b
        int32_t * v5 = (int32_t *)(0x1000000 * v4 / 0x1000000 + 0x228ac10b); // 0x408a34
        uint32_t v6 = *v5; // 0x408a34
        *v5 = v6 / 8 | 0x40000000 * v6;
        int32_t v7; // 0x408a0b
        int32_t v8; // 0x408a0b
        char * v9 = (char *)(4 * v7 - 64 + *(int32_t *)(v8 - 125)); // 0x408a4f
        *v9 = *v9 ^ (char)((v3 + 0xf97f) / 256);
        return v3 - 0x2b2e7a98;
    }
    // 0x408a0d
    bool v10; // 0x408a0b
    return v1 + 36 + (int32_t)v10 & 255 | v1 & -256;
}

// Address range: 0x408a5c - 0x408a5f
int32_t function_408a5c(void) {
    // 0x408a5c
    int32_t result; // 0x408a5c
    return result;
}

// Address range: 0x408a5f - 0x408abe
int32_t function_408a5f(int32_t a1) {
    // 0x408a5f
    int32_t v1; // 0x408a5f
    int32_t v2; // 0x408a5f
    int32_t v3; // 0x408a5f
    unknown_d8b80(v2, v3, -0x7bbeff58, v1);
    char * v4 = (char *)(v1 + 93); // 0x408a72
    int32_t v5; // bp-16, 0x408a5f
    *v4 = *v4 - (((int32_t)&v5 ^ -16) < 16 ? 119 : 118);
    int32_t v6 = *(int32_t *)(v1 + 0x15ff5008); // 0x408a83
    int32_t v7 = v6 + 193 & 255 | v6 & -256; // 0x408a89
    int32_t * v8 = (int32_t *)v7; // 0x408a8b
    *v8 = v7 & *v8;
    int32_t v9; // 0x408a5f
    int32_t v10; // 0x408a5f
    unknown_3fef80(v9, v10, v7);
    unknown_72818406();
    return function_408780() | 93;
}

// Address range: 0x408abe - 0x408b3b
int32_t function_408abe(int32_t a1) {
    // 0x408abe
    int32_t v1; // bp-4, 0x408abe
    if (&v1 > (int32_t *)-32) {
        // 0x408b27
        int32_t result; // 0x408abe
        return result;
    }
    // 0x408ac8
    bool v2; // 0x408abe
    int32_t v3 = (v2 ? -4 : 4) + a1; // 0x408ad0
    __asm_hlt();
    int32_t v4; // 0x408abe
    char * v5 = (char *)(v4 - 117); // 0x408ae0
    *v5 = *v5 + (char)v4;
    __asm_hlt();
    int32_t v6; // 0x408abe
    *(char *)v6 = *(char *)v3;
    int32_t v7 = v3 + (v2 ? -1 : 1); // 0x408aea
    int32_t v8 = WSASend(0x5200, (struct _WSABUF *)&g70, (int32_t)&g70, &g70, (int32_t)&g70, (struct _OVERLAPPED *)&g70, (void (*)(int32_t, int32_t, struct _OVERLAPPED *, int32_t))&g70); // 0x408af3
    int32_t v9; // 0x408abe
    if (v8 != -1) {
        // 0x408b2a
        *(int32_t *)v7 = 0x5200;
        return function_90000cc2(v9);
    }
    int32_t * v10 = (int32_t *)v7;
    if (v8 == 0) {
        // 0x408b0b
        *v10 = v8;
        __asm_outsd((int16_t)v4, v4);
        return __asm_in_2(48) & -256;
    }
    // 0x408b15
    *v10 = 0xde0000;
    char * v11 = (char *)(v7 - 117); // 0x408b22
    *v11 = *v11 + (char)v9;
    // 0x408b27
    return __asm_in_2(148);
}

// Address range: 0x408b9a - 0x408b9e
int32_t function_408b9a(int32_t a1) {
    // 0x408b9a
    int32_t result; // 0x408b9a
    return result;
}

// Address range: 0x408bc4 - 0x408bcd
int32_t function_408bc4(void) {
    // 0x408bc4
    int32_t v1; // 0x408bc4
    int32_t * v2 = (int32_t *)(v1 + 0x5de58b29); // 0x408bc4
    int32_t v3; // 0x408bc4
    bool v4; // 0x408bc4
    *v2 = *v2 + v3 + (int32_t)v4;
    int32_t result; // 0x408bc4
    return result;
}

// Address range: 0x408bce - 0x408bf9
int32_t function_408bce(void) {
    // 0x408bce
    int32_t v1; // 0x408bce
    int32_t * v2 = (int32_t *)(v1 + 0x51ec8b38); // 0x408bce
    bool v3; // 0x408bce
    *v2 = *v2 + (v3 ? -116 : -117);
    uint32_t v4; // 0x408bce
    uint32_t v5 = v4 / 256 & 255 ^ v1; // 0x408be0
    int32_t v6; // 0x408bce
    int32_t v7; // 0x408bce
    int32_t v8; // 0x408bce
    unsigned char v9 = *(char *)(v7 + 19 + 4 * v6) & (char)v8; // 0x408be2
    char * v10 = (char *)v5; // 0x408be7
    unsigned char v11 = *v10; // 0x408be7
    unsigned char v12 = v11 + v9; // 0x408be7
    *v10 = v12;
    uint32_t v13 = v5 + (int32_t)&g4; // 0x408be9
    int32_t v14 = v13 + (int32_t)(v12 < v11); // 0x408be9
    bool v15 = v12 < v11 ? v14 <= v5 : v13 < v5; // 0x408be9
    int32_t * v16 = (int32_t *)(v4 - 1); // 0x408bee
    int32_t v17 = *v16; // 0x408bee
    int32_t v18 = v17 - (v15 ? 118 : 117); // 0x408bee
    *v16 = v18;
    __asm_outsd((int16_t)(v8 & 0xff00 | (int32_t)v9), v7);
    int32_t result = v14; // 0x408bf4
    if ((-1 - v18 + (int32_t)v15 & v17) < 0) {
        result = function_408c2b();
    }
    // 0x408bf6
    return result;
}

// Address range: 0x408bf9 - 0x408c07
int32_t function_408bf9(void) {
    // 0x408bf9
    int32_t result; // 0x408bf9
    if (result != 0) {
        // 0x408c05
        return result;
    }
    // 0x408c00
    __asm_out_1(139, result);
    return __asm_in_2(93);
}

// Address range: 0x408c08 - 0x408c17
int32_t function_408c08(int32_t a1) {
    // 0x408c08
    int32_t result; // 0x408c08
    return result;
}

// Address range: 0x408c2b - 0x408c70
int32_t function_408c2b(void) {
    // 0x408c2b
    int32_t v1; // 0x408c2b
    *(int32_t *)(v1 - 4) = 1;
    int32_t v2; // 0x408c2b
    int32_t v3 = unknown_80391070(v2, 0x3a04667e); // 0x408c38
    int32_t v4 = v3 + 1; // 0x408c3e
    if (v4 != 0) {
        // 0x408c6b
        return v3 & -0xff01 | 256 * (128 * (int32_t)(v4 < 0) | (int32_t)(v3 != -1) | 16 * (int32_t)((v3 & 15) > 30) | 4 * (int32_t)((llvm_ctpop_i8((char)v4) & 1) == 0)) | 512;
    }
    // 0x408c43
    unknown_4ac180();
    *(int32_t *)v2 = 2 * v2;
    return unknown_4ac180() + 0x28fca5;
}

// Address range: 0x408c70 - 0x408db0
int32_t function_408c70(int32_t a1, int32_t a2, uint32_t a3) {
    // 0x408c70
    bool v1; // 0x408c70
    if (v1) {
        function_408c08((int32_t)&g70);
    }
    bool v2; // 0x408c70
    bool v3; // 0x408c70
    if (v3 == v2) {
        // 0x408c8f
        int16_t v4; // 0x408c70
        return unknown_4568b00(v4);
    }
    // 0x408c7f
    int32_t v5; // 0x408c70
    int32_t result = v5 | a3; // 0x408c81
    if (result != 0) {
        // 0x408cca
        return 0x10000 * *(int32_t *)(a2 + 4) / 0x10000;
    }
    // 0x408c85
    int32_t v6; // 0x408c70
    int32_t v7; // 0x408c70
    char * v8 = (char *)(v6 - 0x37f4dbe4 + v7); // 0x408c87
    *v8 = *v8 & (char)(a3 / 256);
    return result;
}

// Address range: 0x408db0 - 0x40900f
int32_t function_408db0(int32_t a1, int32_t a2) {
    // 0x408db0
    int32_t result2; // 0x408db0
    int32_t v1 = *(int32_t *)(result2 - 127); // 0x408db4
    int32_t v2; // 0x408db0
    int32_t v3 = (v1 ^ result2) & -256 | (int32_t)__asm_in_4((int16_t)v2); // 0x408dbc
    uint32_t v4; // 0x408db0
    int32_t * v5 = (int32_t *)(v4 + 0x4d8bfc4d); // 0x408dbd
    uint32_t v6 = *v5; // 0x408dbd
    *v5 = v6 / 0x1000 | 0x100000 * v6;
    if (v4 > 64) {
        if ((63 - v4 & v4) < 0) {
            // 0x408e31
            int32_t result; // 0x408db0
            return result;
        }
        // 0x409005
        *(char *)result2 = *(char *)&v3 + (char)result2;
        char * v7 = (char *)(result2 + 0xfe8f); // 0x409008
        *v7 = *v7 + (char)(v4 / 256);
        return result2;
    }
    int32_t result3; // 0x408db0
    if (v4 == 64) {
        result3 = function_2f408fdb();
    }
    uint32_t v8 = v4 - 1; // 0x408dd4
    int32_t v9; // 0x408db0
    *(char *)v9 = *(char *)&v9 + (char)result3;
    char * v10 = (char *)(result3 + 51); // 0x408ddc
    *v10 = *v10 + (char)v9;
    char v11 = v8; // 0x408ddf
    unsigned char v12 = v11 & 31; // 0x408ddf
    if (v12 != 0) {
        char * v13 = (char *)(v2 - 0x556eef6f); // 0x408ddf
        unsigned char v14 = *v13; // 0x408ddf
        *v13 = v14 >> v12 | v14 << 8 - v12;
    }
    char * v15 = (char *)(v3 - 0x6f0772dc); // 0x408de5
    *v15 = *v15 + (char)(v8 / 256);
    char * v16 = (char *)(v9 - 0x2d89f78b); // 0x408dec
    *v16 = *v16 + v11;
    if (result3 == (v2 & -256 || (int32_t)(v9 == -2))) {
        // 0x408e31
        return 0;
    }
    // 0x408e02
    *(int32_t *)-0x78f0f00b = 4;
    *(int32_t *)-0x78f0f00f = result3;
    *(int32_t *)-0x78f0f013 = 8;
    *(int32_t *)-0x78f0f017 = *(int32_t *)(v3 - 0x3ba72fc);
    return result3;
}

// Address range: 0x409024 - 0x409065
int32_t function_409024(int32_t a1) {
    // 0x409024
    int32_t v1; // 0x409024
    char * v2 = (char *)v1; // 0x409026
    int32_t v3; // 0x409024
    *v2 = (char)v3 + (char)v1;
    int32_t v4; // 0x409024
    uint32_t v5; // 0x409024
    *(char *)v4 = *(char *)&v4 | (char)(v5 / 256);
    int32_t sock; // 0x409024
    unsigned char v6 = (char)sock & 31; // 0x409031
    if (v6 != 0) {
        unsigned char v7 = (char)(v4 / 256); // 0x409031
        v4 = 256 * (int32_t)(v7 >> 8 - v6 | v7 << v6) | v4 & -0xff01;
    }
    char * v8 = (char *)(sock + 0x1c00f9); // 0x40903a
    int32_t option_value; // 0x409024
    *v8 = *v8 + (char)option_value;
    uint32_t v9 = sock;
    *(char *)v9 = *(char *)&sock + (char)(v9 / 256);
    int32_t v10; // 0x409024
    *v2 = *(char *)(v10 - 1);
    __asm_out_1(255, option_value);
    int32_t * v11 = (int32_t *)(v4 + 0x458d044e); // 0x40904b
    *v11 = *v11 - 1;
    char * v12 = (char *)(v5 + 4); // 0x409051
    *v12 = *v12 + (char)(sock / 256);
    return setsockopt(sock, SO_BROADCAST, 1, (char *)option_value, (int32_t)&g70);
}

// Address range: 0x409065 - 0x409086
int32_t function_409065(void) {
    int32_t result = WSAGetLastError(); // 0x40906b
    if (result == 0) {
        // 0x409071
        return result;
    }
    // 0x409078
    WSAGetLastError();
    __asm_wait();
    int32_t v1; // 0x409065
    *(char *)0x7ffffffa = *(char *)0x7ffffffa + (char)v1;
    return __asm_in_2(93);
}

// Address range: 0x409086 - 0x4090ae
int32_t function_409086(int32_t result) {
    // 0x409086
    int32_t v1; // 0x409086
    if (v1 == 0) {
        // 0x40909f
        return result;
    }
    // 0x409090
    int32_t v2; // 0x409086
    int32_t * v3 = (int32_t *)(v2 + 56); // 0x40908b
    int32_t result2 = *v3 | 0x9b00; // 0x409090
    *v3 = result2;
    return result2;
}

// Address range: 0x4090ce - 0x4090d6
int32_t function_4090ce(void) {
    // 0x4090ce
    return function_409140((int32_t)&g70);
}

// Address range: 0x4090d6 - 0x409140
int32_t function_4090d6(int32_t a1) {
    int32_t v1 = a1;
    int32_t v2; // 0x4090d6
    char * v3 = (char *)(v2 + 0xc740004); // 0x4090d8
    unsigned char v4 = *v3; // 0x4090d8
    unsigned char v5 = v4 + (char)v2; // 0x4090d8
    *v3 = v5;
    int32_t v6; // 0x4090d6
    int32_t v7; // 0x4090d6
    uint32_t v8 = *(int32_t *)(v6 - 0x47fff33e + 2 * v7); // 0x4090e4
    int32_t v9; // 0x4090d6
    *(int32_t *)v9 = v8 + v9 + (int32_t)(v5 < v4);
    int32_t v10; // 0x4090d6
    char * v11 = (char *)(v10 - 0x3aa21a75); // 0x4090ee
    *v11 = *v11 + (char)(v8 / 256);
    int32_t v12 = v8 + 2; // 0x409102
    *(char *)v10 = (char)v12 + (char)v10;
    *(int32_t *)-0x21ffbf72 = v12;
    int32_t v13 = v8 + 3; // 0x40910e
    char * v14 = (char *)v13; // 0x40910f
    *v14 = *v14 + (char)v13;
    int32_t v15; // bp-15, 0x4090d6
    int32_t v16; // 0x4090d6
    int32_t v17; // 0x4090d6
    int32_t v18; // 0x4090d6
    unknown_3fbc10(v16, v1, &v15, v6, v17, &v1, v18, v7, v16, v10, v9, v8 + 1, v1);
    int32_t result; // 0x4090d6
    return result;
}

// Address range: 0x409140 - 0x409168
int32_t function_409140(int32_t a1) {
    // 0x409140
    int32_t v1; // 0x409140
    char v2 = *(char *)(4 * v1 + 0x4020d8); // 0x409145
    int32_t v3; // 0x409140
    *(char *)(v3 - 1) = v2;
    *(char *)v3 = v2;
    return unknown_8d819301();
}

// Address range: 0x409188 - 0x409193
int32_t function_409188(void) {
    // 0x409188
    int32_t v1; // 0x409188
    int32_t v2; // 0x409188
    *(int32_t *)v2 = v2 + v1;
    return __asm_iretd();
}

// Address range: 0x409193 - 0x4091fc
int32_t function_409193(void) {
    // 0x409193
    int32_t v1; // 0x409193
    int32_t v2 = v1 - 1; // 0x409196
    int32_t v3; // 0x409193
    if (v3 == -1 || v2 == 0) {
        // 0x409198
        uint32_t v4; // 0x409193
        int64_t v5 = v4; // 0x40919c
        *(char *)v1 = 32;
        uint32_t v6; // 0x409193
        *(char *)(v1 + 1) = (char)((0x100000000 * (int64_t)(v6 / 0x80000000) | (int64_t)v6) / v5) + 48;
        bool v7; // 0x409193
        uint32_t v8 = (v7 ? -4 : 4) + v4; // 0x4091ac
        uint32_t v9; // 0x409193
        *(char *)v8 = (char)(v9 / 256);
        int64_t v10 = 0x100000000 * (int64_t)(v4 / 0x80000000) | v5; // 0x4091b1
        int64_t v11 = v8; // 0x4091b1
        int32_t v12 = v10 / v11; // 0x4091b1
        *(char *)(v1 + 2) = 58;
        int32_t v13 = v12 + 48; // 0x4091b7
        uint32_t v14 = v13 & 255 | v12 & -256; // 0x4091b7
        unsigned char v15 = (char)(v10 % v11); // 0x4091b9
        char * v16 = (char *)(v1 + 3); // 0x4091bc
        *v16 = (char)v13;
        uint32_t v17 = v15 > 207 ? -0x77be27ba : -0x77be27bb; // 0x4091be
        uint32_t v18 = v14 - v17; // 0x4091be
        int32_t * v19 = (int32_t *)(v1 - 100); // 0x4091c3
        *v19 = v18 + *v19 + (int32_t)(v15 > 207 | v14 < v17);
        *v16 = 58;
        int32_t v20 = v18 + 48; // 0x4091cc
        *(char *)(v1 + 4) = (char)v20;
        return v20 & 255 | v18 & -0x10000 | 256 * (int32_t)(v15 + 48 | (char)(v18 / 256));
    }
    // 0x4091d9
    *(char *)v2 = 32;
    int32_t v21; // 0x409193
    int32_t v22; // 0x409193
    *(char *)v21 = __asm_insb((int16_t)v22);
    *(char *)0x5ae8bf = *(char *)0x5ae8bf - 65;
    return function_40924d();
}

// Address range: 0x4091fc - 0x40920e
int32_t function_4091fc(int16_t a1) {
    // 0x4091fc
    int32_t v1; // 0x4091fc
    int32_t v2; // 0x4091fc
    int32_t v3 = (uint64_t)((int64_t)v2 * (int64_t)v1) / 0x100000000; // 0x4091fc
    uint32_t v4 = *(int32_t *)-0x3ebe3d75; // 0x4091fe
    *(int32_t *)-0x3ebe3d75 = 0x2000000 * v4 | v4 / 256 | 0x1000000 * (int32_t)(v3 != 0 == (v3 != -1));
    return function_310312eb();
}

// Address range: 0x409216 - 0x409222
int32_t function_409216(void) {
    // 0x409216
    return function_2502fac1();
}

// Address range: 0x409223 - 0x40922c
int32_t function_409223(int16_t a1) {
    // 0x409223
    int32_t v1; // 0x409223
    int32_t v2; // 0x409223
    return v2 + v1;
}

// Address range: 0x40922c - 0x409248
int32_t function_40922c(void) {
    // 0x40922c
    int32_t result; // 0x40922c
    char * v1 = (char *)result; // 0x40922e
    *v1 = *v1 + (char)result;
    int32_t v2; // 0x40922c
    int32_t v3; // 0x40922c
    *(char *)v3 = (char)v2;
    int32_t v4; // 0x40922c
    *(char *)v4 = *(char *)&v4 ^ (char)((result >> 31) / 256);
    return result;
}

// Address range: 0x40924d - 0x4093fa
int32_t function_40924d(void) {
    // 0x40924d
    int32_t v1; // 0x40924d
    char v2 = v1; // bp-8, 0x409253
    int32_t result = __asm_int1(); // 0x409254
    int32_t v3; // 0x40924d
    char * v4 = (char *)(v3 + 111); // 0x409256
    int32_t v5; // 0x40924d
    char v6 = v5; // 0x409256
    bool v7; // 0x40924d
    *v4 = (char)v7 + v6 + *v4;
    v2 = -1;
    if (v3 == -1) {
        // 0x409263
        return result;
    }
    int32_t v8 = 0x1000000 * v1 / 0x1000000; // 0x409255
    int32_t v9 = -1 - v3;
    int32_t v10 = &v2; // 0x409260
    char * v11 = (char *)result; // 0x40926b
    char v12 = *v11 | (char)result; // 0x40926b
    *v11 = v12;
    int32_t * v13 = (int32_t *)(v8 + 16); // 0x40926d
    *v13 = -1;
    int32_t v14 = result; // 0x409270
    int32_t v15 = v10; // 0x409270
    int32_t v16; // 0x40924d
    if (v12 != 0) {
        unsigned char v17 = *(char *)(v16 + 0x3ad98079); // 0x409272
        unsigned char v18 = *(char *)&v16; // 0x40929f
        int32_t v19 = 256 * (int32_t)v17 | result & -0x10000 | (int32_t)v18; // 0x40929f
        v14 = v19;
        v15 = v10;
        if (v18 == 92) {
            // 0x4092a9
            v14 = v19;
            v15 = v10;
            if (v6 != 47 != v6 != 92) {
                uint32_t v20 = v16;
                int32_t v21 = -1; // bp-44, 0x4092b4
                v14 = v19;
                v15 = &v21;
                if ((char)v20 != (char)(v20 / 256)) {
                    // 0x4092b9
                    *v13 = -1;
                    unknown_e00000c9(v9, L"\\\\?\\UNC\\", v21, v16, v9, v8, (int32_t *)&v2, v20, v5, -1, v19, (int32_t)v2);
                    return unknown_317d15e2(-1);
                }
            }
        }
    }
    char v22 = *(char *)v9; // 0x4092dd
    char * v23 = (char *)((v14 & -256 | (int32_t)(v22 | -115)) + 86); // 0x4092e2
    *v23 = *v23 + v6;
    *(int32_t *)(v15 - 4) = v16;
    return -1;
}

// Address range: 0x409422 - 0x409423
int32_t function_409422(void) {
    // 0x409422
    int32_t result; // 0x409422
    return result;
}

// Address range: 0x40942b - 0x409463
int32_t function_40942b(int16_t a1, int32_t a2) {
    // 0x40942b
    int32_t v1; // 0x40942b
    int32_t * v2 = (int32_t *)(v1 - 4); // 0x409430
    *v2 = *v2 | 0x4060003a;
    char v3; // 0x40942b
    char v4; // 0x40942b
    int32_t v5; // 0x40942b
    int32_t v6; // 0x40942b
    int32_t v7; // 0x40942b
    int32_t v8; // 0x40942b
    if ((v8 & 0x8000000) == 0) {
        // 0x40942b
        v3 = v5;
        v4 = *(char *)&v5;
    } else {
        int32_t v9 = v5; // 0x409445
        int32_t v10 = __asm_in_2(252); // 0x409446
        v5 = v10;
        char v11 = v10;
        v3 = v11;
        v4 = v11;
        int32_t v12; // 0x40942b
        v6 = *(int32_t *)(v12 + 0x1cc80fc);
        v7 = v9;
    }
    int32_t v13 = *(int32_t *)-0x1bef724; // 0x409448
    *(char *)v7 = v4 ^ v3;
    int32_t v14; // 0x40942b
    *(char *)v14 = *(char *)&v14 + (char)v13;
    v5 = v6;
    int32_t result = v6; // 0x40945f
    if ((v13 & 4) == 0) {
        result = function_409422();
        v5 = result;
    }
    // 0x409461
    return result;
}

// Address range: 0x409463 - 0x4094f8
int32_t function_409463(void) {
    // 0x409463
    int32_t v1; // 0x409463
    int32_t v2 = v1 + 1; // 0x409463
    int32_t v3 = v2; // 0x409464
    int32_t v4; // 0x409463
    if (v2 == 0) {
        // 0x40946d
        int32_t v5; // 0x409463
        int32_t v6 = v5 & -136; // 0x40946f
        int32_t v7 = -v6 & 248 | v5 & -256; // 0x409472
        int32_t * v8 = (int32_t *)((v7 | 4) - (v7 | (int32_t)((char)v6 != 0)) & -2); // 0x409479
        *v8 = *v8 - 21;
        v3 = 0;
        int32_t v9; // 0x409463
        v4 = 256 * (int32_t)*(char *)(v9 & -256) | v9 & -0x10000;
        goto lab_0x409483;
    } else {
        goto lab_0x40948f;
    }
  lab_0x40948f:;
    // 0x40948f
    int32_t v10; // 0x409463
    int32_t v11 = v10;
    int32_t v12; // 0x409463
    int32_t v13 = v12;
    int32_t v14 = v3 & -256 | (int32_t)*(char *)0x27440c3; // 0x40948f
    int32_t v15 = v14; // 0x409496
    int32_t v16; // 0x409463
    int32_t v17 = v16; // 0x409496
    int32_t v18 = v11; // 0x409496
    if (v14 == 0) {
        // 0x409498
        v15 = 13;
        v17 = *(int32_t *)(v11 + 8) & -256 | 194;
        v18 = v11 + 12;
    }
    uint32_t v19 = *(int32_t *)(v17 - 9) * v15; // 0x4094b0
    char * v20 = (char *)v19; // 0x4094b3
    *v20 = *v20 + (char)(v19 / 256);
    int32_t result = __asm_iretd(); // 0x4094b9
    char * v21 = (char *)result; // 0x4094ba
    char v22 = result; // 0x4094ba
    char v23 = *v21 + v22 & v22; // 0x4094bc
    *v21 = v23;
    v3 = result;
    v4 = 0;
    int32_t v24 = v17; // 0x4094be
    int32_t v25 = v18; // 0x4094be
    if (v13 != 0) {
        // 0x4094c0
        if (v23 == 0) {
            // 0x4094c2
            return result;
        }
        // 0x4094cf
        int32_t v26; // 0x409463
        int32_t * v27 = (int32_t *)(v26 - 4); // 0x4094de
        *v27 = *v27 | 0x20000;
        int32_t result2 = result; // 0x4094f3
        if (v13 < 20) {
            result2 = function_40953e();
        }
        // 0x4094c2
        return result2;
    }
    goto lab_0x409483;
  lab_0x409483:
    // 0x409483
    v12 = v4;
    v16 = v24;
    v10 = v25;
    goto lab_0x40948f;
}

// Address range: 0x4094fc - 0x409516
int32_t function_4094fc(int32_t a1, int32_t a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t * a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13) {
    // 0x4094fc
    int32_t v1; // 0x4094fc
    unsigned char v2 = *(char *)(v1 + 233); // 0x4094fc
    int32_t v3 = *(int32_t *)(v1 + 12); // 0x409503
    uint32_t v4; // 0x4094fc
    int32_t v5; // 0x4094fc
    int32_t result = v5 + -1 - (v3 + (int32_t)(v2 > -1 - (char)(v4 / 256))); // 0x409503
    __asm_out_1(0, result);
    return result;
}

// Address range: 0x40953e - 0x409581
int32_t function_40953e(void) {
    // 0x40953e
    int32_t v1; // 0x40953e
    int32_t v2 = *(int32_t *)(v1 - 8); // 0x40953e
    int32_t v3 = *(int32_t *)(v2 + 25); // 0x409541
    int32_t v4 = *(int32_t *)(v1 - 25); // 0x409544
    *(int32_t *)(v3 - 4) = -5;
    int32_t v5 = v3 - 16; // 0x40954b
    *(int32_t *)v5 = 0;
    *(int32_t *)(v3 - 24) = v4;
    *(int32_t *)(v3 - 28) = v2;
    *(int32_t *)(v3 - 36) = v5;
    *(int32_t *)(v3 - 56) = v4;
    int32_t v6; // 0x40953e
    *(int32_t *)(v3 - 60) = *(int32_t *)(v6 + 0xc4c073);
    int32_t v7; // 0x40953e
    __asm_into(v7);
    int32_t v8; // 0x40953e
    __asm_out_1(239, v8);
    char v9 = __asm_in_4((int16_t)v2); // 0x40955c
    uint32_t v10; // 0x40953e
    char * v11 = (char *)(v10 + 0x40ce477c); // 0x409560
    *v11 = *v11 & (char)v4;
    unsigned char v12 = (char)(v10 / 256); // 0x409566
    int32_t v13 = -1 - v12 < v12 ? 255 : 0; // 0x409568
    int32_t v14 = (v8 | (int32_t)v9) & -256 | v13; // 0x409568
    char * v15 = (char *)v14; // 0x40956f
    *v15 = *v15 + (char)v13;
    return v14 + 0xafcb8;
}

// Address range: 0x4095b0 - 0x4095c6
int32_t function_4095b0(void) {
    int32_t v1 = unknown_3fd950(); // 0x4095b0
    int32_t v2; // 0x4095b0
    int32_t * v3 = (int32_t *)(v2 - 0x6f74e7a6); // 0x4095be
    *v3 = *v3 - 1;
    bool v4; // 0x4095b0
    unsigned char v5 = *(char *)((v1 - (v4 ? 200 : 201) & 255) - 0x74cdbe77); // 0x4095c4
    return v1 & -256 | (int32_t)v5;
}

// Address range: 0x409638 - 0x40965e
int32_t function_409638(void) {
    // 0x409638
    int32_t v1; // 0x409638
    int32_t v2 = v1 ^ -765; // 0x409638
    int32_t result = v2; // 0x409642
    if (v2 == 0) {
        // 0x409644
        int32_t v3; // 0x409638
        __asm_out_3((int16_t)v3, v2);
        result = unknown_84e25640();
    }
    // 0x409652
    return result;
}

// Address range: 0x40965e - 0x409691
int32_t function_40965e(void) {
    // 0x40965e
    int32_t v1; // 0x40965e
    int32_t * v2 = (int32_t *)(v1 - 85); // 0x40965e
    bool v3; // 0x40965e
    *v2 = *v2 + (v3 ? 9 : 8);
    int32_t result; // 0x40965e
    int32_t v4; // 0x40965e
    if ((char)(*(int32_t *)(v4 + 13) / 256) < 0) {
        // 0x409670
        result = 0;
        int16_t v5; // 0x40965e
        if (function_4096b8(v4, v5) == 0) {
            // 0x409688
            return result;
        }
    }
    // 0x40967d
    int32_t v6; // 0x40965e
    int32_t * v7 = (int32_t *)(v6 + 24); // 0x40967f
    *v7 = *v7 & -0x8001;
    // 0x409688
    return result;
}

// Address range: 0x4096b8 - 0x4096bd
int32_t function_4096b8(int32_t a1, int16_t a2) {
    // 0x4096b8
    return __asm_in_2(93);
}

// Address range: 0x4096be - 0x4096bf
int32_t function_4096be(void) {
    // 0x4096be
    int32_t result; // 0x4096be
    return result;
}

// Address range: 0x4096c0 - 0x409748
int32_t function_4096c0(int32_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x4096d4
    int32_t v2; // 0x4096c0
    uint32_t v3; // 0x4096c0
    uint64_t v4 = (int64_t)*(int32_t *)(v2 - 1) * (int64_t)v3; // 0x4096d7
    int32_t v5 = v4 / 0x100000000; // 0x4096d7
    int32_t v6 = (int32_t)v4 + (int32_t)&g2 + (int32_t)(v5 != 0); // 0x4096da
    int32_t v7; // 0x4096c0
    if (v6 == 0) {
        // 0x40972b
        *(char *)(v7 + 8) = -1;
        if (v1 == 0) {
            function_4096be();
        }
        int32_t v8 = __asm_in_2(93) + 1; // 0x40973a
        unsigned char v9 = *(char *)((v8 & 255) + ((v7 & 0xff00) + v7 & 0xff00 | v7 & -0xff01)); // 0x40973d
        return v8 & -256 | (int32_t)v9;
    }
    // 0x4096e3
    *(int32_t *)0x7402c4f6 = v6;
    __asm_in_7(51);
    int32_t v10 = __asm_in_2(93); // 0x4096ef
    int32_t v11; // bp-64, 0x4096c0
    int32_t v12; // 0x4096c0
    int32_t v13 = (int32_t)&v11 & -0x10000 | v12 & 0xffff; // 0x4096f1
    int32_t v14 = v10 & 122 | 133; // 0x4096f4
    int32_t v15 = v14 | v10 & -256; // 0x4096f4
    char * v16 = (char *)(v7 - 0x2eff8bc3); // 0x4096fb
    *v16 = *v16 | (char)v1;
    *(int32_t *)(v13 - 4) = a1;
    *(int32_t *)(v5 + 11) = 2560;
    int32_t * v17 = (int32_t *)(a1 + 12); // 0x40970a
    *v17 = *v17 ^ v15;
    *(char *)v12 = (char)v14;
    char * v18 = (char *)v15; // 0x409719
    *v18 = *v18 + 4;
    *(int32_t *)(v13 - 8) = 0x900c4;
    *(int32_t *)(v13 - 12) = 0x6a006a51;
    return unknown_8b00000b();
}

// Address range: 0x409748 - 0x409749
int32_t function_409748(int32_t a1) {
    // 0x409748
    int32_t result; // 0x409748
    return result;
}

// Address range: 0x409749 - 0x409780
int32_t function_409749(void) {
    // 0x409749
    int32_t v1; // 0x409749
    int32_t v2; // 0x409749
    int32_t result = (v2 & -256 | (int32_t)*(char *)((v2 & 255) + v1)) + 0x140afc80; // 0x40974a
    unsigned char v3 = __readgsbyte(v1); // 0x409750
    int32_t v4; // 0x409749
    char v5 = v4; // 0x409750
    unsigned char v6 = v3 + v5; // 0x409750
    __writegsbyte(v1, v6);
    if (((v6 ^ v3) & (v6 ^ v5)) >= 0) {
        // 0x409755
        return result;
    }
    // 0x409764
    int32_t v7; // 0x409749
    char * v8 = (char *)(v7 + 0x7f167cc9); // 0x409765
    char v9 = result; // 0x409765
    *v8 = (char)(v6 < v3) + v9 + *v8;
    int32_t v10; // 0x409749
    *(char *)v10 = v9 - 123 + *(char *)&v10;
    unknown_5140977b();
    return function_40978d();
}

// Address range: 0x409780 - 0x40978d
int32_t function_409780(void) {
    // 0x409780
    int32_t v1; // 0x409780
    int32_t v2; // 0x409780
    int32_t v3 = v2 & v1; // 0x409780
    if (v3 != -1) {
        // 0x40978b
        return v3 & -0x10000 | (int32_t)__asm_arpl_5((int16_t)v3);
    }
    // 0x409787
    return function_40978d();
}

// Address range: 0x40978d - 0x409790
int32_t function_40978d(void) {
    // 0x40978d
    int32_t v1; // 0x40978d
    int32_t v2; // 0x40978d
    return v2 & -256 | v1 & 255;
}

// Address range: 0x40979d - 0x4097a0
int32_t function_40979d(void) {
    // 0x40979d
    int32_t result; // 0x40979d
    return result;
}

// Address range: 0x4097b2 - 0x4097b9
int32_t function_4097b2(int32_t a1) {
    // 0x4097b2
    int32_t result; // 0x4097b2
    char * v1 = (char *)(result - 24); // 0x4097b3
    int32_t v2; // 0x4097b2
    *v1 = *v1 + (char)v2;
    return result;
}

// Address range: 0x4097bc - 0x4097bd
int32_t function_4097bc(void) {
    // 0x4097bc
    int32_t result; // 0x4097bc
    return result;
}

// Address range: 0x4097c9 - 0x4097cb
int32_t function_4097c9(void) {
    // 0x4097c9
    return function_4097bc();
}

// Address range: 0x409802 - 0x409805
int32_t function_409802(void) {
    // 0x409802
    return __asm_in_2(93);
}

// Address range: 0x409805 - 0x409812
int32_t function_409805(void) {
    // 0x409805
    __asm_int1();
    int32_t v1; // 0x409805
    char * v2 = (char *)(v1 - 55); // 0x40980b
    uint32_t v3; // 0x409805
    *v2 = *v2 + (char)(v3 / 256);
    return __asm_in_2(93);
}

// Address range: 0x4098a0 - 0x4098a1
int32_t function_4098a0(void) {
    // 0x4098a0
    int32_t result; // 0x4098a0
    return result;
}

// Address range: 0x4098d2 - 0x4098d5
int32_t function_4098d2(void) {
    // 0x4098d2
    return __asm_in_2(93);
}

// Address range: 0x4098e2 - 0x40990c
int32_t function_4098e2(int32_t a1) {
    // 0x4098e2
    uint32_t v1; // 0x4098e2
    int32_t v2; // 0x4098e2
    int32_t v3; // 0x4098e2
    int32_t v4 = (v3 + v1 / 256 & 255 | v3 & -256) ^ v2; // 0x4098e6
    int32_t v5; // 0x4098e2
    int32_t v6; // 0x4098e2
    *(int32_t *)(v6 - 20) = v5;
    int32_t v7; // 0x4098e2
    *(char *)(v7 - 57) = 69;
    int32_t * v8 = (int32_t *)v4; // 0x4098f9
    *v8 = *v8 + v4;
    char * v9 = (char *)v4; // 0x4098fb
    *v9 = *v9 + (char)v4;
    uint32_t result = v4 - 0x9c8144; // 0x409900
    *(char *)v5 = *(char *)&v5 + (char)(result / 256);
    int32_t v10; // 0x4098e2
    char * v11 = (char *)((v10 & 0x34110000) - 125 + result); // 0x409907
    *v11 = *v11 + (char)(v5 / 256);
    return result;
}

// Address range: 0x40990c - 0x40991d
int32_t function_40990c(int32_t a1) {
    // 0x40990c
    int32_t v1; // 0x40990c
    char v2 = *(char *)(v1 - 0x1eecffa3); // 0x40990c
    int32_t v3; // 0x40990c
    char v4 = v3; // 0x409912
    int32_t v5; // 0x40990c
    *(char *)v5 = v4 + (char)v5;
    int32_t v6; // 0x40990c
    char * v7 = (char *)(v6 - 0x7cf98b18 + 2 * (v1 & 0x7fffff00 | (int32_t)(v2 + (char)v1))); // 0x409915
    *v7 = *v7 + v4;
    int32_t result; // 0x40990c
    return result;
}

// Address range: 0x40991d - 0x40997f
int32_t function_40991d(void) {
    // 0x40991d
    int32_t v1; // 0x40991d
    uint32_t v2; // 0x40991d
    unsigned char v3 = *(char *)(v1 + 0xe185) + (char)v2; // 0x409926
    int32_t v4; // 0x40991d
    char * v5 = (char *)(v4 + 0x4710c55); // 0x40992c
    *v5 = *v5 + v3;
    unsigned char v6 = *(char *)0x415ffdb; // 0x409938
    uint32_t v7; // 0x40991d
    int32_t * v8 = (int32_t *)(v7 & -256 | (int32_t)v6); // 0x40993d
    uint32_t v9 = *v8; // 0x40993d
    *v8 = v9 / 0x20000000 | 8 * v9;
    unsigned char v10 = v6 + 12 * (char)(v7 / 256); // 0x409941
    int32_t result = v7 & -0x10000 | (int32_t)v10; // 0x409941
    if (result != 0) {
        char * v11 = (char *)(v1 + 0x501975a7); // 0x409978
        *v11 = *v11 + v10;
        return result;
    }
    int32_t wstr = *(int32_t *)(v1 - 48); // 0x409947
    char * v12 = (char *)(wstr - 128); // 0x409952
    *v12 = *v12 | (char)(v2 / 256);
    int32_t * v13 = (int32_t *)(v2 & -256 | (int32_t)v3); // 0x409955
    *v13 = *v13 + wstr;
    uint32_t result2 = wcsncmp((int16_t *)wstr, (int16_t *)35, 0x3bff1383); // 0x409959
    int32_t v14; // 0x40991d
    int32_t * v15 = (int32_t *)(v14 - 122); // 0x40995f
    *v15 = *v15 & -101;
    *(char *)v14 = *(char *)&v14 + (char)result2;
    char * v16 = (char *)(2 * result2 + 124); // 0x40996b
    *v16 = *v16 + (char)(result2 / 256);
    return result2;
}

// Address range: 0x4099a3 - 0x4099aa
int32_t function_4099a3(int32_t a1) {
    // 0x4099a3
    int32_t v1; // 0x4099a3
    uint32_t result; // 0x4099a3
    *(char *)v1 = (char)(result / 256) + (char)v1;
    return result;
}

// Address range: 0x4099ac - 0x4099b0
int32_t function_4099ac(void) {
    // 0x4099ac
    int32_t v1; // 0x4099ac
    float80_t v2; // 0x4099ac
    *(int16_t *)(v1 - 115) = (int16_t)v2;
    int32_t result; // 0x4099ac
    return result;
}

// Address range: 0x4099b2 - 0x4099b4
int32_t function_4099b2(void) {
    // 0x4099b2
    int32_t result; // 0x4099b2
    return result;
}

// Address range: 0x4099bb - 0x409a48
int32_t entry_point(void) {
    // 0x4099bb
    __asm_wait();
    __asm_wait();
    __asm_wait();
    __asm_wait();
    __asm_wait();
    __asm_wait();
    __asm_wait();
    __asm_wait();
    return function_406669();
}

// Address range: 0x409a63 - 0x409a6a
int32_t function_409a63(void) {
    // 0x409a63
    int32_t result; // 0x409a63
    return result;
}

// Address range: 0x409a6d - 0x409a7b
int32_t function_409a6d(void) {
    // 0x409a6d
    uint32_t v1; // 0x409a6d
    *(char *)v1 = (char)(v1 / 256) + (char)v1;
    int32_t result; // 0x409a6d
    return result;
}

// Address range: 0x409a7d - 0x409a83
int32_t function_409a7d(void) {
    // 0x409a7d
    int32_t v1; // 0x409a7d
    return &v1;
}

// Address range: 0x409a87 - 0x409a88
int32_t function_409a87(void) {
    // 0x409a87
    int32_t result; // 0x409a87
    return result;
}

// Address range: 0x409a96 - 0x409a9c
int32_t function_409a96(void) {
    // 0x409a96
    int32_t result; // 0x409a96
    return result;
}

// Address range: 0x409a9c - 0x409aa1
int32_t function_409a9c(void) {
    // 0x409a9c
    int32_t result; // 0x409a9c
    return result;
}

// Address range: 0x409aa1 - 0x409c44
int32_t function_409aa1(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = a1;
    int32_t v2; // 0x409aa1
    int32_t v3 = *(int32_t *)(v2 + 3); // 0x409aa1
    int32_t v4; // 0x409aa1
    int32_t v5; // 0x409aa1
    int32_t * v6 = (int32_t *)(v5 + 4 * v4); // 0x409aa7
    int32_t v7 = *v6 | v3; // 0x409aa7
    *v6 = v7;
    if (v7 < 0) {
        // 0x409afc
        int32_t v8; // 0x409aa1
        int32_t * v9 = (int32_t *)(2 * v8); // 0x409afc
        *v9 = *v9 + v2;
        int32_t result = *(int32_t *)(v2 - 47); // 0x409b20
        int128_t v10; // 0x409aa1
        int128_t v11; // 0x409aa1
        __asm_andps(v11, v10);
        int32_t * v12 = (int32_t *)result; // 0x409b2d
        *v12 = *v12 + result;
        return result;
    }
    int32_t v13 = unknown_fcbfbdb(); // 0x409aaf
    uint32_t v14; // 0x409aa1
    char * v15 = (char *)(v14 + 87); // 0x409ab4
    *v15 = *v15 + (char)v14;
    int32_t v16 = v13; // 0x409ab7
    if (v5 == 0) {
        v16 = function_409a87();
    }
    char * v17 = (char *)(v4 + 0x52eb08c4); // 0x409abb
    *v17 = (char)v16 - 85 + *v17;
    uint32_t v18 = *(int32_t *)(v2 - 8); // 0x409ac1
    if (v18 >= 0) {
        // 0x409aca
        *(int32_t *)(v18 + 105) = (int32_t)&v1;
        char * v19 = (char *)(v3 + 0x4f4abf8); // 0x409ad2
        *v19 = *v19 + (char)(v14 / 256);
    }
    int32_t v20 = *(int32_t *)(v2 - 90); // 0x409ad8
    if (v20 == 0) {
        // 0x409b37
        return 248;
    }
    // 0x409adf
    *(int32_t *)(v3 + 20) = v20;
    return *(int32_t *)(v3 - 38);
}

// Address range: 0x409c45 - 0x409c61
int32_t function_409c45(int32_t a1, int32_t a2, int32_t a3) {
    // 0x409c45
    int32_t v1; // 0x409c45
    int32_t v2 = (bool)(v1 == 0); // 0x409c4b
    int32_t * v3 = (int32_t *)v2; // 0x409c4e
    *v3 = *v3 + v2;
    return function_409cb6();
}

// Address range: 0x409c61 - 0x409c71
int32_t function_409c61(int32_t a1) {
    // 0x409c61
    LocalFree(&g70);
    return 0;
}

// Address range: 0x409cb6 - 0x409d82
int32_t function_409cb6(void) {
    int32_t v1 = __asm_hlt(); // 0x409cc2
    __asm_int(1);
    uint32_t v2; // 0x409cb6
    char v3 = v2; // 0x409cc6
    int32_t v4; // 0x409cb6
    *(char *)(v4 - 128) = v3;
    *(char *)(v4 + 113) = v3;
    int32_t v5; // 0x409cb6
    *(char *)v5 = (char)(v2 / 256);
    int32_t v6 = v1 + 1; // 0x409cdd
    bool v7; // 0x409cb6
    int32_t v8 = v7 ? -4 : 4; // 0x409ce1
    int32_t v9; // 0x409cb6
    int32_t v10 = v8 + v9; // 0x409ce1
    int64_t v11; // 0x409cb6
    __asm_punpckhbw(v11, *(int64_t *)(v1 - 0x17ffbf61));
    bool v12 = (v6 & 14) > 9 | (*(int32_t *)-0x3ffb0801 & 15) - (v9 & 15) > 15; // 0x409ce9
    int32_t v13 = (v12 ? v1 + 11 : v6) & 15; // 0x409ce9
    int32_t v14 = v13 | v6 & -0x10000 | 256 * (int32_t)v12 + v6 & 0xff00; // 0x409ce9
    char * v15 = (char *)v14; // 0x409cea
    unsigned char v16 = *v15; // 0x409cea
    unsigned char v17 = (char)v13 + (char)v12; // 0x409cea
    *v15 = v16 - v17;
    char * v18 = (char *)(v10 + 117); // 0x409cf7
    uint32_t v19; // 0x409cb6
    *v18 = *v18 + (char)(v19 / 256);
    uint32_t v20 = v14 + 0x6b04c483 + (int32_t)(v12 | v16 < v17) & 0x41068400; // 0x409cfc
    int32_t result = v20 | (int32_t)*(char *)0x100038; // 0x409cfc
    if ((*(int32_t *)(v8 - 0x3ffb07fd) & 0x1f400) == 0) {
        char * v21 = (char *)result; // 0x409d75
        *v21 = *v21 + (char)(v20 / 256);
        char * v22 = (char *)(v10 + 124); // 0x409d77
        int32_t v23; // 0x409cb6
        *v22 = *v22 + (char)v23;
        return function_44e431();
    }
    uint32_t v24 = v19 & 0xff00 | v2; // 0x409cfa
    __asm_arpl(*(int16_t *)result, (int16_t)result);
    char * v25 = (char *)v24; // 0x409d13
    *v25 = *v25 + (char)(v24 / 256);
    return result;
}

// Address range: 0x409d82 - 0x409d97
int32_t function_409d82(int32_t a1) {
    // 0x409d82
    int32_t v1; // 0x409d82
    char v2 = v1;
    int32_t result; // 0x409d82
    *(char *)v1 = (char)result + v2;
    int32_t v3; // 0x409d82
    char * v4 = (char *)(v3 + 0x14468b78); // 0x409d84
    *v4 = *v4 + v2;
    *(int32_t *)(v3 + 46) = 0x3402;
    return result;
}

// Address range: 0x409d97 - 0x409d9b
int32_t function_409d97(void) {
    // 0x409d97
    uint32_t v1; // 0x409d97
    *(char *)v1 = (char)(v1 / 256) + (char)v1;
    int32_t result; // 0x409d97
    return result;
}

// Address range: 0x409d9b - 0x409e72
int32_t function_409d9b(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x409d9b
    bool v1; // 0x409d9b
    if (!v1) {
        // 0x409db6
        int32_t result; // 0x409d9b
        return result;
    }
    // 0x409d9d
    int32_t v2; // 0x409d9b
    return function_40a8cc(1, "GetEffectiveRightsFromAclW", v2) + 1;
}

// Address range: 0x409e72 - 0x409e7c
int32_t function_409e72(void) {
    // 0x409e72
    int32_t v1; // 0x409e72
    bool v2; // 0x409e72
    return v1 - 0x76bf3ff5 + (int32_t)v2;
}

// Address range: 0x409e80 - 0x409e9b
int32_t function_409e80(void) {
    int32_t result = *(int32_t *)0x4e410684; // 0x409e80
    if (result != 0) {
        // 0x409e89
        g39 = 0xa700;
    }
    // 0x409e9a
    return result;
}

// Address range: 0x409e9b - 0x409f8d
int32_t function_409e9b(int32_t a1, int32_t a2, int32_t a3) {
    // 0x409e9b
    int32_t v1; // 0x409e9b
    char * v2 = (char *)(v1 + 0x49909090); // 0x409e9b
    uint32_t v3; // 0x409e9b
    *v2 = *v2 | (char)v3;
    int32_t v4; // 0x409e9b
    *(char *)v4 = *(char *)&v4 | (char)(v3 / 256);
    int32_t v5; // 0x409e9b
    *(char *)v5 = *(char *)&v5 / 2;
    int32_t result; // 0x409e9b
    *(char *)result = *(char *)&result & (char)v4;
    int32_t v6 = result + 0xd501b8; // 0x409eac
    int32_t v7; // 0x409e9b
    int32_t v8 = v6 + 256 * v7 & 0xff00 | v6 & -0xff01; // 0x409eb1
    result = v8;
    *(int32_t *)v3 = v3 / 0x1000 | 0x100000 * v3;
    uint32_t v9 = a3 & 31; // 0x409ec3
    int32_t v10; // 0x409e9b
    if (v9 == 0) {
        // 0x409e9b
        v10 = result;
    } else {
        int32_t v11 = v8 << v9; // 0x409ec3
        result = v11;
        v10 = v11;
    }
    if (*(char *)&v5 != (char)v10) {
        // 0x409f26
        return v10 | 86;
    }
    int16_t v12 = v3; // 0x409ed1
    __asm_out_3(v12, v10);
    __asm_in_4(v12);
    result = a2;
    if ((a3 & 0x102300d5) == 0) {
        int32_t * v13 = (int32_t *)(a3 + 14); // 0x409f8a
        *v13 = *v13 / 2;
        return result;
    }
    int32_t v14 = a3 | 5; // 0x409ee1
    *(int32_t *)(a2 + 8) = v14 >= 0 ? v14 : a3 | 7;
    return __asm_int3();
}

// Address range: 0x409f8e - 0x409fa8
int32_t function_409f8e(void) {
    // 0x409f8e
    int32_t v1; // 0x409f8e
    int32_t * v2 = (int32_t *)(v1 + 0x4e89f556); // 0x409f8e
    *v2 = *v2 - 1;
    char * v3 = (char *)(v1 - 0x3e74b7b2); // 0x409f97
    *v3 = *v3 | (char)v1;
    int32_t v4; // 0x409f8e
    int32_t v5; // 0x409f8e
    char * v6 = (char *)(2 * *(int32_t *)(v5 + 0x20b9) + v4); // 0x409fa3
    int32_t result; // 0x409f8e
    *v6 = *v6 + (char)result;
    return result;
}

// Address range: 0x409fa8 - 0x40a03b
int32_t function_409fa8(void) {
    // 0x409fa8
    int32_t v1; // 0x409fa8
    *(char *)0xc468900 = (char)v1;
    char * v2 = (char *)(v1 + 70); // 0x409fb2
    unsigned char v3 = *v2; // 0x409fb2
    int32_t v4; // 0x409fa8
    unsigned char v5 = v3 + (char)v4; // 0x409fb2
    *v2 = v5;
    __asm_iretd();
    int32_t v6; // 0x409fa8
    int32_t * v7 = (int32_t *)(v6 - 0x74a865b2); // 0x409fbe
    *v7 = *v7 + v6 + (int32_t)(v5 < v3);
    int32_t * v8 = (int32_t *)(v1 + 0xa6a484e); // 0x409fc4
    uint32_t v9 = *v8; // 0x409fc4
    *v8 = v9 / 0x10000 | 0x10000 * v9;
    int32_t v10; // 0x409fa8
    int32_t v11 = v10 + 1; // 0x409fd2
    int32_t v12 = v1 & -0xff01 | 0x8900; // 0x409fd8
    uint32_t v13; // 0x409fa8
    *(int32_t *)(v10 + 73) = v13 - 0x79440005;
    int32_t v14 = v4 + (v13 < 0x79440005 ? -0x3b5e96 : -0x3b5e97); // 0x409fdf
    int32_t v15 = v14 + (int32_t)(v13 < 0x79440005); // 0x409fdf
    *(int32_t *)(v10 + 77) = v14;
    int32_t v16 = *(int32_t *)(v12 - 104); // 0x409fed
    *(int32_t *)(v12 - 80) = -0x76ffffeb;
    __asm_outsb(21, *(char *)v11);
    int32_t v17 = v11; // 0x409ffb
    int32_t v18; // bp-9, 0x409fa8
    int32_t v19 = &v18; // 0x409ffb
    int32_t v20 = -0x76ffffeb; // 0x409ffb
    if (((v15 ^ v4) & (v15 ^ -0x80000000)) < 0) {
        char * v21 = (char *)v16; // 0x409ffd
        char v22 = v16; // 0x409ffd
        *v21 = *v21 + v22;
        *(int32_t *)(v10 + 65) = v16;
        *(int32_t *)(v16 - 4) = v11;
        int32_t v23 = *(int32_t *)v12; // 0x40a008
        int32_t v24 = v16 + 0x3d6e; // 0x40a00c
        int32_t v25 = v23 - 1; // 0x40a010
        __asm_in_4(21);
        int32_t v26 = *(int32_t *)(v23 + 63); // 0x40a012
        unsigned char v27 = v22 & 31;
        char * v28 = (char *)(v12 + 0x510a6ab0); // 0x40a017
        unsigned char v29 = *v28; // 0x40a017
        v17 = v25;
        v19 = v24;
        v20 = v26;
        if (v27 != 0) {
            *v28 = v29 >> v27 | v29 << 8 - v27;
            v17 = v25;
            v19 = v24;
            v20 = v26;
        }
    }
    // 0x40a015
    *(int32_t *)(v19 - 4) = v20;
    *(int32_t *)(v19 - 8) = v20;
    int32_t result = function_40b590((int32_t)&g70); // 0x40a021
    *(int32_t *)(v17 - 103) = v20;
    *(int32_t *)(v17 + 65) = result;
    int32_t * v30 = (int32_t *)result; // 0x40a032
    *v30 = -1 - *v30;
    return result;
}

// Address range: 0x40a03b - 0x40a0de
int32_t function_40a03b(void) {
    // 0x40a03b
    int32_t v1; // 0x40a03b
    int32_t * v2 = (int32_t *)(v1 - 95); // 0x40a03b
    uint32_t v3 = *v2; // 0x40a03b
    *v2 = v3 / 2;
    int32_t * v4 = (int32_t *)(v1 + 0x4e894056); // 0x40a03f
    *v4 = *v4 - 1;
    int32_t v5; // 0x40a03b
    int32_t v6; // 0x40a03b
    int32_t v7 = *(int32_t *)(v5 + 28 + 4 * (((v3 & 1) == 0 ? 0 : 255) | v6 & 0x3fffff00)); // 0x40a046
    uint32_t v8 = __asm_hlt(); // 0x40a04e
    int32_t result2; // 0x40a03b
    int32_t v9; // 0x40a03b
    if (v9 >= -1) {
        // 0x40a0a6
        int32_t v10; // 0x40a03b
        int32_t v11; // 0x40a03b
        __asm_bound(*(int64_t *)(8 * v11 + v10));
        result2 = __asm_iretd() & -0xff01 | 768;
    } else {
        int32_t v12 = v8 | v1; // 0x40a052
        float80_t v13; // 0x40a03b
        *(int32_t *)(5 * v12) = (int32_t)v13;
        int32_t v14 = v5;
        __writegsbyte(v14, __readgsbyte(v14) + (char)(v8 / 256));
        int32_t v15; // 0x40a03b
        *(int32_t *)(v15 + 40) = v12;
        char * v16 = (char *)(v5 + 0x4c5f6b9); // 0x40a064
        char v17 = v12; // 0x40a064
        char v18 = *v16 + v17; // 0x40a064
        *v16 = v18;
        if (v18 != 0) {
            int32_t result = v8 & v7 & -256 | (int32_t)__asm_in_7(92); // 0x40a06e
            *(char *)result = -21;
            *(char *)v5 = *(char *)&v5 + v17;
            return result;
        }
        unsigned char v19 = *(char *)(v15 + 16); // 0x40a078
        result2 = (v7 & 255 & v8 + 70) * (int32_t)v19 | v8 & v7 & -0x10000;
    }
    // 0x40a0ac
    if ((llvm_ctpop_i8(*(char *)&v5 & (char)v7) & 1) != 0) {
        char * v20 = (char *)result2; // 0x40a0b8
        char v21 = result2; // 0x40a0b8
        *v20 = (*v20 | v21) + v21;
        return result2;
    }
    int32_t v22 = result2 + 112; // 0x40a0c2
    int32_t v23 = result2 & -256; // 0x40a0c2
    int32_t * v24 = (int32_t *)(v22 & 255 | v23); // 0x40a0c4
    *v24 = *v24 + 0x74c98500;
    int32_t v25 = (result2 + 232 & 255 | v23) - ((char)v22 > 135 ? 0x46a30775 : 0x46a30774); // 0x40a0cc
    int32_t result3 = v25 + 113 & 255 | v25 & -256; // 0x40a0d1
    int32_t * v26 = (int32_t *)result3; // 0x40a0d3
    *v26 = *v26 + 0x7a455000;
    char * v27 = (char *)(v5 + 93); // 0x40a0da
    *v27 = *v27 - (char)v5;
    return result3;
}

// Address range: 0x40a0e0 - 0x40a238
int32_t function_40a0e0(int32_t a1) {
    // 0x40a0e0
    int32_t v1; // bp-4, 0x40a0e0
    int32_t v2; // 0x40a0e0
    bool v3; // 0x40a0e0
    int32_t v4 = v2 - ((int32_t)&v1 | (int32_t)v3); // 0x40a0e1
    int32_t v5 = *(int32_t *)(v4 + 16); // 0x40a0e8
    int32_t v6; // 0x40a0e0
    uint32_t v7 = v6 + 124 & 255 | v6 & -256; // 0x40a0ed
    *(int32_t *)v5 = v7;
    uint32_t v8 = v7 - 0x279aa8f2 + (int32_t)((char)v6 < 132); // 0x40a0f0
    bool v9 = (char)v6 < 132 ? v8 <= v7 : v7 > 0x279aa8f1; // 0x40a0f0
    int32_t * v10 = (int32_t *)v8; // 0x40a0f5
    *v10 = v8 + (int32_t)v9 + *v10;
    char * v11 = (char *)(v4 - 0x2a7ae240); // 0x40a0f7
    *v11 = *v11 + (char)v8;
    uint32_t v12; // 0x40a0e0
    unsigned char v13 = (char)(v12 / 256); // 0x40a0fe
    unsigned char v14 = (char)(v8 / 256) + v13; // 0x40a0fe
    bool v15; // 0x40a0e0
    int32_t v16 = *(int32_t *)(v5 + (v15 ? 0 : 8)); // 0x40a100
    if ((v16 & (256 * (int32_t)v14 | v12 & -0xff01)) == 0) {
        int32_t v17 = v8 + 0xf421bc + (int32_t)(v14 < v13); // 0x40a109
        int32_t v18 = v17 + 67; // 0x40a11e
        int32_t v19 = v18 & 255 | v17 & -256; // 0x40a11e
        char * v20 = (char *)v19; // 0x40a120
        *v20 = *v20 + (char)v18;
        return v19 + 0xafc6e;
    }
    int32_t v21 = v4 - 0x99af34; // 0x40a103
    int32_t v22 = *(int32_t *)(v4 + 12); // 0x40a131
    int32_t v23 = __asm_int3(); // 0x40a13a
    unsigned char v24 = (char)v23; // 0x40a13b
    unsigned char v25 = *(char *)v16 + v24; // 0x40a13b
    int32_t v26 = v23 & -256 | (int32_t)v25; // 0x40a13b
    *(char *)v21 = __asm_insb((int16_t)v22);
    int32_t v27; // 0x40a0e0
    int32_t * v28 = (int32_t *)(v27 - 0x3b17f3ba); // 0x40a143
    *v28 = *v28 - 1;
    char * v29 = (char *)(v26 - 8); // 0x40a149
    *v29 = (char)(v25 < v24) + (char)v22 + *v29;
    int32_t v30 = v4 + v27; // 0x40a14c
    char * v31 = (char *)(v27 - 0xaefbb1); // 0x40a14e
    unsigned char v32 = *v31; // 0x40a14e
    *v31 = v32 - 127;
    int32_t v33; // 0x40a0e0
    int32_t v34 = v33 + (int32_t)(v26 + 0x40c048 != (int32_t)(v32 < 127));
    int32_t v35 = *(int32_t *)v21; // 0x40a177
    int32_t * v36 = (int32_t *)v34; // 0x40a17b
    *v36 = v35;
    *(char *)(v27 + 0x4689f455) = 0;
    uint32_t v37 = *(int32_t *)(v30 - 4); // 0x40a186
    *(int32_t *)(v34 + 24) = v37;
    __asm_int3();
    *(int32_t *)(v34 + 32) = v37;
    int32_t * v38 = (int32_t *)(v27 + 0x4d8a0875); // 0x40a1ef
    *v38 = *v38 - 1;
    int32_t v39 = v35 & -256; // 0x40a1fe
    int32_t v40 = v30 - 1; // bp-28, 0x40a200
    int32_t v41 = __asm_iretd(); // 0x40a205
    char * v42 = (char *)(v39 | 133); // 0x40a206
    unsigned char v43 = *v42; // 0x40a206
    unsigned char v44 = v43 + (char)(v37 / 256); // 0x40a206
    *v42 = v44;
    int32_t v45 = v41 - *(int32_t *)v41 + (int32_t)(v44 < v43); // 0x40a20b
    *(int32_t *)(v45 + 4) = 1;
    *(char *)-0x740218ec = (char)v45;
    int32_t v46 = (v39 | 132) + 12; // bp-7836, 0x40a22f
    if (v37 == 0) {
        // 0x40a232
        return *v36;
    }
    int32_t v47 = &v46; // 0x40a22f
    *(int32_t *)(v47 - 4) = (int32_t)&v40;
    *(int32_t *)(v47 - 8) = v34;
    *(int32_t *)(v47 - 12) = 36;
    return v45 - 1;
}

// Address range: 0x40a239 - 0x40a241
int32_t function_40a239(void) {
    // 0x40a239
    __asm_int(4);
    uint32_t v1; // 0x40a239
    int32_t v2 = v1 / 256 + v1; // 0x40a23b
    char * v3 = (char *)(v2 & 255 | v1 & -256); // 0x40a23d
    *v3 = *v3 + (char)v2;
    return function_40a257((int32_t)&g70, (int32_t)&g70);
}

// Address range: 0x40a241 - 0x40a257
int32_t function_40a241(void) {
    // 0x40a241
    int32_t v1; // 0x40a241
    int32_t * v2 = (int32_t *)(v1 + 68); // 0x40a24c
    *v2 = *v2 + 1;
    int32_t result; // 0x40a241
    return result;
}

// Address range: 0x40a257 - 0x40a2a2
int32_t function_40a257(int32_t a1, int32_t a2) {
    // 0x40a257
    int32_t v1; // 0x40a257
    char * v2 = (char *)(v1 - 0x7fa4ff90); // 0x40a25a
    uint32_t v3; // 0x40a257
    *v2 = *v2 & (char)(v3 / 256);
    *(char *)-0x74a9ffc0 = (char)v3;
    int16_t v4; // 0x40a257
    unknown_ff65da00(v4);
    *(int32_t *)-0x45c5ec49 = -148;
    int32_t * v5 = (int32_t *)a1; // 0x40a294
    *v5 = *v5 & 12;
    DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)-0x45c5ec4d);
    return 0;
}

// Address range: 0x40a2a8 - 0x40a2c0
int32_t function_40a2a8(void) {
    // 0x40a2a8
    int32_t v1; // 0x40a2a8
    char * v2 = (char *)(v1 - 0x26118a40); // 0x40a2ab
    int32_t v3; // 0x40a2a8
    *v2 = (char)v3 + 1 + *v2;
    return GetLastError();
}

// Address range: 0x40a2c0 - 0x40a2ca
int32_t function_40a2c0(void) {
    // 0x40a2c0
    int32_t v1; // 0x40a2c0
    char * v2 = (char *)(v1 - 111); // 0x40a2c6
    int32_t v3; // 0x40a2c0
    *v2 = *v2 + (char)v3;
    int32_t v4; // 0x40a2c0
    return v4 + 0x341fa2a;
}

// Address range: 0x40a2ce - 0x40a333
int32_t function_40a2ce(int32_t a1, int32_t a2) {
    // 0x40a2ce
    int32_t v1; // 0x40a2ce
    int32_t v2; // 0x40a2ce
    int32_t v3 = *(int32_t *)(v2 - 0x741394ab) ^ v1; // 0x40a2ce
    int32_t v4; // 0x40a2ce
    if (v4 != 1 && v3 != 0) {
        // 0x40a2dd
        return v2 + 0x8c7d38;
    }
    int32_t v5 = *(int32_t *)(v2 + 4); // 0x40a2d6
    if (v5 == 0) {
        // 0x40a2dd
        int32_t result; // 0x40a2ce
        return result;
    }
    int32_t result2 = function_90909090(); // 0x40a2f3
    switch (result2) {
        case 0: {
        }
        case 0x330063: {
            // 0x40a2dd
            return result2;
        }
    }
    char v6 = *(char *)v5; // 0x40a305
    return (result2 & 0xff00) + v3 & 0xff00 | result2 & -0x10000 | (int32_t)((char)result2 - 80 + v6);
}

// Address range: 0x40a340 - 0x40a34c
int32_t function_40a340(int32_t a1) {
    // 0x40a340
    int32_t v1; // 0x40a340
    *(int32_t *)v1 = 256 * v1;
    int32_t v2; // 0x40a340
    return *(int32_t *)(v2 + 5);
}

// Address range: 0x40a358 - 0x40a370
int32_t function_40a358(void) {
    // 0x40a358
    int32_t v1; // 0x40a358
    char * v2 = (char *)((*(int32_t *)0x4b9de7b ^ v1) + 0xc7599f8); // 0x40a35e
    int32_t result; // 0x40a358
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x40a370 - 0x40a37f
int32_t function_40a370(void) {
    uint32_t v1 = __asm_hlt(); // 0x40a370
    int32_t v2; // 0x40a370
    char v3 = *(char *)(v2 + 33); // 0x40a372
    return (256 * (int32_t)(v3 + (char)(v1 / 256)) | v1 & -0xff01) + 0x40c034;
}

// Address range: 0x40a384 - 0x40a39b
int32_t function_40a384(int32_t a1, int32_t a2) {
    // 0x40a384
    int32_t v1; // 0x40a384
    int32_t v2 = v1 ^ (int32_t)"are more than twice the standard\n       deviation apart. These results are NOT reliable.\n"; // 0x40a384
    int32_t v3; // 0x40a384
    __asm_out_6((int16_t)v3, (char)v2);
    int32_t v4 = v2 & -256; // 0x40a38d
    int32_t v5; // 0x40a384
    int32_t v6; // 0x40a384
    if ((v6 & v5) == 0) {
        v4 = function_40a358();
    }
    // 0x40a38f
    return v4 + 0xafc80;
}

// Address range: 0x40a39c - 0x40a3b8
int32_t function_40a39c(void) {
    // 0x40a39c
    int32_t v1; // 0x40a39c
    bool v2; // 0x40a39c
    *(char *)(*(int32_t *)(v1 + 0x2c08458b + (v2 ? -1 : 1)) - 0x74afe5c0) = 0;
    int32_t result; // 0x40a39c
    return result;
}

// Address range: 0x40a3ba - 0x40a410
int32_t function_40a3ba(void) {
    // 0x40a3ba
    int32_t v1; // 0x40a3ba
    bool v2; // 0x40a3ba
    int32_t v3 = v1 - (v2 ? -0x6f6f6f6f : -0x6f6f6f70); // 0x40a3ba
    int32_t v4; // 0x40a3ba
    unsigned char v5 = (char)v4 & 31; // 0x40a3ce
    if (v5 != 0) {
        char * v6 = (char *)(v3 - 0x741d74ab); // 0x40a3ce
        unsigned char v7 = *v6; // 0x40a3ce
        *v6 = v7 << v5 | (char)((int16_t)v7 >> (int16_t)(9 - v5));
    }
    // 0x40a40a
    int32_t v8; // 0x40a3ba
    int32_t v9; // 0x40a3ba
    char * v10 = (char *)(v8 - 117 + v9); // 0x40a3da
    *v10 = 4 * *v10;
    int32_t v11; // 0x40a3ba
    int32_t v12; // 0x40a3ba
    *(int32_t *)((*(int32_t *)(v12 - 0x6f6fff1f + 8 * v3) ^ v11) - 2) = v3 | 81;
    return 0;
}

// Address range: 0x40a416 - 0x40a419
int32_t function_40a416(void) {
    // 0x40a416
    int32_t result; // 0x40a416
    return result;
}

// Address range: 0x40a420 - 0x40a421
int32_t function_40a420(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x40a420
    int32_t result; // 0x40a420
    return result;
}

// Address range: 0x40a424 - 0x40a425
int32_t function_40a424(int32_t a1) {
    // 0x40a424
    int32_t result; // 0x40a424
    return result;
}

// Address range: 0x40a427 - 0x40a47f
int32_t function_40a427(int16_t a1) {
    // 0x40a427
    int32_t result; // 0x40a427
    if (g43 >= (char *)-94) {
        // 0x40a43c
        return result;
    }
    // 0x40a45f
    int32_t v1; // 0x40a427
    int32_t v2; // 0x40a427
    *(int32_t *)v1 = __asm_insd((int16_t)v2);
    int32_t v3; // 0x40a427
    *(char *)(v3 - 10) = -1;
    uint32_t v4 = *(int32_t *)(result - 0x6f6f6f70); // 0x40a46a
    unsigned char v5 = (char)result; // 0x40a470
    unsigned char v6 = v5 + 40 + (char)(v4 > -1 - v2); // 0x40a470
    int32_t v7 = result & -256 | (int32_t)v6; // 0x40a470
    int32_t v8 = *(int32_t *)v7; // 0x40a473
    return v7 - v8 + (int32_t)(v4 > -1 - v2 ? v6 <= v5 : v5 > 215);
}

// Address range: 0x40a480 - 0x40a49b
int32_t function_40a480(int32_t a1, int32_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)((a1 & -0x40000000) - 0x3fffe400); // 0x40a48e
    *v1 = *v1 ^ 0xa959fd;
    int32_t v2; // 0x40a480
    bool v3 = (a1 & 14) > 9 | (v2 & 2048) != 0; // 0x40a49a
    int32_t v4 = v3 ? a1 + 10 : a1; // 0x40a49a
    return v4 & 15 | a1 & -0x10000 | 256 * (int32_t)v3 + a1 & 0xff00;
}

// Address range: 0x40a49c - 0x40a4af
int32_t function_40a49c(void) {
    // 0x40a49c
    int32_t v1; // 0x40a49c
    __asm_out_1(0, v1);
    *(char *)v1 = 2 * (char)v1;
    char * v2 = (char *)(v1 - 61); // 0x40a4a6
    int32_t v3; // 0x40a49c
    *v2 = *v2 + (char)v3;
    int32_t v4; // 0x40a49c
    return v4 + 440;
}

// Address range: 0x40a4c3 - 0x40a540
int32_t function_40a4c3(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    int32_t result = WaitForSingleObject(&g70, (int32_t)&g70); // 0x40a4c6
    int32_t v1; // 0x40a4c3
    *(int32_t *)(v1 - 103) = result;
    if (result != 0) {
        int32_t * v2 = (int32_t *)result; // 0x40a528
        *v2 = *v2 + result;
        return result;
    }
    int32_t v3 = result & -256; // 0x40a4d5
    int32_t v4; // 0x40a4c3
    int32_t v5; // 0x40a4c3
    int32_t v6 = *(int32_t *)(v5 + 2 * v4); // 0x40a4d7
    int32_t v7; // 0x40a4c3
    int32_t * v8 = (int32_t *)(v7 + 0x40c025); // 0x40a4db
    *v8 = *v8 - 1;
    if ((result + 141 & 255 || v3) == 0) {
        // 0x40a52f
        int32_t v9; // 0x40a4c3
        uint32_t v10 = v9 - 1; // 0x40a4d3
        uint32_t v11 = v10 / 256; // 0x40a534
        int32_t * v12 = (int32_t *)(v7 + 94); // 0x40a53a
        *v12 = *v12 + (512 * v11 & 0xfe00 | v10 & -0xff01);
        return v3 | (2 * (char)v11 < (char)v11 ? 255 : 0);
    }
    int32_t v13 = v7 + 1; // 0x40a4c3
    unsigned char v14 = *(char *)v13 + (char)v5; // 0x40a4ee
    char * v15 = (char *)(*(int32_t *)(v6 + 0x144d500c) - 0x2d7aefab); // 0x40a4f0
    char v16 = *v15 | v14; // 0x40a4f0
    *v15 = v16;
    if (v16 == 0) {
        // 0x40a503
        return CloseHandle((int32_t *)*(int32_t *)(v7 + 21));
    }
    // 0x40a4f8
    return function_40a480(v5 & -256 | (int32_t)v14, v6, v13);
}

// Address range: 0x40a540 - 0x40a54c
int32_t function_40a540(int32_t a1, int32_t a2) {
    // 0x40a540
    int32_t v1; // 0x40a540
    return v1 + 0xb2fcf3;
}

// Address range: 0x40a550 - 0x40a636
int32_t function_40a550(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40a550
    int32_t v1; // 0x40a550
    if (v1 == 0) {
        // 0x40a57a
        int32_t result; // 0x40a550
        return result;
    }
    // 0x40a55e
    int32_t v2; // 0x40a550
    int32_t result4 = *(int32_t *)(v2 + 0x8458b10); // 0x40a553
    int32_t result2; // 0x40a550
    uint32_t v3; // 0x40a550
    if (v3 < v1 - 1 + v3) {
        char v4 = *(char *)a3; // 0x40a569
        *(char *)v3 = v4;
        int32_t v5 = result2;
        if ((char)(v3 / 256 & v3) != 0) {
            int32_t v6 = v5 + 1; // 0x40a571
            result2 = v6;
            *(char *)v6 = -117;
            // 0x40a57a
            return result2;
        }
        int32_t v7; // 0x40a550
        if (v5 == 0) {
            // 0x40a5c0
            return v7 & -256 | (int32_t)__asm_in_7(91);
        }
        int32_t result3 = v5 + 1; // 0x40a5b6
        result2 = result3;
        if (v5 < 0) {
            // 0x40a57a
            return result3;
        }
        char * v8 = (char *)(v7 + 0x40c10c15 + 8 * v7); // 0x40a628
        *v8 = v4 + (char)*(int32_t *)(0xc8b1042 - v7 + result3) ^ *v8;
        return result4;
    }
    // 0x40a5d8
    int32_t v9; // 0x40a550
    char * v10 = (char *)(v9 + 0x45c757db); // 0x40a5d9
    *v10 = *v10 + (char)v3;
    int32_t v11 = result2;
    *(char *)v11 = *(char *)&result2 + (char)v11;
    char * v12 = (char *)(result4 + 0x4570137d); // 0x40a5e2
    *v12 = *v12 + (char)result4;
    int32_t v13 = result2 | 51; // 0x40a5e8
    result2 = v13;
    if (*(int32_t *)v13 == -14) {
        // 0x40a5f9
        malloc(4 * result4 + 191);
        return __asm_hlt() - 0x2d57420;
    }
    int32_t v14 = result4;
    int32_t v15 = v14 + 1; // 0x40a5f4
    int32_t v16 = v15; // 0x40a5f7
    while (*(int32_t *)(v13 + 4 + 4 * v14) != 0) {
        // 0x40a5f0
        v14 = v15;
        v15 = v14 + 1;
        v16 = v15;
    }
    // 0x40a5f9
    malloc(4 * v16 + 191);
    return __asm_hlt() - 0x2d57420;
}

// Address range: 0x40a671 - 0x40a68c
int32_t function_40a671(void) {
    // 0x40a671
    int32_t v1; // 0x40a671
    __asm_bound(*(int64_t *)(v1 - 20));
    int32_t result; // 0x40a671
    return result;
}

// Address range: 0x40a6b3 - 0x40a6b4
int32_t function_40a6b3(int32_t a1) {
    // 0x40a6b3
    int32_t result; // 0x40a6b3
    return result;
}

// Address range: 0x40a6ce - 0x40a715
int32_t function_40a6ce(int32_t a1, int32_t a2) {
    unsigned char v1 = *(char *)-0x744abf3f | -16; // 0x40a6d4
    int32_t v2; // 0x40a6ce
    int32_t result = v2 & -256 | (int32_t)v1; // 0x40a6d4
    int32_t v3; // 0x40a6ce
    int32_t v4 = result - v3; // 0x40a6d8
    if (v4 == 0) {
        // 0x40a70e
        int32_t v5; // 0x40a6ce
        *(int32_t *)(v5 + 7) = a2;
        return result;
    }
    // 0x40a6dd
    int32_t v6; // 0x40a6ce
    *(char *)v6 = v1;
    uint32_t v7; // 0x40a6ce
    int32_t * v8 = (int32_t *)(v7 - 0x7a3fcc38); // 0x40a6de
    uint32_t v9 = *v8; // 0x40a6de
    *v8 = v9 / 0x20000 | 0x8000 * v9;
    if (v4 < 0 != ((v4 ^ v2) & (v2 ^ v3)) < 0) {
        // 0x40a6f4
        return result;
    }
    int32_t result2 = result; // 0x40a6e5
    bool v10; // 0x40a6ce
    int32_t * v11 = (int32_t *)((v10 ? -1 : 1) + v6 + 4 * result2); // 0x40a6e7
    *v11 = *v11 + v3;
    result2++;
    while (result2 < v7) {
        // 0x40a6e7
        v11 = (int32_t *)((v10 ? -1 : 1) + v6 + 4 * result2);
        *v11 = *v11 + v3;
        result2++;
    }
    // 0x40a6f4
    return result2;
}

// Address range: 0x40a715 - 0x40a71b
int32_t function_40a715(int32_t a1, int32_t a2) {
    // 0x40a715
    int32_t result; // 0x40a715
    return result;
}

// Address range: 0x40a71b - 0x40a874
int32_t function_40a71b(char a1) {
    // 0x40a71b
    int32_t v1; // 0x40a71b
    int32_t v2; // 0x40a71b
    *(int32_t *)v2 = v2 + v1;
    int32_t v3 = &g40; // bp-8, 0x40a732
    g41 = 148;
    char * v4 = (char *)(*(int32_t *)0x7d4108b0 - 97); // 0x40a749
    int32_t v5; // 0x40a71b
    *v4 = *v4 | (char)v5;
    char v6 = 0; // 0x40a76a
    if (g42 != 0) {
        // 0x40a76c
        v6 = g42 + 1;
        int32_t v7; // 0x40a71b
        char * v8 = (char *)(v7 + 0xefea838); // 0x40a76d
        *v8 = *v8 + v6;
    }
    char * v9 = (char *)v5; // 0x40a775
    *v9 = *v9 + v6;
    *(int32_t *)((int32_t)&v3 - 2) = 0;
    abort();
    // UNREACHABLE
}

// Address range: 0x40a878 - 0x40a88d
int32_t function_40a878(void) {
    // 0x40a878
    int32_t v1; // 0x40a878
    char * v2 = (char *)(v1 - 0x5e08f918); // 0x40a87b
    int32_t v3; // 0x40a878
    char v4 = v3; // 0x40a87b
    *v2 = *v2 + v4;
    *(char *)0x6ec083ec = v4;
    return function_e740a916();
}

// Address range: 0x40a89e - 0x40a89f
int32_t function_40a89e(void) {
    // 0x40a89e
    int32_t result; // 0x40a89e
    return result;
}

// Address range: 0x40a8ba - 0x40a8be
int32_t function_40a8ba(void) {
    // 0x40a8ba
    return function_40a89e();
}

// Address range: 0x40a8cc - 0x40a8f5
int32_t function_40a8cc(int32_t a1, char * a2, int32_t a3) {
    // 0x40a8cc
    int32_t v1; // 0x40a8cc
    int32_t * v2 = (int32_t *)(v1 + 0x75618501); // 0x40a8cc
    *v2 = *v2 + 8;
    int32_t v3 = *(int32_t *)(v1 + 1); // 0x40a8d3
    int32_t v4; // 0x40a8cc
    if (((v3 - v4 ^ v3) & (v3 ^ v4)) < 0) {
        function_40a878();
    }
    // 0x40a8d8
    int32_t v5; // 0x40a8cc
    char * v6 = (char *)(v5 - 53); // 0x40a8d8
    *v6 = *v6 / 2;
    int32_t v7; // 0x40a8cc
    char v8 = *(char *)(v7 + 16); // 0x40a8e2
    uint32_t v9; // 0x40a8cc
    *(char *)v7 = (v8 | (char)(v9 / 256)) & (char)v7;
    int32_t result = function_40a916((int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70); // 0x40a8f3
    return result;
}

// Address range: 0x40a8f5 - 0x40a911
int32_t function_40a8f5(void) {
    // 0x40a8f5
    int32_t v1; // 0x40a8f5
    int32_t * v2 = (int32_t *)(v1 - 19); // 0x40a8f5
    uint32_t v3 = *v2; // 0x40a8f5
    *v2 = v3 - 115;
    int32_t v4; // 0x40a8f5
    char * v5 = (char *)(v4 - 0x7f3fcce8); // 0x40a8f9
    *v5 = *v5 + (char)v1 + (char)(v3 < 115);
    int32_t v6 = v1 + 1; // 0x40a900
    int32_t v7; // 0x40a8f5
    int32_t v8 = v7 & -256 | (int32_t)(v6 < 0 == (v6 & (v1 ^ -0x80000000)) < 0); // 0x40a901
    int32_t v9 = (v8 | 14) + v8; // 0x40a904
    int32_t v10 = v9 & 22 | 137; // 0x40a909
    int32_t v11 = v9 & -256; // 0x40a909
    unsigned char v12 = *(char *)(v10 | v11) + (char)v10; // 0x40a90b
    char * v13 = (char *)(v11 | (int32_t)v12); // 0x40a90d
    *v13 = v12 + *v13;
    int32_t v14; // 0x40a8f5
    int32_t result = function_40a916(v14, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70, (int32_t)&g70); // 0x40a90f
    return result;
}

// Address range: 0x40a916 - 0x40a940
int32_t function_40a916(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t result) {
    // 0x40a916
    int32_t v1; // 0x40a916
    g43 = (char *)v1;
    int32_t v2; // 0x40a916
    int32_t * v3 = (int32_t *)(*(int32_t *)(v2 + 8) + 0x3148299d); // 0x40a92b
    *v3 = *v3 + v1;
    *(int32_t *)a2 = *(int32_t *)a3;
    return result;
}

// Address range: 0x40a940 - 0x40a9ba
int32_t function_40a940(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x40a940
    int32_t v1; // 0x40a940
    int32_t v2; // 0x40a940
    __asm_arpl(*(int16_t *)(v2 - 117), (int16_t)v1);
    unsigned char v3 = __asm_in_7(8); // 0x40a94a
    int32_t v4 = *(int32_t *)__asm_hlt(); // 0x40a95d
    int32_t * v5 = (int32_t *)v4; // 0x40a961
    *v5 = *v5 + 1;
    char v6; // 0x40a940
    int32_t v7 = v4 & -256 | (v3 > -1 - v6 ? 255 : 0); // 0x40a963
    int32_t result = v7 + 1; // 0x40a965
    char * v8 = (char *)(v7 - 118 + 8 * result); // 0x40a966
    int32_t v9; // 0x40a940
    char v10 = *v8 + (char)v9; // 0x40a966
    *v8 = v10;
    if (v10 == 0) {
        // 0x40a96d
        return result;
    }
    // 0x40a970
    if (a1 == 0) {
        // 0x40a96d
        return 0;
    }
    // 0x40a977
    int32_t v11; // 0x40a940
    *(int32_t *)v11 = v11 - 1;
    unsigned char v12 = (char)a1; // 0x40a97d
    int32_t result2; // 0x40a940
    if ((v12 & 14) > 9 || (v11 & 15) > 16) {
        result2 = (v12 > 153 ? 102 : 6) + a1 & 255 | a1 & -256;
    } else {
        result2 = (v12 > 153 ? a1 + 96 : a1) & 255 | a1 & -256;
    }
    // 0x40a96d
    return result2;
}

// Address range: 0x40a9bb - 0x40a9c0
int32_t function_40a9bb(void) {
    // 0x40a9bb
    return __asm_in_2(93);
}

// Address range: 0x40a9c0 - 0x40ab07
int32_t function_40a9c0(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40a9c0
    int32_t v1; // 0x40a9c0
    int32_t v2 = v1 - 1; // 0x40a9c3
    int32_t v3; // 0x40a9c0
    unsigned char v4 = (char)*(int32_t *)(v3 + 7); // 0x40a9d3
    int32_t v5 = __asm_in((int16_t)v2); // 0x40a9d5
    int32_t v6; // 0x40a9c0
    if (v4 != 0) {
        // 0x40a9e0
        *(int32_t *)v6 = v2;
        return function_8342339f();
    }
    if (v4 >= 0) {
        // 0x40a9da
        int32_t v7; // 0x40a9c0
        bool v8; // 0x40a9c0
        *(int32_t *)((v8 ? -1 : 1) + v7) = v1 - 2;
        // 0x40a9e0
        *(int32_t *)v6 = v6 - 1;
        return function_8342339f();
    }
    int32_t v9 = v5 & -256 | (int32_t)__asm_in_7(0); // 0x40a9f9
    *(int32_t *)(v3 - 17) = v2;
    int32_t result = v9 + 0x7630c42e; // 0x40aa18
    *(int32_t *)(v3 - 21) = result;
    if (result != 0) {
        // 0x40aa58
        return result;
    }
    unsigned char v10 = (char)result - 45; // 0x40aa24
    if (v10 != 0) {
        // 0x40aa58
        return result & -256 | (int32_t)v10;
    }
    // 0x40aa28
    function_40b810();
    int32_t v11 = v9 & 0x471b8ae0 | v3 - 1; // 0x40aa38
    unsigned char v12 = *(char *)0x758903fe; // 0x40aa3a
    char v13 = v12 / 128; // 0x40aa3a
    *(char *)0x758903fe = v13 | 2 * v12;
    if (v11 == 0 || v13 != 0) {
        int32_t v14 = *(int32_t *)(v11 - 59); // 0x40aa43
        return v14 + (v13 != 0 ? 78 : 77) & 255 | v14 & -256;
    }
    // 0x40aa58
    return 22;
}

// Address range: 0x40ab09 - 0x40ab0d
int32_t function_40ab09(void) {
    // 0x40ab09
    int32_t v1; // 0x40ab09
    int32_t v2; // 0x40ab09
    *(int32_t *)v1 = __asm_insd((int16_t)v2);
    int32_t result; // 0x40ab09
    return result;
}

// Address range: 0x40ab0d - 0x40abc9
int32_t function_40ab0d(int32_t a1) {
    // 0x40ab0d
    int32_t v1; // 0x40ab0d
    bool v2; // 0x40ab0d
    if (v2) {
        int32_t v3 = __asm_hlt(); // 0x40ab53
        int32_t v4; // 0x40ab0d
        bool v5; // 0x40ab0d
        int32_t result = v4 + (int32_t)v5 + v3 & 255 | v3 & -256; // 0x40ab54
        *(int32_t *)*(int32_t *)(v1 + 12) = result;
        return result;
    }
    // 0x40ab5e
    int32_t v6; // 0x40ab0d
    unsigned char v7 = (char)v6 & 31; // 0x40ab5e
    int32_t v8; // 0x40ab0d
    char v9 = v8; // 0x40ab5e
    int32_t v10; // 0x40ab0d
    int32_t v11; // 0x40ab0d
    if (v7 != 0) {
        char * v12 = (char *)(v1 - 127); // 0x40ab5e
        *v12 = *v12 >> v7;
        v10 = v11;
        v9 = *(char *)&v11;
    }
    // 0x40ab5e
    *(char *)v10 = v9 + 1;
    uint32_t v13; // 0x40ab0d
    int32_t v14 = *(int32_t *)(v13 + 20); // 0x40ab69
    int32_t v15 = v11 - 1; // 0x40ab6e
    *(int32_t *)v11 = v15;
    int32_t * v16 = (int32_t *)(v14 + 16); // 0x40ab71
    int32_t v17 = *v16; // 0x40ab71
    int32_t v18 = v6 + (v13 > 0xd6ffe0 ? 103 : 102); // 0x40ab84
    char * v19 = (char *)(*(int32_t *)v17 - 0x463574a2); // 0x40ab88
    *v19 = (char)((a1 & 1) != 0) - (char)v18 + *v19;
    unsigned char v20 = *(char *)v17 | (char)v17; // 0x40ab8e
    int32_t v21 = v17 & -256 | (int32_t)v20; // 0x40ab8e
    v11 = v21;
    int32_t v22 = v13 - 0xd6ffe0; // 0x40ab92
    int32_t v23 = v21; // 0x40ab93
    int32_t v24 = v15 + (v18 & 0xff00) & 0xff00 | v18 & -0xff01; // 0x40ab93
    if (v22 < 0) {
        char * v25 = (char *)v21; // 0x40ab95
        *v25 = *v25 + v20;
        int32_t v26 = v11; // 0x40ab97
        v23 = *(int32_t *)(v14 + 5);
        v11 = v23;
        __asm_int(95);
        v24 = v26 & 0xffff | v18 & -0x10000;
    }
    // 0x40aba1
    __asm_out(255, (char)v23);
    __asm_iretd();
    char * v27 = (char *)(v24 + 0x2c08308); // 0x40aba6
    *v27 = *v27 + (char)v24;
    int32_t v28 = __asm_wait(); // 0x40abb2
    *(int32_t *)v28 = (v22 | 0x21dc00) - 2;
    *v16 = v28;
    return v28 | 139;
}

// Address range: 0x40abca - 0x40abcd
int32_t function_40abca(void) {
    // 0x40abca
    int32_t result; // 0x40abca
    return result;
}

// Address range: 0x40abcd - 0x40abd4
int32_t function_40abcd(int32_t a1) {
    // 0x40abcd
    return __asm_in_2(93);
}

// Address range: 0x40abd4 - 0x40ac02
int32_t function_40abd4(void) {
    // 0x40abd4
    int32_t v1; // 0x40abd4
    *(char *)-0x5eab9177 = *(char *)-0x5eab9177 + (char)v1;
    int32_t v2; // 0x40abd4
    return function_aecd3a8b(v2, v2);
}

// Address range: 0x40ac02 - 0x40acaf
int32_t function_40ac02(int32_t a1, int32_t a2) {
    // 0x40ac02
    bool v1; // 0x40ac02
    if (v1) {
        // 0x40ac05
        int32_t result; // 0x40ac02
        return result;
    }
    // 0x40ac13
    int32_t v2; // 0x40ac02
    bool v3; // 0x40ac02
    int32_t v4 = v2 + 131 + (int32_t)v3; // 0x40ac15
    int32_t result2 = v4 & 255 | v2 & -256; // 0x40ac15
    if (*(char *)result2 == (char)v4) {
        // 0x40ac05
        return result2;
    }
    // 0x40ac1b
    int32_t v5; // 0x40ac02
    int16_t v6 = *(int16_t *)*(int32_t *)(v5 + 9); // 0x40ac20
    unsigned char v7 = *(char *)(result2 + 0x452e4008); // 0x40ac3b
    int32_t result3 = (int32_t)v7 | (int32_t)(v6 & -256); // 0x40ac3b
    char * v8 = (char *)(result2 + 0x46c2); // 0x40ac41
    *v8 = v7 + 1 + *v8;
    int32_t v9 = result3 & 0xfc3d; // 0x40ac49
    char * v10 = (char *)v9; // 0x40ac57
    *v10 = *v10 + (char)v9;
    return result3;
}

// Address range: 0x40acaf - 0x40ad32
int32_t function_40acaf(void) {
    // 0x40acaf
    int32_t v1; // 0x40acaf
    *(char *)v1 = 2 * (char)v1;
    uint32_t v2; // 0x40acaf
    int32_t v3 = v1 + v2 / 256 & 255 | v1 & -256; // 0x40acb5
    int32_t v4 = *(int32_t *)v3 | v3; // 0x40acb8
    int32_t v5; // 0x40acaf
    char * v6 = (char *)(v5 + 0x1bec8); // 0x40acba
    *v6 = *v6 + (char)v2;
    char * v7 = (char *)v4; // 0x40acc0
    *v7 = *v7 + (char)v5;
    uint32_t v8; // 0x40acaf
    int32_t v9 = v2 | v8; // 0x40acc2
    int32_t v10 = v4; // 0x40acc4
    char v11 = 0; // 0x40acc4
    if (v9 != 0) {
        char * v12 = (char *)(v5 - 0x1f48038); // 0x40accf
        v11 = v9;
        *(char *)-0x18000000 = *(char *)-0x18000000 & (char)v4;
        int32_t v13 = v4 + 1; // 0x40accc
        int32_t v14 = *(int32_t *)v13 | v13; // 0x40accd
        char v15 = *v12 + v11; // 0x40accf
        *v12 = v15;
        v10 = v14;
        while (v15 != 0) {
            // 0x40acc6
            *(char *)-0x18000000 = *(char *)-0x18000000 & (char)v14;
            v13 = v14 + 1;
            v14 = *(int32_t *)v13 | v13;
            v15 = *v12 + v11;
            *v12 = v15;
            v10 = v14;
        }
    }
    int32_t v16 = v10 | v5; // 0x40acd7
    int32_t v17 = v10 + 59; // 0x40acd9
    int32_t v18 = v17 & 255 | v10 & -256; // 0x40acd9
    *(int32_t *)v8 = v9 + v8 + (int32_t)((char)v10 > 196);
    int32_t * v19 = (int32_t *)(v9 - 0x471eda01); // 0x40acdd
    *v19 = *v19 ^ 2;
    char * v20 = (char *)v18; // 0x40ace4
    *v20 = *v20 + (char)v17;
    char * v21 = (char *)(v16 - 0x39c4f3ab); // 0x40ace6
    *v21 = *v21 + v11;
    int32_t v22 = *(int32_t *)(v9 - 4); // 0x40acec
    int32_t * v23 = (int32_t *)v16; // 0x40acf5
    uint32_t v24; // 0x40acaf
    *v23 = *v23 + (int32_t)(v24 >= v8);
    *(int32_t *)-0x62260837 = v18 - 1;
    *(int32_t *)(v22 - 4) = *(int32_t *)(v22 + 20);
    int32_t v25 = __asm_int3(); // 0x40ad2c
    unsigned char v26 = *(char *)((v25 & 255) + v16); // 0x40ad2d
    *(char *)((0x1089b803 * v16 & -256 | 0x21137006 * v16 & 254) - 1) = v26;
    return v25 & -256 | (int32_t)*(char *)(v16 + (int32_t)v26);
}

// Address range: 0x40ad32 - 0x40adab
int32_t function_40ad32(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = unknown_a4b810(); // 0x40ad37
    int32_t v2; // 0x40ad32
    int32_t result = *(int32_t *)(v2 - 4); // 0x40ad41
    if ((char)(result || v1) >= 0) {
        // 0x40ada9
        return result;
    }
    int32_t * v3 = (int32_t *)((result & 255 | v1) + 0x5ec08502); // 0x40ad50
    *v3 = *v3 - 1;
    uint32_t v4 = __asm_iretd(); // 0x40ad5e
    return 39 * v4 / 256 + v4 & 255 | v4 & -0x10000;
}

// Address range: 0x40adab - 0x40adc1
int32_t function_40adab(void) {
    // 0x40adab
    int32_t v1; // 0x40adab
    int32_t v2; // 0x40adab
    float80_t v3; // 0x40adab
    *(int32_t *)(v2 + 2 * v1) = (int32_t)v3;
    return unknown_3340add0();
}

// Address range: 0x40adec - 0x40adee
int32_t function_40adec(int32_t a1) {
    // 0x40adec
    int32_t result; // 0x40adec
    return result;
}

// Address range: 0x40adf9 - 0x40adfa
int32_t function_40adf9(void) {
    // 0x40adf9
    int32_t result; // 0x40adf9
    return result;
}

// Address range: 0x40ae14 - 0x40ae1d
int32_t function_40ae14(void) {
    // 0x40ae14
    int32_t v1; // 0x40ae14
    char * v2 = (char *)(v1 - 0x4777efab); // 0x40ae14
    int32_t v3; // 0x40ae14
    *v2 = *v2 ^ (char)v3;
    return function_40ae21();
}

// Address range: 0x40ae1d - 0x40ae21
int32_t function_40ae1d(void) {
    // 0x40ae1d
    int32_t result; // 0x40ae1d
    return result;
}

// Address range: 0x40ae21 - 0x40ae3d
int32_t function_40ae21(void) {
    // 0x40ae21
    int32_t v1; // 0x40ae21
    unsigned char v2 = (char)*(int32_t *)(v1 + 16);
    int32_t v3; // 0x40ae21
    *(char *)v3 = v2 / 10 + 48;
    unsigned char result = v2 % 10 | 48;
    *(char *)(v3 + 1) = result;
    return result;
}

// Address range: 0x40ae3e - 0x40aee2
int32_t function_40ae3e(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40ae3e
    int32_t v1; // 0x40ae3e
    if (v1 != -1) {
        function_40adf9();
    }
    // 0x40ae44
    int32_t v2; // 0x40ae3e
    int32_t v3 = *(int32_t *)(v2 + 94); // 0x40ae44
    *(char *)v1 = 22;
    return v3 & -256 | (int32_t)(*(char *)v3 | (char)v3);
}

// Address range: 0x40aee7 - 0x40aee8
int32_t function_40aee7(void) {
    // 0x40aee7
    int32_t result; // 0x40aee7
    return result;
}

// Address range: 0x40aee8 - 0x40af17
int32_t function_40aee8(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40aee8
    int32_t v1; // 0x40aee8
    int32_t * v2 = (int32_t *)(v1 + 12); // 0x40aeea
    int32_t v3 = *v2; // 0x40aeea
    int32_t v4; // 0x40aee8
    unsigned char v5 = *(char *)(v4 + 48); // 0x40aeef
    int32_t v6; // 0x40aee8
    int32_t v7 = v6 & -256 | (int32_t)v5; // 0x40aeef
    *(char *)v3 = v5;
    uint32_t v8 = v3 + 1; // 0x40aef6
    int32_t * v9 = (int32_t *)(v7 + 0x307b8916); // 0x40aef7
    *v9 = *v9 - v7;
    *v2 = v8;
    int32_t v10 = 151 * v8 / 256 + v8; // 0x40af02
    *(int32_t *)v4 = v4 + v1;
    char * v11 = (char *)(v10 & 255 | v8 & -0x10000); // 0x40af0a
    *v11 = *v11 + (char)v10;
    return 0;
}

// Address range: 0x40af17 - 0x40b072
int32_t function_40af17(int32_t a1, int32_t a2) {
    // 0x40af17
    int32_t v1; // 0x40af17
    if (v1 == 1) {
        // 0x40b03f
        int32_t v2; // 0x40af17
        *(int32_t *)(*(int32_t *)(v2 - 115) - 8) = v2 | 81;
        function_40b080();
        int32_t v3; // 0x40af17
        __asm_in((int16_t)v3);
        abort();
        // UNREACHABLE
    }
    // 0x40af22
    int32_t v4; // 0x40af17
    *(int32_t *)(v4 + 14) = *(int32_t *)(v4 + 4);
    unknown_9040a2d0();
    int32_t * v5 = (int32_t *)(v4 + 72); // 0x40af33
    bool v6; // 0x40af17
    int32_t v7 = *v5 - (v6 ? 2 : 1); // 0x40af33
    *v5 = v7;
    if (v7 != 0) {
        function_40aee7();
    }
    // 0x40af39
    return function_40b2d0() + 1 ^ 0x1574c13b;
}

// Address range: 0x40b080 - 0x40b08c
int32_t function_40b080(void) {
    // 0x40b080
    int32_t result; // 0x40b080
    return result;
}

// Address range: 0x40b08d - 0x40b160
int32_t function_40b08d(int32_t a1) {
    // 0x40b08d
    int32_t v1; // 0x40b08d
    char * v2 = (char *)(v1 + 78); // 0x40b08d
    unsigned char v3 = *v2; // 0x40b08d
    uint32_t v4; // 0x40b08d
    unsigned char v5 = v3 + (char)v4; // 0x40b08d
    bool v6; // 0x40b08d
    unsigned char v7 = v5 + (char)v6; // 0x40b08d
    *v2 = v7;
    int32_t v8; // 0x40b08d
    int32_t v9 = v8 + 11 + (int32_t)(v6 ? v7 <= v3 : v5 < v3); // 0x40b090
    int32_t v10 = v9 & 255 | v8 & -256; // 0x40b090
    uint32_t v11; // 0x40b08d
    int32_t v12 = v11 / 512 | 0x800000 * v11; // 0x40b092
    char v13 = v9; // 0x40b095
    __writegsbyte(v10, __readgsbyte(v10) + v13);
    char * v14 = (char *)v10; // 0x40b098
    char v15 = *v14 + v13; // 0x40b098
    *v14 = v15;
    int32_t v16 = v12; // 0x40b09a
    int32_t v17; // 0x40b08d
    int32_t v18; // 0x40b08d
    int32_t v19; // 0x40b08d
    if (v15 != 0) {
      lab_0x40b10d:
        // 0x40b10d
        if ((*(int32_t *)(v18 + 116) & v19) != 0) {
            int32_t v20 = *(int32_t *)(v19 + 12); // 0x40b137
            *(int32_t *)v17 = v16;
            return v20 + 81 & 255 | v20 & -256;
        }
        int32_t v21 = *(int32_t *)(v19 - 6); // 0x40b11b
        *(int32_t *)(*(int32_t *)(v19 + 12) + 13) = v21;
        return unknown_41a510() | 137;
    }
    // 0x40b09c
    int32_t v22; // 0x40b08d
    int32_t v23 = v22 - 1; // 0x40b0a7
    uint32_t v24; // 0x40b08d
    *(char *)v24 = (char)(v24 / 256 | v24);
    int32_t v25 = 0; // bp-12, 0x40b0b0
    int32_t v26 = &v25; // 0x40b0b0
    int32_t v27 = __asm_in_2(255); // 0x40b0b2
    float80_t v28; // 0x40b08d
    *(int16_t *)(v23 + v26) = (int16_t)v28;
    uint32_t v29 = v4 / 256; // 0x40b0c2
    unsigned char v30 = 2 * (char)v29; // 0x40b0c2
    int32_t v31 = (v27 ^ -0x3f88cab2) + 1 & -256 | (v30 < (char)v29 ? 255 : 0); // 0x40b0c4
    int32_t v32 = v31; // 0x40b0c7
    int32_t v33 = 0x75c08500; // 0x40b0c7
    int32_t v34 = v26; // 0x40b0c7
    int32_t v35 = v23; // 0x40b0c7
    v25 = v12;
    if (v31 == 0) {
        // 0x40b0c9
        v33 = *(int32_t *)(v22 + 19);
        *(int32_t *)v33 = v31;
        v32 = a1;
        int32_t v36; // 0x40b08d
        v34 = &v36;
        int32_t v37; // 0x40b08d
        v35 = v37 & -0xff01 | v24 & 0xff00;
    }
    int32_t v38 = v35;
    unsigned char v39 = *(char *)0xafced; // 0x40b0d8
    char v40 = v39 + v30; // 0x40b0d8
    *(char *)0xafced = v40;
    int32_t v41 = v32; // 0x40b0de
    if (v40 == 0) {
        // 0x40b0e0
        v41 = v32 & -0xff01 | 256 * (64 * (int32_t)(v40 == 0) | (int32_t)(v40 < v39) | 128 * (int32_t)(v40 < 0) | 16 * (int32_t)((v39 & 15) + (v30 & 14) > 15) | 4 * (int32_t)((llvm_ctpop_i8(v40) & 1) == 0)) | 512;
        int32_t * v42 = (int32_t *)v41; // 0x40b0e3
        *v42 = *v42 + v41;
    }
    if ((v38 & -v38) < 0) {
        // 0x40b148
        *(int32_t *)(v34 - 4) = v41;
        if (v41 == 0) {
            // 0x40b15a
            return 0;
        }
        // 0x40b153
        abort();
        // UNREACHABLE
    }
    *(int32_t *)v33 = 0x2800;
    uint32_t v43 = *(int32_t *)(v38 + 125); // 0x40b0f2
    // 0x40b0e9
    while (v43 != 0) {
        // 0x40b107
        v18 = v33;
        v17 = v38 - 1;
        v19 = *(int32_t *)v34;
        v16 = v43;
        if (v25 > v43) {
            goto lab_0x40b10d;
        }
        *(int32_t *)v33 = 0x2800;
        v43 = *(int32_t *)(v38 + 125);
    }
    // 0x40b0f9
    *(int32_t *)*(int32_t *)(v38 + 19) = v43;
    return 0x37000060;
}

// Address range: 0x40b161 - 0x40b1fa
int32_t function_40b161(void) {
    // 0x40b161
    bool v1; // 0x40b161
    bool v2; // 0x40b161
    bool v3; // 0x40b161
    if (v2 == v1 == !v3) {
        goto lab_0x40b1a9;
    } else {
        // 0x40b163
        int32_t v4; // 0x40b161
        *(int32_t *)v4 = 2 * v4;
        int32_t v5; // 0x40b161
        unsigned char v6 = *(char *)(((v5 & 0xff00) + v5 & 0xff00 | v5 & -0xff01) + (v4 & 255)); // 0x40b16b
        if ((v4 & -256 || (int32_t)v6) != 997) {
            function_113b24f();
        }
        goto lab_0x40b182;
    }
  lab_0x40b1a9:;
    // 0x40b1a9
    int32_t v7; // 0x40b161
    int32_t v8 = v7; // 0x40b1ab
    int32_t v9; // 0x40b161
    int32_t v10 = v9; // 0x40b1ab
    goto lab_0x40b1af;
  lab_0x40b1af:;
    int32_t v11 = v8;
    int32_t v12; // 0x40b161
    int32_t v13 = *(int32_t *)(v12 + 12); // 0x40b1af
    int32_t v14 = v11 - 4; // 0x40b1b2
    *(int32_t *)v14 = v10;
    int32_t v15 = *(int32_t *)(v13 + 16); // 0x40b1b3
    int32_t v16 = v11 - 8; // 0x40b1b6
    int32_t * v17 = (int32_t *)v16; // 0x40b1b6
    *v17 = v15;
    int32_t v18 = WaitForSingleObject(&g70, (int32_t)&g70); // 0x40b1b7
    int32_t v19 = v15; // 0x40b1c1
    int32_t v20 = v16; // 0x40b1c1
    int32_t v21 = 0x66000080; // 0x40b1c1
    if (v18 != 0x66000080) {
        int32_t * v22 = (int32_t *)(v13 + (int32_t)&g44); // 0x40b1c6
        *v22 = *v22 ^ v14;
        __asm_hlt();
        *v17 = (int32_t)"CancelIo";
        uint32_t v23 = *(int32_t *)(v11 + 12); // 0x40b1db
        uint32_t v24 = *(int32_t *)(v11 + 20); // 0x40b1db
        return (0x100000000 * (int64_t)v23 | (int64_t)v24) / (int64_t)(int32_t)"CancelIo";
    }
    goto lab_0x40b182;
  lab_0x40b182:;
    int32_t v25 = v21;
    int32_t v26 = v20;
    int32_t v27 = *(int32_t *)(v12 + 20); // 0x40b182
    int32_t v28 = *(int32_t *)(v12 + 16); // 0x40b185
    int32_t v29 = v28; // 0x40b18a
    if (v27 < 0) {
        goto lab_0x40b1a2;
    } else {
        int16_t v30 = v19; // 0x40b18c
        *(char *)v25 = __asm_insb(v30);
        unsigned char v31 = (char)v28; // 0x40b18d
        unsigned char v32 = v31 - 123; // 0x40b18d
        int32_t v33 = v28 & -256 | (int32_t)v32; // 0x40b18d
        __asm_out_6(v30, v32);
        v29 = v33;
        if (v31 > 122 || v32 == 0) {
            goto lab_0x40b1a2;
        } else {
            // 0x40b192
            *(int32_t *)0x3e57a00 = v33;
            char * v34 = (char *)v33; // 0x40b197
            *v34 = *v34 + v32;
            *(int32_t *)(v26 - 4) = v27;
            int32_t v35 = v26 - 8; // 0x40b19a
            *(int32_t *)v35 = v33;
            v8 = v35;
            v10 = function_40b4c7();
            goto lab_0x40b1af;
        }
    }
  lab_0x40b1a2:;
    int32_t v36 = v29 & v27; // 0x40b1a2
    v7 = v26;
    v9 = v36;
    if (v36 != -1) {
        // 0x40b1e4
        *(int32_t *)v12 = v25 | v12;
        int32_t v37; // 0x40b161
        char * v38 = (char *)(v37 + 0x53057ec0); // 0x40b1e6
        *v38 = *v38 + (char)v36;
        return function_40b248((int32_t)&g70, (int32_t)&g70);
    }
    goto lab_0x40b1a9;
}

// Address range: 0x40b246 - 0x40b248
int32_t function_40b246(void) {
    // 0x40b246
    int32_t result; // 0x40b246
    return result;
}

// Address range: 0x40b248 - 0x40b24f
int32_t function_40b248(int32_t a1, int32_t a2) {
    // 0x40b248
    int32_t result; // 0x40b248
    *(int32_t *)result = 2 * result;
    return result;
}

// Address range: 0x40b259 - 0x40b268
int32_t function_40b259(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40b259
    int32_t v1; // 0x40b259
    float80_t v2; // 0x40b259
    *(float64_t *)(v1 - 99) = (float64_t)v2;
    return 0x1117e;
}

// Address range: 0x40b268 - 0x40b283
int32_t function_40b268(int32_t a1, int32_t a2) {
    // 0x40b268
    int32_t result; // 0x40b268
    if (result != 0x80afca6) {
        // 0x40b281
        return result;
    }
    // 0x40b26f
    *(int32_t *)result = 2 * result;
    return result;
}

// Address range: 0x40b284 - 0x40b2ca
int32_t function_40b284(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40b284
    int32_t v1; // 0x40b284
    unsigned char v2 = *(char *)(v1 - 0x3632efbf); // 0x40b284
    int32_t v3; // 0x40b284
    unsigned char v4 = (char)v3; // 0x40b284
    unsigned char v5 = *(char *)(v1 + 0x558b144d) + v4; // 0x40b28b
    unsigned char v6 = v5 + (char)(v2 < v4); // 0x40b28b
    bool v7 = v2 < v4 ? v6 <= v4 : v5 < v4; // 0x40b28b
    uint32_t v8 = v3 & -256 | (int32_t)v6; // 0x40b28b
    char * v9 = (char *)(v1 + 95); // 0x40b291
    *v9 = *v9 + (char)v1 + (char)v7;
    int32_t v10; // 0x40b284
    int32_t * v11 = (int32_t *)(v10 - 61); // 0x40b29b
    *v11 = -*v11;
    int32_t v12; // 0x40b284
    int32_t v13 = *(int32_t *)(v12 + 12); // 0x40b29e
    char * v14 = (char *)(v13 - 0x5e7bf7aa); // 0x40b2a4
    unsigned char v15 = *v14; // 0x40b2a4
    char v16 = v15 - v6; // 0x40b2a4
    *v14 = v16;
    int32_t * v17 = (int32_t *)v8; // 0x40b2aa
    bool v18 = v15 < v6; // 0x40b2aa
    if (v16 == 0) {
        int32_t v19 = *(int32_t *)(v12 + 80); // 0x40b2ac
        uint32_t v20 = v8 + (int32_t)(v8 > -1 - v19); // 0x40b2b4
        *(int32_t *)(v12 + 84) = v20;
        v17 = (int32_t *)v20;
        v18 = v8 > -1 - v19 == v20 <= v8;
    }
    // 0x40b2bd
    *v17 = v13;
    return v18 ? 0x12cd1 : 0x12cd0;
}

// Address range: 0x40b2d0 - 0x40b312
int32_t function_40b2d0(void) {
    // 0x40b2d0
    int32_t v1; // 0x40b2d0
    int32_t * v2 = (int32_t *)(v1 - 103); // 0x40b2d3
    int32_t v3; // 0x40b2d0
    *v2 = *v2 | v3;
    uint32_t v4 = __asm_int1(); // 0x40b2d6
    char * v5 = (char *)(v1 + 38 + 2 * v4); // 0x40b2d7
    *v5 = *v5 | (char)(v4 / 256);
    __asm_invlpg(*(char *)(v1 - 0x75000000));
    uint32_t v6; // 0x40b2d0
    int32_t v7; // 0x40b2d0
    int32_t v8 = v7 & v6 / 256;
    int32_t v9 = v8 & 255 | v7 & -256; // 0x40b2e9
    int32_t v10; // 0x40b2d0
    int32_t * v11 = (int32_t *)(v10 - 119); // 0x40b2eb
    *v11 = *v11 + v3;
    *(char *)v10 = *(char *)&v10 | (char)v8;
    function_40b284((int32_t)&g70, (int32_t)&g70, (int32_t)&g70);
    int32_t v12 = v9 + 1; // 0x40b301
    char * v13 = (char *)v12; // 0x40b302
    *v13 = *v13 + (char)v12;
    return v9 - 0x1400376f;
}

// Address range: 0x40b313 - 0x40b321
int32_t function_40b313(void) {
    // 0x40b313
    int32_t v1; // 0x40b313
    return function_16401374(v1 - 4, 0);
}

// Address range: 0x40b321 - 0x40b347
int32_t function_40b321(void) {
    // 0x40b321
    int32_t v1; // 0x40b321
    char * v2 = (char *)(v1 + 0x458b2f74); // 0x40b324
    uint32_t v3; // 0x40b321
    *v2 = *v2 + (char)(v3 / 256);
    return v3 - 0x7627fc08;
}

// Address range: 0x40b347 - 0x40b358
int32_t function_40b347(int32_t a1) {
    // 0x40b347
    int32_t v1; // 0x40b347
    char * v2 = (char *)(v1 - 57); // 0x40b347
    int32_t v3; // 0x40b347
    char v4 = v3; // 0x40b347
    *v2 = *v2 | v4;
    int32_t result; // 0x40b347
    int32_t v5 = result;
    *(char *)v5 = *(char *)&result + (char)v5;
    char * v6 = (char *)(v3 - 59); // 0x40b34f
    *v6 = *v6 + v4;
    return result;
}

// Address range: 0x40b392 - 0x40b3a1
int32_t function_40b392(int32_t a1) {
    // 0x40b392
    int32_t v1; // 0x40b392
    char * v2 = (char *)(v1 + 0x52040845); // 0x40b394
    int32_t v3; // 0x40b392
    *v2 = *v2 + (char)v3;
    int32_t v4; // 0x40b392
    return v4 & -0x10000;
}

// Address range: 0x40b3a1 - 0x40b3aa
int32_t function_40b3a1(int32_t a1) {
    // 0x40b3a1
    return __asm_in_2(93);
}

// Address range: 0x40b3ad - 0x40b3d2
int32_t function_40b3ad(void) {
    // 0x40b3ad
    int32_t v1; // 0x40b3ad
    char * v2 = (char *)(v1 - 0x746f74ab); // 0x40b3ae
    unsigned char v3 = *v2; // 0x40b3ae
    bool v4; // 0x40b3ad
    *v2 = 32 * v3 | 16 * (char)v4 | v3 / 16;
    int32_t v5; // 0x40b3ad
    int32_t v6 = v5 + 1; // 0x40b3bd
    int32_t v7; // 0x40b3ad
    uint64_t v8 = (int64_t)v1 * (int64_t)v7; // 0x40b3be
    int32_t result = v8; // 0x40b3c2
    if (v6 < 1) {
        result = function_40b3ad();
    }
    // 0x40b3c4
    *(char *)((int32_t)(v8 / 0x40000000) + 0x19504 & -4) = (char)(v6 / 256);
    char * v9 = (char *)result; // 0x40b3cc
    *v9 = *v9 + (char)result;
    return result;
}

// Address range: 0x40b3ed - 0x40b3f8
int32_t function_40b3ed(void) {
    // 0x40b3ed
    int32_t v1; // 0x40b3ed
    int32_t v2; // 0x40b3ed
    return unknown_13cb400(v1, v2);
}

// Address range: 0x40b419 - 0x40b42a
int32_t function_40b419(void) {
    // 0x40b419
    int32_t v1; // 0x40b419
    float80_t v2; // 0x40b419
    *(int32_t *)(v1 - 0x3944c8ec) = (int32_t)v2;
    return function_928a2502();
}

// Address range: 0x40b43c - 0x40b440
int32_t function_40b43c(void) {
    // 0x40b43c
    int32_t v1; // 0x40b43c
    return v1 + 193 & 255 | v1 & -256;
}

// Address range: 0x40b440 - 0x40b441
int32_t function_40b440(void) {
    // 0x40b440
    int32_t result; // 0x40b440
    return result;
}

// Address range: 0x40b443 - 0x40b4c7
// Used cryptographic patterns:
//  - B64EncodeTable (8-bit, little endian)
int32_t function_40b443(int32_t a1) {
    // 0x40b443
    int32_t v1; // 0x40b443
    unsigned char v2 = *(char *)(v1 + 0x69c7fa); // 0x40b445
    int32_t v3 = v1 & -256 | (int32_t)v2; // 0x40b445
    __asm_int(138);
    bool v4; // 0x40b443
    bool v5 = (a1 & 14) > 9 | v4; // 0x40b450
    int32_t v6 = (v5 ? a1 + 6 : a1) & 15; // 0x40b450
    int32_t v7 = a1 & -0x10000; // 0x40b450
    int32_t v8 = 256 * (int32_t)v5 + a1 & 0xff00; // 0x40b450
    char * v9 = (char *)(v3 - 0x7c00c8a4); // 0x40b451
    *v9 = *v9 - 1;
    int32_t v10; // 0x40b443
    if (v10 == 1) {
        char v11 = *(char *)(v3 - 0x4fd0ae15); // 0x40b45b
        return v8 | v7 | (int32_t)(v11 + (char)v6);
    }
    // 0x40b468
    *(char *)((v8 | v7 | v6) - 1) = v2;
    int32_t v12; // 0x40b443
    int32_t v13; // 0x40b443
    uint32_t v14 = (int32_t)(*(char *)(v12 - 55 + v13) & 63); // 0x40b46f
    int32_t v15 = __asm_wait(); // 0x40b472
    char v16 = *(char *)(v14 + (int32_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x40b475
    *(char *)(v15 - 1) = v16;
    uint32_t v17; // 0x40b443
    if (v17 <= v14) {
        // 0x40b480
        *(char *)(v17 + 16) = 0;
        return function_f4335f7d();
    }
    // 0x40b499
    *(char *)(v10 - 2) = 0;
    unsigned char v18 = (char)v15; // 0x40b49d
    char v19 = v17 <= v14; // 0x40b49d
    unsigned char v20 = v18 + 62 + v19; // 0x40b49d
    int32_t v21 = v20; // 0x40b49d
    int32_t v22 = v15 & -256; // 0x40b49d
    if (v20 == 0) {
        int32_t result = (v22 | v21) + 1; // 0x40b4a7
        *(int32_t *)result = 0x62ff0888;
        return result;
    }
    bool v23 = v20 > 153 | (v17 <= v14 ? v20 <= v18 : v18 > 193);
    int32_t v24 = v23 ? v21 + 160 : v21;
    int32_t v25 = (v18 & 15) + 14 + v19 > 15 | (v20 & 14) > 9 ? (v23 ? 154 : 250) + v21 : v24;
    int32_t v26; // 0x40b443
    int32_t v27 = v26 + v13; // 0x40b4b8
    *(int32_t *)v26 = v27;
    int32_t result2 = v25 & 255 | v22; // 0x40b4bb
    if (v27 < 0 == ((v27 ^ v26) & (v27 ^ v13)) < 0) {
        result2 = function_40b440();
    }
    // 0x40b4bd
    return result2;
}

// Address range: 0x40b4c7 - 0x40b4f0
int32_t function_40b4c7(void) {
    // 0x40b4c7
    int32_t v1; // 0x40b4c7
    int32_t v2 = v1 + 1; // 0x40b4c9
    int32_t v3; // 0x40b4c7
    int32_t v4 = 256 * (int32_t)*(char *)(v3 + 24) | v2 & -0xff01; // 0x40b4ca
    *(int32_t *)v4 = -0x7500af78;
    int32_t v5; // 0x40b4c7
    int32_t * v6 = (int32_t *)(v5 + 0x638a0f00); // 0x40b4d4
    uint32_t v7; // 0x40b4c7
    *v6 = *v6 | v7;
    int32_t v8; // 0x40b4c7
    unsigned char v9 = *(char *)&v8; // 0x40b4da
    unsigned char v10 = *(char *)&v5; // 0x40b4da
    char * v11 = (char *)(v4 - 0x2539bfef); // 0x40b4de
    *v11 = *v11 + (char)v7;
    char * v12 = (char *)(v3 - 256 * (v2 + (int32_t)(v9 < v10)) & 0xff00 | v3 & -0xff01); // 0x40b4eb
    *v12 = *v12 + (char)(v7 / 256);
    return v4 + 1;
}

// Address range: 0x40b4f0 - 0x40b53e
int32_t function_40b4f0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    // 0x40b4f0
    int32_t v1; // 0x40b4f0
    char * v2 = (char *)((__asm_in((int16_t)v1) | 12) - 0x6f6f6f70); // 0x40b4f5
    *v2 = *v2 + (char)v1;
    int32_t v3 = (a1 & 1024) == 0 ? 4 : -4; // 0x40b50a
    int32_t v4; // 0x40b4f0
    int32_t v5 = v4 + v3; // 0x40b50a
    unknown_cc8600();
    __asm_out_1(64, *(int32_t *)v5);
    char * v6 = (char *)(v3 - 59 + v5); // 0x40b527
    *v6 = (char)a2 + 2 + *v6;
    *(char *)(a9 - 9) = -1;
    return a10 - 1;
}

// Address range: 0x40b540 - 0x40b590
int32_t function_40b540(int32_t a1, int32_t a2, int32_t a3) {
    // 0x40b540
    int32_t v1; // 0x40b540
    uint32_t v2; // 0x40b540
    bool v3; // 0x40b540
    *(char *)v1 = (char)v3 + (char)v2 + *(char *)&v1;
    *(int32_t *)(v2 - 0x100c) = (int32_t)(v2 - 4);
    int32_t v4; // 0x40b540
    int32_t v5 = v4 & 138 | 117; // 0x40b54d
    uint32_t v6 = v5 | v4 & -256; // 0x40b54d
    int32_t * v7 = (int32_t *)(v1 - 0x8fb65bc); // 0x40b54f
    *v7 = *v7 | v2;
    char v8 = v5; // 0x40b555
    *(char *)v6 = v8;
    int64_t v9 = (int64_t)v6 * (int64_t)v2; // 0x40b55a
    int32_t v10 = v9; // 0x40b55a
    v1 = v10;
    uint32_t v11 = *(int32_t *)(v2 - 0x1000); // 0x40b55e
    uint32_t v12 = *(int32_t *)(v2 + 0x6d52f30c); // 0x40b562
    int64_t v13 = (v9 & -0x100000000 | (int64_t)v11) / (int64_t)v12; // 0x40b562
    int32_t v14 = v13; // 0x40b562
    char v15 = v13; // 0x40b56c
    int32_t v16; // 0x40b540
    bool v17 = ((char)v16 & 15) - (v8 & 15) > 15 | (v15 & 14) > 9; // 0x40b56c
    unsigned char v18 = (v17 ? v15 + 10 : v15) & 15; // 0x40b56c
    char * v19 = (char *)v10; // 0x40b56d
    unsigned char v20 = *v19; // 0x40b56d
    unsigned char v21 = v18 + (char)v17; // 0x40b56d
    bool v22 = v17 | v20 < v21; // 0x40b56d
    *v19 = v20 - v21;
    uint32_t v23 = *(int32_t *)v14 & 31; // 0x40b56f
    bool v24 = v22; // 0x40b56f
    if (v23 != 0) {
        uint32_t v25 = *(int32_t *)(v10 + 108); // 0x40b56f
        *(int32_t *)(v1 + 108) = v25 >> v23 | (int32_t)((int64_t)v25 << (int64_t)(33 - v23)) | (int32_t)v22 << 32 - v23;
        v24 = (1 << v23 - 1 & v25) != 0;
    }
    char * v26 = (char *)(v14 & -0x10000 | (int32_t)v18 | 256 * (int32_t)v17 + v14 & 0xff00); // 0x40b572
    *v26 = *v26 + v18 + (char)v24;
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    return __asm_int3();
}

// Address range: 0x40b590 - 0x40b67d
int32_t function_40b590(int32_t a1) {
    // 0x40b590
    int32_t v1; // 0x40b590
    int32_t v2 = *(int32_t *)(v1 - 117) ^ v1; // 0x40b593
    int32_t v3; // 0x40b590
    int32_t v4 = v3 & -236; // 0x40b597
    int32_t v5; // 0x40b590
    int32_t v6; // 0x40b590
    if (v4 < 0) {
        char * v7 = (char *)(v2 - 116); // 0x40b5a8
        int32_t v8; // 0x40b590
        *v7 = *v7 + (char)v8;
        int32_t v9; // 0x40b590
        v5 = v9 & -0xff01;
        int32_t v10; // 0x40b590
        v6 = v10 + 1;
    }
    // 0x40b5b1
    *(int32_t *)((int32_t)(a1 != 0) + 36 + (v3 & -256 | v4 + 44 & 36 | 216)) = v2;
    int32_t v11 = *(int32_t *)(*(int32_t *)(v6 + 20) + 0x5424448b); // 0x40b5dd
    unsigned char v12 = (char)v11 - 21; // 0x40b5e6
    char v13 = llvm_ctpop_i8(v12); // 0x40b5e6
    int32_t v14 = v11 & -256 | (int32_t)v12;
    if ((v13 & 1) == 0) {
        // 0x40b5ea
        return v14 ^ 0x24448b14;
    }
    uint32_t v15; // 0x40b590
    if ((v14 || 8) > v15) {
        // 0x40b626
        return (v14 & -0x82508f9) + 0x5b00da83;
    }
    char * v16 = (char *)(v2 + 0x536eec83); // 0x40b655
    *v16 = *v16 + (char)v5;
    int32_t v17 = v6; // bp-24, 0x40b65c
    int32_t v18; // 0x40b590
    *(int32_t *)(v18 - 23) = (int32_t)&v17;
    *(int32_t *)(v18 - 115) = 0;
    __set_app_type(1);
    g68 = -1;
    g69 = -1;
    return &g70;
}

// Address range: 0x40b683 - 0x40b715
int32_t function_40b683(void) {
    // 0x40b683
    int32_t v1; // 0x40b683
    bool v2; // 0x40b683
    int32_t v3 = 0x10000 * v1 / 0x10000 - 0x67bf8228 + (int32_t)v2; // 0x40b68a
    *(char *)-0x3f235ef2 = (char)v3;
    int32_t v4; // 0x40b683
    char * v5 = (char *)(v4 + 1); // 0x40b69b
    uint32_t v6; // 0x40b683
    *v5 = *v5 + (char)(v6 / 256);
    char * v7 = (char *)(v6 + (int32_t)&g62); // 0x40b69d
    *v7 = *v7 + (char)((v3 + 1) / 256);
    int32_t v8; // 0x40b683
    int32_t v9; // 0x40b683
    *(char *)v8 = (char)function_40b947(v9);
    function_40b932((int32_t)&g70, (int32_t)&g70);
    unknown_e0b92c(&g9, &g6);
    int32_t v10; // 0x40b683
    int32_t * v11 = (int32_t *)(v10 - 40); // 0x40b6d6
    *v11 = *(int32_t *)-0x7bef4d5;
    int32_t v12 = *(int32_t *)0xeedb8c; // 0x40b6dd
    int32_t v13 = v10 - 32; // 0x40b6e3
    __getmainargs((int32_t *)(v10 - 28), (char ***)(v10 - 44), (char ***)v13, v12, v11);
    function_40b92c("Invalid Concurrency [Range 0..%d]\n", "alid URL\n");
    int32_t result = __p___initenv(); // 0x40b704
    *(int32_t *)result = *(int32_t *)v13;
    return result;
}

// Address range: 0x40b715 - 0x40b73e
int32_t function_40b715(void) {
    // 0x40b715
    int32_t v1; // 0x40b715
    *(int32_t *)v1 = -0xca71d;
    uint32_t v2; // 0x40b715
    uint32_t v3; // 0x40b715
    bool v4 = v2 > 14 ? v3 - 0x511d3e90 + (int32_t)(v2 > 14) <= v3 : v3 > 0x511d3e8f; // 0x40b725
    int32_t v5; // 0x40b715
    char * v6 = (char *)(*(int32_t *)(v5 - 20) + 81); // 0x40b733
    *v6 = 2 * *v6 | (char)v4;
    return unknown_a040b870();
}

// Address range: 0x40b73f - 0x40b740
int32_t function_40b73f(void) {
    // 0x40b73f
    int32_t result; // 0x40b73f
    return result;
}

// Address range: 0x40b750 - 0x40b764
float80_t function_40b750(int32_t a1, int32_t a2) {
    // 0x40b750
    int32_t v1; // 0x40b750
    unsigned char v2 = (char)v1 & 31; // 0x40b75a
    if (v2 != 0) {
        int32_t v3; // 0x40b750
        char * v4 = (char *)(v3 + 2 * a2); // 0x40b75a
        unsigned char v5 = *v4; // 0x40b75a
        *v4 = v5 << v2 | (char)((int16_t)v5 >> (int16_t)(9 - v2));
    }
    return 1.0;
}

// Address range: 0x40b765 - 0x40b802
int32_t function_40b765(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    // 0x40b765
    int32_t v1; // 0x40b765
    int32_t v2 = v1 - 1; // 0x40b765
    int32_t v3; // 0x40b765
    bool v4; // 0x40b765
    if (v2 != 0 == v4) {
        v3 = function_40b73f();
    }
    char * v5 = (char *)(v1 - 0x76efb4bd); // 0x40b767
    *v5 = *v5 + (char)v2;
    int32_t v6; // 0x40b765
    *(char *)*(int32_t *)(v6 + 0xb182444 + 4 * v2) = -1;
    int32_t v7; // 0x40b765
    *(int32_t *)v7 = v7 + 119;
    int32_t result = -v3 & -232; // 0x40b785
    int32_t v8; // bp-3, 0x40b765
    *(int32_t *)((int32_t)&v8 + 20 + 8 * result) = -a5;
    if (result != 0) {
        // 0x40b7aa
        return result;
    }
    unsigned char v9 = (char)a6 & 31; // 0x40b798
    if (v9 != 0) {
        int32_t v10; // 0x40b765
        char * v11 = (char *)(v10 + 0x24448b91); // 0x40b798
        *v11 = *v11 << v9;
    }
    // 0x40b7a8
    *(int32_t *)(v6 + 0x4fd22ac2) = a6;
    return a4 | 247;
}

// Address range: 0x40b804 - 0x40b810
int32_t function_40b804(void) {
    // 0x40b804
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    __asm_int3();
    return __asm_int3();
}

// Address range: 0x40b810 - 0x40b838
int32_t function_40b810(void) {
    // 0x40b810
    int32_t v1; // 0x40b810
    unsigned char v2 = (char)v1; // 0x40b810
    if (v2 >= 64) {
        // 0x40b82b
        __asm_int3();
        __asm_int3();
        return function_40b804();
    }
    if (v2 >= 32) {
        // 0x40b820
        return __asm_int1();
    }
    uint32_t v3 = v1 & 31; // 0x40b81d
    if (v3 != 0) {
        uint32_t v4; // 0x40b810
        *(int32_t *)v4 = v4 >> 32 - v3 | v4 << v3;
    }
    int32_t v5; // 0x40b810
    return v5 & -256 | (int32_t)(v2 >= 33);
}

// Address range: 0x40b83b - 0x40b86f
int32_t function_40b83b(int32_t a1) {
    // 0x40b83b
    __asm_int3();
    __asm_int3();
    int32_t v1; // bp+196, 0x40b83b
    return &v1;
}

// Address range: 0x40b870 - 0x40b88f
int32_t function_40b870(void) {
    // 0x40b870
    bool v1; // 0x40b870
    if (!v1) {
        // 0x40b88a
        return 0;
    }
    // 0x40b875
    int32_t v2; // 0x40b870
    int32_t v3 = v2 + 1; // 0x40b872
    int32_t v4; // 0x40b870
    if ((char)v4 < 32) {
        // 0x40b87a
        return v3 << (v4 & 31);
    }
    int32_t result = v3; // 0x40b885
    if (v4 != 1 == (char)v3 > -1) {
        result = function_40b8ec();
    }
    // 0x40b887
    int32_t v5; // 0x40b870
    *(int32_t *)v5 = result;
    return result;
}

// Address range: 0x40b890 - 0x40b8b2
int32_t function_40b890(void) {
    // 0x40b890
    *(char *)-0x82dd2f0 = (char)__asm_int1();
    __asm_int1();
    return function_40b8f3((int32_t)&g70, (int32_t)&g70);
}

// Address range: 0x40b8b2 - 0x40b8cd
int32_t function_40b8b2(int32_t a1) {
    while (true) {
        // continue -> 0x40b8c4
    }
}

// Address range: 0x40b8ec - 0x40b8f3
int32_t function_40b8ec(void) {
    // 0x40b8ec
    int32_t result; // 0x40b8ec
    return result;
}

// Address range: 0x40b8f3 - 0x40b8f8
int32_t function_40b8f3(int32_t a1, int32_t a2) {
    // 0x40b8f3
    int32_t result; // 0x40b8f3
    return result;
}

// Address range: 0x40b8f8 - 0x40b92c
int32_t function_40b8f8(void) {
    // 0x40b8f8
    __asm_int3();
    __asm_int3();
    __asm_int3();
    int32_t v1; // 0x40b8f8
    if ((unsigned char)(char)v1 >= 64) {
        // 0x40b91a
        abort();
        // UNREACHABLE
    }
    // 0x40b910
    int32_t v2; // 0x40b8f8
    __asm_out_6((int16_t)v2, (char)v2);
    return *(int32_t *)(v2 - 0x172ce072) | v2;
}

// Address range: 0x40b92c - 0x40b931
int32_t function_40b92c(char * a1, char * a2) {
    // 0x40b92c
    int32_t v1; // 0x40b92c
    return (v1 & -256 | (int32_t)__asm_in_7(-64)) + 1;
}

// Address range: 0x40b932 - 0x40b944
int32_t function_40b932(int32_t a1, int32_t a2) {
    // 0x40b932
    int32_t v1; // 0x40b932
    char * v2 = (char *)(v1 + 0x6800); // 0x40b934
    int32_t v3; // 0x40b932
    *v2 = *v2 + (char)v3;
    int32_t v4; // 0x40b932
    *(int32_t *)v4 = 2 * v4;
    return function_40b94e();
}

// Address range: 0x40b946 - 0x40b947
int32_t function_40b946(void) {
    // 0x40b946
    int32_t result; // 0x40b946
    return result;
}

// Address range: 0x40b947 - 0x40b948
int32_t function_40b947(int32_t a1) {
    // 0x40b947
    int32_t result; // 0x40b947
    return result;
}

// Address range: 0x40b948 - 0x40b94e
int32_t function_40b948(void) {
    // 0x40b948
    int32_t result; // 0x40b948
    return result;
}

// Address range: 0x40b94e - 0x40b954
int32_t function_40b94e(void) {
    // 0x40b94e
    int32_t result; // 0x40b94e
    return result;
}

// Address range: 0x40b960 - 0x40b961
int32_t function_40b960(void) {
    // 0x40b960
    int32_t result; // 0x40b960
    return result;
}

// Address range: 0x40c2ea - 0x40c2eb
int32_t function_40c2ea(void) {
    // 0x40c2ea
    int32_t result; // 0x40c2ea
    return result;
}

// Address range: 0x40d413 - 0x4101ad
int32_t function_40d413(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14) {
    // 0x40d413
    int32_t v1; // 0x40d413
    unsigned char v2 = (char)v1;
    char * v3 = (char *)v1; // 0x40d415
    *v3 = *v3 + v2;
    uint32_t v4; // 0x40d413
    char * v5 = (char *)(v4 + 99); // 0x40d417
    char v6 = *v5 + v2; // 0x40d417
    *v5 = v6;
    int32_t v7; // 0x40d413
    int32_t v8; // 0x40d413
    __asm_arpl(*(int16_t *)(v7 + 112), (int16_t)v8);
    if (v6 == 0) {
        // 0x40d459
        int32_t result; // 0x40d413
        return result;
    }
    // 0x40d41f
    int32_t v9; // 0x40d413
    *(char *)v9 = *(char *)&v9 & (char)(v4 / 256);
    int32_t result2; // 0x40d413
    if ((v2 & 14) > 9) {
        result2 = (v2 > 153 ? 154 : 250) + v1 & 255 | v1 & -256;
    } else {
        result2 = (v2 > 153 ? v1 + 160 : v1) & 255 | v1 & -256;
    }
    unsigned char v10 = (char)v4; // 0x40d422
    unsigned char v11 = *(char *)10; // 0x40d422
    char * v12 = (char *)v7; // bp-4, 0x40d428
    int32_t result3; // 0x40d413
    int32_t v13; // 0x40d413
    int32_t v14; // 0x40d413
    int32_t v15; // 0x40d413
    int32_t v16; // 0x40d413
    int32_t v17; // 0x40d413
    int32_t v18; // 0x40d413
    int32_t v19; // 0x40d413
    int32_t v20; // 0x40d478
    int32_t v21; // 0x40d48b
    int32_t * v22; // 0x40d413
    if (v11 <= v10) {
        // .dec_label_pc_40d490_crit_edge
        v22 = (int32_t *)&v12;
        v20 = result2;
        v21 = (int32_t)&v12;
        goto lab_0x40d490;
    } else {
        int32_t v23; // 0x40d413
        if (v11 == v10) {
            // 0x40d4bb
            int32_t v24; // 0x40d413
            char * v25 = (char *)(v24 + 101); // 0x40d4bb
            *v25 = *v25 + (char)v9;
            __asm_outsb((int16_t)v9, *(char *)v23);
            return result2;
        }
        // 0x40d46d
        __asm_arpl(*(int16_t *)(v9 + 101), (int16_t)v23);
        v9 = a4;
        char * v26 = (char *)(a1 + 97); // 0x40d462
        char v27 = *v26 & (char)(a6 / 256); // 0x40d462
        *v26 = v27;
        int64_t v28 = (int64_t)*(int32_t *)(a2 + 100); // 0x40d465
        int64_t v29 = 0x28000000 * v28; // 0x40d465
        int32_t v30 = v29; // 0x40d465
        int32_t v31 = __asm_bound(*(int64_t *)(v30 | 32)); // 0x40d46d
        result3 = a6;
        v16 = a3;
        v15 = v30;
        v19 = a1;
        v17 = (int32_t)v12;
        if (v29 == 0x2800000000000000 * v28 / 0x100000000) {
            int16_t v32 = v9;
            if (v27 == 0) {
                // 0x40d554
                __asm_outsd(v32, *(int32_t *)a1);
                // 0x40d57b
                v13 = a6;
                return v13 + 172 & 255 | v13 & -256;
            }
            // 0x40d474
            __asm_outsb(v32, __readgsbyte(a1));
            v20 = a6 & 0x2e000073;
            char * v33 = (char *)v9; // 0x40d47d
            *v33 = *v33 + (char)a5;
            char * v34 = (char *)v20; // 0x40d481
            *v34 = *v34 + (char)v20;
            char * v35 = (char *)(a3 + 116); // 0x40d483
            *v35 = *v35 + (char)a3;
            *(int32_t *)(v31 - 4) = 0x67756f72;
            v21 = v31 - 8;
            v22 = (int32_t *)v21;
            *v22 = 0x3a732520;
            v14 = v30;
            v18 = a1;
            goto lab_0x40d490;
        } else {
            goto lab_0x40d552;
        }
    }
  lab_0x40d490:;
    int32_t v36 = v20 & 0x205d64; // 0x40d490
    char * v37 = (char *)v36; // 0x40d495
    char v38 = v36; // 0x40d495
    *v37 = *v37 + v38;
    char * v39 = (char *)(v9 + 101); // 0x40d497
    unsigned char v40 = *v39; // 0x40d497
    unsigned char v41 = v40 + v38; // 0x40d497
    *v39 = v41;
    __asm_outsb((int16_t)v9, *(char *)v18);
    __asm_arpl(*(int16_t *)(v36 + 109), (int16_t)v14);
    int32_t v42 = *(int32_t *)(v21 + 4); // 0x40d49e
    int32_t v43 = *(int32_t *)(v21 + 16); // 0x40d49e
    int32_t v44 = *(int32_t *)(v21 + 28); // 0x40d49e
    v9 = *(int32_t *)(v21 + 20);
    if (v41 >= v40) {
        char * v45 = (char *)v44; // 0x40d4a8
        *v45 = *v45 + 2 * (char)v44;
        result3 = v44 & 0x25203a73;
        v16 = v43;
        v15 = 0x20732520 * *(int32_t *)(v42 + 103);
        v19 = v42;
        v17 = *v22;
        goto lab_0x40d552;
      lab_0x40d552:;
        char * v46 = (char *)(v16 + 101); // 0x40d4d3
        *v46 = *v46 + (char)v9;
        __asm_outsb((int16_t)v9, *(char *)v19);
        char v47 = __readfsbyte(v9 + 101) & (char)(v9 / 256); // 0x40d4d7
        __writefsbyte(v9 + 101, v47);
        if (v47 != 0) {
            // 0x40d5cb
            __asm_outsd((int16_t)v9, *(int32_t *)v19);
            return result3;
        }
        int32_t v48 = 0x10000 * (v15 + 101 + v17) / 0x10000; // 0x40d574
        __writegsbyte(v48, __readgsbyte(v48) & (char)(v9 / 256));
        // 0x40d57b
        v13 = result3;
        return v13 + 172 & 255 | v13 & -256;
    }
    int32_t v49 = v44 ^ 100; // 0x40d50d
    unsigned char v50 = *(char *)v49 | (char)v49; // 0x40d510
    char * v51 = (char *)(v44 & -256 | (int32_t)v50); // 0x40d512
    unsigned char v52 = *v51; // 0x40d512
    unsigned char v53 = v52 + v50; // 0x40d512
    *v51 = v53;
    int32_t v54; // 0x40d413
    bool v55; // 0x40d413
    bool v56; // 0x40d413
    if (v53 >= v52) {
        // 0x40d58a
        *v51 = v53 + v50;
        int32_t v57 = v43 + 1; // 0x40d58c
        v56 = v57 == 0;
        v55 = (v57 & (v43 ^ -0x80000000)) < 0;
        v54 = v21 + 32;
    } else {
        // 0x40d516
        v9 = *(int32_t *)(v21 + 52);
        v56 = v53 == 0;
        v55 = ((v53 ^ v52) & (v53 ^ v50)) < 0;
        v54 = v21 + 64;
    }
    int32_t v58 = *(int32_t *)v54; // 0x40d58d
    int32_t v59 = *(int32_t *)(v54 + 4); // 0x40d58d
    int32_t v60 = *(int32_t *)(v54 + 16); // 0x40d58d
    int32_t v61 = *(int32_t *)(v54 + 20); // 0x40d58d
    uint32_t v62 = *(int32_t *)(v54 + 24); // 0x40d58d
    int32_t * v63 = (int32_t *)(v54 + 28); // 0x40d58d
    uint32_t result4 = *v63; // 0x40d58d
    v9 = v61;
    int16_t v64 = v61; // 0x40d58e
    char * v65 = (char *)v59; // 0x40d58e
    __asm_outsb(v64, *v65);
    __asm_outsb(v64, *v65);
    int32_t * v66 = (int32_t *)v59; // 0x40d590
    __asm_outsd(v64, *v66);
    if (v56) {
        // 0x40d5c0
        *(char *)0x34364935 = *(char *)0x34364935 & (char)(result4 / 256);
        int32_t v67 = result4 & -256 | (int32_t)(__readfsbyte(result4) | (char)result4); // 0x40d5b9
        char * v68 = (char *)v62; // 0x40d5bc
        *v68 = *v68 & (char)(v9 / 256);
        char * v69 = (char *)v67; // 0x40d5be
        *v69 = *v69 ^ (char)(v9 / 256);
        return v67 & 0x25202025 ^ 0x64343649;
    }
    // 0x40d593
    __asm_outsd((int16_t)v9, *v66);
    if (v55) {
        int32_t v70 = (0x10000 * v60 + 0x660000) / 0x10000; // 0x40d5fd
        __writegsbyte(v70, __readgsbyte(v70) & (char)(v62 / 256));
        char * v71 = (char *)(2 * *(int32_t *)(v54 + 8) + 101 + result4); // 0x40d602
        *v71 = *v71 & (char)(v9 / 256);
        char * v72 = (char *)(v9 + 101); // 0x40d606
        *v72 = *v72 & (char)(v9 / 256);
        // 0x40d459
        return result4;
    }
    // 0x40d596
    __asm_outsb((int16_t)v9, *v65);
    char * v73 = (char *)(v60 + 83); // 0x40d597
    char v74 = result4; // 0x40d597
    *v73 = *v73 & v74;
    *v63 = v59;
    char * v75 = (char *)(v58 + 117); // 0x40d59b
    char v76 = *v75 & (char)(v62 / 256); // 0x40d59b
    *v75 = v76;
    if (v76 != 0) {
        char * v77 = (char *)(v58 + 105); // 0x40d616
        *v77 = *v77 & (char)(v9 / 256);
        return result4;
    }
    unsigned char v78 = *(char *)result4 | v74; // 0x40d677
    int32_t result5 = result4 & -256 | (int32_t)v78; // 0x40d677
    char * v79 = (char *)result5; // 0x40d679
    *v79 = *v79 + v78;
    char * v80 = (char *)(v60 + 111); // 0x40d67b
    *v80 = *v80 + v78;
    __asm_outsb((int16_t)v9, *v65);
    __asm_outsb((int16_t)v9, *v65);
    // 0x40d459
    return result5;
}

// Address range: 0x410ab8 - 0x410ab9
int32_t function_410ab8(void) {
    // 0x410ab8
    int32_t result; // 0x410ab8
    return result;
}

// Address range: 0x411306 - 0x411307
int32_t function_411306(void) {
    // 0x411306
    int32_t result; // 0x411306
    return result;
}

// Address range: 0x411615 - 0x411616
int32_t function_411615(void) {
    // 0x411615
    int32_t result; // 0x411615
    return result;
}

// Address range: 0x431513 - 0x431514
int32_t function_431513(int32_t a1) {
    // 0x431513
    int32_t result; // 0x431513
    return result;
}

// Address range: 0x4365d3 - 0x4365d4
int32_t function_4365d3(void) {
    // 0x4365d3
    int32_t result; // 0x4365d3
    return result;
}

// Address range: 0x44e431 - 0x44e432
int32_t function_44e431(void) {
    // 0x44e431
    int32_t result; // 0x44e431
    return result;
}

// Address range: 0x463654 - 0x463655
int32_t function_463654(void) {
    // 0x463654
    int32_t result; // 0x463654
    return result;
}

// Address range: 0x464099 - 0x46409a
int32_t function_464099(void) {
    // 0x464099
    int32_t result; // 0x464099
    return result;
}

// Address range: 0x4f5a95 - 0x4f5a96
int32_t function_4f5a95(void) {
    // 0x4f5a95
    int32_t result; // 0x4f5a95
    return result;
}

// Address range: 0x6951c2 - 0x6951c3
int32_t function_6951c2(void) {
    // 0x6951c2
    int32_t result; // 0x6951c2
    return result;
}

// Address range: 0x6b4297 - 0x6b4298
int32_t function_6b4297(void) {
    // 0x6b4297
    int32_t result; // 0x6b4297
    return result;
}

// Address range: 0x97707d - 0x97707e
int32_t function_97707d(void) {
    // 0x97707d
    int32_t result; // 0x97707d
    return result;
}

// Address range: 0xaaa59f - 0xaaa5a0
int32_t function_aaa59f(void) {
    // 0xaaa59f
    int32_t result; // 0xaaa59f
    return result;
}

// Address range: 0xb5f5a5 - 0xb5f5a6
int32_t function_b5f5a5(void) {
    // 0xb5f5a5
    int32_t result; // 0xb5f5a5
    return result;
}

// Address range: 0xcc26ac - 0xcc26ad
int32_t function_cc26ac(int32_t a1, int32_t a2) {
    // 0xcc26ac
    int32_t result; // 0xcc26ac
    return result;
}

// Address range: 0x10e1167 - 0x10e1168
int32_t function_10e1167(void) {
    // 0x10e1167
    int32_t result; // 0x10e1167
    return result;
}

// Address range: 0x1101516 - 0x1101517
int32_t function_1101516(void) {
    // 0x1101516
    int32_t result; // 0x1101516
    return result;
}

// Address range: 0x113b24f - 0x113b250
int32_t function_113b24f(void) {
    // 0x113b24f
    int32_t result; // 0x113b24f
    return result;
}

// Address range: 0x1353a16 - 0x1353a17
int32_t function_1353a16(void) {
    // 0x1353a16
    int32_t result; // 0x1353a16
    return result;
}

// Address range: 0x1405a97 - 0x1405a98
int32_t function_1405a97(void) {
    // 0x1405a97
    int32_t result; // 0x1405a97
    return result;
}

// Address range: 0x34010a0 - 0x34010a1
int32_t function_34010a0(void) {
    // 0x34010a0
    int32_t result; // 0x34010a0
    return result;
}

// Address range: 0x4289008 - 0x4289009
int32_t function_4289008(void) {
    // 0x4289008
    int32_t result; // 0x4289008
    return result;
}

// Address range: 0x4c07be9 - 0x4c07bea
int32_t function_4c07be9(char a1) {
    // 0x4c07be9
    int32_t result; // 0x4c07be9
    return result;
}

// Address range: 0x8451b14 - 0x8451b15
int32_t function_8451b14(void) {
    // 0x8451b14
    int32_t result; // 0x8451b14
    return result;
}

// Address range: 0xb4030c5 - 0xb4030c6
int32_t function_b4030c5(void) {
    // 0xb4030c5
    int32_t result; // 0xb4030c5
    return result;
}

// Address range: 0xb63eea1 - 0xb63eea2
int32_t function_b63eea1(void) {
    // 0xb63eea1
    int32_t result; // 0xb63eea1
    return result;
}

// Address range: 0xd8b0041 - 0xd8b0042
int32_t function_d8b0041(void) {
    // 0xd8b0041
    int32_t result; // 0xd8b0041
    return result;
}

// Address range: 0x124077c3 - 0x124077c4
int32_t function_124077c3(void) {
    // 0x124077c3
    int32_t result; // 0x124077c3
    return result;
}

// Address range: 0x16260077 - 0x16260078
int32_t function_16260077(void) {
    // 0x16260077
    int32_t result; // 0x16260077
    return result;
}

// Address range: 0x16401374 - 0x16401375
int32_t function_16401374(int32_t a1, int32_t a2) {
    // 0x16401374
    int32_t result; // 0x16401374
    return result;
}

// Address range: 0x1724606e - 0x1724606f
int32_t function_1724606e(void) {
    // 0x1724606e
    int32_t result; // 0x1724606e
    return result;
}

// Address range: 0x1e40cbfc - 0x1e40cbfd
int32_t function_1e40cbfc(void) {
    // 0x1e40cbfc
    int32_t result; // 0x1e40cbfc
    return result;
}

// Address range: 0x1e40fffc - 0x1e40fffd
int32_t function_1e40fffc(void) {
    // 0x1e40fffc
    int32_t result; // 0x1e40fffc
    return result;
}

// Address range: 0x2502fac1 - 0x2502fac2
int32_t function_2502fac1(void) {
    // 0x2502fac1
    int32_t result; // 0x2502fac1
    return result;
}

// Address range: 0x2e47448a - 0x2e47448b
int32_t function_2e47448a(int32_t a1) {
    // 0x2e47448a
    int32_t result; // 0x2e47448a
    return result;
}

// Address range: 0x2f408fdb - 0x2f408fdc
int32_t function_2f408fdb(void) {
    // 0x2f408fdb
    int32_t result; // 0x2f408fdb
    return result;
}

// Address range: 0x310312eb - 0x310312ec
int32_t function_310312eb(void) {
    // 0x310312eb
    int32_t result; // 0x310312eb
    return result;
}

// Address range: 0x332afd2a - 0x332afd2b
int32_t function_332afd2a(void) {
    // 0x332afd2a
    int32_t result; // 0x332afd2a
    return result;
}

// Address range: 0x3b4077df - 0x3b4077e0
int32_t function_3b4077df(void) {
    // 0x3b4077df
    int32_t result; // 0x3b4077df
    return result;
}

// Address range: 0x3c402e7b - 0x3c402e7c
int32_t function_3c402e7b(void) {
    // 0x3c402e7b
    int32_t result; // 0x3c402e7b
    return result;
}

// Address range: 0x408b1871 - 0x408b1872
int32_t function_408b1871(int32_t a1, int32_t a2, int32_t a3) {
    // 0x408b1871
    int32_t result; // 0x408b1871
    return result;
}

// Address range: 0x41805c89 - 0x41805c8a
int32_t function_41805c89(void) {
    // 0x41805c89
    int32_t result; // 0x41805c89
    return result;
}

// Address range: 0x51020dad - 0x51020dae
int32_t function_51020dad(void) {
    // 0x51020dad
    int32_t result; // 0x51020dad
    return result;
}

// Address range: 0x521723e8 - 0x521723e9
int32_t function_521723e8(void) {
    // 0x521723e8
    int32_t result; // 0x521723e8
    return result;
}

// Address range: 0x566800f0 - 0x566800f1
int32_t function_566800f0(int32_t a1) {
    // 0x566800f0
    int32_t result; // 0x566800f0
    return result;
}

// Address range: 0x5bc1f55e - 0x5bc1f55f
int32_t function_5bc1f55e(void) {
    // 0x5bc1f55e
    int32_t result; // 0x5bc1f55e
    return result;
}

// Address range: 0x5c404702 - 0x5c404703
int32_t function_5c404702(void) {
    // 0x5c404702
    int32_t result; // 0x5c404702
    return result;
}

// Address range: 0x6ba108c4 - 0x6ba108c5
int32_t function_6ba108c4(int32_t a1, char * a2, int32_t a3) {
    // 0x6ba108c4
    int32_t result; // 0x6ba108c4
    return result;
}

// Address range: 0x74865650 - 0x74865651
int32_t function_74865650(void) {
    // 0x74865650
    int32_t result; // 0x74865650
    return result;
}

// Address range: 0x7587ffff - 0x75880000
int32_t function_7587ffff(void) {
    // 0x7587ffff
    int32_t result; // 0x7587ffff
    return result;
}

// Address range: 0x7e11baa4 - 0x7e11baa5
int32_t function_7e11baa4(void) {
    // 0x7e11baa4
    int32_t result; // 0x7e11baa4
    return result;
}

// Address range: 0x8032292a - 0x8032292b
int32_t function_8032292a(void) {
    // 0x8032292a
    int32_t result; // 0x8032292a
    return result;
}

// Address range: 0x805e7805 - 0x805e7806
int32_t function_805e7805(void) {
    // 0x805e7805
    int32_t result; // 0x805e7805
    return result;
}

// Address range: 0x8342339f - 0x834233a0
int32_t function_8342339f(void) {
    // 0x8342339f
    int32_t result; // 0x8342339f
    return result;
}

// Address range: 0x8440b83b - 0x8440b83c
int32_t function_8440b83b(void) {
    // 0x8440b83b
    int32_t result; // 0x8440b83b
    return result;
}

// Address range: 0x87408d9d - 0x87408d9e
int32_t function_87408d9d(void) {
    // 0x87408d9d
    int32_t result; // 0x87408d9d
    return result;
}

// Address range: 0x8a4090ef - 0x8a4090f0
int32_t function_8a4090ef(void) {
    // 0x8a4090ef
    int32_t result; // 0x8a4090ef
    return result;
}

// Address range: 0x8bbb77b7 - 0x8bbb77b8
int32_t function_8bbb77b7(void) {
    // 0x8bbb77b7
    int32_t result; // 0x8bbb77b7
    return result;
}

// Address range: 0x8be56683 - 0x8be56684
int32_t function_8be56683(void) {
    // 0x8be56683
    int32_t result; // 0x8be56683
    return result;
}

// Address range: 0x8be63ae8 - 0x8be63ae9
int32_t function_8be63ae8(void) {
    // 0x8be63ae8
    int32_t result; // 0x8be63ae8
    return result;
}

// Address range: 0x8be650fe - 0x8be650ff
int32_t function_8be650fe(void) {
    // 0x8be650fe
    int32_t result; // 0x8be650fe
    return result;
}

// Address range: 0x8be6778c - 0x8be6778d
int32_t function_8be6778c(void) {
    // 0x8be6778c
    int32_t result; // 0x8be6778c
    return result;
}

// Address range: 0x8bec73b1 - 0x8bec73b2
int32_t function_8bec73b1(void) {
    // 0x8bec73b1
    int32_t result; // 0x8bec73b1
    return result;
}

// Address range: 0x8c141095 - 0x8c141096
int32_t function_8c141095(void) {
    // 0x8c141095
    int32_t result; // 0x8c141095
    return result;
}

// Address range: 0x90000cc2 - 0x90000cc3
int32_t function_90000cc2(int32_t a1) {
    // 0x90000cc2
    int32_t result; // 0x90000cc2
    return result;
}

// Address range: 0x902e905d - 0x902e905e
int32_t function_902e905d(void) {
    // 0x902e905d
    int32_t result; // 0x902e905d
    return result;
}

// Address range: 0x90909090 - 0x90909091
int32_t function_90909090(void) {
    // 0x90909090
    int32_t result; // 0x90909090
    return result;
}

// Address range: 0x928a2502 - 0x928a2503
int32_t function_928a2502(void) {
    // 0x928a2502
    int32_t result; // 0x928a2502
    return result;
}

// Address range: 0x9a4077df - 0x9a4077e0
int32_t function_9a4077df(void) {
    // 0x9a4077df
    int32_t result; // 0x9a4077df
    return result;
}

// Address range: 0xa06c1b31 - 0xa06c1b32
int32_t function_a06c1b31(int32_t a1, int32_t a2) {
    // 0xa06c1b31
    int32_t result; // 0xa06c1b31
    return result;
}

// Address range: 0xa10040c1 - 0xa10040c2
int32_t function_a10040c1(void) {
    // 0xa10040c1
    int32_t result; // 0xa10040c1
    return result;
}

// Address range: 0xa9401513 - 0xa9401514
int32_t function_a9401513(int32_t a1) {
    // 0xa9401513
    int32_t result; // 0xa9401513
    return result;
}

// Address range: 0xab42ba2d - 0xab42ba2e
int32_t function_ab42ba2d(void) {
    // 0xab42ba2d
    int32_t result; // 0xab42ba2d
    return result;
}

// Address range: 0xaecd3a8b - 0xaecd3a8c
int32_t function_aecd3a8b(int32_t a1, int32_t a2) {
    // 0xaecd3a8b
    int32_t result; // 0xaecd3a8b
    return result;
}

// Address range: 0xaee24374 - 0xaee24375
int32_t function_aee24374(void) {
    // 0xaee24374
    int32_t result; // 0xaee24374
    return result;
}

// Address range: 0xb815ff7d - 0xb815ff7e
int32_t function_b815ff7d(void) {
    // 0xb815ff7d
    int32_t result; // 0xb815ff7d
    return result;
}

// Address range: 0xbaf31e19 - 0xbaf31e1a
int32_t function_baf31e19(void) {
    // 0xbaf31e19
    int32_t result; // 0xbaf31e19
    return result;
}

// Address range: 0xc0c65f3e - 0xc0c65f3f
int32_t function_c0c65f3e(void) {
    // 0xc0c65f3e
    int32_t result; // 0xc0c65f3e
    return result;
}

// Address range: 0xc2704218 - 0xc2704219
int32_t function_c2704218(void) {
    // 0xc2704218
    int32_t result; // 0xc2704218
    return result;
}

// Address range: 0xc270421f - 0xc2704220
int32_t function_c270421f(void) {
    // 0xc270421f
    int32_t result; // 0xc270421f
    return result;
}

// Address range: 0xc270e8b8 - 0xc270e8b9
int32_t function_c270e8b8(void) {
    // 0xc270e8b8
    int32_t result; // 0xc270e8b8
    return result;
}

// Address range: 0xc386b2ad - 0xc386b2ae
int32_t function_c386b2ad(void) {
    // 0xc386b2ad
    int32_t result; // 0xc386b2ad
    return result;
}

// Address range: 0xc6fc452c - 0xc6fc452d
int32_t function_c6fc452c(int32_t a1) {
    // 0xc6fc452c
    int32_t result; // 0xc6fc452c
    return result;
}

// Address range: 0xc7410bdf - 0xc7410be0
int32_t function_c7410bdf(void) {
    // 0xc7410bdf
    int32_t result; // 0xc7410bdf
    return result;
}

// Address range: 0xc7ea758d - 0xc7ea758e
int32_t function_c7ea758d(void) {
    // 0xc7ea758d
    int32_t result; // 0xc7ea758d
    return result;
}

// Address range: 0xcb49d1f7 - 0xcb49d1f8
int32_t function_cb49d1f7(void) {
    // 0xcb49d1f7
    int32_t result; // 0xcb49d1f7
    return result;
}

// Address range: 0xd31fcc79 - 0xd31fcc7a
int32_t function_d31fcc79(int32_t a1) {
    // 0xd31fcc79
    int32_t result; // 0xd31fcc79
    return result;
}

// Address range: 0xd6580034 - 0xd6580035
int32_t function_d6580034(void) {
    // 0xd6580034
    int32_t result; // 0xd6580034
    return result;
}

// Address range: 0xd6ff0040 - 0xd6ff0041
int32_t function_d6ff0040(void) {
    // 0xd6ff0040
    int32_t result; // 0xd6ff0040
    return result;
}

// Address range: 0xd73f432e - 0xd73f432f
int32_t function_d73f432e(void) {
    // 0xd73f432e
    int32_t result; // 0xd73f432e
    return result;
}

// Address range: 0xd73f4335 - 0xd73f4336
int32_t function_d73f4335(void) {
    // 0xd73f4335
    int32_t result; // 0xd73f4335
    return result;
}

// Address range: 0xd73f4343 - 0xd73f4344
int32_t function_d73f4343(void) {
    // 0xd73f4343
    int32_t result; // 0xd73f4343
    return result;
}

// Address range: 0xd73f50fd - 0xd73f50fe
int32_t function_d73f50fd(void) {
    // 0xd73f50fd
    int32_t result; // 0xd73f50fd
    return result;
}

// Address range: 0xdc4b94a7 - 0xdc4b94a8
int32_t function_dc4b94a7(void) {
    // 0xdc4b94a7
    int32_t result; // 0xdc4b94a7
    return result;
}

// Address range: 0xe740a916 - 0xe740a917
int32_t function_e740a916(void) {
    // 0xe740a916
    int32_t result; // 0xe740a916
    return result;
}

// Address range: 0xebac8268 - 0xebac8269
int32_t function_ebac8268(void) {
    // 0xebac8268
    int32_t result; // 0xebac8268
    return result;
}

// Address range: 0xec940505 - 0xec940506
int32_t function_ec940505(void) {
    // 0xec940505
    int32_t result; // 0xec940505
    return result;
}

// Address range: 0xecc6d278 - 0xecc6d279
int32_t function_ecc6d278(void) {
    // 0xecc6d278
    int32_t result; // 0xecc6d278
    return result;
}

// Address range: 0xf4335f7d - 0xf4335f7e
int32_t function_f4335f7d(void) {
    // 0xf4335f7d
    int32_t result; // 0xf4335f7d
    return result;
}

// Address range: 0xf8403c25 - 0xf8403c26
int32_t function_f8403c25(void) {
    // 0xf8403c25
    int32_t result; // 0xf8403c25
    return result;
}

// Address range: 0xf868ef72 - 0xf868ef73
int32_t function_f868ef72(void) {
    // 0xf868ef72
    int32_t result; // 0xf868ef72
    return result;
}

// Address range: 0xfb408e31 - 0xfb408e32
int32_t function_fb408e31(void) {
    // 0xfb408e31
    int32_t result; // 0xfb408e31
    return result;
}

// Address range: 0xff46f9df - 0xff46f9e0
int32_t function_ff46f9df(void) {
    // 0xff46f9df
    int32_t result; // 0xff46f9df
    return result;
}

// Address range: 0xff92506d - 0xff92506e
int32_t function_ff92506d(void) {
    // 0xff92506d
    int32_t result; // 0xff92506d
    return result;
}

// Address range: 0xffff84a8 - 0xffff84a9
int32_t function_ffff84a8(void) {
    // 0xffff84a8
    int32_t result; // 0xffff84a8
    return result;
}

// Address range: 0xffffe812 - 0xffffe813
int32_t function_ffffe812(void) {
    // 0xffffe812
    int32_t result; // 0xffffe812
    return result;
}

// Address range: 0xffffe827 - 0xffffe828
int32_t function_ffffe827(void) {
    // 0xffffe827
    int32_t result; // 0xffffe827
    return result;
}

// Address range: 0xffffe83b - 0xffffe83c
int32_t function_ffffe83b(void) {
    // 0xffffe83b
    int32_t result; // 0xffffe83b
    return result;
}

// Address range: 0xffffe9bc - 0xffffe9bd
int32_t function_ffffe9bc(void) {
    // 0xffffe9bc
    int32_t result; // 0xffffe9bc
    return result;
}

// Address range: 0xffffeab3 - 0xffffeab4
int32_t function_ffffeab3(void) {
    // 0xffffeab3
    int32_t result; // 0xffffeab3
    return result;
}

// Address range: 0xffffee76 - 0xffffee77
int32_t function_ffffee76(void) {
    // 0xffffee76
    int32_t result; // 0xffffee76
    return result;
}

// Address range: 0xfffff673 - 0xfffff674
int32_t function_fffff673(void) {
    // 0xfffff673
    int32_t result; // 0xfffff673
    return result;
}

// Address range: 0xfffff690 - 0xfffff691
int32_t function_fffff690(void) {
    // 0xfffff690
    int32_t result; // 0xfffff690
    return result;
}

// Address range: 0xfffff6c2 - 0xfffff6c3
int32_t function_fffff6c2(void) {
    // 0xfffff6c2
    int32_t result; // 0xfffff6c2
    return result;
}

// Address range: 0xfffff74c - 0xfffff74d
int32_t function_fffff74c(void) {
    // 0xfffff74c
    int32_t result; // 0xfffff74c
    return result;
}

// Address range: 0xfffffa2a - 0xfffffa2b
int32_t function_fffffa2a(void) {
    // 0xfffffa2a
    int32_t result; // 0xfffffa2a
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int __getmainargs(int * Argc, char *** Argv, char *** Env, int DoWildCard, _startupinfo * StartInfo);
// int32_t __p___initenv(void);
// void __set_app_type(int at);
// BOOL CloseHandle(_In_ HANDLE hObject);
// VOID DeleteCriticalSection(_Inout_ LPCRITICAL_SECTION lpCriticalSection);
// void exit(int status);
// int fprintf(FILE * restrict stream, const char * restrict format, ...);
// DWORD GetLastError(VOID);
// HGLOBAL GlobalFree(HGLOBAL hMem);
// HLOCAL LocalFree(HLOCAL hMem);
// void * malloc(size_t size);
// int printf(const char * restrict format, ...);
// int setsockopt(_In_ SOCKET s, _In_ int level, _In_ int optname, const char * optval, _In_ int optlen);
// DWORD WaitForSingleObject(_In_ HANDLE hHandle, _In_ DWORD dwMilliseconds);
// int wcsncmp(const wchar_t * s1, const wchar_t * s2, size_t n);
// int WSAGetLastError(void);
// int WSASend(_In_ SOCKET s, LPWSABUF lpBuffers, _In_ DWORD dwBufferCount, _Out_opt_ LPDWORD lpNumberOfBytesSent, _In_ DWORD dwFlags, _Inout_opt_ LPWSAOVERLAPPED lpOverlapped, _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: microsoft linker (6.0)
// Detected functions: 716
