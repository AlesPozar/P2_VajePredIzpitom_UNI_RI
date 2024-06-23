
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

//----------- 10min, 3. try

int main() {
    // dopolnite ...
    int n, stevecZaporedij = 0, trenutno, prejsnje, trenStev = 0, narasca = 0, pada = 0;
    scanf("%d", &n);
    int zaporedja[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&trenutno);
        if(i == 1){//prvo zaporedje
            if(prejsnje > trenutno){//pada
                pada = 1;
            }
            else if(prejsnje < trenutno){//narasca
                narasca = 1;
            }
        }
        if(i != 0){
            if(prejsnje > trenutno){//pada
                if(narasca){//prislo do spremembe
                    narasca = 0;
                    zaporedja[stevecZaporedij] = trenStev;
                    stevecZaporedij++;
                    trenStev = 1;//inclusive
                }
                pada = 1;
            }
            else if(prejsnje < trenutno){//narasca
                if(pada){//prislo do spremembe
                    pada = 0;
                    zaporedja[stevecZaporedij] = trenStev;
                    stevecZaporedij++;
                    trenStev = 1;//inclusive
                }
                narasca = 1;
            }
        }
        trenStev++;
        prejsnje = trenutno;
    }
    zaporedja[stevecZaporedij] = trenStev;
    for(int i = 0; i <= stevecZaporedij; i++){
        printf("%d\n", zaporedja[i]);
    }
    return 0;
}
