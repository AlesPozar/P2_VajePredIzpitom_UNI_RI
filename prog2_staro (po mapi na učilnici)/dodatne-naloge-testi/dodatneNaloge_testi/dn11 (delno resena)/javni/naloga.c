#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define MAX_FILENAME_LEN 20
#define MAX_IMAGE_SIZE 80 // 8 * 10

void read_image(FILE *file, char image[MAX_IMAGE_SIZE][MAX_IMAGE_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        fgets(image[i], cols + 2, file); // +2 for newline and null terminator
    }
}

void write_matrix(FILE *file, uint64_t matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fprintf(file, "%lu", matrix[i][j]);
            if (j < cols - 1) {
                fprintf(file, " ");
            }
        }
        fprintf(file, "\n");
    }
}

void read_matrix(FILE *file, uint64_t matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fscanf(file, "%lu", &matrix[i][j]);
        }
    }
}

void write_image(FILE *file, char image[MAX_IMAGE_SIZE][MAX_IMAGE_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        fprintf(file, "%s\n", image[i]);
    }
}

uint64_t binary_to_decimal(char *binary) {
    uint64_t decimal = 0;
    for (int i = 0; i < 64; i++) {
        decimal = (decimal << 1) + (binary[i] - '0');
    }
    return decimal;
}

void decimal_to_binary(uint64_t decimal, char *binary) {
    for (int i = 63; i >= 0; i--) {
        binary[i] = (decimal & 1) + '0';
        decimal >>= 1;
    }
    binary[64] = '\0';
}

void convert_image_to_matrix(char image[MAX_IMAGE_SIZE][MAX_IMAGE_SIZE], uint64_t matrix[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            char binary[65];
            int index = 0;
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    binary[index++] = (image[i * 8 + k][j * 8 + l] == '*') ? '1' : '0';
                }
            }
            binary[64] = '\0';
            matrix[i][j] = binary_to_decimal(binary);
        }
    }
}

void convert_matrix_to_image(uint64_t matrix[10][10], char image[MAX_IMAGE_SIZE][MAX_IMAGE_SIZE], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            char binary[65];
            decimal_to_binary(matrix[i][j], binary);
            int index = 0;
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    image[i * 8 + k][j * 8 + l] = (binary[index++] == '1') ? '*' : ' ';
                }
                image[i * 8 + k][8 * n] = '\0'; // Null terminate each row
            }
        }
    }
}

int main() {
    int u, m, n;
    char input_filename[MAX_FILENAME_LEN], output_filename[MAX_FILENAME_LEN];
    scanf("%d %d %d %s %s", &u, &m, &n, input_filename, output_filename);

    FILE *input_file = fopen(input_filename, "r");
    FILE *output_file = fopen(output_filename, "w");

    if (u == 1) {
        char image[MAX_IMAGE_SIZE][MAX_IMAGE_SIZE] = {{0}};
        uint64_t matrix[10][10] = {{0}};
        read_image(input_file, image, m * 8, n * 8);
        convert_image_to_matrix(image, matrix, m, n);
        write_matrix(output_file, matrix, m, n);
    } else if (u == 2) {
        uint64_t matrix[10][10] = {{0}};
        char image[MAX_IMAGE_SIZE][MAX_IMAGE_SIZE] = {{0}};
        read_matrix(input_file, matrix, m, n);
        convert_matrix_to_image(matrix, image, m, n);
        write_image(output_file, image, m * 8, n * 8);
    } else {
        fprintf(stderr, "Invalid command\n");
        fclose(input_file);
        fclose(output_file);
        return 1;
    }

    fclose(input_file);
    fclose(output_file);
    return 0;
}
