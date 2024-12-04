#pragma once
#pragma once
#include <Windows.h>
#include <vcclr.h> // For gcroot
#include "../TicTacToeApp/MatchGameplayPage.h"
#include <stdexcept>

class MatchGameplayPageWrapper {
private:
    gcroot<TicTacToeApp::MatchGameplayPage^> _page;
public:
    MatchGameplayPageWrapper() : _page(gcnew TicTacToeApp::MatchGameplayPage(false, false, 0)) {}

    void ChangeSymbolBoxColors1(int r, int g, int b) {
        System::Drawing::Color color = System::Drawing::Color::FromArgb(r, g, b);
        _page->changeSymbolBoxColors1(color);
    }

    int GetSymbolBoxColorArgb(int index) {
        switch (index) {
        case 0: return _page->symbolBox0->BackColor.ToArgb();
        case 2: return _page->symbolBox2->BackColor.ToArgb();
        case 4: return _page->symbolBox4->BackColor.ToArgb();
        case 6: return _page->symbolBox6->BackColor.ToArgb();
        case 8: return _page->symbolBox8->BackColor.ToArgb();
        default: throw std::out_of_range("Invalid index");
        }
    }
};
