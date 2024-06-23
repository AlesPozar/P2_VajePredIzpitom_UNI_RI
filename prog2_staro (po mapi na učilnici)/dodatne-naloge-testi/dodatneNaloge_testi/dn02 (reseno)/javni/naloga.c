#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode(char* input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        char current_char = input[i];
        int count = 1;
        
        while (i + 1 < len && input[i + 1] == current_char) {
            count++;
            i++;
        }
        
        if (current_char == '#') {
            printf("##%d#", count);
        } else {
            if (count < 5) {
                for (int j = 0; j < count; j++) {
                    printf("%c", current_char);
                }
            } else {
                printf("#%c%d#", current_char, count);
            }
        }
    }
    printf("\n");
}

void decode(char* input) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        if (input[i] == '#') {
            if (input[i + 1] == '#') {
                int count = 0;
                i += 2; // skip "##"
                while (input[i] != '#') {
                    count = count * 10 + (input[i] - '0');
                    i++;
                }
                for (int j = 0; j < count; j++) {
                    printf("#");
                }
            } else {
                char char_to_print = input[i + 1];
                int count = 0;
                i += 2; // skip "#c"
                while (input[i] != '#') {
                    count = count * 10 + (input[i] - '0');
                    i++;
                }
                for (int j = 0; j < count; j++) {
                    printf("%c", char_to_print);
                }
            }
        } else {
            printf("%c", input[i]);
        }
    }
    printf("\n");
}

int main() {
    int u;
    char input[1000001];
    
    scanf("%d ", &u);
    fgets(input, 1000001, stdin);
    
    input[strcspn(input, "\n")] = 0;
    
    if (u == 1) {
        encode(input);
    } else if (u == 2) {
        decode(input);
    }
    
    return 0;
}