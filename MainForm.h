// Форма с покупателями
#include "buyersForm.h"

// Форма с заявками на продажу
#include "sellingOrdersForm.h"

// Форма с обработанными заявками
#include "successDealsForm.h"

#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для buyersForm1
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			// Добавляем форму с покупателями(делаем дочерней)
			buyersForm = gcnew CourseWork::buyersForm();
			buyersForm->Owner = this;
			buyersForm->Hide();

			// Добавляем форму с обработанными заявками(делаем дочерней)
			successDealsF = gcnew successDealsForm();
			successDealsF->Owner = this;
			successDealsF->Hide();

			// Добавляем форму с заявками на продажу(делаем дочерней)
			sellingOrdersF = gcnew sellingOrdersForm();
			sellingOrdersF->Owner = this;
			sellingOrdersF->Hide();
		}
	private:
		// Форма с заявками на покупку
		buyersForm^ buyersForm;
		// Форма с заявками на продажу
		sellingOrdersForm^ sellingOrdersF;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ sellCountLabel;
	private: System::Windows::Forms::Label^ buyCountLabel;
	private: System::Windows::Forms::Label^ dealCountLabel;
	private: System::Windows::Forms::Label^ dealMoneyLabel;
	private: System::Windows::Forms::Label^ profitAmountLabel;





	private: System::Windows::Forms::Button^ refreshMainInfo;
			 // Форма с обработанными заявками
			 successDealsForm^ successDealsF;


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ MainToSuccess;
	protected:

	private: System::Windows::Forms::Button^ MainToSell;
	protected:

	private: System::Windows::Forms::Button^ MainToBuy;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ dealCommission;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dealTable;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dealData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dealAmount;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->MainToSuccess = (gcnew System::Windows::Forms::Button());
			this->MainToSell = (gcnew System::Windows::Forms::Button());
			this->MainToBuy = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dealCommission = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dealTable = (gcnew System::Windows::Forms::DataGridView());
			this->dealData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dealAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->sellCountLabel = (gcnew System::Windows::Forms::Label());
			this->buyCountLabel = (gcnew System::Windows::Forms::Label());
			this->dealCountLabel = (gcnew System::Windows::Forms::Label());
			this->dealMoneyLabel = (gcnew System::Windows::Forms::Label());
			this->profitAmountLabel = (gcnew System::Windows::Forms::Label());
			this->refreshMainInfo = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealTable))->BeginInit();
			this->SuspendLayout();
			// 
			// MainToSuccess
			// 
			this->MainToSuccess->Location = System::Drawing::Point(618, 628);
			this->MainToSuccess->Name = L"MainToSuccess";
			this->MainToSuccess->Size = System::Drawing::Size(132, 38);
			this->MainToSuccess->TabIndex = 0;
			this->MainToSuccess->Text = L"Обработанные заявки";
			this->MainToSuccess->UseVisualStyleBackColor = true;
			this->MainToSuccess->Click += gcnew System::EventHandler(this, &MainForm::MainToSuccess_Click);
			// 
			// MainToSell
			// 
			this->MainToSell->Location = System::Drawing::Point(480, 628);
			this->MainToSell->Name = L"MainToSell";
			this->MainToSell->Size = System::Drawing::Size(132, 38);
			this->MainToSell->TabIndex = 1;
			this->MainToSell->Text = L"Заявки на продажу";
			this->MainToSell->UseVisualStyleBackColor = true;
			this->MainToSell->Click += gcnew System::EventHandler(this, &MainForm::MainToSell_Click);
			// 
			// MainToBuy
			// 
			this->MainToBuy->Location = System::Drawing::Point(338, 628);
			this->MainToBuy->Name = L"MainToBuy";
			this->MainToBuy->Size = System::Drawing::Size(136, 38);
			this->MainToBuy->TabIndex = 2;
			this->MainToBuy->Text = L"Заявки на покупку";
			this->MainToBuy->UseVisualStyleBackColor = true;
			this->MainToBuy->Click += gcnew System::EventHandler(this, &MainForm::MainToBuy_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(36, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Коммиссия со сделок (%):";
			// 
			// dealCommission
			// 
			this->dealCommission->Location = System::Drawing::Point(222, 143);
			this->dealCommission->Name = L"dealCommission";
			this->dealCommission->Size = System::Drawing::Size(37, 20);
			this->dealCommission->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(409, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 31);
			this->label2->TabIndex = 5;
			this->label2->Text = L"База данных";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(278, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(472, 31);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Агенство по продаже недвижимости";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(399, 408);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Итоговая прибыль: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(429, 581);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(224, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Навигация по таблицам";
			// 
			// dealTable
			// 
			this->dealTable->AllowUserToAddRows = false;
			this->dealTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dealTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dealTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->dealData, this->dealAmount });
			this->dealTable->Location = System::Drawing::Point(39, 169);
			this->dealTable->Name = L"dealTable";
			this->dealTable->Size = System::Drawing::Size(315, 318);
			this->dealTable->TabIndex = 9;
			this->dealTable->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MainForm::DealTable_RowsAdded);
			// 
			// dealData
			// 
			this->dealData->HeaderText = L"Дата сделки";
			this->dealData->Name = L"dealData";
			// 
			// dealAmount
			// 
			this->dealAmount->HeaderText = L"Сумма сделки";
			this->dealAmount->Name = L"dealAmount";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(399, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Количество сделок:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(399, 350);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Общая сумма сделок:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(399, 246);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(219, 17);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Обработано заявок на покупку:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(399, 193);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(223, 17);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Обработано заявок на продажу:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(398, 142);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(222, 24);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Основная информация:";
			// 
			// sellCountLabel
			// 
			this->sellCountLabel->AutoSize = true;
			this->sellCountLabel->BackColor = System::Drawing::SystemColors::Control;
			this->sellCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sellCountLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->sellCountLabel->Location = System::Drawing::Point(683, 193);
			this->sellCountLabel->Name = L"sellCountLabel";
			this->sellCountLabel->Size = System::Drawing::Size(84, 20);
			this->sellCountLabel->TabIndex = 15;
			this->sellCountLabel->Text = L"sellCount";
			// 
			// buyCountLabel
			// 
			this->buyCountLabel->AutoSize = true;
			this->buyCountLabel->BackColor = System::Drawing::SystemColors::Control;
			this->buyCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buyCountLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buyCountLabel->Location = System::Drawing::Point(683, 246);
			this->buyCountLabel->Name = L"buyCountLabel";
			this->buyCountLabel->Size = System::Drawing::Size(85, 20);
			this->buyCountLabel->TabIndex = 16;
			this->buyCountLabel->Text = L"buyCount";
			// 
			// dealCountLabel
			// 
			this->dealCountLabel->AutoSize = true;
			this->dealCountLabel->BackColor = System::Drawing::SystemColors::Control;
			this->dealCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dealCountLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dealCountLabel->Location = System::Drawing::Point(683, 298);
			this->dealCountLabel->Name = L"dealCountLabel";
			this->dealCountLabel->Size = System::Drawing::Size(91, 20);
			this->dealCountLabel->TabIndex = 17;
			this->dealCountLabel->Text = L"dealCount";
			// 
			// dealMoneyLabel
			// 
			this->dealMoneyLabel->AutoSize = true;
			this->dealMoneyLabel->BackColor = System::Drawing::SystemColors::Control;
			this->dealMoneyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dealMoneyLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dealMoneyLabel->Location = System::Drawing::Point(683, 350);
			this->dealMoneyLabel->Name = L"dealMoneyLabel";
			this->dealMoneyLabel->Size = System::Drawing::Size(157, 20);
			this->dealMoneyLabel->TabIndex = 18;
			this->dealMoneyLabel->Text = L"dealMoneyAmount";
			// 
			// profitAmountLabel
			// 
			this->profitAmountLabel->AutoSize = true;
			this->profitAmountLabel->BackColor = System::Drawing::SystemColors::Control;
			this->profitAmountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->profitAmountLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->profitAmountLabel->Location = System::Drawing::Point(683, 408);
			this->profitAmountLabel->Name = L"profitAmountLabel";
			this->profitAmountLabel->Size = System::Drawing::Size(113, 20);
			this->profitAmountLabel->TabIndex = 19;
			this->profitAmountLabel->Text = L"profitAmount";
			// 
			// refreshMainInfo
			// 
			this->refreshMainInfo->Location = System::Drawing::Point(277, 142);
			this->refreshMainInfo->Name = L"refreshMainInfo";
			this->refreshMainInfo->Size = System::Drawing::Size(77, 23);
			this->refreshMainInfo->TabIndex = 20;
			this->refreshMainInfo->Text = L"Обновить";
			this->refreshMainInfo->UseVisualStyleBackColor = true;
			this->refreshMainInfo->Click += gcnew System::EventHandler(this, &MainForm::RefreshMainInfo_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 689);
			this->Controls->Add(this->refreshMainInfo);
			this->Controls->Add(this->profitAmountLabel);
			this->Controls->Add(this->dealMoneyLabel);
			this->Controls->Add(this->dealCountLabel);
			this->Controls->Add(this->buyCountLabel);
			this->Controls->Add(this->sellCountLabel);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dealTable);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dealCommission);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MainToBuy);
			this->Controls->Add(this->MainToSell);
			this->Controls->Add(this->MainToSuccess);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Главная";
			this->Activated += gcnew System::EventHandler(this, &MainForm::MainForm_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Нумерация таблицы
	private: System::Void DealTable_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
		dealTable->Rows[e->RowIndex]->HeaderCell->Value = (e->RowIndex + 1).ToString();
	}
	// Функция считывания данных из файла в таблицу
	void updateDealTable() {
		String^ date;
		String^ dealAmount;
		String^ fileName = "dealStatistic.txt";
		createFileIfUndef(fileName); // создает файл, если он не существует
		// Предварительная очистка таблицы, чтобы избежать дублирования информации
		dealTable->Rows->Clear();
		try {
			StreamReader^ din = File::OpenText(fileName);
			while (true)
			{
				if (din->Peek() == -1)
				{
					break;
				}
				date = din->ReadLine();
				dealAmount = din->ReadLine();
				dealTable->Rows->Add(date, dealAmount);
			}
			din->Close();
		}
		catch (Exception ^ e)
		{
			MessageBox::Show("Файлов данных не существует. Создаем...");
		}
	}
	// с главной на форму с покупателями
	private: System::Void MainToBuy_Click(System::Object ^ sender, System::EventArgs ^ e) {
		buyersForm->Show();
		this->Hide();
	}
	// с главной на форму с заявками на продажу
	private: System::Void MainToSell_Click(System::Object ^ sender, System::EventArgs ^ e) {
		sellingOrdersF->Show();
		this->Hide();
	}
	//  с главной на форму с обработанными заявками
	private: System::Void MainToSuccess_Click(System::Object ^ sender, System::EventArgs ^ e) {
		successDealsF->Show();
		this->Hide();
	}
	// завершение работы приложения по закрытию формы
	private: System::Void MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
	// Функция расчета и загрузки основной информации
	void uploadInfo() {
		using namespace System::Text::RegularExpressions;
		// Проверяем ввод величины коммиссии на корректность и записываем в файл
		double commission;
		if (dealCommission->Text != "") {
			commission = Double::Parse(dealCommission->Text->Replace(".", ","));
		}
		else {
			MessageBox::Show("Пустой ввод.");
			return;
		}
		int countOfDeals = 0;
		int countOfSales = 0;
		int countOfByus = 0;
		long int moneyAmount = statisticCalc(countOfDeals, countOfSales, countOfByus);
		int dealCount = countOfByus + countOfSales;
		String^ filename = "dealCommission.txt";
		StreamWriter^ sw = gcnew StreamWriter(filename, false); // если false будет перезапись
		sw->WriteLine(dealCommission->Text);
		sw->Close();
		// Записываем данные на форму
		sellCountLabel->Text = Convert::ToString(countOfSales);
		buyCountLabel->Text = Convert::ToString(countOfByus);
		dealCountLabel->Text = Convert::ToString(dealCount);
		dealMoneyLabel->Text = Convert::ToString(moneyAmount) + " руб.";
		profitAmountLabel->Text = Convert::ToString(Math::Round(moneyAmount * commission / 100)) + " руб.";
	}
	// Считывания данных о комиссии, запись в Edit и вывод основной информации
	void uploadCommission() {
		String^ fileName = "dealCommission.txt";
		try {
			StreamReader^ din = File::OpenText(fileName);
			String^ comission = din->ReadLine();
			din->Close();
			dealCommission->Text = comission;
			uploadInfo();
		}
		catch (Exception ^ e){}
	}
	// Расчет и загрузка основной информации
	private: System::Void RefreshMainInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		uploadInfo();
	}
 	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Считыванием данные из файла в таблицу при загрузке формы
		updateDealTable();
		// Загружаем данные о комиссии и выводим основную информацию
		uploadCommission();
	}
	private: System::Void MainForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		// Считыванием данные из файла в таблицу при активации формы
		updateDealTable();
	}
};
}
