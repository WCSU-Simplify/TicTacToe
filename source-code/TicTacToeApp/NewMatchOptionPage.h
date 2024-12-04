#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Reflection;
using namespace System::Resources;

namespace TicTacToeApp {

	/// <summary>
	/// Summary for NewMatchOptionPage
	/// </summary>
	public ref class NewMatchOptionPage : public System::Windows::Forms::UserControl
	{
	public:
		event EventHandler^ GoToHome;
		event EventHandler<Tuple<bool, bool>^>^ GoToMatchGameplay;

		bool whoGoesFirst = true;
		NewMatchOptionPage(int themeStyle)
		{
			InitializeComponent();
			System::Resources::ResourceManager^ rm = gcnew System::Resources::ResourceManager("TicTacToeApp.Resource", Assembly::GetExecutingAssembly());
			System::Drawing::Image^ logoImage = safe_cast<System::Drawing::Image^>(rm->GetObject("newLogo"));
			this->simplifyLogo->Image = logoImage;
			//this->simplifyLogo->Image = System::Drawing::Image::FromFile(Application::StartupPath + "\\Resources\\newLogo.png");
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


	private: System::Windows::Forms::Button^ createMatchBtn;




	private: System::Windows::Forms::PictureBox^ simplifyLogo;
	private: System::Windows::Forms::RadioButton^ singleplayerButton;
	private: System::Windows::Forms::RadioButton^ multiplayerButton;
	private: System::Windows::Forms::GroupBox^ matchModeGroup;
	private: System::Windows::Forms::GroupBox^ whoGoesFirstGroup;
	private: System::Windows::Forms::RadioButton^ playerOneGoesFirst;
	private: System::Windows::Forms::RadioButton^ otherPlayerGoesFirst;
	private: System::Windows::Forms::GroupBox^ difficultGroupBox;
	private: System::Windows::Forms::RadioButton^ easyBtn;
	private: System::Windows::Forms::RadioButton^ mediumBtn;



	private: System::Windows::Forms::Label^ difficultLabel;
	private: System::Windows::Forms::RadioButton^ difficultBtn;










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
			this->createMatchBtn = (gcnew System::Windows::Forms::Button());
			this->simplifyLogo = (gcnew System::Windows::Forms::PictureBox());
			this->singleplayerButton = (gcnew System::Windows::Forms::RadioButton());
			this->multiplayerButton = (gcnew System::Windows::Forms::RadioButton());
			this->matchModeGroup = (gcnew System::Windows::Forms::GroupBox());
			this->whoGoesFirstGroup = (gcnew System::Windows::Forms::GroupBox());
			this->playerOneGoesFirst = (gcnew System::Windows::Forms::RadioButton());
			this->otherPlayerGoesFirst = (gcnew System::Windows::Forms::RadioButton());
			this->difficultGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->difficultBtn = (gcnew System::Windows::Forms::RadioButton());
			this->easyBtn = (gcnew System::Windows::Forms::RadioButton());
			this->mediumBtn = (gcnew System::Windows::Forms::RadioButton());
			this->difficultLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simplifyLogo))->BeginInit();
			this->matchModeGroup->SuspendLayout();
			this->whoGoesFirstGroup->SuspendLayout();
			this->difficultGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGoToHome
			// 
			this->btnGoToHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoToHome->Location = System::Drawing::Point(62, 176);
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
			this->simplifyLabel->Size = System::Drawing::Size(155, 32);
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
			this->selectMatchModeLabel->Location = System::Drawing::Point(229, 176);
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
			this->selectWhoGoesFirstLabel->Location = System::Drawing::Point(223, 322);
			this->selectWhoGoesFirstLabel->Name = L"selectWhoGoesFirstLabel";
			this->selectWhoGoesFirstLabel->Size = System::Drawing::Size(253, 29);
			this->selectWhoGoesFirstLabel->TabIndex = 32;
			this->selectWhoGoesFirstLabel->Text = L"Select Who Goes First";
			// 
			// createMatchBtn
			// 
			this->createMatchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createMatchBtn->Location = System::Drawing::Point(251, 470);
			this->createMatchBtn->Name = L"createMatchBtn";
			this->createMatchBtn->Size = System::Drawing::Size(100, 36);
			this->createMatchBtn->TabIndex = 35;
			this->createMatchBtn->Text = L"Create";
			this->createMatchBtn->UseVisualStyleBackColor = true;
			this->createMatchBtn->Click += gcnew System::EventHandler(this, &NewMatchOptionPage::createMatchBtn_Click);
			// 
			// simplifyLogo
			// 
			this->simplifyLogo->Location = System::Drawing::Point(69, 57);
			this->simplifyLogo->Name = L"simplifyLogo";
			this->simplifyLogo->Size = System::Drawing::Size(100, 100);
			this->simplifyLogo->TabIndex = 38;
			this->simplifyLogo->TabStop = false;
			// 
			// singleplayerButton
			// 
			this->singleplayerButton->AutoSize = true;
			this->singleplayerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->singleplayerButton->Location = System::Drawing::Point(3, 20);
			this->singleplayerButton->Name = L"singleplayerButton";
			this->singleplayerButton->Size = System::Drawing::Size(145, 29);
			this->singleplayerButton->TabIndex = 39;
			this->singleplayerButton->TabStop = true;
			this->singleplayerButton->Text = L"Singleplayer";
			this->singleplayerButton->UseVisualStyleBackColor = true;
			this->singleplayerButton->CheckedChanged += gcnew System::EventHandler(this, &NewMatchOptionPage::singleplayerButton_CheckedChanged);
			// 
			// multiplayerButton
			// 
			this->multiplayerButton->AutoSize = true;
			this->multiplayerButton->Checked = true;
			this->multiplayerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplayerButton->Location = System::Drawing::Point(3, 54);
			this->multiplayerButton->Name = L"multiplayerButton";
			this->multiplayerButton->Size = System::Drawing::Size(131, 29);
			this->multiplayerButton->TabIndex = 40;
			this->multiplayerButton->TabStop = true;
			this->multiplayerButton->Text = L"Multiplayer";
			this->multiplayerButton->UseVisualStyleBackColor = true;
			this->multiplayerButton->CheckedChanged += gcnew System::EventHandler(this, &NewMatchOptionPage::multiplayerButton_CheckedChanged);
			// 
			// matchModeGroup
			// 
			this->matchModeGroup->BackColor = System::Drawing::Color::Transparent;
			this->matchModeGroup->Controls->Add(this->singleplayerButton);
			this->matchModeGroup->Controls->Add(this->multiplayerButton);
			this->matchModeGroup->Location = System::Drawing::Point(221, 194);
			this->matchModeGroup->Name = L"matchModeGroup";
			this->matchModeGroup->Size = System::Drawing::Size(166, 86);
			this->matchModeGroup->TabIndex = 41;
			this->matchModeGroup->TabStop = false;
			// 
			// whoGoesFirstGroup
			// 
			this->whoGoesFirstGroup->BackColor = System::Drawing::Color::Transparent;
			this->whoGoesFirstGroup->Controls->Add(this->playerOneGoesFirst);
			this->whoGoesFirstGroup->Controls->Add(this->otherPlayerGoesFirst);
			this->whoGoesFirstGroup->Location = System::Drawing::Point(221, 340);
			this->whoGoesFirstGroup->Name = L"whoGoesFirstGroup";
			this->whoGoesFirstGroup->Size = System::Drawing::Size(166, 86);
			this->whoGoesFirstGroup->TabIndex = 42;
			this->whoGoesFirstGroup->TabStop = false;
			// 
			// playerOneGoesFirst
			// 
			this->playerOneGoesFirst->AutoSize = true;
			this->playerOneGoesFirst->Checked = true;
			this->playerOneGoesFirst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerOneGoesFirst->Location = System::Drawing::Point(4, 20);
			this->playerOneGoesFirst->Name = L"playerOneGoesFirst";
			this->playerOneGoesFirst->Size = System::Drawing::Size(103, 29);
			this->playerOneGoesFirst->TabIndex = 39;
			this->playerOneGoesFirst->TabStop = true;
			this->playerOneGoesFirst->Text = L"Player1";
			this->playerOneGoesFirst->UseVisualStyleBackColor = true;
			// 
			// otherPlayerGoesFirst
			// 
			this->otherPlayerGoesFirst->AutoSize = true;
			this->otherPlayerGoesFirst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->otherPlayerGoesFirst->Location = System::Drawing::Point(4, 54);
			this->otherPlayerGoesFirst->Name = L"otherPlayerGoesFirst";
			this->otherPlayerGoesFirst->Size = System::Drawing::Size(103, 29);
			this->otherPlayerGoesFirst->TabIndex = 40;
			this->otherPlayerGoesFirst->TabStop = true;
			this->otherPlayerGoesFirst->Text = L"Player2";
			this->otherPlayerGoesFirst->UseVisualStyleBackColor = true;
			// 
			// difficultGroupBox
			// 
			this->difficultGroupBox->BackColor = System::Drawing::Color::Transparent;
			this->difficultGroupBox->Controls->Add(this->difficultBtn);
			this->difficultGroupBox->Controls->Add(this->easyBtn);
			this->difficultGroupBox->Controls->Add(this->mediumBtn);
			this->difficultGroupBox->Location = System::Drawing::Point(401, 195);
			this->difficultGroupBox->Name = L"difficultGroupBox";
			this->difficultGroupBox->Size = System::Drawing::Size(122, 111);
			this->difficultGroupBox->TabIndex = 44;
			this->difficultGroupBox->TabStop = false;
			this->difficultGroupBox->Visible = false;
			// 
			// difficultBtn
			// 
			this->difficultBtn->AutoSize = true;
			this->difficultBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->difficultBtn->Location = System::Drawing::Point(11, 74);
			this->difficultBtn->Name = L"difficultBtn";
			this->difficultBtn->Size = System::Drawing::Size(99, 29);
			this->difficultBtn->TabIndex = 41;
			this->difficultBtn->Text = L"Difficult";
			this->difficultBtn->UseVisualStyleBackColor = true;
			this->difficultBtn->Visible = false;
			// 
			// easyBtn
			// 
			this->easyBtn->AutoSize = true;
			this->easyBtn->Checked = true;
			this->easyBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->easyBtn->Location = System::Drawing::Point(11, 12);
			this->easyBtn->Name = L"easyBtn";
			this->easyBtn->Size = System::Drawing::Size(81, 29);
			this->easyBtn->TabIndex = 39;
			this->easyBtn->TabStop = true;
			this->easyBtn->Text = L"Easy";
			this->easyBtn->UseVisualStyleBackColor = true;
			this->easyBtn->Visible = false;
			// 
			// mediumBtn
			// 
			this->mediumBtn->AutoSize = true;
			this->mediumBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mediumBtn->Location = System::Drawing::Point(11, 43);
			this->mediumBtn->Name = L"mediumBtn";
			this->mediumBtn->Size = System::Drawing::Size(112, 29);
			this->mediumBtn->TabIndex = 40;
			this->mediumBtn->Text = L"Medium ";
			this->mediumBtn->UseVisualStyleBackColor = true;
			this->mediumBtn->Visible = false;
			// 
			// difficultLabel
			// 
			this->difficultLabel->AutoSize = true;
			this->difficultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->difficultLabel->Location = System::Drawing::Point(409, 177);
			this->difficultLabel->Name = L"difficultLabel";
			this->difficultLabel->Size = System::Drawing::Size(102, 29);
			this->difficultLabel->TabIndex = 43;
			this->difficultLabel->Text = L"Difficulty";
			this->difficultLabel->Visible = false;
			this->difficultLabel->Click += gcnew System::EventHandler(this, &NewMatchOptionPage::label1_Click);
			// 
			// NewMatchOptionPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->Controls->Add(this->difficultGroupBox);
			this->Controls->Add(this->difficultLabel);
			this->Controls->Add(this->whoGoesFirstGroup);
			this->Controls->Add(this->matchModeGroup);
			this->Controls->Add(this->simplifyLogo);
			this->Controls->Add(this->createMatchBtn);
			this->Controls->Add(this->selectWhoGoesFirstLabel);
			this->Controls->Add(this->selectMatchModeLabel);
			this->Controls->Add(this->simplifyLabel);
			this->Controls->Add(this->tictactoeHeaderLabel);
			this->Controls->Add(this->btnGoToHome);
			this->Name = L"NewMatchOptionPage";
			this->Size = System::Drawing::Size(578, 544);
			this->Load += gcnew System::EventHandler(this, &NewMatchOptionPage::NewMatchOptionPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simplifyLogo))->EndInit();
			this->matchModeGroup->ResumeLayout(false);
			this->matchModeGroup->PerformLayout();
			this->whoGoesFirstGroup->ResumeLayout(false);
			this->whoGoesFirstGroup->PerformLayout();
			this->difficultGroupBox->ResumeLayout(false);
			this->difficultGroupBox->PerformLayout();
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
		whoGoesFirst = playerOneGoesFirst->Checked;
		Tuple<bool, bool>^ matchOptions = gcnew Tuple<bool, bool>(whoGoesFirst, singleplayerButton->Checked); // Example values
		GoToMatchGameplay(this, matchOptions);
	}
	private: System::Void matchModeComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void singleplayerButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (singleplayerButton->Checked)
		{
			otherPlayerGoesFirst->Text = "Simulated Opponent";
			difficultGroupBox->Visible = true;
			difficultLabel->Visible = true;
			difficultBtn->Visible = true;
			easyBtn->Visible = true;
			mediumBtn->Visible = true;
		}
	}
	private: System::Void multiplayerButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (multiplayerButton->Checked)
		{
			otherPlayerGoesFirst->Text = "Player2";
			difficultGroupBox->Visible = false;
			difficultLabel->Visible = false;
			difficultBtn->Visible = false;
			easyBtn->Visible = false;
			mediumBtn->Visible = false;
		}
	}
};
}
