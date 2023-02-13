#include <complex.h>

void subBytes(unsigned char block []);
void subBytesColumn(unsigned char block []);
void invSubBytes(unsigned char block []);

void rotate(unsigned char block[], int row);
void shiftRows(unsigned char block []);
void invShiftRows(unsigned char block []);

void mixColumns(unsigned char block []);
void mixColumns(unsigned char block []);
void invMixColumns(unsigned char block []);

void addRoundKey(unsigned char block [], unsigned char roundKey []);

void keyExpansion(unsigned char key [], unsigned char roundKey []);

void displayBlock(unsigned char block []);
void displayRoundKey(unsigned char roundKey[]);

void encrypt(unsigned char plaintext[], unsigned char key[]);
void decrypt(unsigned char plaintext[], unsigned char key[]);
