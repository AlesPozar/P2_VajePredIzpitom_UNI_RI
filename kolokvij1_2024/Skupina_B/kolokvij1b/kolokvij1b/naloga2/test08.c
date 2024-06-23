
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 317;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "_0Bk");
    izdelaj(nizi, 1, "vqCqnt7a_352lOWih17XyoID98lkjRvQTJBAFg1l3Uqrr");
    nizi[2] = nizi[1];
    nizi[3] = nizi[1];
    nizi[4] = nizi[1];
    nizi[5] = nizi[0];
    nizi[6] = nizi[0];
    nizi[7] = nizi[6];
    nizi[8] = nizi[7];
    izdelaj(nizi, 9, "ZqSeBy0uypsmgLu2icXuaApOJ791Ry6RWgBlcaMgZslNb");
    izdelaj(nizi, 10, "u_PITgfLHxxVwpcYv0BxgnBpF0c2C7IBFEgMV4Je3e0yWzeMDpn1dlRRxjeb9uB5JrQi7iPQ9PFdyMagljz9V6Q1Ni6M");
    nizi[11] = nizi[4];
    izdelaj(nizi, 12, "O3OXlvdKXcq_F1rBIyOgDqvcyESjtajxH_MgCs9lSEt70HvZ6JeimFpJqgjTw_th98l6WZPgMeY8XoJ9jBsH_U12qbrUBP7AX");
    nizi[13] = nizi[7];
    nizi[14] = nizi[6];
    nizi[15] = nizi[3];
    izdelaj(nizi, 16, "jgcOiIApsSp77pR969YKRVwC4ae9q3ZICL0vk_lwBtNP5AoXojvwZR_J");
    nizi[17] = nizi[5];
    nizi[18] = nizi[13];
    nizi[19] = nizi[11];
    nizi[20] = nizi[4];
    nizi[21] = nizi[1];
    nizi[22] = nizi[14];
    nizi[23] = nizi[8];
    nizi[24] = nizi[21];
    nizi[25] = nizi[10];
    nizi[26] = nizi[0];
    nizi[27] = nizi[5];
    nizi[28] = nizi[11];
    nizi[29] = nizi[24];
    izdelaj(nizi, 30, "s2cnbCtdJHY4");
    nizi[31] = nizi[15];
    nizi[32] = nizi[23];
    izdelaj(nizi, 33, "KZjH4YX");
    izdelaj(nizi, 34, "AMcoQiljwUp3LYH8oyzjv5_s5BGeNjNrY16FuJawd6Dzz8SIuoXkMRVRKPxRWjud0FUhiiSEhaj0PAmD9LmSuUp5aoZpZK0bX");
    nizi[35] = nizi[15];
    izdelaj(nizi, 36, "kt558YwIswMngAi");
    nizi[37] = nizi[36];
    izdelaj(nizi, 38, "sENHjUkMh0lipLWyZq_LV9l1pPWmnUn8VOSJpxRsRkcJMrFiWROUQeh9FEgAnkvFaVT17at7FcbocFtt");
    izdelaj(nizi, 39, "FARYsN6k2g75QOWvNa2exWdQPomYO8CW5_vV3r7w_DMW2iyzk44ErynuSe6HlmeN_ZjCo7VfAU1od8E");
    izdelaj(nizi, 40, "cwkEwotmyh9P0A8CjvRMJJzvlUcvWK9_lbYU4z33cL0Fa3HCSorvgIBYGkRmsaJ1gi_N1yE05L9z");
    nizi[41] = nizi[29];
    izdelaj(nizi, 42, "ejToZp7gMqaq98LOzq7GJmvVNmYYTZm0phO0jP6Vk6bbd1cSeUjIVQSPzBx3O_T4xTbpbaaARvl3Y4amlm5pE04w3SF1");
    nizi[43] = nizi[4];
    izdelaj(nizi, 44, "DNDGnXx");
    nizi[45] = nizi[19];
    nizi[46] = nizi[18];
    nizi[47] = nizi[13];
    nizi[48] = nizi[23];
    izdelaj(nizi, 49, "GwM7uZxQnfqkq");
    nizi[50] = nizi[35];
    izdelaj(nizi, 51, "tHb7iUxOI9QgqufAiSswzLzrDgkUYS7aSUkki");
    nizi[52] = nizi[28];
    nizi[53] = nizi[8];
    nizi[54] = nizi[29];
    izdelaj(nizi, 55, "WbjdY7NwZQTY35y9Y0F4BVHY0xS8CH9Acr9Vv5Hjo9N4C9xzVtQW72YC2Awuxd");
    nizi[56] = nizi[24];
    izdelaj(nizi, 57, "gHX");
    izdelaj(nizi, 58, "JBxyje5tn");
    nizi[59] = nizi[2];
    nizi[60] = nizi[22];
    izdelaj(nizi, 61, "RfXSXFX0ga2sblb7rV8FRCE3RXFB93mRCbhUaEl_UnTIlRry");
    izdelaj(nizi, 62, "6MRwZamU8GtB2tYquNQItQ0I4ax7DYo0bnft3dVd0COF84G");
    nizi[63] = nizi[1];
    nizi[64] = nizi[37];
    nizi[65] = nizi[46];
    nizi[66] = nizi[54];
    izdelaj(nizi, 67, "PHvzuMjxQzrWP5xCqvsrSAQZLrq15ExQHxw7OmmT6MAJ55XSymruENLKazIk_fpRw4fx6yhtWwPqQo3");
    nizi[68] = nizi[41];
    nizi[69] = nizi[26];
    nizi[70] = nizi[43];
    nizi[71] = nizi[26];
    nizi[72] = nizi[39];
    nizi[73] = nizi[55];
    izdelaj(nizi, 74, "J6JOefhO564VQmD1a_u3OmnXF9r4hjWX0xvH3SH1ay4aij4Y0SzlKqzoBnMWDg_pDaKsb1IhFts");
    izdelaj(nizi, 75, "uNVFOJg7QS_tGPiirWMPRi_XvikupfWjWWXqSu2wGXtVP9vDl3lLaUoTG4w1Vf2yiERE27vKVR_CYUVUvrSFv");
    izdelaj(nizi, 76, "G5Nk3Fzv4eRlboy9RGdoG7ySAMsMDiIqaVkfP2BhFUdOpCBx478BlqL9nhfdXKR5mtRtKQ0jBUcUFhYwTio806y");
    nizi[77] = nizi[17];
    nizi[78] = nizi[65];
    nizi[79] = nizi[43];
    nizi[80] = nizi[64];
    nizi[81] = nizi[72];
    nizi[82] = nizi[15];
    nizi[83] = nizi[1];
    nizi[84] = nizi[55];
    izdelaj(nizi, 85, "IltoqFiCN0aGxd5B1ZojLNsTKEDZRRR_K_A8Go");
    nizi[86] = nizi[38];
    nizi[87] = nizi[64];
    nizi[88] = nizi[52];
    izdelaj(nizi, 89, "ogALRjcOW5xrJv3A8yEvcyVdqqm_7myYjP8uqle05j0po6qFKbU9hEEn2R1Dc866xxD");
    nizi[90] = nizi[67];
    izdelaj(nizi, 91, "l9s3rpp1ogexPvjoP8H1L2DDop30pSHON4wofp2Cjj8WHx_KOruuoVvSuORuK_RgUHezBSfnci6otgF3dpk26rB");
    nizi[92] = nizi[19];
    nizi[93] = nizi[28];
    nizi[94] = nizi[34];
    nizi[95] = nizi[67];
    nizi[96] = nizi[39];
    nizi[97] = nizi[38];
    nizi[98] = nizi[11];
    izdelaj(nizi, 99, "VWejwvmXJ8mFV");
    nizi[100] = nizi[93];
    izdelaj(nizi, 101, "nlEZLi9pWhSUTQVPO3xE_N2v4SZFc_4azyyvH0T04iirL2gRUr27xR85ZMx9FTJggKu_Qn2ONM");
    nizi[102] = nizi[8];
    izdelaj(nizi, 103, "06EvO2");
    izdelaj(nizi, 104, "VeGQcPDIPCd2QvwfJaEHoZjBhm87UzBKCV13mYZMFiIEBeJZFQp1mMnmpAmKh5fURuErj1dyQ1hKCtN");
    nizi[105] = nizi[6];
    nizi[106] = nizi[81];
    izdelaj(nizi, 107, "5XiQ2F5Urjqxv50fqmwzZwKLx0ubuoC65KJOE2cLAQtqYEatijGnsjA52JSJtjvggQ8AHtFWIjCxxKFdr");
    nizi[108] = nizi[23];
    izdelaj(nizi, 109, "oB5HbyVxkXTXnFIuiu");
    nizi[110] = nizi[55];
    nizi[111] = nizi[64];
    nizi[112] = nizi[97];
    izdelaj(nizi, 113, "ikBm_boxPR3UZP4WheS6dgmA5E_JJlNuoEhGGusEZMdEkw0H5eK");
    izdelaj(nizi, 114, "vqVkHPDJg55p8oW5XBzCcDhhAyaCYkCIyFw0uaeO6caoUvMFvAgH0RjuerpVA2ZKUuwq6VrZJeK8LX8268ztG37");
    izdelaj(nizi, 115, "4CwoSKOeFIIXfQvyqDPrbB6tOVMhLyVO8Xc");
    izdelaj(nizi, 116, "nUOUGEPSyvQVeqEx5tVHh1dlTFEdqkR91IWlwejPCUrdq8zUwFUD9z");
    nizi[117] = nizi[25];
    nizi[118] = nizi[62];
    nizi[119] = nizi[48];
    nizi[120] = nizi[64];
    izdelaj(nizi, 121, "bYfNTEQNmiLyqiYIo7wMmTMns9faZBRshr4IzJ7eH6QrVNBDFGLqKamxDbMkj19bvWuaBUUwu4UhaoMqy");
    nizi[122] = nizi[95];
    nizi[123] = nizi[33];
    izdelaj(nizi, 124, "a64T2VKT7Eowg");
    izdelaj(nizi, 125, "9a7CwHo1vd9zmqmwiBukMgdZGhL0vGX5YEWJRWxKtKSAkhIXYfKuLP86BgEq69I28SamlYkxGYMe");
    nizi[126] = nizi[27];
    nizi[127] = nizi[101];
    izdelaj(nizi, 128, "cfFugAE6ZjLgkAqitzRkmoX_EbKHgW_IDu1CUXeRiQp6EhZ2f8j09J1TvXrV2TBaWhcJv");
    nizi[129] = nizi[118];
    nizi[130] = nizi[55];
    nizi[131] = nizi[56];
    izdelaj(nizi, 132, "E7L9T3Z6fH4JDhdK8yRYbF0zOQQ1MtAN7_X0GQAtfxiXiuzvi9a1cfYyEMb1OeXYWT2WP7");
    nizi[133] = nizi[38];
    nizi[134] = nizi[14];
    nizi[135] = nizi[122];
    nizi[136] = nizi[124];
    nizi[137] = nizi[116];
    nizi[138] = nizi[88];
    izdelaj(nizi, 139, "yVj7SjFaKo_QNq4QV5Et7yrgOzqE_WvOHyfvK4nk4pFcjBs9wnq");
    nizi[140] = nizi[44];
    nizi[141] = nizi[54];
    nizi[142] = nizi[104];
    nizi[143] = nizi[22];
    nizi[144] = nizi[86];
    izdelaj(nizi, 145, "02uDro7VOzU");
    izdelaj(nizi, 146, "PFgNP2OwLwTqI8ObmyI17WxEIv8klQb3c7zyr9rZvFDUKSVsjoLn");
    nizi[147] = nizi[86];
    nizi[148] = nizi[8];
    nizi[149] = nizi[96];
    nizi[150] = nizi[9];
    nizi[151] = nizi[1];
    nizi[152] = nizi[116];
    izdelaj(nizi, 153, "s2yfdSBTBPYMZVJqBeu8A1gD2rS4c_uVwBcwJf8UdkGUGz9ozw2DozjgoDZCkM6soy0CljkOUNalUYFMRZ1IMVt8yulf0tXuP");
    nizi[154] = nizi[25];
    izdelaj(nizi, 155, "OOtwc33PzvqXmM");
    nizi[156] = nizi[87];
    izdelaj(nizi, 157, "qPyMMbaqSXyDe4jtXu3nSxYss_tFQdSl2uQouMN_RKAz69jVE4");
    nizi[158] = nizi[156];
    izdelaj(nizi, 159, "ajT6MuH9ghCNOu3EPOYsf5sTvAar0XYGpZ6KVKCygd2illygMuOBl95uVJDgmh5tQU3sSPKlk");
    nizi[160] = nizi[111];
    izdelaj(nizi, 161, "koL4O_Ign4vhGprqZShZyfLkLZI");
    izdelaj(nizi, 162, "fPFqf1knNnkNE1JKffEkEKNzJ_Rtuz6dTlFNxDZFuVXzrij7n3kpzDg3fXPMLFAOvjxeWD36KikWNNvrHln28t");
    nizi[163] = nizi[43];
    nizi[164] = nizi[153];
    izdelaj(nizi, 165, "StoVCSo942");
    izdelaj(nizi, 166, "sJ8U32NRjy3aa9vYpS5qq7qmmsCaqeKYlKNGwDYVnEhsjmK3HRbZBHDEJACf5DbjtDWCUzI");
    izdelaj(nizi, 167, "vzKq3jpWHtfTS4g_oEeFbQORg7YGxHiafWzieMnGsMTMAz4yMFQ5DV9fzthDyYclblL5lbcD");
    nizi[168] = nizi[18];
    nizi[169] = nizi[139];
    nizi[170] = nizi[71];
    izdelaj(nizi, 171, "uE5xXfS_sfxIrryEJabk8Xgtkf1q8fCLlXWpXDiChJ84NN8BzZ0SNCn7rN7pUOWlbyjtetMh6rvafqZ0XbO7Xu0htLNDq138T");
    izdelaj(nizi, 172, "08ZzSICijn75tI");
    nizi[173] = nizi[19];
    nizi[174] = nizi[78];
    nizi[175] = nizi[139];
    izdelaj(nizi, 176, "2e5u9aBtyJNSyfI6Q");
    nizi[177] = nizi[127];
    nizi[178] = nizi[147];
    nizi[179] = nizi[46];
    nizi[180] = nizi[63];
    nizi[181] = nizi[41];
    nizi[182] = nizi[48];
    izdelaj(nizi, 183, "eSEqFC8Chv6Gyi1GZaKsSYejP2vuExvMiWGIVHzzolMFkFNVQkq5p1jOehJvxK6hsmuEmlASUnGntEo_xjpB3Np");
    izdelaj(nizi, 184, "0_XzXG4eh8XkTwP03ssdya3AbzxK0z2kbLQelWwjT_vRRUgJdQbrtdOgZtj_7qMPfYEJ0h");
    nizi[185] = nizi[144];
    izdelaj(nizi, 186, "asPr9yPPP2sPGK7p8jlkNEqPpIhwmcGOFyCnLp5sJxoGmc60ay8oV3_aGdaJLbUnzaeaqsX6WKCrRcVsdjV7i6M8aYb7l");
    nizi[187] = nizi[69];
    nizi[188] = nizi[6];
    izdelaj(nizi, 189, "3UNEGqiZrz1ZKyHrlSXdiz4glQXK0aRvJAmJYnmA__DYKnFpSSU1Lz6ytJTo_8rh0krKWZrqT7vI_3b");
    izdelaj(nizi, 190, "hPXYmhhWHpG9gC4f5nP6R1Jg0BsXn1uzYdpUOSlJ_Aaig64YLVh_pLvhD7pppGKyx23vk");
    izdelaj(nizi, 191, "oabNFgHc6GQ2JWMKlrOUiqahjB5SYzG05ue0u1tSgfciquSrHwIalG");
    izdelaj(nizi, 192, "mUi4_VydZ8jIt6J2iMR1vp94jAcBVv5T5ScNUAtG9O8Y8cIiPOVSFkJOCfnMQztiPTS3S");
    nizi[193] = nizi[121];
    nizi[194] = nizi[96];
    nizi[195] = nizi[147];
    izdelaj(nizi, 196, "A6myBhGqraYqTQNQDLA_Sfw80EZJLCVYQ004EXwtbNiOPrJHUvjSE_ZmYFpJuMZpXl4kk3O8lNBNv6tYXGiAyddFidjs");
    nizi[197] = nizi[23];
    nizi[198] = nizi[9];
    izdelaj(nizi, 199, "WmJcBSaAX4STBqShiJLB4_s");
    izdelaj(nizi, 200, "V30JegbVGesUBIR5F8NGZAInfMOt1AbSAgPo1ZJuzfLTvLZcQLo75GU8eOCSsT3T");
    nizi[201] = nizi[109];
    nizi[202] = nizi[60];
    nizi[203] = nizi[154];
    nizi[204] = nizi[51];
    izdelaj(nizi, 205, "rmPUq_HVAFLH");
    izdelaj(nizi, 206, "gpGNna3k_xFhgDD3mJYD_AtCBAaM1GgZdDOOKekZP1TwpeHR3PomD5iVqVsnwnZJS8PKB6L6x");
    nizi[207] = nizi[120];
    izdelaj(nizi, 208, "XywlKu7Yle1FaTTzVS2CEQR5Wz1GdyCWBZb7DRZ79PmPn6GMmRQFeu4jBWuPHAr31q_QkNsKrxeZKMegZ1lfoULL8K7a12");
    nizi[209] = nizi[51];
    nizi[210] = nizi[206];
    izdelaj(nizi, 211, "iwFNutYl8ds4NfZqMLEBEZFFdbOxWaOYnnlT9UqXK7G8KkwdMja");
    nizi[212] = nizi[48];
    nizi[213] = nizi[177];
    izdelaj(nizi, 214, "TpoDi8");
    izdelaj(nizi, 215, "IU7zCFMWjAh4nbCrfyne6jVM_");
    izdelaj(nizi, 216, "dLcnGJPcAfidWH03gNTh9sDOwacPPFN9JQaxAmRE3yt8tgEOFKeWdfm7qkm2cv0FH3mZ7_H4Nm3QmTUpHKBJug6lhkX7cILxd");
    izdelaj(nizi, 217, "p_070TXHMgp1bpBeM92ylUD818t3TaJQ8AgAU7fGEM9EYOfF8y3mjx5ubvaoKa4EQshIFbTOnYFTE0RVX9oc");
    nizi[218] = nizi[138];
    izdelaj(nizi, 219, "puZC1pg7JY2jnnwtVQiBAoSCyKhm1Lx5U5EHy0H1v_sBYAxhXgzaDko4gruhqSz7xh6QmB7xoMIFTh1cUFu2CMKHANu6jF");
    izdelaj(nizi, 220, "qe");
    nizi[221] = nizi[36];
    izdelaj(nizi, 222, "y_lm055XSpKf5zxQiLYVK2GH");
    izdelaj(nizi, 223, "V6PUVmNC94YqOoco_YPHZumylnSx");
    nizi[224] = nizi[203];
    nizi[225] = nizi[78];
    nizi[226] = nizi[222];
    nizi[227] = nizi[202];
    izdelaj(nizi, 228, "D3ubFaD5tkhm9aPrrjn1R0");
    izdelaj(nizi, 229, "7W3ISgaxrDBDd4Ev2OfKYFCx40wDgnpnXB2Iz5ISS_x7NZ0LLJZA8k748HV6B5BVHRf5Vs1iA2CwrxZKCRT1kWRiVOwiAQ");
    nizi[230] = nizi[4];
    izdelaj(nizi, 231, "YKl_2Qf5P9gbKfX_y0XD3t5fW_RGlzreCxkca9x3PHCENIIKZcgtcPFTFNr6dn");
    izdelaj(nizi, 232, "lKATOYPKEcvwxEA9ABMnpG0fyKxkhVfJbReCdCAipG2awW7d0Z73PWp0yaKeA");
    nizi[233] = nizi[184];
    nizi[234] = nizi[217];
    nizi[235] = nizi[111];
    nizi[236] = nizi[176];
    nizi[237] = nizi[29];
    izdelaj(nizi, 238, "XajbVnoDGGtfphRXP2p");
    izdelaj(nizi, 239, "S4");
    nizi[240] = nizi[200];
    izdelaj(nizi, 241, "xv3LtmoqlMiWpLMxlkeRcTlGjMPExj0rXpCWlSLj4FJ2T7RznWXY");
    nizi[242] = nizi[162];
    nizi[243] = nizi[138];
    izdelaj(nizi, 244, "yJYYy");
    izdelaj(nizi, 245, "5v0q3IQ32uD7Y2ZmL3lKQy6gE");
    izdelaj(nizi, 246, "T3V4RTuxWZHYiCXlLhkFmuqWg1mf4WP7grlfmhFzhjWhMQASQtWs6E3Fn_zPLsXwx8WcsXu7C7WC2q459");
    izdelaj(nizi, 247, "N80iP_q1o0EAOP_ciRpaN9wdHBDuz7NDG8S6JFAqoJLerYthzHk4etqex4dZJOa3WMalQtKpKsYG");
    nizi[248] = nizi[8];
    izdelaj(nizi, 249, "on5VOYqtGOVAwUdKo43jO89imwL0g");
    izdelaj(nizi, 250, "qlYqeR6Ua_YPdcpfNvaItSiUXpsKEkgoFCjmlD7XGzWaz");
    izdelaj(nizi, 251, "daUUoVcFDsqv5ddZOWauFEXDwL22PtL3cQSFyA2qAMe86");
    izdelaj(nizi, 252, "VRJnxHkQbNfkwjZDRDIw1Tyzag0CPI76_AoUZUneojrShmY1cOSTCRrOOdLcAas");
    nizi[253] = nizi[19];
    izdelaj(nizi, 254, "rSqPbTKUVC1oAhki7SerM5se1aYADwyJ2DVPXEDcgixX_yyL3dsSdW_ddKHp");
    nizi[255] = nizi[169];
    izdelaj(nizi, 256, "1CHMbNAXu3");
    nizi[257] = nizi[181];
    nizi[258] = nizi[37];
    izdelaj(nizi, 259, "vZzvlEJ6cQseBW5kBeTMdifT4W9greHTqeOMlks6Cz872DCVDZqiXgGbwzrOpCa6urKqB6yv");
    izdelaj(nizi, 260, "sdfZWGgxUiX7SbgUnrNZyB");
    nizi[261] = nizi[157];
    izdelaj(nizi, 262, "2z5ogkAayJ8n6etzXmND");
    nizi[263] = nizi[104];
    nizi[264] = nizi[25];
    izdelaj(nizi, 265, "qUjstEk__M_FUT7jqfL");
    nizi[266] = nizi[125];
    izdelaj(nizi, 267, "Ya5kr6Rhs93u3M8funnJNrmpKoPl9pwksB3VQJoRbinhiNb7yGJxSs7");
    izdelaj(nizi, 268, "6D7nYPkagDpWkMSTB10a1XE0jahuri9MKNy7qpQWObLNLTrswedcVqcjBggGP6opT777MhurKV");
    nizi[269] = nizi[13];
    nizi[270] = nizi[88];
    nizi[271] = nizi[181];
    nizi[272] = nizi[217];
    izdelaj(nizi, 273, "SUCJ9AEfV6BoskKtEuZb9ebke17Mnb19sIbrxj9gVCFJLcnXKJ3zHoEyzMedFJPj9tR_");
    nizi[274] = nizi[92];
    izdelaj(nizi, 275, "stkRLu4U1nGJXQ95fD2ytg4CSORNsF0FqxWFQ1QnTmsN2jtfLn3pE12PgOMJpSpf3oYD1wrmtYnLCzIilz6nRp_pxUKoXM");
    izdelaj(nizi, 276, "F3gyuZjIUkRnn");
    nizi[277] = nizi[38];
    nizi[278] = nizi[239];
    nizi[279] = nizi[112];
    nizi[280] = nizi[152];
    nizi[281] = nizi[209];
    izdelaj(nizi, 282, "1gGKxTsGVdT_6ayBDzGWcR4GEo8Ke43kWjAk45IhB8ABszQKeYsn9mI84Lq8mbG2gfaATY6hra8NwDdZ");
    nizi[283] = nizi[52];
    izdelaj(nizi, 284, "lge0x1ToDedXHnoJVadVG6d3ADPkmzGFClrwHkoNvNRZKpeAnTCkfm1F11");
    nizi[285] = nizi[31];
    nizi[286] = nizi[118];
    izdelaj(nizi, 287, "8A2nmG93lTusUsu7K7ST71IgqszDKySuWhAkJ");
    nizi[288] = nizi[14];
    izdelaj(nizi, 289, "D5VdQ8eRMYJcy2bQP8uI6Q");
    izdelaj(nizi, 290, "u_Kt0fB1M");
    nizi[291] = nizi[209];
    nizi[292] = nizi[165];
    izdelaj(nizi, 293, "FwLhhr5EKK5kYEF2KOMtwqKsK6ituSQnhGPXevaKH_3sBEjehAuk_5U");
    nizi[294] = nizi[52];
    izdelaj(nizi, 295, "Is9ycPzh__l7i_RwvVrnlErQ");
    izdelaj(nizi, 296, "XpRcNIY1_GWydiG8CGK13fiEpUDfU3QALhaceS7tqRZA_82xbsXKODPutcHvXVPFDDFAo44AVRpCH");
    izdelaj(nizi, 297, "NlnTDA30rJfTwEnJO5LHBH");
    nizi[298] = nizi[114];
    nizi[299] = nizi[272];
    nizi[300] = nizi[247];
    nizi[301] = nizi[167];
    izdelaj(nizi, 302, "9kP1FfEemG2yM6Sa56mV7HyeqCCQmFEv_UA8s0i");
    nizi[303] = nizi[279];
    izdelaj(nizi, 304, "9vJE0zxI922Rx_Jm_gQi8QLZvmRrld3cVo1v1U3ohLsP6aytilI3q1GEJkvWXMNuvc1q3DocJe3");
    nizi[305] = nizi[240];
    izdelaj(nizi, 306, "FSz71JMCfpPaSk6inamrBIDzZXHEAJMOdX2QKwCqhVKbJoQOJzQ04iUIzpDMvTBHfZNu2jaMsAziHD9lIH77WyOWnEF7mKtz5bJ");
    izdelaj(nizi, 307, "rSjwMAb1QtDJ1JWu409MPTLN0RwQukHDlqFrWipHlcA1QhccjsVqvI42kI1uCOU3D");
    izdelaj(nizi, 308, "NWpnCJCk88N7h1hyoqpBJtWZm0VN_9O_zvyO39hCsyQa0_x3LWLW6ZHCGVWH");
    nizi[309] = nizi[47];
    nizi[310] = nizi[10];
    izdelaj(nizi, 311, "JUugEEHwi7bTYiVOtDDRQCI_gijmh1tkGs072uuwcWzveUEOdkUBbitEKjy0q4tXshQfsXTWxEzxRM2Wrm3IhVKBIXuWy");
    nizi[312] = nizi[224];
    izdelaj(nizi, 313, "p6QU3Gz7sGZSq1F_3WcsOHhDf5L8x7XRIshYaN3Ym6KG61xVvb64Z4bh4IRDjXbB7MK5g7a4scPkGs4O2csl5aEq9cQT");
    nizi[314] = nizi[224];
    nizi[315] = nizi[167];
    izdelaj(nizi, 316, "JiOwki");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    razbohoti(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
        free(nizi[i]);
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
