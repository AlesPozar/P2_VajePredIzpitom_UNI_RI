#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char ch;
    int stevnikStart = 0, Read = 1, Type = 0, nizCheck = 1, readNextCharCall = 1;
    while(ch != EOF){
        if(readNextCharCall)
            ch = getchar();
        if(Read && nizCheck){
            if(ch ==  ' ')
                readNextCharCall = 1;
            else if(ch == '{'){
                stevnikStart++;
                printf("locilo[%c]\n", ch);
                readNextCharCall = 1;
            }
            else if(ch == '}'){
                stevnikStart--;
                printf("locilo[%c]\n", ch);
                readNextCharCall = 1;
            }
            else if(ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == ';' || ch == ','){
                printf("locilo[%c]\n", ch);
                readNextCharCall = 1;
            }
            else if(ch == '/'){//dve opciji, lahko komentar (dva), lahko pa operator
                ch = getchar();
                if(ch == '/'){//komentar line
                    Read = 0;
                    Type = 0;
                    readNextCharCall = 1;
                }
                else if(ch == '*'){//komentar multi line
                    Read = 0;
                    Type = 1;
                    readNextCharCall = 1;
                }
                else if(ch == '='){//operator
                    printf("operator[/=]\n");
                    readNextCharCall = 1;
                }
                else{//bil je presledek torej operator
                    printf("operator[/]\n");
                    //kle imamo ze naslednjo crko
                    readNextCharCall = 0;
                }

            }
            else if(ch == '+'){
                ch = getchar();
                if(ch == '='){
                    printf("operator[+=]\n");
                    readNextCharCall = 1;
                }
                else{
                    printf("operator[+]\n");
                    //kle imamo ze naslednjo crko
                    readNextCharCall = 0;
                }
            }
            else if(ch == '-'){
                ch = getchar();
                if(ch == '='){
                    printf("operator[-=]\n");
                    readNextCharCall = 1;
                }
                else{
                    printf("operator[-]\n");
                    //kle imamo ze naslednjo crko
                    readNextCharCall = 0;
                }
            }
            else if(ch == '*'){
                ch = getchar();
                if(ch == '='){
                    printf("operator[*=]\n");
                    readNextCharCall = 1;
                }
                else{
                    printf("operator[*]\n");
                    //kle imamo ze naslednjo crko
                    readNextCharCall = 0;
                }
            }
            else if(ch == '>'){
                ch = getchar();
                if(ch == '='){
                    printf("operator[>=]\n");
                    readNextCharCall = 1;
                }
                else{
                    printf("operator[>]\n");
                    //kle imamo ze naslednjo crko
                    readNextCharCall = 0;
                }
            }
            else if(ch == '<'){
                ch = getchar();
                if(ch == '='){
                    printf("operator[<=]\n");
                    readNextCharCall = 1;
                }
                else{
                    printf("operator[<]\n");
                    //kle imamo ze naslednjo crko
                    readNextCharCall = 0;
                }
            }
            else if(ch == '='){
                ch = getchar();
                if(ch == '='){
                    printf("operator[==]\n");
                    readNextCharCall = 1;
                }
                else{
                    printf("operator[=]\n");
                    //kle imamo ze naslednjo crko
                    readNextCharCall = 0;
                }
            }
            else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_'){
                int steviloCheck = 1;
                char* mid = (char*)malloc(10001 * sizeof(char));
                int Index = 0;
                if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '_')
                        steviloCheck = 0;
                while((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_'){
                    mid[Index] = ch;
                    Index++;
                    ch = getchar();
                    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '_')
                        steviloCheck = 0;
                }
                mid[Index] = '\0';
                if(steviloCheck)//stevilo
                    printf("stevilo[%s]\n", mid);
                else if(strcmp(mid, "char") == 0 || strcmp(mid, "else") == 0 || strcmp(mid, "for") == 0 || strcmp(mid, "if") == 0 || strcmp(mid, "int") == 0 || strcmp(mid, "return") == 0 || strcmp(mid, "while") == 0){//rezerviranka
                    printf("rezerviranka[%s]\n", mid);
                }
                else//ime
                    printf("ime[%s]\n", mid);
                //kle imamo ze naslednjo crko
                readNextCharCall = 0;
            }
            else if(ch == '"'){//niz
                nizCheck = 0;
                readNextCharCall = 1;
            }
        }
        else if(!Read){//smo v komentartju
            if(Type){//multi line
                if(ch == '*'){
                    ch = getchar();
                    if(ch == '/'){
                        Read = 1;
                        readNextCharCall = 1;
                    }
                    else//kle imamo ze naslednjo crko
                        readNextCharCall = 0;
                }
                else{
                    //kle nimamo
                    readNextCharCall = 1;
                }

            }
            else{//line
                if(ch == '\n')
                    Read = 1;
                //kle nimamo
                readNextCharCall = 1;
            }
        }
        else if(!nizCheck){
            char* niz = (char*)malloc(10001 * sizeof(char));
            int IndexNiza = 0;
            while(ch != '"'){
                niz[IndexNiza] = ch;
                IndexNiza++;
                ch = getchar();
            }
            niz[IndexNiza] = '\0';
            printf("niz[%s]\n", niz);
            nizCheck = 1;
            //kle imamo ze naslednjo crko, samo vemo da je " in da jo je potrebno ignorirati
            readNextCharCall = 1;
        }
    }
    return 0;
}