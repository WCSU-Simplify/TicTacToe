#pragma once

using namespace System;
using namespace System::Windows::Forms;

public ref class ThemeEditPage : public UserControl {
public:
    event EventHandler<int>^ GoToHome;

    ThemeEditPage() {
        InitializeComponent();
    }
private: int themeStyle = 1;
private: System::Windows::Forms::Label^ tictactoeHeaderLabel;
private: System::Windows::Forms::Label^ simplifyLabel;
private: System::Windows::Forms::Label^ selectThemLabel;
private: System::Windows::Forms::ComboBox^ themeComboBox;


private: System::Windows::Forms::Button^ saveThemeBtn;



public:

public:


public:





private:
    Button^ btnGoToHome;

    void InitializeComponent() {
        this->btnGoToHome = (gcnew System::Windows::Forms::Button());
        this->tictactoeHeaderLabel = (gcnew System::Windows::Forms::Label());
        this->simplifyLabel = (gcnew System::Windows::Forms::Label());
        this->selectThemLabel = (gcnew System::Windows::Forms::Label());
        this->themeComboBox = (gcnew System::Windows::Forms::ComboBox());
        this->saveThemeBtn = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // btnGoToHome
        // 
        this->btnGoToHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->btnGoToHome->Location = System::Drawing::Point(75, 57);
        this->btnGoToHome->Name = L"btnGoToHome";
        this->btnGoToHome->Size = System::Drawing::Size(94, 37);
        this->btnGoToHome->TabIndex = 0;
        this->btnGoToHome->Text = L"Return";
        this->btnGoToHome->Click += gcnew System::EventHandler(this, &ThemeEditPage::btnGoToHome_Click_1);
        // 
        // tictactoeHeaderLabel
        // 
        this->tictactoeHeaderLabel->AutoSize = true;
        this->tictactoeHeaderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->tictactoeHeaderLabel->Location = System::Drawing::Point(207, 57);
        this->tictactoeHeaderLabel->Name = L"tictactoeHeaderLabel";
        this->tictactoeHeaderLabel->Size = System::Drawing::Size(276, 55);
        this->tictactoeHeaderLabel->TabIndex = 26;
        this->tictactoeHeaderLabel->Text = L"Tic Tac Toe";
        // 
        // simplifyLabel
        // 
        this->simplifyLabel->AutoSize = true;
        this->simplifyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->simplifyLabel->Location = System::Drawing::Point(254, 116);
        this->simplifyLabel->Name = L"simplifyLabel";
        this->simplifyLabel->Size = System::Drawing::Size(155, 32);
        this->simplifyLabel->TabIndex = 29;
        this->simplifyLabel->Text = L"By Simplify";
        // 
        // selectThemLabel
        // 
        this->selectThemLabel->AutoSize = true;
        this->selectThemLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->selectThemLabel->Location = System::Drawing::Point(243, 165);
        this->selectThemLabel->Name = L"selectThemLabel";
        this->selectThemLabel->Size = System::Drawing::Size(212, 32);
        this->selectThemLabel->TabIndex = 30;
        this->selectThemLabel->Text = L"Select a Theme";
        // 
        // themeComboBox
        // 
        this->themeComboBox->FormattingEnabled = true;
        this->themeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Light Theme", L"Dark Theme", L"WCSU Theme" });
        this->themeComboBox->Location = System::Drawing::Point(249, 200);
        this->themeComboBox->Name = L"themeComboBox";
        this->themeComboBox->Size = System::Drawing::Size(121, 28);
        this->themeComboBox->TabIndex = 31;
        this->themeComboBox->Text = L"Light Theme";
        this->themeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ThemeEditPage::themeComboBox_SelectedIndexChanged);
        // 
        // saveThemeBtn
        // 
        this->saveThemeBtn->Location = System::Drawing::Point(260, 272);
        this->saveThemeBtn->Name = L"saveThemeBtn";
        this->saveThemeBtn->Size = System::Drawing::Size(75, 33);
        this->saveThemeBtn->TabIndex = 34;
        this->saveThemeBtn->Text = L"Save";
        this->saveThemeBtn->UseVisualStyleBackColor = true;
        // 
        // ThemeEditPage
        // 
        this->Controls->Add(this->saveThemeBtn);
        this->Controls->Add(this->themeComboBox);
        this->Controls->Add(this->selectThemLabel);
        this->Controls->Add(this->simplifyLabel);
        this->Controls->Add(this->tictactoeHeaderLabel);
        this->Controls->Add(this->btnGoToHome);
        this->Name = L"ThemeEditPage";
        this->Size = System::Drawing::Size(600, 600);
        this->Load += gcnew System::EventHandler(this, &ThemeEditPage::ThemeEditPage_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    private: System::Void btnGoToHome_Click_1(System::Object^ sender, System::EventArgs^ e) 
    {
        //
        GoToHome(this, themeStyle);
    }
private: System::Void ThemeEditPage_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
    private: System::Void themeComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
    {
        // Check the selected item in the combo box
        if (themeComboBox->SelectedItem->ToString() == "Light Theme")
        {
            themeStyle = 1;
        }
        if (themeComboBox->SelectedItem->ToString() == "Dark Theme")
        {
            themeStyle = 2;
        }
        if (themeComboBox->SelectedItem->ToString() == "WCSU Theme")
        {
            themeStyle = 3;
        }
    }
};
