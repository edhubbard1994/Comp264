#include <stdio.h>
#include <stdlib.h>



    typedef enum {ACASE, BCASE, CCASE, DCASE, ECASE} modetype;

    long switch4 (long *p1, long *p2, modetype action){
        long result;
        int x;
        switch (action)
        {
            case ACASE:
                result = *p1;
                result -= *p2;
                *p2 = result;
                break;

            case BCASE:
                *p1 = 31;
                result = *p2;
                break;

            case CCASE:
                result = *p1;
                action = result;
                action += *p2;
                *p1 = action;
                break;

            case DCASE:
                result = *p2;
                *p1 = result;
                x = 24;
                break;

            case ECASE:
                x= 24;
                break;

            default:
                x = 24;
                break;
        }
        return result;
    }

int main(int argv, char** argc){
    return 0;
}
