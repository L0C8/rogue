#include "raylib.h"

#include "gui.hpp"

namespace {
void DrawGui(const Font& font) {
    // Placeholder HUD: title bar and basic labels until real data is wired.
    DrawRectangle(0, 0, 640, 32, (Color){30, 33, 45, 255});
    DrawTextEx(font, "Rogue", Vector2{10.0f, 8.0f}, 16, 1, LIGHTGRAY);
}
}  // namespace

void RunGame() {
    const int screenWidth = 640;
    const int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "Rogue");
    Font font = LoadFontEx("assets/fonts/NinBIOS.ttf", 16, nullptr, 0);
    SetTextureFilter(font.texture, TEXTURE_FILTER_POINT);
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTextEx(font, "Rogue", Vector2{10.0f, 10.0f}, 20, 1, DARKGRAY);
        DrawGui(font);
        EndDrawing();
    }

    UnloadFont(font);
    CloseWindow();
}
