#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>


struct buff
{
  char *memory;
  unsigned long int length;
};

typedef struct buff buffStruct;

unsigned char hexChar(int number, int number2){
    unsigned char numStr;
    switch(number){
        case 0 :
            switch(number2){
                case 0:
                    return '\x0';
                case 1:
                    return '\x01';
                case 2:
                    return '\x02';
                case 3:
                    return '\x03';
                case 4:
                    return '\x04';
                case 5:
                    return '\x05';
                case 6:
                    return '\x06';
                case 7:
                    return '\x07';
                case 8:
                    return '\x08';
                case 9:
                    return '\x09';
                case 10:
                    return '\x0a';
                case 11:
                    return '\x0b';
                case 12:
                    return '\x0c';
                case 13:
                    return '\x0d';
                case 14:
                    return '\x0e';
                case 15:
                    return '\x0f';
            }
            break;
        case 1 :
            switch(number2){
                case 0:
                    return '\x10';
                case 1:
                    return '\x11';
                case 2:
                    return '\x12';
                case 3:
                    return '\x13';
                case 4:
                    return '\x14';
                case 5:
                    return '\x15';
                case 6:
                    return '\x16';
                case 7:
                    return '\x17';
                case 8:
                    return '\x18';
                case 9:
                    return '\x19';
                case 10:
                    return '\x1a';
                case 11:
                    return '\x1b';
                case 12:
                    return '\x1c';
                case 13:
                    return '\x1d';
                case 14:
                    return '\x1e';
                case 15:
                    return '\x1f';
            }
            break;
        case 2 :
            switch(number2){
                case 0:
                    return '\x20';
                case 1:
                    return '\x21';
                case 2:
                    return '\x22';
                case 3:
                    return '\x23';
                case 4:
                    return '\x24';
                case 5:
                    return '\x25';
                case 6:
                    return '\x26';
                case 7:
                    return '\x27';
                case 8:
                    return '\x28';
                case 9:
                    return '\x29';
                case 10:
                    return '\x2a';
                case 11:
                    return '\x2b';
                case 12:
                    return '\x2c';
                case 13:
                    return '\x2d';
                case 14:
                    return '\x2e';
                case 15:
                    return '\x2f';
            }
            break;
        case 3 :
            switch(number2){
                case 0:
                    return '\x30';
                case 1:
                    return '\x31';
                case 2:
                    return '\x32';
                case 3:
                    return '\x33';
                case 4:
                    return '\x34';
                case 5:
                    return '\x35';
                case 6:
                    return '\x36';
                case 7:
                    return '\x37';
                case 8:
                    return '\x38';
                case 9:
                    return '\x39';
                case 10:
                    return '\x3a';
                case 11:
                    return '\x3b';
                case 12:
                    return '\x3c';
                case 13:
                    return '\x3d';
                case 14:
                    return '\x3e';
                case 15:
                    return '\x3f';
            }
            break;
        case 4 :
            switch(number2){
                case 0:
                    return '\x40';
                case 1:
                    return '\x41';
                case 2:
                    return '\x42';
                case 3:
                    return '\x43';
                case 4:
                    return '\x44';
                case 5:
                    return '\x45';
                case 6:
                    return '\x46';
                case 7:
                    return '\x47';
                case 8:
                    return '\x48';
                case 9:
                    return '\x49';
                case 10:
                    return '\x4a';
                case 11:
                    return '\x4b';
                case 12:
                    return '\x4c';
                case 13:
                    return '\x4d';
                case 14:
                    return '\x4e';
                case 15:
                    return '\x4f';
            }
            break;
        case 5 :
            switch(number2){
                case 0:
                    return '\x50';
                case 1:
                    return '\x51';
                case 2:
                    return '\x52';
                case 3:
                    return '\x53';
                case 4:
                    return '\x54';
                case 5:
                    return '\x55';
                case 6:
                    return '\x56';
                case 7:
                    return '\x57';
                case 8:
                    return '\x58';
                case 9:
                    return '\x59';
                case 10:
                    return '\x5a';
                case 11:
                    return '\x5b';
                case 12:
                    return '\x5c';
                case 13:
                    return '\x5d';
                case 14:
                    return '\x5e';
                case 15:
                    return '\x5f';
            }
            break;
        case 6 :
            switch(number2){
                case 0:
                    return '\x60';
                case 1:
                    return '\x61';
                case 2:
                    return '\x62';
                case 3:
                    return '\x63';
                case 4:
                    return '\x64';
                case 5:
                    return '\x65';
                case 6:
                    return '\x66';
                case 7:
                    return '\x67';
                case 8:
                    return '\x68';
                case 9:
                    return '\x69';
                case 10:
                    return '\x6a';
                case 11:
                    return '\x6b';
                case 12:
                    return '\x6c';
                case 13:
                    return '\x6d';
                case 14:
                    return '\x6e';
                case 15:
                    return '\x6f';
            }
            break;
        case 7 :
            switch(number2){
                case 0:
                    return '\x70';
                case 1:
                    return '\x71';
                case 2:
                    return '\x72';
                case 3:
                    return '\x73';
                case 4:
                    return '\x74';
                case 5:
                    return '\x75';
                case 6:
                    return '\x76';
                case 7:
                    return '\x77';
                case 8:
                    return '\x78';
                case 9:
                    return '\x79';
                case 10:
                    return '\x7a';
                case 11:
                    return '\x7b';
                case 12:
                    return '\x7c';
                case 13:
                    return '\x7d';
                case 14:
                    return '\x7e';
                case 15:
                    return '\x7f';
            }
            break;
    }
    return '\x44';
}

