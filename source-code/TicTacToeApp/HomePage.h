#pragma once
/*
Home page view for TicTacToeApp
->3 buttons/routes; themeEdit, newMatch, viewReplays
->Simplify Logo
->App Header Text
*/
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Reflection;
using namespace System::Resources;

public ref class HomePage : public UserControl {
public:
    event EventHandler^ GoToThemeEditPage;
    event EventHandler^ GoToNewMatchOptionPage;
    event EventHandler^ GoToViewReplayOptionPage;
    HomePage() 
    {
        InitializeComponent();


        // Load the resource using ResourceManager
        // Retrieve the image from the resources
        System::Resources::ResourceManager^ rm = gcnew System::Resources::ResourceManager("TicTacToeApp.Resource", Assembly::GetExecutingAssembly());
        System::Drawing::Image^ logoImage = safe_cast<System::Drawing::Image^>(rm->GetObject("newLogo"));
        this->simplifyLogo->Image = logoImage;
            //System::Drawing::Image::FromFile(Application::StartupPath + "\\Resources\\newLogo.png");
    }
private: System::Windows::Forms::Button^ EditThemeBtn;
private: System::Windows::Forms::Button^ ViewReplaysBtn;
private: System::Windows::Forms::Label^ tictactoeHeaderLabel;
private: System::Windows::Forms::Label^ simplifyLabel;
private: System::Windows::Forms::PictureBox^ simplifyLogo;
private: System::Windows::Forms::Button^ NewMatchBtn;

private:
    void InitializeComponent() 
    {
        this->EditThemeBtn = (gcnew System::Windows::Forms::Button());
        this->ViewReplaysBtn = (gcnew System::Windows::Forms::Button());
        this->NewMatchBtn = (gcnew System::Windows::Forms::Button());
        this->tictactoeHeaderLabel = (gcnew System::Windows::Forms::Label());
        this->simplifyLabel = (gcnew System::Windows::Forms::Label());
        this->simplifyLogo = (gcnew System::Windows::Forms::PictureBox());
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simplifyLogo))->BeginInit();
        this->SuspendLayout();
        // 
        // EditThemeBtn
        // 
        this->EditThemeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->EditThemeBtn->Location = System::Drawing::Point(217, 406);
        this->EditThemeBtn->Name = L"EditThemeBtn";
        this->EditThemeBtn->Size = System::Drawing::Size(171, 65);
        this->EditThemeBtn->TabIndex = 24;
        this->EditThemeBtn->Text = L"Edit Theme";
        this->EditThemeBtn->UseVisualStyleBackColor = true;
        this->EditThemeBtn->Click += gcnew System::EventHandler(this, &HomePage::EditThemeBtn_Click);
        // 
        // ViewReplaysBtn
        // 
        this->ViewReplaysBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->ViewReplaysBtn->Location = System::Drawing::Point(217, 295);
        this->ViewReplaysBtn->Name = L"ViewReplaysBtn";
        this->ViewReplaysBtn->Size = System::Drawing::Size(171, 65);
        this->ViewReplaysBtn->TabIndex = 23;
        this->ViewReplaysBtn->Text = L"View Replays";
        this->ViewReplaysBtn->UseVisualStyleBackColor = true;
        this->ViewReplaysBtn->Click += gcnew System::EventHandler(this, &HomePage::ViewReplaysBtn_Click);
        // 
        // NewMatchBtn
        // 
        this->NewMatchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->NewMatchBtn->Location = System::Drawing::Point(217, 181);
        this->NewMatchBtn->Name = L"NewMatchBtn";
        this->NewMatchBtn->Size = System::Drawing::Size(171, 65);
        this->NewMatchBtn->TabIndex = 22;
        this->NewMatchBtn->Text = L"New Match";
        this->NewMatchBtn->UseVisualStyleBackColor = true;
        this->NewMatchBtn->Click += gcnew System::EventHandler(this, &HomePage::NewMatchBtn_Click);
        // 
        // tictactoeHeaderLabel
        // 
        this->tictactoeHeaderLabel->AutoSize = true;
        this->tictactoeHeaderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->tictactoeHeaderLabel->Location = System::Drawing::Point(207, 57);
        this->tictactoeHeaderLabel->Name = L"tictactoeHeaderLabel";
        this->tictactoeHeaderLabel->Size = System::Drawing::Size(276, 55);
        this->tictactoeHeaderLabel->TabIndex = 27;
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
        this->simplifyLabel->TabIndex = 28;
        this->simplifyLabel->Text = L"By Simplify";
        // 
        // simplifyLogo
        // 
        this->simplifyLogo->Location = System::Drawing::Point(69, 57);
        this->simplifyLogo->Name = L"simplifyLogo";
        this->simplifyLogo->Size = System::Drawing::Size(100, 100);
        this->simplifyLogo->TabIndex = 29;
        this->simplifyLogo->TabStop = false;
        // 
        // HomePage
        // 
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
        this->AutoSize = true;
        this->Controls->Add(this->simplifyLogo);
        this->Controls->Add(this->simplifyLabel);
        this->Controls->Add(this->tictactoeHeaderLabel);
        this->Controls->Add(this->EditThemeBtn);
        this->Controls->Add(this->ViewReplaysBtn);
        this->Controls->Add(this->NewMatchBtn);
        this->Name = L"HomePage";
        this->Size = System::Drawing::Size(578, 544);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simplifyLogo))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();
    }
    private: System::Void EditThemeBtn_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        GoToThemeEditPage(this, EventArgs::Empty);
    }
    private: System::Void ViewReplaysBtn_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        GoToViewReplayOptionPage(this, EventArgs::Empty);
    }
    private: System::Void NewMatchBtn_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        GoToNewMatchOptionPage(this, EventArgs::Empty);
    }
};
