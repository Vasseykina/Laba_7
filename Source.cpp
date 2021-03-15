#include "Header.h"
#include <string.h>
#include <math.h>
#include <string>
void ltoao(long number, std::string& res) {
    const char sym[] = "01234567";
    res.clear();
    size_t k = 0;
    unsigned long mask = 0x1;
    uint8_t num = 0;
    while (k < sizeof(long) * 8) {
        num += (number & (mask << k)) != 0 ? 1 << (k % 3) : 0;
        if ((k + 1) % 3 == 0) {
            res += sym[num];
            num = 0;
        }
        ++k;
    }
    res += sym[num];
    std::reverse(res.begin(), res.end());
}