unsigned char randomHex()
{
    unsigned char ret;
    int randNumber;
    int randNumber2;
    randNumber = (int)(rand() % (8));
    randNumber2 = (int)(rand() % 16);
    ret = hexChar(randNumber, randNumber2);
    return ret;
}

void printString(buffStruct *currentSeed){
    //printf("%sn", currentSeed->memory,)
    fwrite(currentSeed->memory,1,currentSeed->length,stdout);
    //fflush(stdout);
}

void printHex(buffStruct *currentSeed){
    char* cp = currentSeed->memory;
    for ( ; *cp != '\0'; ++cp )
    {
        printf("%02x", *cp);
    }
    //fwrite(currentSeed->memory,1,currentSeed->length,stdout);
    //fflush(stdout);
}

unsigned long int getLength(buffStruct *currentSeed){
    return currentSeed->length;
}


buffStruct *makeBuffer(char *seedPtr, unsigned long int seedLength)
{
    buffStruct *seedBuffer = (buffStruct *) malloc(sizeof(buffStruct));
    //printf("%ld",seedLength);
    char* buffer = (char *)malloc((seedLength + 1)* sizeof(char));
    memcpy(buffer, seedPtr, seedLength* sizeof(char));
    buffer[seedLength] = '\0';
    //fwrite(seedPtr,1,seedLength,stdout);
    seedBuffer->length = seedLength;
    seedBuffer->memory = buffer;
    free(seedPtr);
    return seedBuffer;
}

buffStruct *appendChar(buffStruct *currentSeed)
{
    //printf(" %s ", &(currentSeed->memory[0]));
    char *buffer;
    buffer = (char *)malloc((currentSeed->length + 10)* sizeof(char));
    //char bufString[(currentSeed->length + 10)* sizeof(char)] = "";
    memcpy(buffer, currentSeed->memory, (currentSeed->length)* sizeof(char));
    int curIdx = currentSeed->length;
    for(int idx = 0; idx < 10; idx++ ){
        buffer[curIdx + idx] = randomHex();
    }
    //fwrite(buffer,1,currentSeed->length,stdout);

    buffStruct *buffPtr = makeBuffer(buffer, currentSeed->length + 10);
    free(currentSeed);
    return buffPtr;
}


buffStruct *getSeed()
{
    //Open file __seed__
    FILE *fileptr;
    char *buffer;
    long filelen;
    buffStruct *currentSeed;

    fileptr = fopen("seed", "rb");
    fseek(fileptr, 0, SEEK_END);
    filelen = ftell(fileptr);
    rewind(fileptr);

    buffer = (char *)malloc((filelen+1) * sizeof(char));
    fread(buffer, (filelen+1), 1, fileptr);
    //fwrite(buffer,1,filelen * sizeof(char),stdout);
    fclose(fileptr);

    currentSeed = makeBuffer(buffer, (filelen) * sizeof(char));
    //fwrite(buffer,1,filelen +1,stdout);
    //printString(&currentSeed);
    return currentSeed;
}

buffStruct *updateSeed(buffStruct *currentSeed)
{
    buffStruct *newSeed;
    unsigned long int bufferLen;
    
    
    bufferLen = getLength(currentSeed);
    //printf(" %ld ", bufferLen);
    char *buffer;
    buffer = (char *)malloc(bufferLen * sizeof(char));
    memcpy(buffer, currentSeed->memory, bufferLen);
    unsigned char newHex;
 
    for(int chr_idx=0; chr_idx < bufferLen; chr_idx++ ){
        //printf("%02X ", *buffer[1]);
        if(rand() % 100 <= 13){
            newHex = randomHex();
            buffer[chr_idx] = newHex;
            //memcpy(buffer + (chr_idx * sizeof(char)), &newHex, 1);
        }
    }
    newSeed = makeBuffer(buffer, bufferLen * sizeof(char));
    free(currentSeed);
    return newSeed;
}





void main( int argc, char *argv[] )
{
    if( argc > 3){
        printf("To many arguments supplied");
    } else if( argc < 3 ){
        printf("Iterations argument missing.");
    }
    
    char *input_prng_seed = malloc(strlen(argv[1])+1);
    long prng_seed = strtol(argv[1], &input_prng_seed, 10);

    srand((unsigned)prng_seed);

    char *input_num_iterations = malloc(strlen(argv[2])+1);
    long numIterations = strtol(argv[2], &input_num_iterations, 10);

    //fwrite(input_num_iterations,1,1,stdout);
    //printf("Running");
    buffStruct *currentSeed = getSeed();
    for(int idx = 0; idx < (int)numIterations; idx++ ){
        if(( idx+1 ) % 500 == 0){
            //fwrite(currentSeed,1,currentSeed->length,stdout);
            currentSeed = appendChar(currentSeed);
        }
        currentSeed = updateSeed(currentSeed);
    }
    printString(currentSeed);
    //printHex(currentSeed);
    exit(0);
}
