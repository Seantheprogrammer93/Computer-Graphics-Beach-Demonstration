#pragma once
#include <windows.h>
#include <iostream>
#include <cmath>

#define e 2.718 // Define the approx. e constant

class LineProperties 
{
    HWND consoleHandle = GetConsoleWindow(); // Window handle
    HDC concoleDeviceContext = GetDC(consoleHandle);

    float slopeOfLine = 0.0; // slope
    float yIntercept = 5.0; // y-intercept
    float lineLength = e * 20; // line length
    float scaleFactor = 0.10; // scale factor
    int pixel = 0; // Pixel spacing

    COLORREF oceanColor = RGB(0, 155, 255); // Ocean color
    COLORREF sandColor = RGB(194, 178, 128); // Sand color

public:
    void generateBeach() 
    {
        for (double i = 0; i < lineLength; i += scaleFactor)
        {
            //---------------------------------------------------WATER--------------------------------------------------------
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 10) + (slopeOfLine + e) * cos(i)), oceanColor); // 1st line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 20) + (slopeOfLine + e) * cos(i)), oceanColor); // 2nd line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 30) + (slopeOfLine + e) * cos(i)), oceanColor); // 3rd line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 40) + (slopeOfLine + e) * cos(i)), oceanColor); // 4th line

            //----------------------------------------------------SAND--------------------------------------------------------
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 44) + (slopeOfLine) * i), sandColor); // 5th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 45) + (slopeOfLine) * i), sandColor); // 6th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 46) + (slopeOfLine) * i), sandColor); // 7th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 47) + (slopeOfLine) * i), sandColor); // 8th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 48) + (slopeOfLine) * i), sandColor); // 9th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 49) + (slopeOfLine)*i), sandColor); // 10th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 50) + (slopeOfLine)*i), sandColor); // 11th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 51) + (slopeOfLine)*i), sandColor); // 12th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 52) + (slopeOfLine)*i), sandColor); // 13th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 53) + (slopeOfLine)*i), sandColor); // 14th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 54) + (slopeOfLine)*i), sandColor); // 15th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 55) + (slopeOfLine)*i), sandColor); // 16th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 56) + (slopeOfLine)*i), sandColor); // 17th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 57) + (slopeOfLine)*i), sandColor); // 18th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 58) + (slopeOfLine)*i), sandColor); // 10th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 59) + (slopeOfLine)*i), sandColor); // 20th line
            SetPixel(concoleDeviceContext, pixel, (int)((yIntercept + 60) + (slopeOfLine)*i), sandColor); // 21st line

            pixel++; // Increment pixels
        }

        ReleaseDC(consoleHandle, concoleDeviceContext);
        std::cin.ignore();
    }
};
