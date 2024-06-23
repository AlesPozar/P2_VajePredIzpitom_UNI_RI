
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga1
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

//----------9min, 2. try
int main() {
    // dopolnite ...
    int n, b, zacetek = -1, pada = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &b);
        if(pada)
            pada = 0;
        else
            pada = 1;
        if(i != 0)
            b--;
        for(int y = 0; y < b; y++){
            if(pada)
                zacetek--;
            else
                zacetek++;
            printf("%d\n", zacetek);
        }
    }

    return 0;
}
