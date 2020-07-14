#include "mjolner.h"

void eeconfig_init_kb(void) {
    eeconfig_update_kb(0);
    eeconfig_init_user();
}
