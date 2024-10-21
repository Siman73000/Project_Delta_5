#include "display.h"
#include "util.h"
#include <stdint.h>

extern void clear_screen();
extern void print_string(char* str);
extern void print_nl();
extern char* int_to_string(int32_t v, char* buff, int32_t radix_base);

void kernel_main() {
    clear_screen();
    while (1) {
        char line[100];
        for (int32_t i = 1; i <= 35; ++i) {
            int_to_string(i, line, 10);
            print_string(line);
            print_nl();
        }
    }
}
