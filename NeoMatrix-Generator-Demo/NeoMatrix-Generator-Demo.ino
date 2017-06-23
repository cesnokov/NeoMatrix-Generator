
#include <Adafruit_NeoPixel.h>
#include <Adafruit_NeoMatrix.h>

#define PIN 3  // Pin to which the input of the matrix is connected

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(13, 10, PIN,
      NEO_MATRIX_TOP + NEO_MATRIX_LEFT +
      NEO_MATRIX_ROWS + NEO_MATRIX_PROGRESSIVE,
      NEO_GRB + NEO_KHZ800);


void setup() {
    matrix.begin();
    matrix.setBrightness(20);
}

void loop() {
    image1();
    delay(10000);
}

void image1() {
    matrix.fillScreen(0);
    matrix.drawPixel(3, 0, matrix.Color(125, 102, 8));
    matrix.drawPixel(4, 0, matrix.Color(255, 255, 0));
    matrix.drawPixel(5, 0, matrix.Color(255, 255, 0));
    matrix.drawPixel(6, 0, matrix.Color(255, 255, 0));
    matrix.drawPixel(7, 0, matrix.Color(255, 255, 0));
    matrix.drawPixel(8, 0, matrix.Color(255, 255, 0));
    matrix.drawPixel(9, 0, matrix.Color(125, 102, 8));
    matrix.drawPixel(2, 1, matrix.Color(125, 102, 8));
    matrix.drawPixel(3, 1, matrix.Color(255, 255, 0));
    matrix.drawPixel(4, 1, matrix.Color(255, 255, 0));
    matrix.drawPixel(5, 1, matrix.Color(255, 255, 0));
    matrix.drawPixel(6, 1, matrix.Color(255, 255, 0));
    matrix.drawPixel(7, 1, matrix.Color(255, 255, 0));
    matrix.drawPixel(8, 1, matrix.Color(255, 255, 0));
    matrix.drawPixel(9, 1, matrix.Color(255, 255, 0));
    matrix.drawPixel(10, 1, matrix.Color(125, 102, 8));
    matrix.drawPixel(1, 2, matrix.Color(125, 102, 8));
    matrix.drawPixel(2, 2, matrix.Color(255, 255, 0));
    matrix.drawPixel(3, 2, matrix.Color(255, 255, 255));
    matrix.drawPixel(4, 2, matrix.Color(255, 255, 255));
    matrix.drawPixel(5, 2, matrix.Color(255, 255, 0));
    matrix.drawPixel(6, 2, matrix.Color(255, 255, 0));
    matrix.drawPixel(7, 2, matrix.Color(255, 255, 0));
    matrix.drawPixel(8, 2, matrix.Color(255, 255, 255));
    matrix.drawPixel(9, 2, matrix.Color(255, 255, 255));
    matrix.drawPixel(10, 2, matrix.Color(255, 255, 0));
    matrix.drawPixel(11, 2, matrix.Color(125, 102, 8));
    matrix.drawPixel(0, 3, matrix.Color(125, 102, 8));
    matrix.drawPixel(1, 3, matrix.Color(255, 255, 0));
    matrix.drawPixel(2, 3, matrix.Color(255, 255, 0));
    matrix.drawPixel(3, 3, matrix.Color(255, 255, 255));
    matrix.drawPixel(4, 3, matrix.Color(0, 0, 0));
    matrix.drawPixel(5, 3, matrix.Color(255, 255, 0));
    matrix.drawPixel(6, 3, matrix.Color(255, 255, 0));
    matrix.drawPixel(7, 3, matrix.Color(255, 255, 0));
    matrix.drawPixel(8, 3, matrix.Color(0, 0, 0));
    matrix.drawPixel(9, 3, matrix.Color(255, 255, 255));
    matrix.drawPixel(10, 3, matrix.Color(255, 255, 0));
    matrix.drawPixel(11, 3, matrix.Color(255, 255, 0));
    matrix.drawPixel(12, 3, matrix.Color(125, 102, 8));
    matrix.drawPixel(0, 4, matrix.Color(125, 102, 8));
    matrix.drawPixel(1, 4, matrix.Color(255, 255, 0));
    matrix.drawPixel(2, 4, matrix.Color(255, 255, 0));
    matrix.drawPixel(3, 4, matrix.Color(255, 255, 255));
    matrix.drawPixel(4, 4, matrix.Color(0, 0, 0));
    matrix.drawPixel(5, 4, matrix.Color(255, 255, 0));
    matrix.drawPixel(6, 4, matrix.Color(255, 255, 0));
    matrix.drawPixel(7, 4, matrix.Color(255, 255, 0));
    matrix.drawPixel(8, 4, matrix.Color(0, 0, 0));
    matrix.drawPixel(9, 4, matrix.Color(255, 255, 255));
    matrix.drawPixel(10, 4, matrix.Color(255, 255, 0));
    matrix.drawPixel(11, 4, matrix.Color(255, 255, 0));
    matrix.drawPixel(12, 4, matrix.Color(125, 102, 8));
    matrix.drawPixel(0, 5, matrix.Color(125, 102, 8));
    matrix.drawPixel(1, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(2, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(3, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(4, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(5, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(6, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(7, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(8, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(9, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(10, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(11, 5, matrix.Color(255, 255, 0));
    matrix.drawPixel(12, 5, matrix.Color(125, 102, 8));
    matrix.drawPixel(0, 6, matrix.Color(125, 102, 8));
    matrix.drawPixel(1, 6, matrix.Color(255, 255, 0));
    matrix.drawPixel(2, 6, matrix.Color(255, 255, 0));
    matrix.drawPixel(3, 6, matrix.Color(255, 0, 0));
    matrix.drawPixel(4, 6, matrix.Color(255, 255, 0));
    matrix.drawPixel(5, 6, matrix.Color(255, 255, 0));
    matrix.drawPixel(6, 6, matrix.Color(255, 255, 0));
    matrix.drawPixel(7, 6, matrix.Color(255, 255, 0));
    matrix.drawPixel(8, 6, matrix.Color(255, 255, 0));
    matrix.drawPixel(9, 6, matrix.Color(255, 0, 0));
    matrix.drawPixel(10, 6, matrix.Color(255, 255, 0));
    matrix.drawPixel(11, 6, matrix.Color(255, 255, 0));
    matrix.drawPixel(12, 6, matrix.Color(125, 102, 8));
    matrix.drawPixel(1, 7, matrix.Color(125, 102, 8));
    matrix.drawPixel(2, 7, matrix.Color(255, 255, 0));
    matrix.drawPixel(3, 7, matrix.Color(255, 255, 0));
    matrix.drawPixel(4, 7, matrix.Color(255, 0, 0));
    matrix.drawPixel(5, 7, matrix.Color(255, 0, 0));
    matrix.drawPixel(6, 7, matrix.Color(255, 0, 0));
    matrix.drawPixel(7, 7, matrix.Color(255, 0, 0));
    matrix.drawPixel(8, 7, matrix.Color(255, 0, 0));
    matrix.drawPixel(9, 7, matrix.Color(255, 255, 0));
    matrix.drawPixel(10, 7, matrix.Color(255, 255, 0));
    matrix.drawPixel(11, 7, matrix.Color(125, 102, 8));
    matrix.drawPixel(2, 8, matrix.Color(125, 102, 8));
    matrix.drawPixel(3, 8, matrix.Color(255, 255, 0));
    matrix.drawPixel(4, 8, matrix.Color(255, 255, 0));
    matrix.drawPixel(5, 8, matrix.Color(100, 30, 22));
    matrix.drawPixel(6, 8, matrix.Color(100, 30, 22));
    matrix.drawPixel(7, 8, matrix.Color(100, 30, 22));
    matrix.drawPixel(8, 8, matrix.Color(255, 255, 0));
    matrix.drawPixel(9, 8, matrix.Color(255, 255, 0));
    matrix.drawPixel(10, 8, matrix.Color(125, 102, 8));
    matrix.drawPixel(3, 9, matrix.Color(125, 102, 8));
    matrix.drawPixel(4, 9, matrix.Color(255, 255, 0));
    matrix.drawPixel(5, 9, matrix.Color(255, 255, 0));
    matrix.drawPixel(6, 9, matrix.Color(255, 255, 0));
    matrix.drawPixel(7, 9, matrix.Color(255, 255, 0));
    matrix.drawPixel(8, 9, matrix.Color(255, 255, 0));
    matrix.drawPixel(9, 9, matrix.Color(125, 102, 8));
    matrix.show();
}

//EOF
