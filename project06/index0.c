#include <graphics.h>
#include <conio.h>

void drawCat(int x, int y) {
    // Face
    circle(x, y, 100);  // Head

    // Eyes
    circle(x - 40, y - 30, 15);  // Left eye
    circle(x + 40, y - 30, 15);  // Right eye
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(x - 40, y - 30, WHITE); // Fill left eye
    floodfill(x + 40, y - 30, WHITE); // Fill right eye

    // Pupils
    circle(x - 40, y - 30, 5);
    circle(x + 40, y - 30, 5);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(x - 40, y - 30, BLACK);
    floodfill(x + 40, y - 30, BLACK);

    // Nose
    circle(x, y, 7);
    setfillstyle(SOLID_FILL, RED);
    floodfill(x, y, WHITE); // Fill nose


    // Smile
    arc(x, y + 20, 210, 330, 40);

    // Eyebrows (Adjusted)
    line(x - 50, y - 50, x - 25, y - 55);
    line(x + 50, y - 50, x + 25, y - 55);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    drawCat(250, 200); // Draw the improved cat face

    getch();
    closegraph();
    return 0;
}
