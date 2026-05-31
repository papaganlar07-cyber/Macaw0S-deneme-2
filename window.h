// window.h: Basit pencere veri yapısı ve kişiselleştirme altyapısı (C++)
#pragma once
#include <string>
#include <vector>

struct Window {
    int x, y, width, height;
    std::string title;
    bool isSleeping;  // Çarpıya basınca uyutur, kapatmaz
    std::vector<std::string> skins; // Skin/tema dosya yolları
};
