// theme_manager.h: Tema/kişiselleştirme yöneticisi başlık dosyası (C++)
#pragma once
#include <string>
#include <map>

struct Theme {
    std::string name;
    std::string baseColor;
    std::string accentColor;
    std::string fontName;
    std::map<std::string, std::string> assetPaths; // ikonlar, resimler, widget skinleri
};

void load_theme(const std::string& configPath);
void apply_theme(const Theme& theme);
Theme get_current_theme();
