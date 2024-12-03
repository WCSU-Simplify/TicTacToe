#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TicTacToeApp {

	/// <summary>
	/// Summary for NewMatchOptionPage
	/// </summary>
	public ref class NewMatchOptionPage : public System::Windows::Forms::UserControl
	{
	public:
		event EventHandler^ GoToHome;
		event EventHandler^ GoToMatchGameplay;

		NewMatchOptionPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewMatchOptionPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGoToHome;
	private: System::Windows::Forms::Label^ simplifyLabel;
	private: System::Windows::Forms::Label^ tictactoeHeaderLabel;
	private: System::Windows::Forms::Label^ selectMatchModeLabel;
	private: System::Windows::Forms::Label^ selectWhoGoesFirstLabel;
	private: System::Windows::Forms::Label^ selectDifficultyLabel;
	private: System::Windows::Forms::ComboBox^ selectDifficultyComboBox;
	private: System::Windows::Forms::Button^ createMatchBtn;
	private: System::Windows::Forms::ComboBox^ matchModeComboBox;
	private: System::Windows::Forms::ComboBox^ whoGoesFirstComboBox;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnGoToHome = (gcnew System::Windows::Forms::Button());
			this->simplifyLabel = (gcnew System::Windows::Forms::Label());
			this->tictactoeHeaderLabel = (gcnew System::Windows::Forms::Label());
			this->selectMatchModeLabel = (gcnew System::Windows::Forms::Label());
			this->selectWhoGoesFirstLabel = (gcnew System::Windows::Forms::Label());
			this->selectDifficultyLabel = (gcnew System::Windows::Forms::Label());
			this->selectDifficultyComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->createMatchBtn = (gcnew System::Windows::Forms::Button());
			this->matchModeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->whoGoesFirstComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnGoToHome
			// 
			this->btnGoToHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoToHome->Location = System::Drawing::Point(75, 57);
			this->btnGoToHome->Name = L"btnGoToHome";
			this->btnGoToHome->Size = System::Drawing::Size(94, 37);
			this->btnGoToHome->TabIndex = 1;
			this->btnGoToHome->Text = L"Return";
			this->btnGoToHome->Click += gcnew System::EventHandler(this, &NewMatchOptionPage::btnGoToHome_Click);
			// 
			// simplifyLabel
			// 
			this->simplifyLabel->AutoSize = true;
			this->simplifyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->simplifyLabel->Location = System::Drawing::Point(254, 116);
			this->simplifyLabel->Name = L"simplifyLabel";
			this->simplifyLabel->Size = System::Drawing::Size(156, 32);
			this->simplifyLabel->TabIndex = 30;
			this->simplifyLabel->Text = L"By Simplify";
			// 
			// tictactoeHeaderLabel
			// 
			this->tictactoeHeaderLabel->AutoSize = true;
			this->tictactoeHeaderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tictactoeHeaderLabel->Location = System::Drawing::Point(207, 57);
			this->tictactoeHeaderLabel->Name = L"tictactoeHeaderLabel";
			this->tictactoeHeaderLabel->Size = System::Drawing::Size(276, 55);
			this->tictactoeHeaderLabel->TabIndex = 29;
			this->tictactoeHeaderLabel->Text = L"Tic Tac Toe";
			// 
			// selectMatchModeLabel
			// 
			this->selectMatchModeLabel->AutoSize = true;
			this->selectMatchModeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->selectMatchModeLabel->Location = System::Drawing::Point(116, 176);
			this->selectMatchModeLabel->Name = L"selectMatchModeLabel";
			this->selectMatchModeLabel->Size = System::Drawing::Size(219, 29);
			this->selectMatchModeLabel->TabIndex = 31;
			this->selectMatchModeLabel->Text = L"Select Match Mode";
			// 
			// selectWhoGoesFirstLabel
			// 
			this->selectWhoGoesFirstLabel->AutoSize = true;
			this->selectWhoGoesFirstLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->selectWhoGoesFirstLabel->Location = System::Drawing::Point(116, 289);
			this->selectWhoGoesFirstLabel->Name = L"selectWhoGoesFirstLabel";
			this->selectWhoGoesFirstLabel->Size = System::Drawing::Size(253, 29);
			this->selectWhoGoesFirstLabel->TabIndex = 32;
			this->selectWhoGoesFirstLabel->Text = L"Select Who Goes First";
			// 
			// selectDifficultyLabel
			// 
			this->selectDifficultyLabel->AutoSize = true;
			this->selectDifficultyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->selectDifficultyLabel->Location = System::Drawing::Point(388, 176);
			this->selectDifficultyLabel->Name = L"selectDifficultyLabel";
			this->selectDifficultyLabel->Size = System::Drawing::Size(176, 29);
			this->selectDifficultyLabel->TabIndex = 33;
			this->selectDifficultyLabel->Text = L"Select Difficulty";
			// 
			// selectDifficultyComboBox
			// 
			this->selectDifficultyComboBox->FormattingEnabled = true;
			this->selectDifficultyComboBox->Location = System::Drawing::Point(393, 220);
			this->selectDifficultyComboBox->Name = L"selectDifficultyComboBox";
			this->selectDifficultyComboBox->Size = System::Drawing::Size(121, 28);
			this->selectDifficultyComboBox->TabIndex = 34;
			// 
			// createMatchBtn
			// 
			this->createMatchBtn->Location = System::Drawing::Point(260, 421);
			this->createMatchBtn->Name = L"createMatchBtn";
			this->createMatchBtn->Size = System::Drawing::Size(75, 23);
			this->createMatchBtn->TabIndex = 35;
			this->createMatchBtn->Text = L"Create";
			this->createMatchBtn->UseVisualStyleBackColor = true;
			this->createMatchBtn->Click += gcnew System::EventHandler(this, &NewMatchOptionPage::createMatchBtn_Click);
			// 
			// matchModeComboBox
			// 
			this->matchModeComboBox->FormattingEnabled = true;
			this->matchModeComboBox->Location = System::Drawing::Point(121, 220);
			this->matchModeComboBox->Name = L"matchModeComboBox";
			this->matchModeComboBox->Size = System::Drawing::Size(121, 28);
			this->matchModeComboBox->TabIndex = 36;
			// 
			// whoGoesFirstComboBox
			// 
			this->whoGoesFirstComboBox->FormattingEnabled = true;
			this->whoGoesFirstComboBox->Location = System::Drawing::Point(121, 321);
			this->whoGoesFirstComboBox->Name = L"whoGoesFirstComboBox";
			this->whoGoesFirstComboBox->Size = System::Drawing::Size(121, 28);
			this->whoGoesFirstComboBox->TabIndex = 37;
			// 
			// NewMatchOptionPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->Controls->Add(this->whoGoesFirstComboBox);
			this->Controls->Add(this->matchModeComboBox);
			this->Controls->Add(this->createMatchBtn);
			this->Controls->Add(this->selectDifficultyComboBox);
			this->Controls->Add(this->selectDifficultyLabel);
			this->Controls->Add(this->selectWhoGoesFirstLabel);
			this->Controls->Add(this->selectMatchModeLabel);
			this->Controls->Add(this->simplifyLabel);
			this->Controls->Add(this->tictactoeHeaderLabel);
			this->Controls->Add(this->btnGoToHome);
			this->Name = L"NewMatchOptionPage";
			this->Size = System::Drawing::Size(578, 544);
			this->Load += gcnew System::EventHandler(this, &NewMatchOptionPage::NewMatchOptionPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NewMatchOptionPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnGoToHome_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		GoToHome(this, EventArgs::Empty);
	}
	private: System::Void createMatchBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		GoToMatchGameplay(this, EventArgs::Empty);
	}
};
}
