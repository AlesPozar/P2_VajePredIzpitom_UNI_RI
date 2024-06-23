#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

#define _M 10001
int _P[] = {5424, 8329, 886, 5444, 7415, 3572, 2385, 1247, 7841, 4407, 9322, 7463, 892, 3115, 6410, 3150, 5266, 7505, 5498, 9063, 6046, 4074, 9647, 3851, 2208, 2604, 2388, 8359, 9301, 5572, 2024, 8360, 5521, 2838, 1834, 1630, 3124, 4394, 7668, 4425, 1446, 630, 3716, 9067, 8595, 9141, 5480, 2576, 3109, 4135, 3208, 1817, 8770, 2578, 492, 8063, 8219, 9363, 1465, 4430, 6867, 1838, 3854, 1070, 9888, 2038, 4661, 6, 1820, 1069, 905, 1516, 6964, 7756, 9455, 9145, 3470, 2995, 50, 9148, 3430, 4160, 9854, 1042, 3082, 7135, 5811, 8468, 9062, 1176, 6482, 6896, 6643, 7553, 4147, 3757, 4327, 9198, 1095, 920, 2951, 9262, 8903, 2819, 4399, 9114, 4112, 380, 5376, 7368, 4323, 6795, 5822, 6177, 5285, 5485, 365, 2068, 9758, 1942, 3437, 8839, 1714, 505, 8023, 6223, 2409, 509, 8, 4131, 2488, 5320, 2847, 6970, 7410, 6632, 4155, 7771, 4330, 3191, 9376, 7635, 1413, 967, 4974, 1539, 623, 2111, 1544, 5716, 5435, 9337, 714, 610, 8841, 4997, 2672, 7229, 4418, 4127, 333, 3605, 6374, 4851, 5257, 2923, 4671, 3276, 2665, 1000, 7016, 7092, 1772, 6766, 3179, 3576, 1192, 3833, 654, 9786, 6031, 5349, 2358, 339, 3256, 4525, 3435, 5177, 8561, 8751, 1394, 2438, 6187, 5933, 7445, 6784, 8948, 1888, 9113, 4772, 7507, 2619, 2839, 5060, 3521, 7270, 9756, 5772, 8255, 5965, 26, 3019, 918, 6570, 3493, 7594, 11, 5301, 4868, 8405, 6818, 1186, 5223, 8343, 4745, 4716, 2931, 7562, 7072, 7762, 1479, 9103, 414, 9908, 7782, 2359, 6823, 2514, 7371, 8882, 9914, 2844, 6165, 9359, 4609, 1196, 9538, 154, 3384, 8013, 73, 320, 1040, 9405, 7046, 7875, 2913, 8547, 2080, 3366, 504, 6922, 7199, 5390, 9388, 2739, 9452, 6698, 7483, 6767, 9313, 7723, 6538, 449, 4476, 7195, 482, 1008, 547, 9836, 9622, 9665, 1686, 9537, 1019, 1283, 6028, 5255, 1075, 9220, 6988, 2238, 9425, 294, 6047, 440, 5450, 7582, 9289, 9295, 7707, 8197, 7379, 7060, 3593, 7151, 4078, 9415, 1035, 7307, 6288, 9267, 1097, 1803, 7189, 3544, 8038, 6958, 4149, 4632, 3825, 7772, 5500, 9038, 3107, 1760, 2872, 5953, 4104, 7513, 2004, 107, 539, 4025, 5169, 5610, 4173, 8139, 1462, 8695, 9466, 4375, 939, 8430, 8129, 4067, 8524, 4178, 8883, 2225, 8974, 1239, 9489, 2459, 812, 842, 3410, 1379, 1963, 9716, 1467, 8854, 856, 3697, 7460, 6627, 4864, 9400, 3475, 9958, 1329, 2275, 4455, 7532, 4587, 2832, 1979, 2721, 7204, 3535, 7023, 1378, 3102, 4014, 5777, 735, 1448, 4976, 2679, 7317, 2115, 23, 8389, 4045, 6837, 9384, 5373, 7367, 1932, 2320, 5012, 7128, 3647, 6449, 4518, 213, 5543, 1151, 6316, 2860, 6701, 797, 535, 6779, 7222, 5979, 1994, 2456, 8986, 9768, 3253, 2292, 5343, 5584, 632, 921, 9209, 3385, 1864, 3498, 3920, 4471, 3909, 3404, 4575, 9122, 3480, 8514, 6614, 4020, 2555, 2891, 4073, 9833, 66, 4051, 2670, 7696, 8850, 2787, 9310, 5906, 8676, 1707, 1858, 7459, 7540, 4809, 283, 5966, 8862, 6306, 6683, 6530, 9499, 5218, 2509, 7549, 3394, 7649, 3880, 1824, 6402, 1586, 1869, 3740, 7260, 8935, 6762, 4083, 5404, 964, 2744, 1043, 3541, 9248, 2534, 4886, 2157, 7479, 7170, 1452, 9730, 4151, 4452, 6567, 5425, 9119, 129, 426, 4822, 8920, 4464, 3182, 2028, 9255, 2294, 5748, 4444, 2697, 611, 7622, 5884, 6735, 7522, 209, 3387, 7293, 9884, 7636, 2075, 8009, 6864, 3723, 9456, 5418, 4817, 3283, 2705, 2051, 2734, 6785, 2666, 9098, 7839, 1342, 4969, 8930, 8176, 7405, 4711, 7086, 3186, 7623, 7795, 5590, 7944, 4926, 6263, 1643, 4500, 8256, 6135, 9035, 5290, 9033, 9042, 2996, 8670, 7673, 3413, 8344, 2871, 6703, 8723, 2592, 1624, 5293, 7005, 3425, 5081, 578, 834, 7159, 7435, 7191, 2267, 9151, 2879, 3086, 6851, 6813, 335, 2806, 5070, 1700, 9540, 3589, 9813, 7078, 2117, 4880, 2138, 5909, 3857, 1719, 7232, 3677, 8121, 4584, 9187, 2229, 221, 7776, 2302, 9298, 4253, 6553, 3813, 3762, 5141, 8111, 3859, 2952, 6575, 5982, 1274, 1109, 7397, 8636, 4930, 2797, 3302, 689, 2793, 6297, 2968, 8413, 2295, 9128, 4895, 6444, 1522, 138, 2487, 9995, 8608, 2755, 1749, 3286, 9878, 2025, 9930, 2201, 9862, 1337, 1182, 199, 8152, 6333, 4552, 8390, 7650, 9233, 3304, 3639, 1233, 2557, 8740, 3490, 5927, 3007, 368, 4180, 9911, 41, 7147, 9159, 2503, 9450, 5730, 4534, 6513, 802, 6770, 1684, 7223, 6985, 3505, 6952, 1750, 4071, 7139, 4785, 2006, 6768, 4287, 7398, 9861, 7118, 6890, 8652, 9628, 8057, 4885, 8803, 8402, 2988, 9120, 1695, 1688, 1852, 9081, 8576, 7007, 2284, 6849, 4306, 7969, 1100, 8551, 8504, 7566, 5330, 6977, 1393, 9199, 1345, 5975, 7626, 2824, 4227, 319, 7732, 4491, 7807, 5799, 2878, 5729, 4123, 2283, 8580, 402, 8296, 4264, 9893, 6271, 9816, 769, 2213, 6652, 6684, 5061, 7014, 3564, 3531, 1706, 7951, 2575, 3488, 1115, 4383, 7487, 7298, 7750, 1190, 127, 7989, 6891, 3314, 6253, 7559, 4807, 3863, 5455, 933, 9169, 6502, 4709, 4543, 6027, 6266, 5518, 347, 5174, 3729, 1713, 3709, 8614, 226, 1110, 915, 9383, 8355, 308, 6925, 8240, 7097, 7864, 6824, 1121, 2586, 8714, 9312, 9139, 369, 4604, 391, 9524, 3892, 1918, 8889, 9371, 7303, 2020, 7697, 8979, 5905, 2950, 2831, 8499, 3643, 1558, 2750, 3760, 9328, 6158, 119, 7746, 1269, 3904, 2760, 106, 5750, 2558, 5940, 3397, 9773, 532, 9514, 9860, 1895, 100, 5616, 2692, 1419, 7774, 946, 322, 4005, 6498, 1438, 4269, 955, 8943, 8456, 1621, 4628, 3444, 3995, 252, 3598, 8422, 7240, 527, 961, 4806, 454, 29, 3780, 3867, 1754, 6574, 5516, 5107, 7324, 232, 5654, 6307, 5, 4916, 6999, 4751, 5519, 8092, 5735, 4544, 318, 871, 7262, 4715, 376, 8215, 4188, 7974, 4435, 6555, 8200, 8647, 4296, 8185, 1284, 4782, 7022, 776, 3822, 2146, 5189, 962, 9871, 7068, 9967, 8195, 4262, 6318, 8147, 2517, 6313, 6656, 9445, 9662, 7797, 7686, 2401, 7808, 5018, 1843, 1409, 1217, 6961, 5539, 8626, 9340, 6938, 4627, 7451, 9327, 3623, 7383, 337, 4659, 5042, 8658, 3730, 9326, 8505, 8926, 3329, 8872, 4646, 193, 7258, 5738, 7321, 2309, 9266, 7586, 930, 6568, 3167, 9200, 1490};
int _RAZREDI[] = {0, 0, 1, 2, 3, 4, 5, 6, 7, 5, 5, 8, 9, 10, 5, 11, 12, 13, 14, 15, 16, 5, 14, 17, 18, 0, 19, 20, 21, 21, 22, 23, 24, 12, 25, 26, 27, 28, 29, 30, 12, 31, 23, 32, 15, 33, 34, 29, 35, 36, 23, 37, 38, 39, 16, 40, 41, 42, 43, 44, 45, 46, 47, 48, 29, 49, 5, 25, 50, 51, 52, 27, 53, 5, 54, 55, 56, 12, 57, 5, 58, 37, 59, 1, 21, 60, 61, 62, 63, 5, 37, 64, 65, 66, 67, 68, 69, 0, 33, 70, 71, 72, 73, 30, 74, 75, 53, 76, 77, 77, 78, 79, 80, 81, 60, 82, 83, 5, 84, 19, 85, 80, 86, 87, 60, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 15, 101, 102, 103, 104, 61, 105, 106, 107, 108, 109, 110, 111, 54, 112, 113, 114, 6, 71, 115, 116, 117, 118, 119, 120, 37, 121, 122, 123, 124, 5, 125, 126, 127, 128, 71, 129, 76, 130, 131, 132, 75, 64, 5, 37, 133, 25, 134, 135, 98, 54, 136, 137, 5, 138, 139, 140, 141, 142, 136, 138, 143, 144, 15, 145, 3, 98, 146, 110, 147, 88, 148, 149, 136, 150, 100, 151, 152, 14, 153, 89, 154, 100, 155, 52, 156, 157, 82, 158, 159, 120, 160, 161, 42, 133, 162, 163, 16, 164, 110, 23, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 80, 176, 177, 178, 101, 179, 180, 181, 182, 183, 29, 184, 126, 185, 5, 186, 187, 188, 189, 190, 178, 191, 12, 33, 192, 193, 194, 29, 195, 196, 80, 197, 198, 199, 192, 200, 37, 77, 201, 202, 100, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 5, 214, 215, 216, 217, 100, 218, 219, 220, 12, 7, 221, 222, 223, 224, 225, 226, 110, 227, 156, 75, 228, 229, 230, 231, 232, 113, 233, 234, 235, 236, 237, 238, 227, 23, 239, 117, 240, 78, 241, 242, 71, 15, 243, 244, 244, 245, 117, 246, 36, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 145, 257, 29, 258, 14, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 53, 272, 273, 274, 275, 276, 277, 278, 113, 279, 280, 194, 281, 282, 94, 70, 10, 283, 284, 285, 286, 287, 288, 289, 29, 290, 253, 291, 292, 293, 294, 167, 295, 296, 297, 298, 29, 87, 299, 300, 170, 301, 302, 303, 304, 243, 305, 306, 307, 308, 309, 71, 310, 311, 312, 313, 314, 315, 228, 316, 317, 75, 318, 319, 245, 320, 321, 160, 322, 5, 323, 324, 325, 326, 33, 327, 328, 315, 329, 330, 331, 154, 332, 15, 267, 37, 333, 75, 334, 335, 12, 40, 152, 180, 336, 337, 338, 339, 340, 341, 342, 29, 343, 344, 160, 236, 37, 345, 346, 347, 194, 348, 349, 350, 232, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 214, 362, 363, 174, 364, 365, 366, 10, 367, 368, 369, 370, 371, 314, 372, 227, 373, 374, 375, 376, 377, 34, 378, 379, 380, 381, 382, 136, 383, 124, 384, 253, 385, 386, 387, 388, 389, 23, 390, 391, 392, 315, 177, 393, 113, 232, 394, 395, 396, 397, 398, 399, 400, 401, 402, 29, 403, 98, 404, 405, 261, 406, 407, 408, 25, 409, 168, 410, 411, 1, 412, 413, 414, 291, 86, 90, 137, 415, 94, 416, 417, 418, 419, 420, 421, 422, 423, 234, 94, 424, 425, 426, 427, 428, 164, 429, 430, 431, 432, 251, 433, 60, 391, 416, 434, 435, 436, 437, 438, 439, 194, 440, 64, 441, 442, 443, 384, 444, 23, 247, 445, 136, 48, 446, 447, 448, 449, 450, 451, 5, 363, 452, 453, 454, 455, 456, 457, 458, 42, 314, 55, 459, 460, 461, 462, 378, 463, 258, 449, 464, 461, 465, 466, 25, 467, 75, 468, 469, 470, 471, 61, 472, 130, 473, 474, 475, 212, 476, 477, 478, 479, 480, 481, 482, 52, 483, 484, 485, 486, 86, 487, 405, 488, 489, 490, 491, 492, 5, 493, 494, 14, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 469, 366, 506, 507, 508, 509, 317, 327, 510, 511, 512, 513, 514, 347, 113, 515, 516, 517, 518, 519, 141, 520, 521, 522, 254, 523, 524, 98, 248, 525, 526, 527, 528, 384, 167, 529, 530, 500, 531, 141, 532, 39, 533, 314, 534, 120, 535, 536, 537, 538, 539, 540, 541, 542, 543, 104, 544, 545, 546, 547, 548, 549, 550, 551, 236, 552, 384, 553, 314, 554, 555, 556, 557, 61, 558, 559, 71, 560, 561, 562, 385, 563, 440, 564, 12, 565, 566, 567, 568, 569, 570, 571, 572, 110, 573, 574, 575, 576, 577, 140, 578, 579, 580, 581, 126, 582, 583, 584, 585, 586, 19, 587, 588, 121, 589, 590, 591, 220, 592, 593, 594, 595, 171, 596, 597, 379, 371, 598, 539, 599, 600, 601, 5, 602, 603, 604, 605, 606, 228, 607, 608, 609, 417, 610, 611, 12, 430, 612, 52, 613, 614, 615, 12, 616, 617, 618, 619, 620, 621, 622, 608, 99, 623, 624, 42, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 203, 636, 637, 638, 0, 639, 640, 641, 642, 643, 537, 378, 644, 192, 645, 646, 647, 609, 170, 5, 648, 213, 649, 650, 126, 651, 652, 408, 653, 340, 654, 655, 656, 643, 75, 657, 658, 478, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 614, 16, 669, 670, 212, 671, 254, 365, 672, 126, 673, 674, 675, 123, 676, 677, 27, 678, 679, 680};
int _ST_VOZLISC = sizeof(_RAZREDI) / sizeof(_RAZREDI[0]);
#define  _ST_RAZREDOV (sizeof(_P) / sizeof(_P[0]))
Vozlisce* _I2V[_ST_RAZREDOV];
bool _POBRISAN[_M];

