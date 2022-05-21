#include <stdio.h>

int main(void) {
    char c;
    int g,s,m,k,l,v,sucesso,sucesso1,sucesso2,sucesso3,idadedaPessoa;
    sucesso=0;
    sucesso1=0;
    sucesso2=0;
    sucesso3=0;
    if(scanf( " %c %d %d %d %d %d %d", &c,&g,&s,&m,&k,&l,&v )==0 ){
        printf("erro");
    }
    if(c=='a'||c=='c'||c=='t') {
        if (s <= 12 && s > 0) {
            if (s == 1 || s == 3 || s == 5 || s == 7 || s == 8 || s == 10 || s == 12) {
                if (g <= 31 && g > 0) {
                    sucesso = 1;
                }
            }
            if (s == 4 || s == 6 || s == 9 || s == 11) {
                if (g <= 30 && g > 0) {
                    sucesso = 1;
                }
            }
            if (s == 2) {
                if ((m % 4 == 0 && m % 100 != 0) || m % 400 == 0) {
                    if (g <= 29) {
                        sucesso = 1;
                    }
                } else {
                    if (g <= 28) {
                        sucesso = 1;
                    }
                }
            }
        }
        if (l <= 12 && l > 0) {
            if (l == 1 || l == 3 || l == 5 || l == 7 || l == 8 || l == 10 || l == 12) {
                if (k <= 31 && k > 0) {
                    sucesso1 = 2;
                }
            }
            if (l == 4 || l == 6 || l == 9 || l == 11) {
                if (k <= 30 && k > 0) {
                    sucesso1 = 2;
                }
            }
            if (l == 2) {
                if ((v % 4 == 0 && v % 100 != 0) || v % 400 == 0) {
                    if (k <= 29) {
                        sucesso1 = 2;
                    } else {
                        if (k <= 28) {
                            sucesso1 = 2;
                        }
                    }
                }
            }
        }
        if (v < m) {
            sucesso3 = 1;
        }
        if (v == m) {
            if (l < s) {
                sucesso2 = 1;

            } else if (l == s) {
                if (g > k) {
                    sucesso2 = 1;
                }
            }
        }

        idadedaPessoa = v - m;
        if (s > l) {
            idadedaPessoa = idadedaPessoa - 1;
        } else if (s == l) {
            if (g > k) {
                idadedaPessoa = idadedaPessoa - 1;
            }

        }
        if(sucesso3==0){
            if (sucesso2 == 0) {
                if (sucesso == 1) {
                    if (sucesso1 == 2) {
                        switch (c) {
                            case 'a':
                                printf("AGE: %d\n", idadedaPessoa);
                                break;
                            case 'c':
                                if(idadedaPessoa<=13){
                                    printf("CATEGORY U14\n");
                                } else if(idadedaPessoa>13&&idadedaPessoa<=17){
                                    printf("CATEGORY U18\n");
                                } else if(idadedaPessoa>17&&idadedaPessoa<29){
                                    printf("CATEGORY O\n");
                                } else if(idadedaPessoa>=29&&idadedaPessoa<40){
                                    printf("CATEGORY O30\n");
                                }else{
                                    printf("CATEGORY O40\n");
                                }
                                break;
                            case 't':
                                printf("AGE: %d\n", idadedaPessoa);
                                if(idadedaPessoa<=15){
                                    printf("CATEGORY U14\n");
                                } else if(idadedaPessoa>15&&idadedaPessoa<=19){
                                    printf("CATEGORY U18\n");
                                } else if(idadedaPessoa>19&&idadedaPessoa<29){
                                    printf("CATEGORY O\n");
                                } else if(idadedaPessoa>=29&&idadedaPessoa<39){
                                    printf("CATEGORY O30\n");
                                }else{
                                    printf("CATEGORY 040\n");
                                }
                                printf("POSSIBLE CATEGORIES:\n");
                                if(idadedaPessoa<=15){
                                    printf("U14\n");
                                }
                                if(idadedaPessoa<=19){
                                    printf("U18\n");
                                }
                                if(idadedaPessoa>=39){
                                    printf("040\n");
                                }
                                if(idadedaPessoa>=29){
                                    printf("O30\n");
                                }
                                printf("O\n");
                                break;
                        }
                    } else {
                        printf("Invalid date");
                    }
                } else {
                    printf("Invalid date");
                }
            } else {
                printf("Invalid date");
            }
        } else {
            printf("Invalid date");
        }
        } else{
            printf("Opcao invalida\n");
        }

        return 0;
    }