// dock.cpp: Dock/görev çubuğu temel işlevleri (C++)
#include "dock.h"
#include <iostream>

void draw_dock(const std::vector<DockItem>& items) {
    std::cout << "=== DOCK ===\n";
    for (const auto& item : items) {
        std::cout << "[App: " << item.appName << (item.isRunning ? "*" : "") << "] ";
    }
    std::cout << "\n============\n";
    // MAHREMİYET: Ağ, telemetri, dış erişim kodu içermez.
}

void launch_dock_item(const DockItem& item) {
    std::cout << item.appName << " başlatılıyor..." << std::endl;
    // HER ŞEY LOKALDE: Uygulama başlatma sadece sistemde görünür.
}
