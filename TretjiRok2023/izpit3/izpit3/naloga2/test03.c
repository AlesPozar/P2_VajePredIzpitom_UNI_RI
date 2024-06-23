
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {5, 0, 0, 0, 0, 12, 0, 23, 0, 36, 0, 0, 0, 30, 7, 91, 29, 0, 55, 34, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 48, 85, 0, 0, 15, 0, 0, 0, 5, 0, 69, 0, 0, 0, 75, 0, 66, 0, 4, 0, 0, 0, 77, 10, 0, 0, 17, 0, 0, 0, 47, 70, 0, 98, 0, 29, 61, 42, 0, 57, 0, 0, 0, 76, 56, 0, 26, 99, 78, 0, 0, 0, 0, 1, 89, 0, 0, 19, 91, 0, 0, 29, 0, 0, 0, 105, 38, 24, 110, 0, 0, 10, 77, 0, 0, 38, 101, 74, 0, 99, 96, 116, 184, 158, 181, 147, 302, 153, 350, 340, 320, 297, 395, 485, 511, 636, 568, 710, 845, 775, 815, 1004, 1116, 1035, 1183, 1233, 1429, 1441, 1440, 1533, 1530, 1638, 1773, 1747, 1842, 1857, 1885, 1902, 1979, 1943, 1991, 1982, 2023, 2017, 2023, 1900, 1906, 1931, 1828, 1805, 1645, 1759, 1664, 1599, 1430, 1436, 1377, 1354, 1209, 1044, 955, 923, 922, 809, 737, 733, 565, 537, 563, 551, 494, 355, 428, 342, 219, 154, 225, 121, 238, 239, 119, 143, 23, 5, 150, 5, 117, 58},
    (int[]) {0, 0, 0, 0, 0, 0, 42, 77, 19, 70, 40, 0, 0, 14, 17, 0, 33, 0, 0, 0, 13, 77, 49, 0, 0, 10, 0, 0, 0, 21, 85, 0, 0, 0, 0, 0, 63, 0, 87, 0, 87, 23, 92, 15, 0, 74, 64, 30, 8, 60, 0, 0, 0, 0, 0, 58, 0, 0, 51, 0, 41, 0, 93, 75, 89, 99, 42, 0, 0, 0, 0, 0, 0, 0, 67, 62, 0, 58, 56, 0, 90, 44, 0, 0, 0, 16, 19, 30, 0, 38, 51, 39, 89, 0, 0, 0, 0, 0, 0, 63, 0, 23, 81, 66, 63, 10, 58, 0, 124, 110, 154, 157, 20, 6, 209, 44, 255, 97, 221, 300, 314, 212, 346, 460, 440, 457, 480, 647, 592, 622, 726, 858, 901, 1025, 1060, 1209, 1095, 1187, 1344, 1406, 1437, 1592, 1568, 1731, 1673, 1892, 1868, 1947, 1891, 1946, 2023, 1909, 1976, 2023, 2023, 2016, 1893, 1936, 1986, 1850, 1861, 1769, 1680, 1648, 1681, 1579, 1439, 1393, 1285, 1249, 1232, 1119, 1096, 1031, 959, 854, 683, 691, 712, 489, 453, 442, 330, 369, 258, 239, 324, 205, 179, 139, 205, 150, 119, 72, 0, 0, 9, 62, 130, 64},
    (int[]) {0, 0, 0, 0, 0, 74, 0, 0, 62, 42, 86, 20, 64, 95, 0, 23, 0, 83, 0, 32, 0, 99, 0, 0, 20, 0, 66, 76, 0, 0, 0, 0, 91, 91, 0, 55, 0, 0, 81, 65, 0, 94, 13, 99, 0, 83, 16, 0, 42, 0, 2, 69, 0, 0, 0, 92, 37, 0, 0, 0, 72, 61, 60, 29, 50, 26, 25, 25, 27, 21, 64, 0, 0, 31, 0, 97, 58, 0, 0, 0, 0, 0, 77, 0, 66, 51, 0, 41, 0, 89, 31, 96, 70, 0, 43, 72, 42, 0, 0, 0, 0, 0, 93, 69, 102, 54, 62, 106, 0, 0, 66, 0, 114, 20, 155, 102, 84, 244, 118, 253, 224, 271, 289, 329, 331, 529, 510, 652, 702, 770, 729, 768, 858, 1047, 1056, 1089, 1228, 1266, 1315, 1392, 1488, 1578, 1638, 1772, 1712, 1888, 1787, 1864, 1859, 1890, 1920, 1960, 2023, 2023, 1958, 2023, 2023, 1959, 1852, 1916, 1773, 1730, 1735, 1764, 1586, 1533, 1413, 1353, 1378, 1181, 1239, 1130, 1084, 895, 830, 912, 766, 761, 547, 555, 504, 376, 329, 391, 400, 208, 357, 231, 227, 179, 140, 184, 143, 130, 152, 142, 37, 98, 123, 80},
};

int N = 3;
int M = 200;
int D = 1;

int main() {
    int** nova = zmehcaj(SLIKA, N, M, D);
    int noviN = N - 2 * D;
    int noviM = M - 2 * D;

    for (int i = 0; i < noviN; i++) {
        for (int j = 0; j < noviM; j++) {
            printf("%5d", nova[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < noviN; i++) {
        free(nova[i]);
    }
    free(nova);

    return 0;
}
