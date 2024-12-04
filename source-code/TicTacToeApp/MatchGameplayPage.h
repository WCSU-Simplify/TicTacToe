#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace TicTacToeApp {

	/// <summary>
	/// Summary for MatchGameplayPage
	/// </summary>
	public ref class MatchGameplayPage : public System::Windows::Forms::UserControl
	{
	public:
		event EventHandler^ GoToHome;
		int globalThemeStyle = 1;
		bool muteAudio = false;
		MatchGameplayPage(bool whoGoesFirst, int themeStyle)
		{
			globalThemeStyle = themeStyle;
			currentPlayer = whoGoesFirst;
			int whoGoesFirstInt = 2;
			if (whoGoesFirst)
			{
				whoGoesFirstInt = 2;
			}
			else {
				whoGoesFirstInt = 1;
			}

			//Replay board first spot; 1 or 2. 1 or 0. 

			board = gcnew array<int>(9) { -1, -1, -1, -1, -1, -1, -1, -1, -1 };
			replayBoard = gcnew array<int>(10) { whoGoesFirstInt, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
			winningCombinations = gcnew array<array<int>^>
			{
				gcnew array<int>{0, 1, 2}, gcnew array<int>{3, 4, 5}, gcnew array<int>{6, 7, 8},
					gcnew array<int>{0, 3, 6}, gcnew array<int>{1, 4, 7}, gcnew array<int>{2, 5, 8},
					gcnew array<int>{0, 4, 8}, gcnew array<int>{2, 4, 6}
			};

			InitializeComponent();

			setupTheme(globalThemeStyle);
			//
			//TODO: Add the constructor code here
			//
		}

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MatchGameplayPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int Player1WinCount = 0;
	private: int OtherPlayerWinCount = 0;
	private: array<int>^ board;// Holds "X", "O", or nullptr
	private: array<int>^ replayBoard; // Holds replay match formated data
	private: bool currentPlayer;// means player1 is X
	private:     array<array<int>^>^ winningCombinations;
	private: System::Windows::Forms::PictureBox^ symbolBox0;
	private: System::Windows::Forms::PictureBox^ symbolBox1;
	private: System::Windows::Forms::PictureBox^ symbolBox2;
	private: System::Windows::Forms::PictureBox^ symbolBox5;


	protected:



	private: System::Windows::Forms::PictureBox^ symbolBox4;

	private: System::Windows::Forms::PictureBox^ symbolBox3;
	private: System::Windows::Forms::PictureBox^ symbolBox8;


	private: System::Windows::Forms::PictureBox^ symbolBox7;

	private: System::Windows::Forms::PictureBox^ symbolBox6;
	private: System::Windows::Forms::Label^ Player1Heading;
	private: System::Windows::Forms::Label^ OtherPlayerLabel;
	private: System::Windows::Forms::Label^ scoreLabel;
	private: System::Windows::Forms::PictureBox^ muteBox;

	private: System::Windows::Forms::PictureBox^ endGameBanner;

	private: System::Windows::Forms::Label^ winnerLabel;
	private: System::Windows::Forms::Button^ rematchBtn;
	private: System::Windows::Forms::Button^ mainMenuReturnBtn;
	private: System::Windows::Forms::Button^ saveMatchBtn;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MatchGameplayPage::typeid));
			this->symbolBox0 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->Player1Heading = (gcnew System::Windows::Forms::Label());
			this->OtherPlayerLabel = (gcnew System::Windows::Forms::Label());
			this->scoreLabel = (gcnew System::Windows::Forms::Label());
			this->muteBox = (gcnew System::Windows::Forms::PictureBox());
			this->endGameBanner = (gcnew System::Windows::Forms::PictureBox());
			this->winnerLabel = (gcnew System::Windows::Forms::Label());
			this->rematchBtn = (gcnew System::Windows::Forms::Button());
			this->mainMenuReturnBtn = (gcnew System::Windows::Forms::Button());
			this->saveMatchBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->muteBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->endGameBanner))->BeginInit();
			this->SuspendLayout();
			// 
			// symbolBox0
			// 
			this->symbolBox0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox0->Location = System::Drawing::Point(56, 49);
			this->symbolBox0->Name = L"symbolBox0";
			this->symbolBox0->Size = System::Drawing::Size(150, 150);
			this->symbolBox0->TabIndex = 0;
			this->symbolBox0->TabStop = false;
			this->symbolBox0->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox0_Click);
			// 
			// symbolBox1
			// 
			this->symbolBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox1->Location = System::Drawing::Point(212, 49);
			this->symbolBox1->Name = L"symbolBox1";
			this->symbolBox1->Size = System::Drawing::Size(150, 150);
			this->symbolBox1->TabIndex = 1;
			this->symbolBox1->TabStop = false;
			this->symbolBox1->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox1_Click);
			// 
			// symbolBox2
			// 
			this->symbolBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox2->Location = System::Drawing::Point(368, 49);
			this->symbolBox2->Name = L"symbolBox2";
			this->symbolBox2->Size = System::Drawing::Size(150, 150);
			this->symbolBox2->TabIndex = 2;
			this->symbolBox2->TabStop = false;
			this->symbolBox2->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox2_Click);
			// 
			// symbolBox5
			// 
			this->symbolBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox5->Location = System::Drawing::Point(368, 205);
			this->symbolBox5->Name = L"symbolBox5";
			this->symbolBox5->Size = System::Drawing::Size(150, 150);
			this->symbolBox5->TabIndex = 5;
			this->symbolBox5->TabStop = false;
			this->symbolBox5->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox5_Click);
			// 
			// symbolBox4
			// 
			this->symbolBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox4->Location = System::Drawing::Point(212, 205);
			this->symbolBox4->Name = L"symbolBox4";
			this->symbolBox4->Size = System::Drawing::Size(150, 150);
			this->symbolBox4->TabIndex = 4;
			this->symbolBox4->TabStop = false;
			this->symbolBox4->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox4_Click);
			// 
			// symbolBox3
			// 
			this->symbolBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox3->Location = System::Drawing::Point(56, 205);
			this->symbolBox3->Name = L"symbolBox3";
			this->symbolBox3->Size = System::Drawing::Size(150, 150);
			this->symbolBox3->TabIndex = 3;
			this->symbolBox3->TabStop = false;
			this->symbolBox3->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox3_Click);
			// 
			// symbolBox8
			// 
			this->symbolBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox8->Location = System::Drawing::Point(368, 361);
			this->symbolBox8->Name = L"symbolBox8";
			this->symbolBox8->Size = System::Drawing::Size(150, 150);
			this->symbolBox8->TabIndex = 8;
			this->symbolBox8->TabStop = false;
			this->symbolBox8->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox8_Click);
			// 
			// symbolBox7
			// 
			this->symbolBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox7->Location = System::Drawing::Point(212, 361);
			this->symbolBox7->Name = L"symbolBox7";
			this->symbolBox7->Size = System::Drawing::Size(150, 150);
			this->symbolBox7->TabIndex = 7;
			this->symbolBox7->TabStop = false;
			this->symbolBox7->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox7_Click);
			// 
			// symbolBox6
			// 
			this->symbolBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox6->Location = System::Drawing::Point(56, 361);
			this->symbolBox6->Name = L"symbolBox6";
			this->symbolBox6->Size = System::Drawing::Size(150, 150);
			this->symbolBox6->TabIndex = 6;
			this->symbolBox6->TabStop = false;
			this->symbolBox6->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox6_Click);
			// 
			// Player1Heading
			// 
			this->Player1Heading->AutoSize = true;
			this->Player1Heading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Player1Heading->Location = System::Drawing::Point(62, 10);
			this->Player1Heading->Name = L"Player1Heading";
			this->Player1Heading->Size = System::Drawing::Size(155, 46);
			this->Player1Heading->TabIndex = 9;
			this->Player1Heading->Text = L"Player1";
			this->Player1Heading->Click += gcnew System::EventHandler(this, &MatchGameplayPage::matchHeadingLabel_Click);
			// 
			// OtherPlayerLabel
			// 
			this->OtherPlayerLabel->AutoSize = true;
			this->OtherPlayerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OtherPlayerLabel->Location = System::Drawing::Point(433, 10);
			this->OtherPlayerLabel->Name = L"OtherPlayerLabel";
			this->OtherPlayerLabel->Size = System::Drawing::Size(119, 46);
			this->OtherPlayerLabel->TabIndex = 10;
			this->OtherPlayerLabel->Text = L"Other";
			// 
			// scoreLabel
			// 
			this->scoreLabel->AutoSize = true;
			this->scoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreLabel->Location = System::Drawing::Point(250, 10);
			this->scoreLabel->Name = L"scoreLabel";
			this->scoreLabel->Size = System::Drawing::Size(99, 46);
			this->scoreLabel->TabIndex = 11;
			this->scoreLabel->Text = L"0 - 0";
			this->scoreLabel->Click += gcnew System::EventHandler(this, &MatchGameplayPage::scoreLabel_Click);
			// 
			// muteBox
			// 
			this->muteBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"muteBox.Image")));
			this->muteBox->Location = System::Drawing::Point(532, 474);
			this->muteBox->Name = L"muteBox";
			this->muteBox->Size = System::Drawing::Size(36, 37);
			this->muteBox->TabIndex = 12;
			this->muteBox->TabStop = false;
			this->muteBox->Click += gcnew System::EventHandler(this, &MatchGameplayPage::muteBox_Click);
			// 
			// endGameBanner
			// 
			this->endGameBanner->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->endGameBanner->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->endGameBanner->Location = System::Drawing::Point(120, 182);
			this->endGameBanner->Name = L"endGameBanner";
			this->endGameBanner->Size = System::Drawing::Size(330, 209);
			this->endGameBanner->TabIndex = 14;
			this->endGameBanner->TabStop = false;
			this->endGameBanner->Visible = false;
			// 
			// winnerLabel
			// 
			this->winnerLabel->AutoSize = true;
			this->winnerLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->winnerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->winnerLabel->Location = System::Drawing::Point(207, 202);
			this->winnerLabel->Name = L"winnerLabel";
			this->winnerLabel->Size = System::Drawing::Size(188, 29);
			this->winnerLabel->TabIndex = 15;
			this->winnerLabel->Text = L"Winner: Player1!";
			this->winnerLabel->Visible = false;
			this->winnerLabel->Click += gcnew System::EventHandler(this, &MatchGameplayPage::label1_Click);
			// 
			// rematchBtn
			// 
			this->rematchBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->rematchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rematchBtn->Location = System::Drawing::Point(212, 246);
			this->rematchBtn->Name = L"rematchBtn";
			this->rematchBtn->Size = System::Drawing::Size(137, 35);
			this->rematchBtn->TabIndex = 16;
			this->rematchBtn->Text = L"Play Again";
			this->rematchBtn->UseVisualStyleBackColor = false;
			this->rematchBtn->Visible = false;
			this->rematchBtn->Click += gcnew System::EventHandler(this, &MatchGameplayPage::rematchBtn_Click);
			// 
			// mainMenuReturnBtn
			// 
			this->mainMenuReturnBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->mainMenuReturnBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainMenuReturnBtn->Location = System::Drawing::Point(212, 287);
			this->mainMenuReturnBtn->Name = L"mainMenuReturnBtn";
			this->mainMenuReturnBtn->Size = System::Drawing::Size(137, 35);
			this->mainMenuReturnBtn->TabIndex = 17;
			this->mainMenuReturnBtn->Text = L"Main Menu";
			this->mainMenuReturnBtn->UseVisualStyleBackColor = false;
			this->mainMenuReturnBtn->Visible = false;
			this->mainMenuReturnBtn->Click += gcnew System::EventHandler(this, &MatchGameplayPage::mainMenuReturnBtn_Click);
			// 
			// saveMatchBtn
			// 
			this->saveMatchBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->saveMatchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveMatchBtn->Location = System::Drawing::Point(212, 328);
			this->saveMatchBtn->Name = L"saveMatchBtn";
			this->saveMatchBtn->Size = System::Drawing::Size(137, 35);
			this->saveMatchBtn->TabIndex = 18;
			this->saveMatchBtn->Text = L"Save Match";
			this->saveMatchBtn->UseVisualStyleBackColor = false;
			this->saveMatchBtn->Visible = false;
			// 
			// MatchGameplayPage
			// 
			this->Controls->Add(this->winnerLabel);
			this->Controls->Add(this->saveMatchBtn);
			this->Controls->Add(this->mainMenuReturnBtn);
			this->Controls->Add(this->rematchBtn);
			this->Controls->Add(this->endGameBanner);
			this->Controls->Add(this->muteBox);
			this->Controls->Add(this->scoreLabel);
			this->Controls->Add(this->OtherPlayerLabel);
			this->Controls->Add(this->Player1Heading);
			this->Controls->Add(this->symbolBox8);
			this->Controls->Add(this->symbolBox7);
			this->Controls->Add(this->symbolBox6);
			this->Controls->Add(this->symbolBox5);
			this->Controls->Add(this->symbolBox4);
			this->Controls->Add(this->symbolBox3);
			this->Controls->Add(this->symbolBox2);
			this->Controls->Add(this->symbolBox1);
			this->Controls->Add(this->symbolBox0);
			this->Name = L"MatchGameplayPage";
			this->Size = System::Drawing::Size(600, 600);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->muteBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->endGameBanner))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
	private: System::Void matchHeadingLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void symbolBox0_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(0);
	}
	private: System::Void symbolBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(1);
	}
	private: System::Void symbolBox2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(2);
	}
	private: System::Void symbolBox3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(3);
	}
	private: System::Void symbolBox4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(4);
	}
	private: System::Void symbolBox5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(5);
	}
	private: System::Void symbolBox6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(6);
	}
	private: System::Void symbolBox7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(7);
	}
	private: System::Void symbolBox8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(8);
	}

		   
	private: System::Void HandleClick(int index)
	{
		// 0 -> 1,1 
		replayBoard[index +1 ] = index +1; 

		if (board[index] != -1)
		{
			//MessageBox::Show("This square is already taken!");
			return;
		}

		// Place the current player's symbol
		if (currentPlayer)
		{
			board[index] = 1;
		}
		else {
			board[index] = 0;
		}
		

		// Update the PictureBox to display the symbol
		UpdateSymbol(index);

		

		// Check if the game is over
		if (CheckWinner())
		{
			//MessageBox::Show(currentPlayer + " wins!");
			if (currentPlayer)
			{
				this->winnerLabel->Text = "Winner: Player1";
				Player1WinCount++;
			}
			else {
				this->winnerLabel->Text = "Winner: Other";
				OtherPlayerWinCount++;
			}
			toggleEndView(true);
			if (!muteAudio)
			{
				PlayWinAudio();
			}
				
			this->scoreLabel->Text = Player1WinCount.ToString() + " - " + OtherPlayerWinCount.ToString();
			//ResetGame();
			return;
		}

		// Check for a draw
		if (IsBoardFull())
		{
			this->winnerLabel->Text = "Match Was a Draw";
			toggleEndView(true);
			return;
		}
		if (!muteAudio)
		{
			PlaySymbolAudio();//Symbol only. 
		}
		

		// Switch to the next player
		currentPlayer = !currentPlayer;

		return;

	}

	private:
		System::Boolean IsBoardFull()
		{
			for each (int cell in board)
			{
				if (cell == -1)
				{
					return false;
				}
			}
			return true;
		}

	private:
		System::Void UpdateSymbol(int index)
		{
			PictureBox^ box = nullptr;
			switch (index)
			{
			case 0: box = symbolBox0; break;
			case 1: box = symbolBox1; break;
			case 2: box = symbolBox2; break;
			case 3: box = symbolBox3; break;
			case 4: box = symbolBox4; break;
			case 5: box = symbolBox5; break;
			case 6: box = symbolBox6; break;
			case 7: box = symbolBox7; break;
			case 8: box = symbolBox8; break;
				// Repeat for other PictureBoxes (symbolBox2, symbolBox3, ...)
			}

			if (box != nullptr)
			{
				
				if (currentPlayer)
				{

					Image^ xIcon;
					switch (globalThemeStyle)
					{
					case 1:
						xIcon = Image::FromFile(Application::StartupPath + "\\Resources\\light-theme-x.png");
						break;
					case 2:
						xIcon = Image::FromFile(Application::StartupPath + "\\Resources\\dark-theme-x.png");
						break;
					case 3:
						xIcon = Image::FromFile(Application::StartupPath + "\\Resources\\wcsu-theme-x.png");
						break;
					}

					box->Image = xIcon;
					

				}
				else if(!currentPlayer)
				{
					Image^ oIcon;
					switch (globalThemeStyle)
					{
					case 1:
						oIcon = Image::FromFile(Application::StartupPath + "\\Resources\\light-theme-o.png");
						break;
					case 2:
						oIcon = Image::FromFile(Application::StartupPath + "\\Resources\\dark-theme-o.png");
						break;
					case 3:
						oIcon = Image::FromFile(Application::StartupPath + "\\Resources\\wcsu-theme-o.png");
						break;
					}

					box->Image = oIcon;
				}
			}
		}


	private:
		System::Void ResetGame()
		{
			board = gcnew array<int>(9) { -1, -1, -1, -1, -1, -1, -1, -1, -1 };
			currentPlayer = !currentPlayer;

			// Clear PictureBoxes
			symbolBox0->Image = nullptr;
			symbolBox1->Image = nullptr;
			symbolBox2->Image = nullptr;
			symbolBox3->Image = nullptr;
			symbolBox4->Image = nullptr;
			symbolBox5->Image = nullptr;
			symbolBox6->Image = nullptr;
			symbolBox7->Image = nullptr;
			symbolBox8->Image = nullptr;

			toggleEndView(false);

			// Repeat for other PictureBoxes (symbolBox2, symbolBox3, ...)
		}


		void PlayWinAudio()
		{
			//Identify the sound Path;
			String^ filePath1;
			String^ filePath2;
			switch (globalThemeStyle)
			{
			case 1:
				filePath1 = (Application::StartupPath + "\\Resources\\light-theme-p1win.wav");
				filePath2 = (Application::StartupPath + "\\Resources\\light-theme-p2win.wav");
				break;
			case 2:
				filePath1 = (Application::StartupPath + "\\Resources\\dark-theme-p1win.wav");
				filePath2 = (Application::StartupPath + "\\Resources\\dark-theme-p2win.wav");
				break;
			case 3:
				filePath1 = (Application::StartupPath + "\\Resources\\wcsu-theme-p1win.wav");
				filePath2 = (Application::StartupPath + "\\Resources\\wcsu-theme-p2win.wav");
				break;
			}



			try {
				// Create an instance of SoundPlayer
				System::Media::SoundPlayer^ player;
				if (currentPlayer)
				{
					player = gcnew System::Media::SoundPlayer(filePath1);
				}
				else {
					player = gcnew System::Media::SoundPlayer(filePath2);
				}


				// Load the .wav file (optional, but ensures file readiness)
				player->Load();

				// Play the audio file
				player->Play(); // Plays asynchronously


				// Use player->PlaySync(); for synchronous playback
			}
			catch (System::Exception^ ex) {
				// Handle exceptions (e.g., file not found, invalid format)
				MessageBox::Show("Error playing audio: " + ex->Message);
			}
		}

		void PlaySymbolAudio() 
		{
			//Identify the sound Path;
			String^ filePath1;
			String^ filePath2;
			switch (globalThemeStyle)
			{
			case 1:
				filePath1 = (Application::StartupPath + "\\Resources\\light-theme-p1move.wav");
				filePath2 = (Application::StartupPath + "\\Resources\\light-theme-p2move.wav");
				break;
			case 2:
				filePath1 = (Application::StartupPath + "\\Resources\\dark-theme-p1move.wav");
				filePath2 = (Application::StartupPath + "\\Resources\\dark-theme-p2move.wav");
				break;
			case 3:
				filePath1 = (Application::StartupPath + "\\Resources\\wcsu-theme-p1move.wav");
				filePath2 = (Application::StartupPath + "\\Resources\\wcsu-theme-p2move.wav");
				break;
			}



			try {
				// Create an instance of SoundPlayer
				System::Media::SoundPlayer^ player;
				if (currentPlayer)
				{
					player = gcnew System::Media::SoundPlayer(filePath1);
				}
				else {
					player = gcnew System::Media::SoundPlayer(filePath2);
				}
				 

				// Load the .wav file (optional, but ensures file readiness)
				player->Load();

				// Play the audio file
				player->Play(); // Plays asynchronously

				
				// Use player->PlaySync(); for synchronous playback
			}
			catch (System::Exception^ ex) {
				// Handle exceptions (e.g., file not found, invalid format)
				MessageBox::Show("Error playing audio: " + ex->Message);
			}
		}

	private:
		System::Boolean CheckWinner()
		{
			// Check each winning combination
			for each (array<int> ^ combo in winningCombinations)
			{
				// Ensure that all three positions in the combination are the same player and not -1 (empty)
				if (board[combo[0]] != -1 &&
					board[combo[0]] == board[combo[1]] &&
					board[combo[1]] == board[combo[2]])
				{
					return true;  // A winner has been found
				}
			}
			return false;  // No winner
		}

		System::Void toggleEndView(bool showEndView)
		{
			//Toggle the end view elements on
			winnerLabel->Visible		= showEndView;
			mainMenuReturnBtn->Visible	= showEndView;
			rematchBtn->Visible			= showEndView;
			saveMatchBtn->Visible		= showEndView;
			endGameBanner->Visible		= showEndView;

			//Disable the board
			symbolBox0->Enabled = !showEndView;
			symbolBox1->Enabled = !showEndView;
			symbolBox2->Enabled = !showEndView;
			symbolBox3->Enabled = !showEndView;
			symbolBox4->Enabled = !showEndView;
			symbolBox5->Enabled = !showEndView;
			symbolBox6->Enabled = !showEndView;
			symbolBox7->Enabled = !showEndView;
			symbolBox8->Enabled = !showEndView;
		}

		System::Void setupTheme(int themeStyle)
		{
			
			System::Drawing::Color backgroundColor1;
			System::Drawing::Color backgroundColor2;

			switch (themeStyle)
			{	
			case 1: 
				backgroundColor1 = System::Drawing::Color::FromArgb(255, 218, 218, 218);
				backgroundColor2 = System::Drawing::Color::FromArgb(255, 255, 255, 255);
				changeSymbolBoxColors1(backgroundColor1);
				changeSymbolBoxColors2(backgroundColor2);
				break;
			case 2: 
				backgroundColor1 = System::Drawing::Color::FromArgb(255, 99, 99, 99);
				backgroundColor2 = System::Drawing::Color::FromArgb(255, 60, 60, 60);
				changeSymbolBoxColors1(backgroundColor1);
				changeSymbolBoxColors2(backgroundColor2);
				break;
			case 3: 
				backgroundColor1 = System::Drawing::Color::FromArgb(255, 25, 74, 125);
				backgroundColor2 = System::Drawing::Color::FromArgb(255, 2, 45, 87);
				changeSymbolBoxColors1(backgroundColor1);
				changeSymbolBoxColors2(backgroundColor2);
				break;
			}
		}

		

		System::Void changeSymbolBoxColors1(Color backgroundColor)
		{
			symbolBox0->BackColor = backgroundColor;
			symbolBox2->BackColor = backgroundColor;
			symbolBox4->BackColor = backgroundColor;
			symbolBox6->BackColor = backgroundColor;
			symbolBox8->BackColor = backgroundColor;
		}
		System::Void changeSymbolBoxColors2(Color backgroundColor)
		{
			symbolBox1->BackColor = backgroundColor;
			symbolBox3->BackColor = backgroundColor;
			symbolBox5->BackColor = backgroundColor;
			symbolBox7->BackColor = backgroundColor;
		}


	private: System::Void scoreLabel_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
		private: System::Void rematchBtn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			ResetGame();
		}

		private: System::Void mainMenuReturnBtn_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			GoToHome(this, EventArgs::Empty);
		}
		private: System::Void muteBox_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//Default = false; 
			if (muteAudio)
			{
				muteBox->Image = Image::FromFile(Application::StartupPath + "\\Resources\\sound-button-on.png");
				muteAudio = false;
			}
			else {
				muteBox->Image = Image::FromFile(Application::StartupPath + "\\Resources\\sound-button-off.png");
				muteAudio = true;
			}

			
		}
};
}
