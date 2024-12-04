#pragma once

/*
Main Operation
->handles the switching of pages and data passage to pages
*/

#include "HomePage.h"
#include "ThemeEditPage.h"
#include "NewMatchOptionPage.h"
#include "ViewReplayOptionPage.h"
#include "MatchGameplayPage.h"

namespace TicTacToeApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MainForm : public System::Windows::Forms::Form
    {
    public:
        MainForm(void)
        {
            InitializeComponent();
            ShowHomePage();
        }

    protected:
        ~MainForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        Panel^ mainPanel;
        HomePage^ homePage;
        ThemeEditPage^ themeEditPage;
        NewMatchOptionPage^ newMatchOptionPage;
        ViewReplayOptionPage^ viewReplayOptionPage;
        MatchGameplayPage^ matchGameplayPage;
        int selectedTheme = 1;
#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->mainPanel = (gcnew System::Windows::Forms::Panel());
            this->SuspendLayout();
            // 
            // mainPanel
            // 
            this->mainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->mainPanel->Location = System::Drawing::Point(0, 0);
            this->mainPanel->Name = L"TicTacToe";
            this->mainPanel->Size = System::Drawing::Size(578, 544);
            this->mainPanel->TabIndex = 0;
            // 
            // MainForm
            // 
            this->ClientSize = System::Drawing::Size(578, 544);
            this->Controls->Add(this->mainPanel);
            this->Name = L"TicTacToe";
            this->Text = L"TicTacToe";
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
        // Initialization is handled in the constructor
    }

           void ShowHomePage() 
           {
               this->mainPanel->Controls->Clear();
               this->homePage = gcnew HomePage();
               this->homePage->Dock = DockStyle::Fill;
               this->homePage->GoToThemeEditPage += gcnew EventHandler(this, &MainForm::NavigateToThemeEditPage);
               this->homePage->GoToNewMatchOptionPage += gcnew EventHandler(this, &MainForm::NavigateToNewMatchOptionPage);
               this->homePage->GoToViewReplayOptionPage += gcnew EventHandler(this, &MainForm::NavigateToViewReplayOptionPage);
               this->mainPanel->Controls->Add(this->homePage);
           }

           void ShowThemeEditPage()
           {
               this->mainPanel->Controls->Clear();
               this->themeEditPage = gcnew ThemeEditPage();
               this->themeEditPage->Dock = DockStyle::Fill;
               this->themeEditPage->GoToHome += gcnew EventHandler<int>(this, &MainForm::NavigateToHomeFromThemeEditPage);
               this->mainPanel->Controls->Add(this->themeEditPage);
           }

           void ShowNewMatchOptionPage()
           {
               this->mainPanel->Controls->Clear();
               this->newMatchOptionPage = gcnew NewMatchOptionPage(selectedTheme);
               this->newMatchOptionPage->Dock = DockStyle::Fill;
               this->newMatchOptionPage->GoToHome += gcnew EventHandler(this, &MainForm::NavigateToHome);
               this->newMatchOptionPage->GoToMatchGameplay += gcnew EventHandler<Tuple<bool, bool>^>(this, &MainForm::NavigateToMatchGameplayPage);
               this->mainPanel->Controls->Add(this->newMatchOptionPage);
           }

           void ShowViewReplayOptionPage()
           {
               this->mainPanel->Controls->Clear();
               this->viewReplayOptionPage = gcnew ViewReplayOptionPage();
               this->viewReplayOptionPage->Dock = DockStyle::Fill;
               this->viewReplayOptionPage->GoToHome += gcnew EventHandler(this, &MainForm::NavigateToHome);
               this->mainPanel->Controls->Add(this->viewReplayOptionPage);
           }

           void ShowMatchGameplayPage(bool whoGoesFirst, bool matchType)
           {
               this->mainPanel->Controls->Clear();
               this->matchGameplayPage = gcnew MatchGameplayPage(whoGoesFirst, matchType, selectedTheme);//True means player1 goes first, int is themeStyle.
               this->matchGameplayPage->Dock = DockStyle::Fill;
               this->matchGameplayPage->GoToHome += gcnew EventHandler(this, &MainForm::NavigateToHome);
               this->mainPanel->Controls->Add(this->matchGameplayPage);
           }

           void NavigateToHome(Object^ sender, EventArgs^ e) { ShowHomePage(); }
           void NavigateToHomeFromThemeEditPage(Object^ sender, int themeStyle) { ShowHomePage(); selectedTheme = themeStyle; }
           void NavigateToThemeEditPage(Object^ sender, EventArgs^ e) { ShowThemeEditPage(); }
           void NavigateToNewMatchOptionPage(Object^ sender, EventArgs^ e) { ShowNewMatchOptionPage(); }
           void NavigateToViewReplayOptionPage(Object^ sender, EventArgs^ e) { ShowViewReplayOptionPage(); }
           void NavigateToMatchGameplayPage(Object^ sender, Tuple<bool, bool>^ matchOptions) { ShowMatchGameplayPage(matchOptions->Item1, matchOptions->Item2); }
};
}
