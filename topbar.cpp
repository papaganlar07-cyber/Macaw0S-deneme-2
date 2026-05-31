// topbar.cpp: Modern üst bar (top bar) temel fonksiyonları (C++)
#include "topbar.h"
#include <iostream>

void draw_top_bar(const std::vector<TopBarWidget>& widgets) {
    std::cout << "=== ÜST BAR ===\n";
    for (const auto& widget : widgets) {
        std::cout << "[" << widget.name << "] ";
    }
    std::cout << "\n===============\n";
}

void update_top_bar_widget(const std::string& name) {
    std::cout << "Widget güncellendi: " << name << std::endl;
}
