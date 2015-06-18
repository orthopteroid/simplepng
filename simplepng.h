#ifndef _PNG256x256x1_H_
#define _PNG256x256x1_H_

#include <stdint.h>

// 256x256x1 uncompressed monochrome png generator
// orthopteroid@gmail.com
// MIT license

void simplepng_save_256x256x1(char* fn, uint8_t* buffer32x256);

#endif // _PNG256x256x1_H_
