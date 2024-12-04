#include "pch.h"
#include <gtest/gtest.h>
#include "../TicTacToeApp/MatchGameplayPage.h"

using namespace System;
using namespace System::Drawing;

TEST(MatchGameplayPageTests, ChangeSymbolBoxColorsTest) 
{
    // Arrange
    TicTacToeApp::MatchGameplayPage^ page = gcnew TicTacToeApp::MatchGameplayPage();
    Color expectedColor = Color::Red;

    // Act
    page->changeSymbolBoxColors1(expectedColor);

    // Assert
    ASSERT_EQ(expectedColor.ToArgb(), page->symbolBox0->BackColor.ToArgb());
    ASSERT_EQ(expectedColor.ToArgb(), page->symbolBox2->BackColor.ToArgb());
    ASSERT_EQ(expectedColor.ToArgb(), page->symbolBox4->BackColor.ToArgb());
    ASSERT_EQ(expectedColor.ToArgb(), page->symbolBox6->BackColor.ToArgb());
    ASSERT_EQ(expectedColor.ToArgb(), page->symbolBox8->BackColor.ToArgb());
}