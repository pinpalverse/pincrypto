#ifndef __PIN_CRYPTO
#define __PIN_CRYPTO

unsigned long djb2_hash(unsigned char* str){
    unsigned long hash = 5381;
    int c;

    while(c = *str++)
        hash = ((hash << 5) + hash) + c;

    return hash;
}



#endif