#pragma once

/*
Theme edit page for selecting a new theme
-3 default modes; light, dark, wcsu
*/

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Resources;
using namespace System::Reflection;
public ref class ThemeEditPage : public UserControl {
public:
    event EventHandler<int>^ GoToHome;

    ThemeEditPage() 
    {
        InitializeComponent();
        // Load the resource using ResourceManager
         // Retrieve the image from the resources
        System::Resources::ResourceManager^ rm = gcnew System::Resources::ResourceManager("TicTacToeApp.Resource", Assembly::GetExecutingAssembly());
        System::Drawing::Image^ logoImage = safe_cast<System::Drawing::Image^>(rm->GetObject("newLogo"));
        this->simplifyLogo->Image = logoImage;
        //this->simplifyLogo->Image = System::Drawing::Image::FromFile(Application::StartupPath + "\\Resources\\newLogo.png");
    }
private: int themeStyle = 1;
private: System::Windows::Forms::Label^ tictactoeHeaderLabel;
private: System::Windows::Forms::Label^ simplifyLabel;
private: System::Windows::Forms::Label^ selectThemLabel;
private: System::Windows::Forms::ComboBox^ themeComboBox;
private: System::Windows::Forms::PictureBox^ simplifyLogo;

private:
    Button^ btnGoToHome;

    void InitializeComponent() {
        this->btnGoToHome = (gcnew System::Windows::Forms::Button());
        this->tictactoeHeaderLabel = (gcnew System::Windows::Forms::Label());
        this->simplifyLabel = (gcnew System::Windows::Forms::Label());
        this->selectThemLabel = (gcnew System::Windows::Forms::Label());
        this->themeComboBox = (gcnew System::Windows::Forms::ComboBox());
        this->simplifyLogo = (gcnew System::Windows::Forms::PictureBox());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simplifyLogo))->BeginInit();
        this->SuspendLayout();
        // 
        // btnGoToHome
        // 
        this->btnGoToHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->btnGoToHome->Location = System::Drawing::Point(253, 354);
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
        this->selectThemLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
        this->selectThemLabel->Location = System::Drawing::Point(237, 219);
        this->selectThemLabel->Name = L"selectThemLabel";
        this->selectThemLabel->Size = System::Drawing::Size(183, 29);
        this->selectThemLabel->TabIndex = 30;
        this->selectThemLabel->Text = L"Select a Theme";
        // 
        // themeComboBox
        // 
        this->themeComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->themeComboBox->FormattingEnabled = true;
        this->themeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Light Theme", L"Dark Theme", L"WCSU Theme" });
        this->themeComboBox->Location = System::Drawing::Point(222, 246);
        this->themeComboBox->Name = L"themeComboBox";
        this->themeComboBox->Size = System::Drawing::Size(160, 33);
        this->themeComboBox->TabIndex = 31;
        this->themeComboBox->Text = L"Light Theme";
        this->themeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ThemeEditPage::themeComboBox_SelectedIndexChanged);
        // 
        // simplifyLogo
        // 
        this->simplifyLogo->Location = System::Drawing::Point(69, 57);
        this->simplifyLogo->Name = L"simplifyLogo";
        this->simplifyLogo->Size = System::Drawing::Size(100, 100);
        this->simplifyLogo->TabIndex = 32;
        this->simplifyLogo->TabStop = false;
        // 
        // ThemeEditPage
        // 
        this->Controls->Add(this->simplifyLogo);
        this->Controls->Add(this->themeComboBox);
        this->Controls->Add(this->selectThemLabel);
        this->Controls->Add(this->simplifyLabel);
        this->Controls->Add(this->tictactoeHeaderLabel);
        this->Controls->Add(this->btnGoToHome);
        this->Name = L"ThemeEditPage";
        this->Size = System::Drawing::Size(600, 600);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simplifyLogo))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    private: System::Void btnGoToHome_Click_1(System::Object^ sender, System::EventArgs^ e) 
    {
        GoToHome(this, themeStyle);
    }
    private: System::Void themeComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
    {
        // Check the selected item in the combo box
        if (themeComboBox->SelectedItem->ToString() == "Light Theme")
        {
            themeStyle = 1;
            btnGoToHome->Text = "Save";
        }
        if (themeComboBox->SelectedItem->ToString() == "Dark Theme")
        {
            themeStyle = 2;
            btnGoToHome->Text = "Save";
        }
        if (themeComboBox->SelectedItem->ToString() == "WCSU Theme")
        {
            themeStyle = 3;
            btnGoToHome->Text = "Save";
        }
    }
};
