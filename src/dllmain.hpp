#pragma once
#include <Windows.h>
#include <amethyst/runtime/AmethystContext.hpp>
#include <amethyst/runtime/ModContext.hpp>
#include <amethyst/runtime/events/GameEvents.hpp>
#include <amethyst/runtime/events/RenderingEvents.hpp>

#include <iomanip>
#include <iostream>

#define ModFunction extern "C" __declspec(dllexport)

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    return TRUE;
}

void onRenderUI(AfterRenderUIEvent& event);
