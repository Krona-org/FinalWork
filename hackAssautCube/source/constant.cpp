#include "constants.h"

HMODULE hModule = GetModuleHandle(nullptr);
uintptr_t exeBaseAdress = (uintptr_t)GetModuleHandle(nullptr);

extern Player* localPlaterPtr = *(Player**)(exeBaseAdress + 0x0017E0A8);