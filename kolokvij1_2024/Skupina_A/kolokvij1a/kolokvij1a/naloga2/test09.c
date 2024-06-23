
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
    int n = 494;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 1, "wGOHcf");
    izdelaj(nizi, 2, "wGOHcf");
    izdelaj(nizi, 3, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 4, "wGOHcf");
    izdelaj(nizi, 5, "wGOHcf");
    izdelaj(nizi, 6, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 7, "bfsl41gITWHUb7MyoIbEyW7r1NQPSJ6fyN6r7u1jq2OErFZM65Q5mssus8_JdzzG7K_U0OpFGFxMk2z8xFzZKGylAkM");
    izdelaj(nizi, 8, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 9, "SsIXYN7rDjlA3wYM9p2KBNUpSd");
    izdelaj(nizi, 10, "u20DOkV18oPPqvRMwzE1Mr8ZretMqKEmWSf4");
    izdelaj(nizi, 11, "iiu8eB1WCI0Xiy0kaYSTVP20XQTOdpsFRWGBJVEFYI4b8VHH_Q6sBkx6cDDl9P4TMlKtgo_h_6UP6B0a");
    izdelaj(nizi, 12, "D5wzph3EfB2B3Cu_nUftFPpIKih3f50iP");
    izdelaj(nizi, 13, "AgUQS0ImRmWqbwVXt8J5Lw7z3o0IKEtarDuXtwMpRrYnLqac67e9ySn9b_RZp5JqTrHxEX");
    izdelaj(nizi, 14, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 15, "gnZ_ZXjW");
    izdelaj(nizi, 16, "xXaJ6fEzEwPS0KIPNLPpHx64vPgkkn2nQ1ib595Kcy3");
    izdelaj(nizi, 17, "T");
    izdelaj(nizi, 18, "T");
    izdelaj(nizi, 19, "5h_gagp5qJwuqZezUfHviSM3EwH_cYx8gr61q7sXvkkbZ3JR5y5ZjxJ5X1GmUJklKHIpKsJYnkgN1b8hahJ4I37EPrMdu_t1SmN7");
    izdelaj(nizi, 20, "RVvtpmOe4YBS6kcbIR8AWcLdt2LsCiHp_g_UWl73dN0ji53Qi5QeaAcrX0NcSHL9eWP7K3zF");
    izdelaj(nizi, 21, "UN78jsrEc1OtK0OjV");
    izdelaj(nizi, 22, "iiu8eB1WCI0Xiy0kaYSTVP20XQTOdpsFRWGBJVEFYI4b8VHH_Q6sBkx6cDDl9P4TMlKtgo_h_6UP6B0a");
    izdelaj(nizi, 23, "IJ0HD4KgA6SRDgj0qxzeYgMhwLi6jvK3iRyYJdc6lWznr8PcpK90Jj0SL2a97MyhsDUEYXq06U");
    izdelaj(nizi, 24, "yXqj8D3ETpIozW2");
    izdelaj(nizi, 25, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 26, "u20DOkV18oPPqvRMwzE1Mr8ZretMqKEmWSf4");
    izdelaj(nizi, 27, "kw3nNIyq7lA4C71a3LF");
    izdelaj(nizi, 28, "FypCeUpyNL0VmkkCEuK7cbAWRS7JewF9XVkTQfG");
    izdelaj(nizi, 29, "J8n389o0kkXGsKElqoxY3HwIW1emiMOWgghJ1ogdBet2ZlW");
    izdelaj(nizi, 30, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 31, "GiP6jRc1JB9x6k8wQcXF72knXBlxMofKFRFe3rzxmCx9cTX5YXgEdTpf3jAuemTVAYDbxVCBY2jFDboXf");
    izdelaj(nizi, 32, "OkL3xo276YBpKQZTLIgGgg1frtqYRS9NBqMubK7UX6IStmL");
    izdelaj(nizi, 33, "hsLCfQHzyydSC_ylVBoVkBLyJgkTG2iDkGfOnk0H7qoH34EKhLAYRRYG36yxHEfyFzXelNT7");
    izdelaj(nizi, 34, "fSuQQ3SjajS1dY3Du6ncQep9nq4fUkS4qxjSV3oTAZxNtBdj8VoOcx");
    izdelaj(nizi, 35, "76oP1NbtiT_XHHmV4krm");
    izdelaj(nizi, 36, "aXZzy7r9DwAN54O8FOF6m5C4CPx1sXDaC");
    izdelaj(nizi, 37, "fSuQQ3SjajS1dY3Du6ncQep9nq4fUkS4qxjSV3oTAZxNtBdj8VoOcx");
    izdelaj(nizi, 38, "T");
    izdelaj(nizi, 39, "iB6lsJitQmd8_j73kvHXuza4kan_qKK7Hc4bRYjE3BBWwSWfShkv6ihj4Uvb7k4bQRk4g_8FxkphrwJ");
    izdelaj(nizi, 40, "kBd1kjrK51O5pnNBp5vQqgTToSn2Xnp5IQKT7LW5_t5LRQieezAE9oXFrB2mYJNBbOdyzHPd");
    izdelaj(nizi, 41, "5h_gagp5qJwuqZezUfHviSM3EwH_cYx8gr61q7sXvkkbZ3JR5y5ZjxJ5X1GmUJklKHIpKsJYnkgN1b8hahJ4I37EPrMdu_t1SmN7");
    izdelaj(nizi, 42, "x1MoQ99fXWG5S3puxYZqqpDjC4OdTytsJr6_qfuUK94lJE76QfEvN1JAEaTFj1Vcrtg43JfiMB45dYUKW9OBP");
    izdelaj(nizi, 43, "GvS1mbpDTALuyxyOB5uabzx9rrmzA9ek8ln4Z0WH_MMq");
    izdelaj(nizi, 44, "DzT9K9MCvwMFuftFJmB92LCUBV9_uNvhfL0QmicPjMgTeLoT2jWVMpd5GdrLtcsssDUaP5Utc");
    izdelaj(nizi, 45, "vm9m9UkBiaDtyYqZ95GJdAD1uEJ2zamQdLFKhkld8NtEEf2tSeYOQ70");
    izdelaj(nizi, 46, "GzBJ_eC4p1NzggcoOZ_MK2rTYnYLkNJj_UEA1eV_VFDN3zyMTqLJYDCPcFVwsqMTvZ2HSkhR_Eo");
    izdelaj(nizi, 47, "bfsl41gITWHUb7MyoIbEyW7r1NQPSJ6fyN6r7u1jq2OErFZM65Q5mssus8_JdzzG7K_U0OpFGFxMk2z8xFzZKGylAkM");
    izdelaj(nizi, 48, "as5FjxPbmtJd_re40MxXOPZE7RyXzDcUDUzj");
    izdelaj(nizi, 49, "5XEExqcorNnszTdfOEhKRqg42huGTGZnhKJxs0IFtZRTfZCVjAaPISitqmtIRL");
    izdelaj(nizi, 50, "k");
    izdelaj(nizi, 51, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 52, "6ByLPzBR7LZhfwoPK_B3Ji2aHFYDOA9NcNGIErejGhhGz6YRJ44cQiu4YZNX55gWeGVC1e6uQRzIoKnVnGI");
    izdelaj(nizi, 53, "j4BebGc1CBgnSg9gDIikyHwAYGtMSUbDTw36J7V7M_AG");
    izdelaj(nizi, 54, "GiP6jRc1JB9x6k8wQcXF72knXBlxMofKFRFe3rzxmCx9cTX5YXgEdTpf3jAuemTVAYDbxVCBY2jFDboXf");
    izdelaj(nizi, 55, "XE0DsOvx4O3K1SSJ9TQ87E41vrdoryZ97fdkm3WFmJnM5CwLf3NG8H37D2KNB0dTV92");
    izdelaj(nizi, 56, "vm9m9UkBiaDtyYqZ95GJdAD1uEJ2zamQdLFKhkld8NtEEf2tSeYOQ70");
    izdelaj(nizi, 57, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 58, "bRqyy3G0rkUVc6C0PMyRtRoReA5f_1wYO3XWnv8uSWCAOmE8oUaATlFjLqrWeblChs0g");
    izdelaj(nizi, 59, "eJTSwci4awmCbQjOCiD_rWk2GqQbtwb");
    izdelaj(nizi, 60, "mvDot8Vcb7BAtZIKfliJ09Cn4gWHLNwiW2p5z5LRneFSJWh8vNIvZ02zXxwfTEWFYvZqXFA7hOxV");
    izdelaj(nizi, 61, "bRqyy3G0rkUVc6C0PMyRtRoReA5f_1wYO3XWnv8uSWCAOmE8oUaATlFjLqrWeblChs0g");
    izdelaj(nizi, 62, "gL1fZjTAgPXUzUpy0pR14L24adc0I_DqzfRzpGOSVRnm1XKHDB_yxKr4aQ_");
    izdelaj(nizi, 63, "4tuLeZEVq1hsaH9RxHxlxM6Ck6YmWL565CTAV4eoCHoruzXJa5");
    izdelaj(nizi, 64, "wGOHcf");
    izdelaj(nizi, 65, "Jki3LXwlH7E0imKSbrvXzp13Nwevb0WI1l0beNxoXlsEt38HrnWSLedjO5weEnrghHstPVMl");
    izdelaj(nizi, 66, "D5wzph3EfB2B3Cu_nUftFPpIKih3f50iP");
    izdelaj(nizi, 67, "E_6wZgbGEhVg7zLref3MdV91nvv8Q7DslXR8Gt3");
    izdelaj(nizi, 68, "5UTwnILwSkklZKjD");
    izdelaj(nizi, 69, "x88YoFpn");
    izdelaj(nizi, 70, "1GbtnR9g");
    izdelaj(nizi, 71, "DzT9K9MCvwMFuftFJmB92LCUBV9_uNvhfL0QmicPjMgTeLoT2jWVMpd5GdrLtcsssDUaP5Utc");
    izdelaj(nizi, 72, "iRDUGhAZt0kUEgEQ7dK8oZw4EOd7");
    izdelaj(nizi, 73, "2L3YS");
    izdelaj(nizi, 74, "v_p5EIUMmCry0Lv6f7tpqMSOWLPaEzpcM5N4gAT");
    izdelaj(nizi, 75, "2z1rd9LaBDcVbtpfI3XEo90T9DVReYbg9_hWlphDl81K8QaStnM2glaSSXLRsLmsAq082qlIDQv");
    izdelaj(nizi, 76, "IJ0HD4KgA6SRDgj0qxzeYgMhwLi6jvK3iRyYJdc6lWznr8PcpK90Jj0SL2a97MyhsDUEYXq06U");
    izdelaj(nizi, 77, "2L3YS");
    izdelaj(nizi, 78, "5XEExqcorNnszTdfOEhKRqg42huGTGZnhKJxs0IFtZRTfZCVjAaPISitqmtIRL");
    izdelaj(nizi, 79, "tkiSIEjND5kyv5auV452PexBJgXT0wPzDL_OkLlKbWhqAOGjd9waHd8ReRNo6fsDMYO4RFuK0cseKGYv0Yjg");
    izdelaj(nizi, 80, "p0JTIxMhRDHyVSPGwnIBpsyQuhBkvVS5JRutgr8dBD5qe9g_NUxhC0knutbp3Jh7ABtmMn7JOCSMqAiJp9DAsDzR4eBrFhKGHkiT");
    izdelaj(nizi, 81, "9VJIE3BT6TRkzMRK3n2AVIEYjRxWnAi_awgL5Mevdis3SxCiHVm8ngmJXkxPet_XwCte47ukQNva7DZwru");
    izdelaj(nizi, 82, "Zz9OFQuXazjGgQn4SVf3eXghqyQYjHTJogRcP4KO76Er7Jyi9R04Z9V_S7myHEoDX1AqDl_3uX0V8TICHCCpw9l4BoR");
    izdelaj(nizi, 83, "XE0DsOvx4O3K1SSJ9TQ87E41vrdoryZ97fdkm3WFmJnM5CwLf3NG8H37D2KNB0dTV92");
    izdelaj(nizi, 84, "yXqj8D3ETpIozW2");
    izdelaj(nizi, 85, "Jki3LXwlH7E0imKSbrvXzp13Nwevb0WI1l0beNxoXlsEt38HrnWSLedjO5weEnrghHstPVMl");
    izdelaj(nizi, 86, "sAmygFEIvYwErtNXSVhgeqYz6LaGMvF");
    izdelaj(nizi, 87, "jXquxdyv_Qda77ry2MtLHJHMoBpm35kjMzTLPYIhekjHcu8xjUusD8x5Nhda6Kca0qN5ki1vgvcNPfMYzlBhI0w2EiyLXW4gl");
    izdelaj(nizi, 88, "aS8vxGSJKOk7Xq4zuSc7pOD8c5eQFaI81gyxPImz6tTRsFP8Veh7J6upwVGSvtq_hlPj9");
    izdelaj(nizi, 89, "VwB");
    izdelaj(nizi, 90, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 91, "_lXAcZ8zfPBOXJqePj3FDIWrlnCCmXSsdIzFe4r_P44UfLW6Mt_MjiKUSL6");
    izdelaj(nizi, 92, "xh9MFpR4UIaudwCZWlGEecg6Lrjd2a5myrOWTIA_LN5DvHnXaFALwvo8DU8K5Him3MKX");
    izdelaj(nizi, 93, "yv_KwKISRhxAB0t3ve8lgDTcOCD8k8gGEBilBWsbssciwE");
    izdelaj(nizi, 94, "iRDUGhAZt0kUEgEQ7dK8oZw4EOd7");
    izdelaj(nizi, 95, "bRqyy3G0rkUVc6C0PMyRtRoReA5f_1wYO3XWnv8uSWCAOmE8oUaATlFjLqrWeblChs0g");
    izdelaj(nizi, 96, "5h_gagp5qJwuqZezUfHviSM3EwH_cYx8gr61q7sXvkkbZ3JR5y5ZjxJ5X1GmUJklKHIpKsJYnkgN1b8hahJ4I37EPrMdu_t1SmN7");
    izdelaj(nizi, 97, "9jpfriBQls");
    izdelaj(nizi, 98, "4tuLeZEVq1hsaH9RxHxlxM6Ck6YmWL565CTAV4eoCHoruzXJa5");
    izdelaj(nizi, 99, "2z1rd9LaBDcVbtpfI3XEo90T9DVReYbg9_hWlphDl81K8QaStnM2glaSSXLRsLmsAq082qlIDQv");
    izdelaj(nizi, 100, "1ou58PP0MjMZScpWlQ3XihlHx3yJioZZXExOdKNfu6xZYSaPwLgaqxhikFjnTbIb2TgTqGoj_");
    izdelaj(nizi, 101, "fgOszvQz3xMlZRj7h6zNEO5mFAbyz_KS6dzwv5ce74l0nk");
    izdelaj(nizi, 102, "zW");
    izdelaj(nizi, 103, "JwwVMWqxptCpbTcdphR");
    izdelaj(nizi, 104, "D5wzph3EfB2B3Cu_nUftFPpIKih3f50iP");
    izdelaj(nizi, 105, "a9sk4Z8pGdD9pap89jPdP0QXVFbOWARBjEd8jgDFmo1RuvDR9JJqhZXNx1N7Z_8OZB7BAShGYo9ZEj9aWOgGRiTSVk0mFSL3J");
    izdelaj(nizi, 106, "4vaw");
    izdelaj(nizi, 107, "rLcmfo30j4JaXpDtA0NYmzQuPJZ");
    izdelaj(nizi, 108, "xe_mWJlz46UjllqfSLYb1zgFhTDxLgriWzO_uqWLTltX67Ph426vmHUiWmZGZ57L");
    izdelaj(nizi, 109, "5h_gagp5qJwuqZezUfHviSM3EwH_cYx8gr61q7sXvkkbZ3JR5y5ZjxJ5X1GmUJklKHIpKsJYnkgN1b8hahJ4I37EPrMdu_t1SmN7");
    izdelaj(nizi, 110, "udnyAnjNVKfR4QyXv1fU2X1mwJI6d");
    izdelaj(nizi, 111, "D5t22H");
    izdelaj(nizi, 112, "6caxolwZIhX0MxhAGWMf5Kp8R7W80CST26quE");
    izdelaj(nizi, 113, "S8qxllFsN1h3FO9Fm1Cqtl_Onb1mR1L5yQP8mIU77e2Vxql");
    izdelaj(nizi, 114, "OHKshhypQrUbrB");
    izdelaj(nizi, 115, "fSuQQ3SjajS1dY3Du6ncQep9nq4fUkS4qxjSV3oTAZxNtBdj8VoOcx");
    izdelaj(nizi, 116, "JwwVMWqxptCpbTcdphR");
    izdelaj(nizi, 117, "v_p5EIUMmCry0Lv6f7tpqMSOWLPaEzpcM5N4gAT");
    izdelaj(nizi, 118, "0F3jRkVmNM4x26PJp1KoLDdXBJgVXYS4BKo0BA2jR9880uBFl4wEdo45fc1zD6IcBjOVqI");
    izdelaj(nizi, 119, "n4KigrJRBPPu106V7GxJzK0iFHlzFkywcPntqAE8hQ8dxrLdUGQp");
    izdelaj(nizi, 120, "7uJoyiZ9niDMj6Swg3NbJjkrsAZ6Ta8mkk_dZ");
    izdelaj(nizi, 121, "XE0DsOvx4O3K1SSJ9TQ87E41vrdoryZ97fdkm3WFmJnM5CwLf3NG8H37D2KNB0dTV92");
    izdelaj(nizi, 122, "PKkChvyHo5yUAoxyScrcXayD3PlBHaHyZFNhLUkpHfQFN1kwRVZ28IxUdU5Sh1SOKPUglA_Sto3Zt6Q");
    izdelaj(nizi, 123, "gGLsB");
    izdelaj(nizi, 124, "YCiT_9cqKpXJjPQvSqSwq_wLFtjZkUcH_7YuL6fcLEJH4aME3XSBooaPIL6XCa2S8qTORh7NmSxhLf_1Fl76XotRxbWO");
    izdelaj(nizi, 125, "1sYAHUX");
    izdelaj(nizi, 126, "4MyEcLeZWgXlwQzQHVh8HITmz6QDnC2bhBZf4EiyVMH_dmWH_6gh7vyEpa");
    izdelaj(nizi, 127, "JaMqWaVOSUrvUxb8XbAiAkCGvQdXL_a5Boe5HgAtBhIJLeRcugy6ZSJQPhVN");
    izdelaj(nizi, 128, "sn1STBhROMmaoHbvpWyShfzK67INqG16e50WiAoBrbJa10UV9WCLVYz_cDWrnrDdrxg3IuA4eSWg1dzYTEPM");
    izdelaj(nizi, 129, "DaStf_ucWsJHV5JabjgAoKda2P4iLsxZWogwC24GnaoOUGD3w8_skU9khiS");
    izdelaj(nizi, 130, "hGiv5yjgZmuK9y_AbzmpPKBSCDQXMvtDtOIV7syG1ZLx5dDazbaQPvD");
    izdelaj(nizi, 131, "KENgNbSNx9rkdWWeSoQr0QI43foupSGzRJ");
    izdelaj(nizi, 132, "cZvyN9wMPfzjiK3wsJxP_hysc_b8qoa2euFyQQxKI8vyksuoJnotwbwb54DNKP_tQ7Z0xIvA8S05hjuI7p2FMsF5nOEXem");
    izdelaj(nizi, 133, "gnZ_ZXjW");
    izdelaj(nizi, 134, "fSuQQ3SjajS1dY3Du6ncQep9nq4fUkS4qxjSV3oTAZxNtBdj8VoOcx");
    izdelaj(nizi, 135, "sn1STBhROMmaoHbvpWyShfzK67INqG16e50WiAoBrbJa10UV9WCLVYz_cDWrnrDdrxg3IuA4eSWg1dzYTEPM");
    izdelaj(nizi, 136, "IdfkG_KjtSCEgbQUHqjWD8dDflqAvFiXP7cyAgotzaaJ_g_EKzRTAeYGw5bi6yAGKt65S03fCKO8481AvMUUs_bggL7j8J");
    izdelaj(nizi, 137, "fSuQQ3SjajS1dY3Du6ncQep9nq4fUkS4qxjSV3oTAZxNtBdj8VoOcx");
    izdelaj(nizi, 138, "oAIGoetiisWFULJi76QguUM_zBqbovr_gUhnMGF7RdP7aY");
    izdelaj(nizi, 139, "ZhQ79mGT2yWaybRg");
    izdelaj(nizi, 140, "SiVGTnWS_omvXUvKgvHoUYJad9HiT6YtngGdsvajqUf9vfk150v");
    izdelaj(nizi, 141, "a9sk4Z8pGdD9pap89jPdP0QXVFbOWARBjEd8jgDFmo1RuvDR9JJqhZXNx1N7Z_8OZB7BAShGYo9ZEj9aWOgGRiTSVk0mFSL3J");
    izdelaj(nizi, 142, "x88YoFpn");
    izdelaj(nizi, 143, "vHCWjF_2VgDYtb891LkNLiEsOVuA2EfqZ2IE80myojyBRuLDsV1XGiOGgqzK7bvpZrBx");
    izdelaj(nizi, 144, "v9sUUkPP4FQx_HOROXT9idTJddVLiMcznPhL4XUPAIQ41KVZoZnU7arExarz5ad94PGLwPlv5yC101KCCPz");
    izdelaj(nizi, 145, "5XEExqcorNnszTdfOEhKRqg42huGTGZnhKJxs0IFtZRTfZCVjAaPISitqmtIRL");
    izdelaj(nizi, 146, "yXqj8D3ETpIozW2");
    izdelaj(nizi, 147, "4vaw");
    izdelaj(nizi, 148, "iRDUGhAZt0kUEgEQ7dK8oZw4EOd7");
    izdelaj(nizi, 149, "sAmygFEIvYwErtNXSVhgeqYz6LaGMvF");
    izdelaj(nizi, 150, "sAmygFEIvYwErtNXSVhgeqYz6LaGMvF");
    izdelaj(nizi, 151, "5XEExqcorNnszTdfOEhKRqg42huGTGZnhKJxs0IFtZRTfZCVjAaPISitqmtIRL");
    izdelaj(nizi, 152, "AbQeayoMtqG9w9jYqst_5pLSLNvNgoTLszE3TGN");
    izdelaj(nizi, 153, "ZfPS4XEmzu9EO2TZ5570clUghaFWVOShE7B9y5Bmihky30dUcofq4aWhhpER3L23jdIzcoAL7hevhKgT6eN4fondrJgSz");
    izdelaj(nizi, 154, "LJ_vuqHFlsTNU4koKAjZzg2sxwoPf8PxISmowjO7IRBJnM6euL86Ci8XQ3tjvSEz_7rWDQqpWmG8NGE3Tk8Mklk10lQ98yFa");
    izdelaj(nizi, 155, "k");
    izdelaj(nizi, 156, "uZ8VJ5hy61l8BVhRqWjxepdAyVdUJt9LuFnrR2l1eM_EyK6iTwQSRIZJa_6pP8ZjzVTRcpFyV2BL1iDS8Kc3pMfYE");
    izdelaj(nizi, 157, "W2imjN4LYbUHn47hZVghT2SBWfsdd0NCbVjSTynQJrEkm_dI");
    izdelaj(nizi, 158, "2r4HxhANVbTQtGULun7eFTS3DGFCnQSR0");
    izdelaj(nizi, 159, "7uJoyiZ9niDMj6Swg3NbJjkrsAZ6Ta8mkk_dZ");
    izdelaj(nizi, 160, "x88YoFpn");
    izdelaj(nizi, 161, "T");
    izdelaj(nizi, 162, "_lXAcZ8zfPBOXJqePj3FDIWrlnCCmXSsdIzFe4r_P44UfLW6Mt_MjiKUSL6");
    izdelaj(nizi, 163, "o_p5qusuYn1CQy1a4ZDeL7EU87E0q4aNZlymoY_70zamdMdw4VlmSzEwJ_HL7YZ6ejXiT_");
    izdelaj(nizi, 164, "kUpz3DI7B_K5wb1aqwHQtR0nRsxQODzPX");
    izdelaj(nizi, 165, "v_p5EIUMmCry0Lv6f7tpqMSOWLPaEzpcM5N4gAT");
    izdelaj(nizi, 166, "wGOHcf");
    izdelaj(nizi, 167, "zE_hORPsapiIzH3aI07G7JtayKcTq7RiGgw");
    izdelaj(nizi, 168, "v_p5EIUMmCry0Lv6f7tpqMSOWLPaEzpcM5N4gAT");
    izdelaj(nizi, 169, "yXqj8D3ETpIozW2");
    izdelaj(nizi, 170, "3HBAEgsRwXN4Olrz8gh6cCA7Gpraq41CmV91CDyoyn");
    izdelaj(nizi, 171, "hEKq0HlP2PdXLRysLGMGLlmzW75MtJzX78YjNdaiKaaWdlTSNIsxnorI3JX4m0rI81");
    izdelaj(nizi, 172, "Zz9OFQuXazjGgQn4SVf3eXghqyQYjHTJogRcP4KO76Er7Jyi9R04Z9V_S7myHEoDX1AqDl_3uX0V8TICHCCpw9l4BoR");
    izdelaj(nizi, 173, "v_p5EIUMmCry0Lv6f7tpqMSOWLPaEzpcM5N4gAT");
    izdelaj(nizi, 174, "mmYoKC1vR1HbkWjXmSc4gDpYPOon1H712igbgLg9J7YdE35rz6cYurXCbIS3cgxAFCoAHLWdppa0i0PYPMFrUIDG042K3frRDmr");
    izdelaj(nizi, 175, "PmMEBgVj99MazfhCTUKuAOj7EvHpft1uRLiL4t9jossWJEx2QX4bJ1zJJQPATvHxSwB");
    izdelaj(nizi, 176, "OHKshhypQrUbrB");
    izdelaj(nizi, 177, "A4vuj12iRS2t29mhwZKHIE7cwxUYCRDGLjaUngyObCg4z8y8SGbnMf0RfIokFDfIpdgpcVpDwKBZItep8bkZQ");
    izdelaj(nizi, 178, "1sYAHUX");
    izdelaj(nizi, 179, "8hJDijixl_79_7TtciChPWwwCrhHC7n7pblWZJInbv0mwQ9odSQZcECAwD1ilf7");
    izdelaj(nizi, 180, "a9sk4Z8pGdD9pap89jPdP0QXVFbOWARBjEd8jgDFmo1RuvDR9JJqhZXNx1N7Z_8OZB7BAShGYo9ZEj9aWOgGRiTSVk0mFSL3J");
    izdelaj(nizi, 181, "i26LGMKe8TYO7ACXSYbL2dykNbNAgyYLhopZmCfcvjzsj64cspLR4BAue3iIDWWXeey5o6LJcKefpwm_oAWM");
    izdelaj(nizi, 182, "PHa1PAqfkT96ZO9ggXFnhHJu3WY1gQyDjSAkfSJe_e1hQRewRr94UhQ773ZQOMURe9AjSi9r");
    izdelaj(nizi, 183, "k");
    izdelaj(nizi, 184, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 185, "UN78jsrEc1OtK0OjV");
    izdelaj(nizi, 186, "iiu8eB1WCI0Xiy0kaYSTVP20XQTOdpsFRWGBJVEFYI4b8VHH_Q6sBkx6cDDl9P4TMlKtgo_h_6UP6B0a");
    izdelaj(nizi, 187, "YqAD1t8CgvkzmTtvEkszousVCOMYqN59C8mPvyaHbxRyVJ3ZBemXAAtlpc7o8Kpzc9");
    izdelaj(nizi, 188, "2L3YS");
    izdelaj(nizi, 189, "J3ZCTlAjfH");
    izdelaj(nizi, 190, "4Hj6sMyKQ35z_eck2I_iR1hnTUH8w8oG0xU4i0pttkTmF");
    izdelaj(nizi, 191, "Wyk2K_Nb6B6");
    izdelaj(nizi, 192, "6ByLPzBR7LZhfwoPK_B3Ji2aHFYDOA9NcNGIErejGhhGz6YRJ44cQiu4YZNX55gWeGVC1e6uQRzIoKnVnGI");
    izdelaj(nizi, 193, "gyfA7SX4h724eekLaJNzOYJpuwXRIETNEo87mIYmvg9WPV_EtrjGD0IV");
    izdelaj(nizi, 194, "o4y_jpsG5Ly556m");
    izdelaj(nizi, 195, "1GbtnR9g");
    izdelaj(nizi, 196, "RsSrXgGkp5TUa");
    izdelaj(nizi, 197, "UOZnDSUyj");
    izdelaj(nizi, 198, "UZDNPKYOKBEBbuvLHkbVo_Km7C50KwIzmbbKafrjGk00K5u4Y");
    izdelaj(nizi, 199, "1Aa1Hd8YUK9d");
    izdelaj(nizi, 200, "arr5F97ymgBmWkfZMFypcrfl0k1Y4VCRcbXliDPBiJrcM7oYv4cS5VJFKCVkBUCdP");
    izdelaj(nizi, 201, "mmiCmOM0thqdaLf5Cr6ki9G6ajMRiV8yZjYCYP0a7ajyn6");
    izdelaj(nizi, 202, "PmMEBgVj99MazfhCTUKuAOj7EvHpft1uRLiL4t9jossWJEx2QX4bJ1zJJQPATvHxSwB");
    izdelaj(nizi, 203, "1GbtnR9g");
    izdelaj(nizi, 204, "a9sk4Z8pGdD9pap89jPdP0QXVFbOWARBjEd8jgDFmo1RuvDR9JJqhZXNx1N7Z_8OZB7BAShGYo9ZEj9aWOgGRiTSVk0mFSL3J");
    izdelaj(nizi, 205, "E_6wZgbGEhVg7zLref3MdV91nvv8Q7DslXR8Gt3");
    izdelaj(nizi, 206, "A_mvrFka_tviQFqQCAhT3");
    izdelaj(nizi, 207, "0lBNWxrF2asXMhDSN2WFScC9XbIu_Mz1SKuZ4qMzlF3Cy23qzsuZDzYZuW9dGxFuBQvh7iLoVSPVFDu");
    izdelaj(nizi, 208, "OqJdaQaV2hqOQ7pEMyzDnr68VdZhZGkFWDj4Id7LMU6Ez2_sTzYQgttHST1KkrNOSgVyBHLUn04OD6QsSu50MVG_vKk6N");
    izdelaj(nizi, 209, "DfRCPzsQDyQmxK9uAn77csT9jrRg5RhOjglfP_eK2lUTaAPbXx3I5b5tslkJCbkn1YJBBzkFQCAEy");
    izdelaj(nizi, 210, "2L3YS");
    izdelaj(nizi, 211, "eJfoedS0MJFD7jK2qZgE2vE1YLTQoUjmlMcVQWiwNReXWB2YM0");
    izdelaj(nizi, 212, "o_p5qusuYn1CQy1a4ZDeL7EU87E0q4aNZlymoY_70zamdMdw4VlmSzEwJ_HL7YZ6ejXiT_");
    izdelaj(nizi, 213, "v_p5EIUMmCry0Lv6f7tpqMSOWLPaEzpcM5N4gAT");
    izdelaj(nizi, 214, "WrPp75VdF8EPaSw3vMMSXxAt");
    izdelaj(nizi, 215, "o_p5qusuYn1CQy1a4ZDeL7EU87E0q4aNZlymoY_70zamdMdw4VlmSzEwJ_HL7YZ6ejXiT_");
    izdelaj(nizi, 216, "J3ZCTlAjfH");
    izdelaj(nizi, 217, "fSuQQ3SjajS1dY3Du6ncQep9nq4fUkS4qxjSV3oTAZxNtBdj8VoOcx");
    izdelaj(nizi, 218, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 219, "X6LMTVL3e3Qmmpd0v3VkyBLdgqYy1GSxXvAOPXMJ3w1SKwtS4z4CceJ");
    izdelaj(nizi, 220, "PmMEBgVj99MazfhCTUKuAOj7EvHpft1uRLiL4t9jossWJEx2QX4bJ1zJJQPATvHxSwB");
    izdelaj(nizi, 221, "YvJG6MKUjLUqG69CfSe3TmZufTDFNvbnRTBfLIUBLEwWt4a3");
    izdelaj(nizi, 222, "DzT9K9MCvwMFuftFJmB92LCUBV9_uNvhfL0QmicPjMgTeLoT2jWVMpd5GdrLtcsssDUaP5Utc");
    izdelaj(nizi, 223, "gWiLMY2pFWwqvYoCjxxRBJqpzi37dJdiHPs1lFWMKKns");
    izdelaj(nizi, 224, "7uJoyiZ9niDMj6Swg3NbJjkrsAZ6Ta8mkk_dZ");
    izdelaj(nizi, 225, "vqurRvAUcciYAcNzeMItbBb4wf3p8My6VsAgtuCRWeYLamuD3wz2jLynLWcZZn4jDSi6Lpqg6MF6lq_yrzrchL9Rx");
    izdelaj(nizi, 226, "3GoT5Jrrmi0pyIn");
    izdelaj(nizi, 227, "G6QCS5OFhRbN4hi19TW");
    izdelaj(nizi, 228, "yXqj8D3ETpIozW2");
    izdelaj(nizi, 229, "dmp_DAk2mUQ2pgxGn9gkuAL3U1FedjDpkiu5qpPVHxGWi7eUeh92o8QZDtVikaKl7gW");
    izdelaj(nizi, 230, "aS8vxGSJKOk7Xq4zuSc7pOD8c5eQFaI81gyxPImz6tTRsFP8Veh7J6upwVGSvtq_hlPj9");
    izdelaj(nizi, 231, "Sv");
    izdelaj(nizi, 232, "DzT9K9MCvwMFuftFJmB92LCUBV9_uNvhfL0QmicPjMgTeLoT2jWVMpd5GdrLtcsssDUaP5Utc");
    izdelaj(nizi, 233, "onvUlvlLCqL4J1J4_utuuka22Sy1YgWEX1M5ypihPZppsVEzOgvzthnkN07CXm");
    izdelaj(nizi, 234, "beHGI8kkjc03_o");
    izdelaj(nizi, 235, "UOZnDSUyj");
    izdelaj(nizi, 236, "fhDBNw_DLxAUFKddSmaaDdrSG6j_6enSDXX4BUiGoOP4OQZQz62KlsQciNe6LDG8a2vLkyxCi2Nztw");
    izdelaj(nizi, 237, "7uJoyiZ9niDMj6Swg3NbJjkrsAZ6Ta8mkk_dZ");
    izdelaj(nizi, 238, "3GoT5Jrrmi0pyIn");
    izdelaj(nizi, 239, "ERFkWAxmeym9zsjAObt0HOObKUzQdBfT9C_P5A0d6eqJgIclWkjonYKHBNv8Hh6NsxH2NBLrFzJRCBEl1RQjfBqoecnYpr");
    izdelaj(nizi, 240, "1ou58PP0MjMZScpWlQ3XihlHx3yJioZZXExOdKNfu6xZYSaPwLgaqxhikFjnTbIb2TgTqGoj_");
    izdelaj(nizi, 241, "wEDj5en48BTbaYA569x2HmW53_cW8o3");
    izdelaj(nizi, 242, "oAIGoetiisWFULJi76QguUM_zBqbovr_gUhnMGF7RdP7aY");
    izdelaj(nizi, 243, "wGOHcf");
    izdelaj(nizi, 244, "nU1vR6F");
    izdelaj(nizi, 245, "vt");
    izdelaj(nizi, 246, "khNWKvdmSdMJrc_UXZ0IvL");
    izdelaj(nizi, 247, "ZsXm");
    izdelaj(nizi, 248, "QF0_VrI9CyapwBQF_");
    izdelaj(nizi, 249, "QD80KRx4XGFCm");
    izdelaj(nizi, 250, "UPpYdcdngXK2q2IX9V29uE6LAeYIL_l8d5R2f0i0hBk9cKdJoi0BQUOHcTFacWGQGhdl50h");
    izdelaj(nizi, 251, "iRDUGhAZt0kUEgEQ7dK8oZw4EOd7");
    izdelaj(nizi, 252, "gWiLMY2pFWwqvYoCjxxRBJqpzi37dJdiHPs1lFWMKKns");
    izdelaj(nizi, 253, "6B9N1qM__c6CEDfRlgSN5FEVfOq0F7cPKHVUtx_EnPwnXToBFVlFjHPXKLsnsjrc7gLftSFIipW9LY5kecj_UHd8rv");
    izdelaj(nizi, 254, "XE0DsOvx4O3K1SSJ9TQ87E41vrdoryZ97fdkm3WFmJnM5CwLf3NG8H37D2KNB0dTV92");
    izdelaj(nizi, 255, "x88YoFpn");
    izdelaj(nizi, 256, "tkiSIEjND5kyv5auV452PexBJgXT0wPzDL_OkLlKbWhqAOGjd9waHd8ReRNo6fsDMYO4RFuK0cseKGYv0Yjg");
    izdelaj(nizi, 257, "AaZI2eE");
    izdelaj(nizi, 258, "bRqyy3G0rkUVc6C0PMyRtRoReA5f_1wYO3XWnv8uSWCAOmE8oUaATlFjLqrWeblChs0g");
    izdelaj(nizi, 259, "GQG4MN");
    izdelaj(nizi, 260, "yXqj8D3ETpIozW2");
    izdelaj(nizi, 261, "OHKshhypQrUbrB");
    izdelaj(nizi, 262, "x88YoFpn");
    izdelaj(nizi, 263, "V9cE8ySH7r1AQymR_UyXtQn3lpDe__V8e0W62ADO4L20aZAWVQxX4zJT5mdQaDZRsFGP");
    izdelaj(nizi, 264, "fhDBNw_DLxAUFKddSmaaDdrSG6j_6enSDXX4BUiGoOP4OQZQz62KlsQciNe6LDG8a2vLkyxCi2Nztw");
    izdelaj(nizi, 265, "QW");
    izdelaj(nizi, 266, "ViautXhkq0Obx8Y302jYi5VL0Wh9zQBrwpMeg4w20V6P6YH0fbJgfHG52QQ1Hl3kwmbZwwGzceuFpoc3KhpmQymTxK");
    izdelaj(nizi, 267, "Jki3LXwlH7E0imKSbrvXzp13Nwevb0WI1l0beNxoXlsEt38HrnWSLedjO5weEnrghHstPVMl");
    izdelaj(nizi, 268, "QW");
    izdelaj(nizi, 269, "fEmA3viCe15kmxfWPR5ceOi45TmL7oEMrSTDAcYlx8A");
    izdelaj(nizi, 270, "m9p7bEk_AP15brwsvVC44HZrPkVHZh1cfhEj_KAE8gzttmHW9kgFz8sByllqvWhHheZGBWhMyVppK6J6");
    izdelaj(nizi, 271, "PZlYWB78mBMJHuHwnkntUendmnF81hfPr");
    izdelaj(nizi, 272, "xBMjYaHha94jnuf4Qyt1bugPmbY7r6ywimnkjI58b7eTF5U_dZXs5AESfdS0cUpHGiPmy9JRw0FcI27o");
    izdelaj(nizi, 273, "Q6SGVzB1gpi5B");
    izdelaj(nizi, 274, "k");
    izdelaj(nizi, 275, "Dv412xG0QlsZNbyDheTL4xkmlghOr4wl6Vd67hxMM1SDMn11L6B2LU9okJsWVYMZ2C4KkahMJ");
    izdelaj(nizi, 276, "oEFZ8pjs_oz6WcFblaVGjtr3jW");
    izdelaj(nizi, 277, "39QxcLxvEIaAu4dD0NbhnrkiYXWkyAAT1SKz1lBeun4d48cZVXnJNuW0swCM6Tun4Q");
    izdelaj(nizi, 278, "GhPJ4Q330T6Iw0pBQ6A8QJQi9dQGMTJXVtcQ6XdqeEhey6GbHwyw9QBERvHGJtJNfdRuUN_YlE2bH01HhEHBPQ9hfrEunlQSxm");
    izdelaj(nizi, 279, "pO1WsHIyt0M4AV9E2agWWn");
    izdelaj(nizi, 280, "GhPJ4Q330T6Iw0pBQ6A8QJQi9dQGMTJXVtcQ6XdqeEhey6GbHwyw9QBERvHGJtJNfdRuUN_YlE2bH01HhEHBPQ9hfrEunlQSxm");
    izdelaj(nizi, 281, "OHKshhypQrUbrB");
    izdelaj(nizi, 282, "B4HhVsC3gOIgK4Lwk57PPxOXh3V6tf");
    izdelaj(nizi, 283, "PQGiB9g1IzfnqzfrM4m7RE2vJGhdWKsBNBvGeh3pSpuS1wkwiVpYbIbQbco9mL4WSapRCqvYMW");
    izdelaj(nizi, 284, "fgOszvQz3xMlZRj7h6zNEO5mFAbyz_KS6dzwv5ce74l0nk");
    izdelaj(nizi, 285, "iLXtSAaXvBR1nAbGsL");
    izdelaj(nizi, 286, "9VJIE3BT6TRkzMRK3n2AVIEYjRxWnAi_awgL5Mevdis3SxCiHVm8ngmJXkxPet_XwCte47ukQNva7DZwru");
    izdelaj(nizi, 287, "rLcmfo30j4JaXpDtA0NYmzQuPJZ");
    izdelaj(nizi, 288, "zxJ9oXEDE14dTyx7NYxPyfm3dk1HZ8");
    izdelaj(nizi, 289, "sS0gn3Q327dE0ZPxaVlaPnw2xdxLwUXkudIK4G1wrneeZxOVzIY2DVBfUaeyMu1ZY6");
    izdelaj(nizi, 290, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 291, "zJrZo8QmVTNabUWoPX0pFo3wZ6EI77DXHQb3W1lQb4rbR2VE6YZKSzSFZGLYCzbKfczXHKyTz7");
    izdelaj(nizi, 292, "GVE53HKKhSNwMJiozdu3mOSufcP1MGR8QZE_rENMDrgnJC10I6pfIH0DBZbz095GVSxUDRvSVzvug6w4FYtKcp0Kd1ACLyrI");
    izdelaj(nizi, 293, "kRUmpojEKybhb0ltBZtS6EDoTOCtLVPnqvDl5ySPwU54djWGg4pMg3p3wH7tHpm");
    izdelaj(nizi, 294, "BvZPn_FGQJbIni7jRm7Hv3NpCBi6Dwr4JAd4pvdpab8Hnev6xNCvaQHnp8en4OGfJuYmtlp9kJU67ifUJLgeDwUug");
    izdelaj(nizi, 295, "9mdaV2abyvL_GYHY6PX6CIDZ8hgSr5anKyaK8d5J4TJG6Gwl0Yn9iWvNVObe1G4V24PfPTFkmwLpuERHle");
    izdelaj(nizi, 296, "u20DOkV18oPPqvRMwzE1Mr8ZretMqKEmWSf4");
    izdelaj(nizi, 297, "QkGZQny59SCJz8X4EezOcGxUYFNyoqnvsg3qQ235Cnn0mOeQLD9uy4myUOUmkbJBoVr8");
    izdelaj(nizi, 298, "fSuQQ3SjajS1dY3Du6ncQep9nq4fUkS4qxjSV3oTAZxNtBdj8VoOcx");
    izdelaj(nizi, 299, "1pCAI8AH_LCAAorHGWWcMfzLmcfsi7n_ASEgGnP");
    izdelaj(nizi, 300, "W2uVqtyFx0xzzz86dBHiM3vIWPs1gqDXyehJicXcE86uBqbOtJKo7");
    izdelaj(nizi, 301, "Dv412xG0QlsZNbyDheTL4xkmlghOr4wl6Vd67hxMM1SDMn11L6B2LU9okJsWVYMZ2C4KkahMJ");
    izdelaj(nizi, 302, "esF3qEIzrZL1VGFNtPYp5wCDBukecBAVma");
    izdelaj(nizi, 303, "O3D8BOFVATq5slotIwE4Cy");
    izdelaj(nizi, 304, "VwB");
    izdelaj(nizi, 305, "IEyMnzFqQxhZStBHLHqSuLKpZM3klOQvXSrF_J8Iev3NGaLep81NuZA");
    izdelaj(nizi, 306, "z7Ww");
    izdelaj(nizi, 307, "aXZzy7r9DwAN54O8FOF6m5C4CPx1sXDaC");
    izdelaj(nizi, 308, "B9bG6ZzRRl4upZmC2DuO");
    izdelaj(nizi, 309, "NFdpuAH8P6Ly2CdyB3UFY1");
    izdelaj(nizi, 310, "P9SdFlXI5tXDaR8xBwpH2yt7wFTRak1qKo0SXEKSGKcviIbBZIdKyLPWep5NIaDnZSXzabj8FQEJgRTHFPepWWJ4uReZqz0Acu");
    izdelaj(nizi, 311, "bRqyy3G0rkUVc6C0PMyRtRoReA5f_1wYO3XWnv8uSWCAOmE8oUaATlFjLqrWeblChs0g");
    izdelaj(nizi, 312, "z16wrhVMXR5x8iBEtSHpLaY79eGrXMYD7iLrMGD452BWIix_muRCVW");
    izdelaj(nizi, 313, "CnhnuhpNB8n7Wns4a_87WIOQwwc76pSNP5nsfJa7mDsTlqpf8dI56MYfbGSmxMRHZJIFUNDZOq7NB5PDYfatgd2PEhnPG_h");
    izdelaj(nizi, 314, "NFdpuAH8P6Ly2CdyB3UFY1");
    izdelaj(nizi, 315, "P188kBMYxgsl1WNUryBdylBvMFFOKPJn1uQlhd937MLbyYD1STiP8InrbpzHnvAL3IodPugpACeq6Yl");
    izdelaj(nizi, 316, "elDv7YdUmM4ZqU_9Co8k6veJWAZ4fnO3V7rQYTMVCpzNVAV_Ut9ntqcywO9Ji");
    izdelaj(nizi, 317, "yFZSlh1HIHwCW4hR2pjaaTtbIkKaoFgx_1E4U3VChmC5mLOov5Pl_1SMRdjVaj_5HE2Pce62cvDeRp6VPZBL6LJ");
    izdelaj(nizi, 318, "_OK7yPq9_WAClC9d2_bR12HR0IKA1QkB");
    izdelaj(nizi, 319, "IJ0HD4KgA6SRDgj0qxzeYgMhwLi6jvK3iRyYJdc6lWznr8PcpK90Jj0SL2a97MyhsDUEYXq06U");
    izdelaj(nizi, 320, "AVm_UKb90fsxOG4664ejyD89feChvyHemTqi7ypaqqIBiaTavLWgPnAv10rxzQfVgofYeEH2mdDwPXIeO5CXWz6MkOob5sn");
    izdelaj(nizi, 321, "oIldcVXjuPD4PgegQv7TVJGLuHyGf");
    izdelaj(nizi, 322, "mP03SshEPdDMQ5uG3Hrt7XNNE4lrX07C_zWYi3FN8Srh9HCPzxc6j6mzkLgcat2VH57CMuo_MJdcTa8_AMWxg");
    izdelaj(nizi, 323, "d3F1Kj27b8PvIMffnwCZXTkdLJSikzxjK5pphyqdhY");
    izdelaj(nizi, 324, "yWlGqDKjVnFaY3SQapYIvu2OkqWPwe5OvOWa7ipirgfswOYeBwxeOZZyJ");
    izdelaj(nizi, 325, "gnZ_ZXjW");
    izdelaj(nizi, 326, "etUt86789Uzgxcl2noXyOVYre0kFtl2wu3jO86f1NCMt70HoT00RvadSPe4rg9");
    izdelaj(nizi, 327, "G0dA114YroQbC_U17DTtxxwa0TRTumUr233FCs3SXFM6CVAuA2fx8RmJwpW2M8E8S7Zv");
    izdelaj(nizi, 328, "50FenKHVbkk");
    izdelaj(nizi, 329, "Dv412xG0QlsZNbyDheTL4xkmlghOr4wl6Vd67hxMM1SDMn11L6B2LU9okJsWVYMZ2C4KkahMJ");
    izdelaj(nizi, 330, "aeUknTxNAOsXxLdgQhWUEpMpNS3V09AELy3Ejd8TOUE2CTuj8QKWNi8p");
    izdelaj(nizi, 331, "a9sk4Z8pGdD9pap89jPdP0QXVFbOWARBjEd8jgDFmo1RuvDR9JJqhZXNx1N7Z_8OZB7BAShGYo9ZEj9aWOgGRiTSVk0mFSL3J");
    izdelaj(nizi, 332, "x1MoQ99fXWG5S3puxYZqqpDjC4OdTytsJr6_qfuUK94lJE76QfEvN1JAEaTFj1Vcrtg43JfiMB45dYUKW9OBP");
    izdelaj(nizi, 333, "Dj2Wa3SI2MO4Xs3HdcN_fqVGxahfNbBYwFrq_qOx6nqcE");
    izdelaj(nizi, 334, "72FxoluK6LUexr3pf3V");
    izdelaj(nizi, 335, "zdTuVFVxiAuRtXH6m_Xj4G1v");
    izdelaj(nizi, 336, "1pCAI8AH_LCAAorHGWWcMfzLmcfsi7n_ASEgGnP");
    izdelaj(nizi, 337, "vSMr");
    izdelaj(nizi, 338, "iB6lsJitQmd8_j73kvHXuza4kan_qKK7Hc4bRYjE3BBWwSWfShkv6ihj4Uvb7k4bQRk4g_8FxkphrwJ");
    izdelaj(nizi, 339, "GhPJ4Q330T6Iw0pBQ6A8QJQi9dQGMTJXVtcQ6XdqeEhey6GbHwyw9QBERvHGJtJNfdRuUN_YlE2bH01HhEHBPQ9hfrEunlQSxm");
    izdelaj(nizi, 340, "7z1OWlcaVAwe4TDfmfqxK2Cz8xumUf2Uf7j3Bxn6g5uw8ALJjgcWzrqdtBipHINQPFBgSK2bf0u8x_BYiE2Bkp2wIh5W2");
    izdelaj(nizi, 341, "oEBBTPjCdpRKZk2KhKgDusmkUKgD5BaHd_4IVCnoX0");
    izdelaj(nizi, 342, "eLfbkNOlp0WM0MTynTkaZyhdekacSaTjLhnH41KU8c96ymOnHaxI3yItuq6I6DG_");
    izdelaj(nizi, 343, "0nbYkfU6cg5kVOvPXVN6UqDsia");
    izdelaj(nizi, 344, "a9sk4Z8pGdD9pap89jPdP0QXVFbOWARBjEd8jgDFmo1RuvDR9JJqhZXNx1N7Z_8OZB7BAShGYo9ZEj9aWOgGRiTSVk0mFSL3J");
    izdelaj(nizi, 345, "Wxfe_rYzfyntM1DT2hbOZuq7OQKVRlkZ3OVpJzGyH8nbMcSAvVrtpnM5bHQwLjfOLw");
    izdelaj(nizi, 346, "rEZp2qjPyvkq5E");
    izdelaj(nizi, 347, "wVDSZGhtvyrugxzYNtpRiRu1kUIjGzxZ9");
    izdelaj(nizi, 348, "x88YoFpn");
    izdelaj(nizi, 349, "UOZnDSUyj");
    izdelaj(nizi, 350, "vpfSLdM6");
    izdelaj(nizi, 351, "OHKshhypQrUbrB");
    izdelaj(nizi, 352, "PJwEvVJ8v");
    izdelaj(nizi, 353, "cBFjc9vsuoo9gSQAnjGbKADPVKLS5vJ1X9jUZSBNhPP26cucCHxpOwUY2e");
    izdelaj(nizi, 354, "L2GCoQ0iqOlYo3Gi9ukCKB3wXdEFP3WRlYpU0FPr4kc");
    izdelaj(nizi, 355, "AzotB1NWw3lq3XKpp4E8PUvpya1VUGYE1xIhHo");
    izdelaj(nizi, 356, "bXwpJ2vg2DZGok6ZWhL3dkSbwAzYdkabUXVoUWt67prDEe9PG8BtBCsbVJyHDuji9hFMWSAr");
    izdelaj(nizi, 357, "Mzv9ub5Hcl9_dLFl7HMwaPl3S2Aj8B2");
    izdelaj(nizi, 358, "vejQsDdBN0aBynMUzMJaX9VD28QjH42dy5NKq9bSAkHi");
    izdelaj(nizi, 359, "E1fr_h3QkCfnuNRqgzF7");
    izdelaj(nizi, 360, "qiZdyRKyKega0KgYSRypBniwOspleX6p8OQtizLudF3Y2tHRbePq2O99IBpFkgiwzcsNih");
    izdelaj(nizi, 361, "_u0QX2nh50lLrz_uwWqUr6eKgqVqXFSPlCllWr");
    izdelaj(nizi, 362, "ouc8LJe2q3rcB_ZHkc3JVaAcvSkUvhAjN6Q4IFDsxjwFdpqChjDJBkPHyOkBVQLIvb8mG_UqAH79WmnpH2f7DcaVG6");
    izdelaj(nizi, 363, "PmMEBgVj99MazfhCTUKuAOj7EvHpft1uRLiL4t9jossWJEx2QX4bJ1zJJQPATvHxSwB");
    izdelaj(nizi, 364, "1pCAI8AH_LCAAorHGWWcMfzLmcfsi7n_ASEgGnP");
    izdelaj(nizi, 365, "Yk7ProOyOFLPJXAR69CXo6B31sOj_N9b_hXBYpQYPIlNKdLz6BuEhpM2685JoPMI");
    izdelaj(nizi, 366, "dmp_DAk2mUQ2pgxGn9gkuAL3U1FedjDpkiu5qpPVHxGWi7eUeh92o8QZDtVikaKl7gW");
    izdelaj(nizi, 367, "fgOszvQz3xMlZRj7h6zNEO5mFAbyz_KS6dzwv5ce74l0nk");
    izdelaj(nizi, 368, "wGOHcf");
    izdelaj(nizi, 369, "QF0_VrI9CyapwBQF_");
    izdelaj(nizi, 370, "lrezJM6mvT9SYTWzPXH3Ucg00teanWoR8zBiCr5N5Srfid_ahMtPXfYQmMZ3v5updZwPE");
    izdelaj(nizi, 371, "J3r1bsLa4");
    izdelaj(nizi, 372, "D_1qj7IFQ2wRNfJ5vsab7yNIkr1SzcyRUgir1eKQ97M70dy");
    izdelaj(nizi, 373, "1uH599sHDdKFdPQrDSx3gqLjJARFgdnsLmN0rQ86e5Ns7OAxDIRLrb");
    izdelaj(nizi, 374, "WrPp75VdF8EPaSw3vMMSXxAt");
    izdelaj(nizi, 375, "1iOzao2OdcBPpQQoiTsOLKEdd3OkQdJJaboQ_dEkc8KcV9S2rxyfGk4UvpYYj1");
    izdelaj(nizi, 376, "c0HbFPTsgE_C00PjeT3MA8xBup6wGS_y2AfD8Pq5QNR2uKYNPajH4W0qtwaQCbmcKW6");
    izdelaj(nizi, 377, "wnTdr5qJN9XEQhDeSQEX6kxbfQVWRN96CGS3v1iOPsWC6wzKT0OD0FqpqfNSnrxtmGfh2cuSO15l2bWwY");
    izdelaj(nizi, 378, "5c04g6ubpMxH2UcSODY97Sf2OjU");
    izdelaj(nizi, 379, "eILu7");
    izdelaj(nizi, 380, "EF9HwfAAmRquVhZuBEJYS_KGAW7hFU9g1C2us7XUOlV");
    izdelaj(nizi, 381, "xBMjYaHha94jnuf4Qyt1bugPmbY7r6ywimnkjI58b7eTF5U_dZXs5AESfdS0cUpHGiPmy9JRw0FcI27o");
    izdelaj(nizi, 382, "EahWYVZo2kDiXTuhkIit");
    izdelaj(nizi, 383, "qiZdyRKyKega0KgYSRypBniwOspleX6p8OQtizLudF3Y2tHRbePq2O99IBpFkgiwzcsNih");
    izdelaj(nizi, 384, "d3F1Kj27b8PvIMffnwCZXTkdLJSikzxjK5pphyqdhY");
    izdelaj(nizi, 385, "NFdpuAH8P6Ly2CdyB3UFY1");
    izdelaj(nizi, 386, "FypCeUpyNL0VmkkCEuK7cbAWRS7JewF9XVkTQfG");
    izdelaj(nizi, 387, "F8G1CYBo2UWYF");
    izdelaj(nizi, 388, "D_KtUydXO99sM");
    izdelaj(nizi, 389, "PtYvbIqSGMSHswjFZpsqJH0tpCppqkZKCdgfSC7mEddh_mhtMBj77iZrk9X6ztrU0eaTIAFb");
    izdelaj(nizi, 390, "KyQ5LjvJjcMVpupGbOkOkLbs0JGo0G0sMSCdVlC7OwHjWCeWhpmPUQeYp_fDMoATWxaxMztvZvVegrZlokj");
    izdelaj(nizi, 391, "SllC45xIQ3XkJ8CGoBXsLdmkE1eGAXFKSVE4qROZKnfk6nt2CZQGcc");
    izdelaj(nizi, 392, "pJbTxqr2sQxP8Mygp64HonDcJ5T3sBKH0");
    izdelaj(nizi, 393, "sS0gn3Q327dE0ZPxaVlaPnw2xdxLwUXkudIK4G1wrneeZxOVzIY2DVBfUaeyMu1ZY6");
    izdelaj(nizi, 394, "0nbYkfU6cg5kVOvPXVN6UqDsia");
    izdelaj(nizi, 395, "zvPrEWZZ54mu7RuboJ5sPrquhiG6op3o0LpxsdyVQQMFuqf8dWQikZdKNPNb0aDPL7MTF");
    izdelaj(nizi, 396, "aFS_3BaMiUScuH5Bux_DI35Pw_sALxZezSWv74zzgug7_mlLqERk");
    izdelaj(nizi, 397, "soa7thF8NCBEVv1o4RHSf_H2BJnyqh1amfPitXUkyCeTtN_p3ptKOB4YUNrkUgyXN");
    izdelaj(nizi, 398, "VyGuUhOK8j_DeSYbSoEX1M47cPZCR_uoTSDyANqT5G5QnQNHmgwlSHIqqZYvmxlf1hnJUdAB3");
    izdelaj(nizi, 399, "uwPeyEWB4s6O17KG6l7MKvoqkANqBfetWBnx");
    izdelaj(nizi, 400, "43OO9OS0Eeqixp5CzutU47gZ9X8waWAfaYFQHVM2Use9PLSAzcafBPWvMUK8C_KUXF6jmQ0gxGVIiOlmfd3ybB4Jr");
    izdelaj(nizi, 401, "zYl4Buduse9owhH1gnvvJZk2G80twvBSh9GpHChbes9Xz_65nxpp_2");
    izdelaj(nizi, 402, "PJwEvVJ8v");
    izdelaj(nizi, 403, "vz1YXPjstSIXo_A6d2SB_qPlLuqFHs8bKP0cf65FtUleAzFP8pEdSfYj66QNB3Cv9");
    izdelaj(nizi, 404, "a9sk4Z8pGdD9pap89jPdP0QXVFbOWARBjEd8jgDFmo1RuvDR9JJqhZXNx1N7Z_8OZB7BAShGYo9ZEj9aWOgGRiTSVk0mFSL3J");
    izdelaj(nizi, 405, "zdTuVFVxiAuRtXH6m_Xj4G1v");
    izdelaj(nizi, 406, "9VJIE3BT6TRkzMRK3n2AVIEYjRxWnAi_awgL5Mevdis3SxCiHVm8ngmJXkxPet_XwCte47ukQNva7DZwru");
    izdelaj(nizi, 407, "LAEKyh5y8TGP9k3AkcvfUh3sqIhdQMXcCBUpXtGw2tm3IgdARD9LB0AqNjx36PQjyQ2LqBIYjGNaGodNuKK4qy9z9P");
    izdelaj(nizi, 408, "NAuz0EaZlC6nlT00YGhq9TOQxnnT6zRWM071R4oiVtUF6JooTiu1ISZgfpk8v");
    izdelaj(nizi, 409, "TB6eWT6CEgZJrvOriD43JX7h3vzImwLdNKXUShDKK0uY7VcfnoKdeKOjuoGZtL5o1beaheftthAw12Iabmdy");
    izdelaj(nizi, 410, "Lfovbatu0DL_LVrCpoKjdLjL3kbJMUl86PAAlC4hjo06cf7evZ");
    izdelaj(nizi, 411, "tkiSIEjND5kyv5auV452PexBJgXT0wPzDL_OkLlKbWhqAOGjd9waHd8ReRNo6fsDMYO4RFuK0cseKGYv0Yjg");
    izdelaj(nizi, 412, "RfY7AAcXJauz6H5GzEJ3kI1z791GUsixmkum5B9YosAzc00p_9G8cyD13nR3k_g4QoO1k_D1IXbkLEDPZl5TXwHivQji3Q8");
    izdelaj(nizi, 413, "pD2uko_mGg");
    izdelaj(nizi, 414, "XkZxZtToHWn58PwqzUqJKAT7CIgFM3W");
    izdelaj(nizi, 415, "2OSEhDFOnP3FFiT1N");
    izdelaj(nizi, 416, "mEHJ3kinwiXxl");
    izdelaj(nizi, 417, "n4KigrJRBPPu106V7GxJzK0iFHlzFkywcPntqAE8hQ8dxrLdUGQp");
    izdelaj(nizi, 418, "RsSrXgGkp5TUa");
    izdelaj(nizi, 419, "x88YoFpn");
    izdelaj(nizi, 420, "UjRjNRGj6ZIsjKdG0OJ6LDJYpglkWO2_IMNhFukMVmZ3fWtjGClQCYjYjKRgG7NJbmsVN44Y6FLp");
    izdelaj(nizi, 421, "o_p5qusuYn1CQy1a4ZDeL7EU87E0q4aNZlymoY_70zamdMdw4VlmSzEwJ_HL7YZ6ejXiT_");
    izdelaj(nizi, 422, "yC64eH2MXx9l08zEN75oVLAxgKR93qQdg8y5AaDCDz5R2RGlgZD3n9FaFeaATyavSu26SpJvyZNB");
    izdelaj(nizi, 423, "8MFAVzKdjelUJpdUjX3mkZudfHWjdC");
    izdelaj(nizi, 424, "xLZJt8oxnY4ZD1");
    izdelaj(nizi, 425, "n3C98XhqJsrNg831PuFA4Z3I22DqQAWCeq7jEVZnbp3qmviULieM7i0KN8PuZXpwjUhah9uiFpvC1g8EmRnZudKvGzFO");
    izdelaj(nizi, 426, "GiP6jRc1JB9x6k8wQcXF72knXBlxMofKFRFe3rzxmCx9cTX5YXgEdTpf3jAuemTVAYDbxVCBY2jFDboXf");
    izdelaj(nizi, 427, "koeMoW__g_l0hgs4JJSnNfshQXP7T");
    izdelaj(nizi, 428, "UZ2i9AV6UOVnygTsPFUGf7wx_tGCtSu8LWDJSkoKLW8LEdTKcxE7Ep1XlaBwMX5jmvbS98Y3b4BUIZx_b80p3gnl72DDbiKN");
    izdelaj(nizi, 429, "bhO4BFTsIp03aq8wVNJqCKUfODSeFFWMeGlQAYMDsNOYzB6_4EbFVMBt1dRpiXgBiiHalWfrL78");
    izdelaj(nizi, 430, "kAIdwYQ9SfUDWj_FC32_vP9HEcAL0T7t4mPjqt2MWdW3Drl39jPOtcmU69OtPoj0Dwkp8DvtlWH8s4d");
    izdelaj(nizi, 431, "A");
    izdelaj(nizi, 432, "L_dAtR8dUJ3s5d2rYxu4tGp");
    izdelaj(nizi, 433, "mi6VlDKyslxshTbCfu");
    izdelaj(nizi, 434, "ViautXhkq0Obx8Y302jYi5VL0Wh9zQBrwpMeg4w20V6P6YH0fbJgfHG52QQ1Hl3kwmbZwwGzceuFpoc3KhpmQymTxK");
    izdelaj(nizi, 435, "2z1rd9LaBDcVbtpfI3XEo90T9DVReYbg9_hWlphDl81K8QaStnM2glaSSXLRsLmsAq082qlIDQv");
    izdelaj(nizi, 436, "N0dhsNe3oqr4rmZ4tASHfcfoNiDSSRA5pxs5l8cgwOEUKu3avaVVLxY_gLhWURpOjzk2JN1xXEx");
    izdelaj(nizi, 437, "CnhnuhpNB8n7Wns4a_87WIOQwwc76pSNP5nsfJa7mDsTlqpf8dI56MYfbGSmxMRHZJIFUNDZOq7NB5PDYfatgd2PEhnPG_h");
    izdelaj(nizi, 438, "JVNZBImnxKPRQDlqsJJXIbBcgwQWSvCOOAZH7Cuti5BumZJU");
    izdelaj(nizi, 439, "LBrFzTWj1YNZq52P");
    izdelaj(nizi, 440, "REoU57LZ9UJdzJktIKVDTcshtLQLTwzgLBOw0RVt_Gr");
    izdelaj(nizi, 441, "je2LJWsuuipYZjviDiWM_g6aYoNs60GE7KwqfjCjOyG09KVkS78IcMKC4WNJkkDRDvFDUcR8kyvXS");
    izdelaj(nizi, 442, "CCubICRGzhX0LXngkaBsC9Tgdq7xXxCmhR");
    izdelaj(nizi, 443, "PkB2w_rU3qSJPhOuoor_sg_8YKz52uLlAfgHqSMpV73NbEynkmkv_RwGmyiI");
    izdelaj(nizi, 444, "HEz0DP8XPckwflKr6lfuL3lqObjO1OXK2cA3SbcmQAn9Z8X1EE2TxDBLUqkoFJlzKgy5W");
    izdelaj(nizi, 445, "1cbmGTht0g_pxzU1H7Wsj2YrmnW_n1ga4eYyDEBPc");
    izdelaj(nizi, 446, "tSqrqBcVB8jsMGURxHzWZiA2AxcNbyGX8vD8dv_er_JtVj8pQcXLPouQ5uQSiRdQk41vsGiwl9Cl4PALnTM5MNzC3w_");
    izdelaj(nizi, 447, "WzvOuYAHRXKbjyQV8R7ErZsj1oTaBWQORpb94x1mvVCDpY");
    izdelaj(nizi, 448, "8Arskz7VEq4mJI4_YWWX4c5E1YdlRGohydNwAWAI");
    izdelaj(nizi, 449, "IUCLq2tHLwbw7iSUbeVk_Ww9Osj9mss5Z__aGnH6siP20eGCrcaXxJ4Gap6ZB33miwaxndN1SKLv8aK2v0RNPg");
    izdelaj(nizi, 450, "KVKNXxg4nVzdrGhQ14MVBGqJpnmsXSjMcG7IIv9iX3ArXaW4d");
    izdelaj(nizi, 451, "Yk7ProOyOFLPJXAR69CXo6B31sOj_N9b_hXBYpQYPIlNKdLz6BuEhpM2685JoPMI");
    izdelaj(nizi, 452, "gohn_ptFtInC7rz9u2KhXFlj5GLHtcNo_NvEC");
    izdelaj(nizi, 453, "UN78jsrEc1OtK0OjV");
    izdelaj(nizi, 454, "XQ5MrhJ53XhWu");
    izdelaj(nizi, 455, "VLjju26rvGIMRzJfo7GCDp0WdF0bc4F3fBSfPp0hCkhWfrFiB7qOMKYi5SVgnjIhggvV5ecRzsMEMHGlkL6dHCU");
    izdelaj(nizi, 456, "JGHuIBSKg7caPr7imsxQuLK4R");
    izdelaj(nizi, 457, "XkZxZtToHWn58PwqzUqJKAT7CIgFM3W");
    izdelaj(nizi, 458, "XE0DsOvx4O3K1SSJ9TQ87E41vrdoryZ97fdkm3WFmJnM5CwLf3NG8H37D2KNB0dTV92");
    izdelaj(nizi, 459, "JZ6JHic_f73hsgJrrLKoLP7IqQPJWHwkN1uPruwc");
    izdelaj(nizi, 460, "LmRkAUBD2j3GIuT5g8lCMJ7Dh2xWQyA");
    izdelaj(nizi, 461, "STVA2M5hDJCqvKxyUm_actpa2mqMDExHb2oKCpQwknKGMtPmuSDv2YD9lLmxnA");
    izdelaj(nizi, 462, "vm9m9UkBiaDtyYqZ95GJdAD1uEJ2zamQdLFKhkld8NtEEf2tSeYOQ70");
    izdelaj(nizi, 463, "98bonzTiD");
    izdelaj(nizi, 464, "iJMjwaAE1PT_Hs7PSVsKkhfoLMMr7fHtsuiCWoVbRuYmezRXEwrPeqUvTXz43F7So2zOIYaaTE");
    izdelaj(nizi, 465, "Yk7ProOyOFLPJXAR69CXo6B31sOj_N9b_hXBYpQYPIlNKdLz6BuEhpM2685JoPMI");
    izdelaj(nizi, 466, "k7l3tlcZoGeT");
    izdelaj(nizi, 467, "wqqk_sEHhDJh57goO0IW2CzIUcSvCFvlVDpIFaQiCxe2_Yxev90WltibwltJJvVEPEJ4HF0z6F126");
    izdelaj(nizi, 468, "5XEExqcorNnszTdfOEhKRqg42huGTGZnhKJxs0IFtZRTfZCVjAaPISitqmtIRL");
    izdelaj(nizi, 469, "mvDot8Vcb7BAtZIKfliJ09Cn4gWHLNwiW2p5z5LRneFSJWh8vNIvZ02zXxwfTEWFYvZqXFA7hOxV");
    izdelaj(nizi, 470, "_OK7yPq9_WAClC9d2_bR12HR0IKA1QkB");
    izdelaj(nizi, 471, "_76jVu003S8sWIPibW7l1VL6GYeXu9yqtmnhseYUEEyR3SXgg");
    izdelaj(nizi, 472, "UOZnDSUyj");
    izdelaj(nizi, 473, "4tuLeZEVq1hsaH9RxHxlxM6Ck6YmWL565CTAV4eoCHoruzXJa5");
    izdelaj(nizi, 474, "Pye2Kg0oE_DEkF64tiY7N7SzTy170HOlGHohH5xWNH3Ub4lqlgJR62m95bIinaAZ7sacC_LYYXRRsoLvnglWbP3jLNn");
    izdelaj(nizi, 475, "2fdcLOCk7d");
    izdelaj(nizi, 476, "YJck9CbgI0N7FGgk7iffvjBsnij7y4OuwfwWXl8IkLcVLXgmbJfgAn2K38k7CtwAPdgNVz8");
    izdelaj(nizi, 477, "VI9gUSTbnEOZG80TbdlXrzTOUPS99locu");
    izdelaj(nizi, 478, "SYc4OLopMkLgOW01re9Gi_VxkI3PlK3soegSLpuF3S8D");
    izdelaj(nizi, 479, "aoOpfjDurlPSjNOrs4qevBWS4sCeI_SpWLuV1O5sB2wYY0");
    izdelaj(nizi, 480, "bC6XicEzVOYMdAIySEjbwx6XlcySI2l09lOkjNhK1a41TkE");
    izdelaj(nizi, 481, "CnhnuhpNB8n7Wns4a_87WIOQwwc76pSNP5nsfJa7mDsTlqpf8dI56MYfbGSmxMRHZJIFUNDZOq7NB5PDYfatgd2PEhnPG_h");
    izdelaj(nizi, 482, "iRDUGhAZt0kUEgEQ7dK8oZw4EOd7");
    izdelaj(nizi, 483, "MNBpnJvacAihehvducgMm3iAPTB8oHKfYlNQNwvTLaGguH4Y6NBajEFIVMZXzFjisnM69wHsChSFdfWuuEc6uDN_Z0bY6gLk05");
    izdelaj(nizi, 484, "Xm_SA2KEgEbbhT7B7CgN_E21bql6h9R1ClOVGEbUmY8dwWwHRax1eXdxushToMVczTQgrxWezU");
    izdelaj(nizi, 485, "BRkrqg2w5ieIfjTZlWzuDgf_jmEiz3aIFcVNSlCUGW7avPUG_aBGh1NlB_8BHQRLl6eP7UWcF3AGOKNMEl");
    izdelaj(nizi, 486, "QW");
    izdelaj(nizi, 487, "D5Lc7VFKPEDZcw4thVm325QAVFJOQVciRFR880XG4mtycfESBwYruofoOx2w12FKQWLqrlrWBkaIho5fHgLrJo62MFFZd18");
    izdelaj(nizi, 488, "3VXZexz2rUaymK76Nt2buE_l9DYw7VIwflbuVIzcOdsv8XJQ");
    izdelaj(nizi, 489, "6vwwUZn2Lic4WXNXLY8FTCmvfoJR1nLA1Qb2aPr_JeFXOjbhj_LH");
    izdelaj(nizi, 490, "ERFkWAxmeym9zsjAObt0HOObKUzQdBfT9C_P5A0d6eqJgIclWkjonYKHBNv8Hh6NsxH2NBLrFzJRCBEl1RQjfBqoecnYpr");
    izdelaj(nizi, 491, "OHKshhypQrUbrB");
    izdelaj(nizi, 492, "2z1rd9LaBDcVbtpfI3XEo90T9DVReYbg9_hWlphDl81K8QaStnM2glaSSXLRsLmsAq082qlIDQv");
    izdelaj(nizi, 493, "7VDJcMVE");

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    racionaliziraj(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nizi[i] == niziKopija[i]) {
            free(nizi[i]);
        }
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
