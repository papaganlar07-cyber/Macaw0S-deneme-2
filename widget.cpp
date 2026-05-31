// widget.cpp: Masaüstü widget sistemi temel işlevleri (C++)
#include "widget.h"
#include <iostream>

void draw_widget(const Widget& widget) {
    std::cout << "[Widget: " << widget.name << ", Tip: " << widget.type << "]\n";
    // KOD MAHREMİYETİ İÇİN: Sunucuya veri gönderilmez! Tüm loglar sadece terminale yazılır.
}

void update_widget(Widget& widget) {
    std::cout << widget.name << " widget'ı güncellendi." << std::endl;
    // UYARI: Hiçbir widget sistem dışına bilgi aktarmaz.
}
