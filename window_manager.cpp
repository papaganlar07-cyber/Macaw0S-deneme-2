// window_manager.cpp: Basit pencere yöneticisi ve kişiselleştirme örneği (C++)
#include "window.h"
#include <vector>
#include <iostream>

std::vector<Window*> windows;

void draw_window(Window* win) {
    std::cout << (win->isSleeping ? "[UYKUDA] " : "") << win->title << "\n";
    // Skin ekleme noktası
    if (!win->skins.empty()) {
        std::cout << "Skin: " << win->skins[0] << std::endl;
    }
}

void sleep_window(Window* win) {
    win->isSleeping = true;
}

void wakeup_window(Window* win) {
    win->isSleeping = false;
}