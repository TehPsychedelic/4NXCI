#ifndef NXCI_EXTKEYS_H
#define NXCI_EXTKEYS_H

#include <string.h>
#include "types.h"
#include "utils.h"
#include "settings.h"

void parse_hex_key(unsigned char *key, const char *hex, unsigned int len);
void extkeys_initialize_keyset(nxci_keyset_t *keyset, FILE *f);

#endif