Vozlisce* _ustvari() {
    Vozlisce* zacetek = NULL;
    Vozlisce* prej = NULL;
    int zadnjiRazred = -1;

    for (int i = 0; i < _ST_VOZLISC; i++) {
        Vozlisce* v = calloc(1, sizeof(Vozlisce));
        int r = _RAZREDI[i];
        if (r > zadnjiRazred) {
            zadnjiRazred = r;
            v->p = malloc(sizeof(int));
            *v->p = _P[r];
            _I2V[r] = v;
        } else {
            v->p = _I2V[r]->p;
        }
        if (i == 0) {
            zacetek = v;
        } else {
            prej->naslednje = v;
        }
        prej = v;
    }
    return zacetek;
}

void _izpisi(Vozlisce* v) {
    printf("[");
    Vozlisce* w = v;
    while (w != NULL) {
        printf("%s%d", (w == v ? "" : ", "), *w->p);
        w = w->naslednje;
    }
    printf("]\n");
}

void _preveriIstovetnost(Vozlisce* v) {
    int i = 0;
    for (Vozlisce* w = v; w != NULL; w = w->naslednje) {
        printf("%d", w == _I2V[i]);
        i++;
    }
    printf("\n");
}

void _pocisti(Vozlisce* v) {
    if (v != NULL) {
        _pocisti(v->naslednje);
        int pp = *v->p;
        if (!_POBRISAN[pp]) {
            free(v->p);
            v->p = NULL;
            _POBRISAN[pp] = true;
        }
        free(v);
    }
}

int main() {
    Vozlisce* v = _ustvari();

    printf("Prej:\n");
    _izpisi(v);
    printf("\n");

    izlociDuplikate(v);

    printf("Potem:\n");
    _izpisi(v);
    printf("\n");

    printf("Istovetnost ohranjenih vozlisc:\n");
    _preveriIstovetnost(v);

    _pocisti(v);

    return 0;
}
