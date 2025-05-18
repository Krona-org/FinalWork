// dllmain.cpp : Определяет точку входа для приложения DLL.
#include <iostream>
#include <Windows.h>
#include "constants.h"
#include "genCode.h"


void hook() {

}

    
void console()
{
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    freopen_s(&f, "CONIN$", "r", stdin);
    std::cout << "Console created " << std::endl;
    while (true)
    {
        std::string input;
        std::cin >> input;
        if (input == "exit")
            break;
        if (input == "up")
        {
            localPlaterPtr->pos.y += 5; // коммент еще один с тайно дернул  sdfasdfasf
        }
        if (input == "down")
        {
            localPlaterPtr->pos.y -= 5;
        }
        if (input == "print")
        {
            std::cout << "localPlaterPtr " << localPlaterPtr << std::endl;
        }
    }

    FreeConsole();
}







BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)console, nullptr, 0, nullptr);
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)hook, nullptr, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}