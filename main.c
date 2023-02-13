#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "aes.h"

int main() {
    unsigned char block[16];
    unsigned char roundKey[176];
    
    unsigned char key[16] = {
        0x02, 0x03, 0x01, 0x01,
        0x01, 0x02, 0x03, 0x01,
        0x01, 0x01, 0x02, 0x03,
        0x03, 0x01, 0x01, 0x02
    };

    for (int i = 0; i < 16; i++) {
        block[i] =  0x01;
    }
    
    keyExpansion(key, roundKey);
    encrypt(block, roundKey);
    decrypt(block, roundKey);
    displayBlock(block);

}