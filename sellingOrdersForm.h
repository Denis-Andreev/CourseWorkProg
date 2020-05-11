#include "functions.h"
#include "dealAmountForm.h"
#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для sellingOrdersForm
	/// </summary>
	public ref class sellingOrdersForm : public System::Windows::Forms::Form
	{
	public:
		sellingOrdersForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~sellingOrdersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SellToMain;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ sellerNameEdit;
	private: System::Windows::Forms::TextBox^ sellerSurnameEdit;
	private: System::Windows::Forms::TextBox^ sellerPhoneEdit;
	private: System::Windows::Forms::TextBox^ constructionNameEdit;
	private: System::Windows::Forms::TextBox^ constructionCostEdit;
	private: System::Windows::Forms::TextBox^ sellerNotesEdit;







	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ addSellerButton;


	private: System::Windows::Forms::Button^ clearEditsButton;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ sellerTable;
	private: System::Windows::Forms::Button^ SearchSeller;
	private: System::Windows::Forms::TextBox^ searchSellerData;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ RemoveSeller;
	private: System::Windows::Forms::Button^ RefreshSeller;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sellerName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sellerSurname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sellerPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ constructionName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ constructionCost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sellerNotes;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ sellerCondition;








	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SellToMain = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->sellerNameEdit = (gcnew System::Windows::Forms::TextBox());
			this->sellerSurnameEdit = (gcnew System::Windows::Forms::TextBox());
			this->sellerPhoneEdit = (gcnew System::Windows::Forms::TextBox());
			this->constructionNameEdit = (gcnew System::Windows::Forms::TextBox());
			this->constructionCostEdit = (gcnew System::Windows::Forms::TextBox());
			this->sellerNotesEdit = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->addSellerButton = (gcnew System::Windows::Forms::Button());
			this->clearEditsButton = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->sellerTable = (gcnew System::Windows::Forms::DataGridView());
			this->sellerName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sellerSurname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sellerPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->constructionName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->constructionCost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sellerNotes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sellerCondition = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->SearchSeller = (gcnew System::Windows::Forms::Button());
			this->searchSellerData = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->RemoveSeller = (gcnew System::Windows::Forms::Button());
			this->RefreshSeller = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sellerTable))->BeginInit();
			this->SuspendLayout();
			// 
			// SellToMain
			// 
			this->SellToMain->Location = System::Drawing::Point(951, 595);
			this->SellToMain->Name = L"SellToMain";
			this->SellToMain->Size = System::Drawing::Size(170, 45);
			this->SellToMain->TabIndex = 0;
			this->SellToMain->Text = L"На главную";
			this->SellToMain->UseVisualStyleBackColor = true;
			this->SellToMain->Click += gcnew System::EventHandler(this, &sellingOrdersForm::SellToMain_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(163, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Данные о владельце";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(169, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Данные об объекте";
			// 
			// sellerNameEdit
			// 
			this->sellerNameEdit->Location = System::Drawing::Point(141, 118);
			this->sellerNameEdit->Name = L"sellerNameEdit";
			this->sellerNameEdit->Size = System::Drawing::Size(173, 20);
			this->sellerNameEdit->TabIndex = 3;
			// 
			// sellerSurnameEdit
			// 
			this->sellerSurnameEdit->Location = System::Drawing::Point(142, 151);
			this->sellerSurnameEdit->Name = L"sellerSurnameEdit";
			this->sellerSurnameEdit->Size = System::Drawing::Size(172, 20);
			this->sellerSurnameEdit->TabIndex = 4;
			// 
			// sellerPhoneEdit
			// 
			this->sellerPhoneEdit->Location = System::Drawing::Point(142, 183);
			this->sellerPhoneEdit->Name = L"sellerPhoneEdit";
			this->sellerPhoneEdit->Size = System::Drawing::Size(172, 20);
			this->sellerPhoneEdit->TabIndex = 5;
			// 
			// constructionNameEdit
			// 
			this->constructionNameEdit->Location = System::Drawing::Point(142, 253);
			this->constructionNameEdit->Name = L"constructionNameEdit";
			this->constructionNameEdit->Size = System::Drawing::Size(172, 20);
			this->constructionNameEdit->TabIndex = 6;
			// 
			// constructionCostEdit
			// 
			this->constructionCostEdit->Location = System::Drawing::Point(142, 286);
			this->constructionCostEdit->Name = L"constructionCostEdit";
			this->constructionCostEdit->Size = System::Drawing::Size(172, 20);
			this->constructionCostEdit->TabIndex = 7;
			// 
			// sellerNotesEdit
			// 
			this->sellerNotesEdit->Location = System::Drawing::Point(141, 336);
			this->sellerNotesEdit->Multiline = true;
			this->sellerNotesEdit->Name = L"sellerNotesEdit";
			this->sellerNotesEdit->Size = System::Drawing::Size(173, 90);
			this->sellerNotesEdit->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(103, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Имя:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(76, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Фамилия:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Наименование/тип:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(70, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Стоимость:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(62, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Примечания:";
			// 
			// addSellerButton
			// 
			this->addSellerButton->Location = System::Drawing::Point(229, 441);
			this->addSellerButton->Name = L"addSellerButton";
			this->addSellerButton->Size = System::Drawing::Size(85, 26);
			this->addSellerButton->TabIndex = 14;
			this->addSellerButton->Text = L"Добавить";
			this->addSellerButton->UseVisualStyleBackColor = true;
			this->addSellerButton->Click += gcnew System::EventHandler(this, &sellingOrdersForm::AddSellerButton_Click);
			// 
			// clearEditsButton
			// 
			this->clearEditsButton->Location = System::Drawing::Point(138, 441);
			this->clearEditsButton->Name = L"clearEditsButton";
			this->clearEditsButton->Size = System::Drawing::Size(85, 26);
			this->clearEditsButton->TabIndex = 15;
			this->clearEditsButton->Text = L"Очистить";
			this->clearEditsButton->UseVisualStyleBackColor = true;
			this->clearEditsButton->Click += gcnew System::EventHandler(this, &sellingOrdersForm::clearEditsButton_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(39, 183);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Номер телефона:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(62, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(199, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Заявка на продажу";
			// 
			// sellerTable
			// 
			this->sellerTable->AllowUserToAddRows = false;
			this->sellerTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->sellerTable->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->sellerTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->sellerTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->sellerName,
					this->sellerSurname, this->sellerPhone, this->constructionName, this->constructionCost, this->sellerNotes, this->sellerCondition
			});
			this->sellerTable->Location = System::Drawing::Point(373, 118);
			this->sellerTable->Name = L"sellerTable";
			this->sellerTable->Size = System::Drawing::Size(748, 396);
			this->sellerTable->TabIndex = 18;
			this->sellerTable->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &sellingOrdersForm::SellerTable_CellValueChanged);
			this->sellerTable->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &sellingOrdersForm::SellerTable_RowsAdded);
			// 
			// sellerName
			// 
			this->sellerName->HeaderText = L"Имя";
			this->sellerName->Name = L"sellerName";
			// 
			// sellerSurname
			// 
			this->sellerSurname->HeaderText = L"Фамилия";
			this->sellerSurname->Name = L"sellerSurname";
			// 
			// sellerPhone
			// 
			this->sellerPhone->HeaderText = L"Номер телефона";
			this->sellerPhone->Name = L"sellerPhone";
			// 
			// constructionName
			// 
			this->constructionName->HeaderText = L"Наименование/Тип";
			this->constructionName->Name = L"constructionName";
			// 
			// constructionCost
			// 
			this->constructionCost->HeaderText = L"Стоимость";
			this->constructionCost->Name = L"constructionCost";
			// 
			// sellerNotes
			// 
			this->sellerNotes->HeaderText = L"Примечания";
			this->sellerNotes->Name = L"sellerNotes";
			// 
			// sellerCondition
			// 
			this->sellerCondition->HeaderText = L"Обработан";
			this->sellerCondition->Name = L"sellerCondition";
			// 
			// SearchSeller
			// 
			this->SearchSeller->Location = System::Drawing::Point(1054, 84);
			this->SearchSeller->Name = L"SearchSeller";
			this->SearchSeller->Size = System::Drawing::Size(67, 23);
			this->SearchSeller->TabIndex = 21;
			this->SearchSeller->Text = L"Поиск";
			this->SearchSeller->UseVisualStyleBackColor = true;
			this->SearchSeller->Click += gcnew System::EventHandler(this, &sellingOrdersForm::SearchSeller_Click);
			// 
			// searchSellerData
			// 
			this->searchSellerData->Location = System::Drawing::Point(529, 86);
			this->searchSellerData->Name = L"searchSellerData";
			this->searchSellerData->Size = System::Drawing::Size(509, 20);
			this->searchSellerData->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(370, 88);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(153, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Введите данные для поиска:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(792, 520);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 24);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Экспортировать таблицу в Excel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &sellingOrdersForm::Button3_Click);
			// 
			// RemoveSeller
			// 
			this->RemoveSeller->Location = System::Drawing::Point(373, 521);
			this->RemoveSeller->Name = L"RemoveSeller";
			this->RemoveSeller->Size = System::Drawing::Size(75, 23);
			this->RemoveSeller->TabIndex = 23;
			this->RemoveSeller->Text = L"Удалить";
			this->RemoveSeller->UseVisualStyleBackColor = true;
			this->RemoveSeller->Click += gcnew System::EventHandler(this, &sellingOrdersForm::RemoveCustomer_Click);
			// 
			// RefreshSeller
			// 
			this->RefreshSeller->Location = System::Drawing::Point(997, 521);
			this->RefreshSeller->Name = L"RefreshSeller";
			this->RefreshSeller->Size = System::Drawing::Size(124, 23);
			this->RefreshSeller->TabIndex = 22;
			this->RefreshSeller->Text = L"Обновить";
			this->RefreshSeller->UseVisualStyleBackColor = true;
			this->RefreshSeller->Click += gcnew System::EventHandler(this, &sellingOrdersForm::RefreshSeller_Click);
			// 
			// sellingOrdersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1133, 661);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->RemoveSeller);
			this->Controls->Add(this->RefreshSeller);
			this->Controls->Add(this->SearchSeller);
			this->Controls->Add(this->searchSellerData);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->sellerTable);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->clearEditsButton);
			this->Controls->Add(this->addSellerButton);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->sellerNotesEdit);
			this->Controls->Add(this->constructionCostEdit);
			this->Controls->Add(this->constructionNameEdit);
			this->Controls->Add(this->sellerPhoneEdit);
			this->Controls->Add(this->sellerSurnameEdit);
			this->Controls->Add(this->sellerNameEdit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SellToMain);
			this->Name = L"sellingOrdersForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Заявки на продажу";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &sellingOrdersForm::SellingOrdersForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &sellingOrdersForm::SellingOrdersForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sellerTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Cохранение данных таблицы(или изменений в ней)
	void savingSellerTable() {
		String^ fileName = "seller.txt";
		StreamWriter^ sw = gcnew StreamWriter(fileName, false); // если false будет перезапись
		String^ sellerName;
		String^ sellerSurname;
		String^ sellerPhone;
		String^ constructionName;
		String^ constructionCost;
		String^ sellerNotes;
		for (int i = 0; i < sellerTable->RowCount; ++i) {
			sellerName = Convert::ToString(sellerTable->Rows[i]->Cells[0]->Value);
			sellerSurname = Convert::ToString(sellerTable->Rows[i]->Cells[1]->Value);
			sellerPhone = Convert::ToString(sellerTable->Rows[i]->Cells[2]->Value);
			constructionName = Convert::ToString(sellerTable->Rows[i]->Cells[3]->Value);
			constructionCost = Convert::ToString(sellerTable->Rows[i]->Cells[4]->Value);
			sellerNotes = Convert::ToString(sellerTable->Rows[i]->Cells[5]->Value);
			sw->WriteLine(sellerName);
			sw->WriteLine(sellerSurname);
			sw->WriteLine(sellerPhone);
			sw->WriteLine(constructionName);
			sw->WriteLine(constructionCost);
			sw->WriteLine(sellerNotes);
		}
		sw->Close();
	}
	// Считывания данных из файла в таблицу
	void updateSellerTable() {
		String^ sellerName;
		String^ sellerSurname;
		String^ sellerPhone;
		String^ constructionName;
		String^ constructionCost;
		String^ sellerNotes;
		String^ fileName = "seller.txt";
		createFileIfUndef(fileName); // создает файл, если он не существует
		try
		{
			StreamReader^ din = File::OpenText(fileName);

			while (true)
			{
				if (din->Peek() == -1)
				{
					break;
				}
				sellerName = din->ReadLine();
				sellerSurname = din->ReadLine();
				sellerPhone = din->ReadLine();
				constructionName = din->ReadLine();
				constructionCost = din->ReadLine();
				sellerNotes = din->ReadLine();
				sellerTable->Rows->Add(sellerName, sellerSurname, sellerPhone, constructionName, constructionCost, sellerNotes);
			}
			din->Close();
		}
		catch (Exception ^ e)
		{
			MessageBox::Show("Файлов данных не существует. Создаем...");
		}
	}

	// С заявок на продажу на главную
	private: System::Void SellToMain_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ mainForm = this->Owner;  // Получаем указатель на владельца 
		mainForm->Show();  //  Показываем владельца
	}
	// удаление ячейки
	private: System::Void RemoveCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteRowFromTable(sellerTable);
	}
	// экспорт таблицы excel
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		generateExcelExport(sellerTable);
	}
	private: System::Void SearchSeller_Click(System::Object^ sender, System::EventArgs^ e) {
		searchFromTable(searchSellerData, sellerTable);
	}
	// очистка элементов ввода
	void clearEdits() {
		sellerNameEdit->Text = "";
		sellerSurnameEdit->Text = "";
		sellerPhoneEdit->Text = "";
		constructionNameEdit->Text = "";
		constructionCostEdit->Text = "";
		sellerNotesEdit->Text = "";
	}
	// кнопка для очистки элементов ввода
	private: System::Void clearEditsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clearEdits();
	}
	// добавление данных с элементов ввода в таблицу
	private: System::Void AddSellerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sellerName = sellerNameEdit->Text;
		String^ sellerSurname = sellerSurnameEdit->Text;
		String^ sellerPhone = sellerPhoneEdit->Text;
		String^ constructionName = constructionNameEdit->Text;
		String^ constructionCost = constructionCostEdit->Text;
		String^ sellerNotes = sellerNotesEdit->Text;
		// Проверка телефона на корректность
		bool error = numberValidation(sellerPhone, 0);
		// Проверка заполненности полей
		if (sellerName == "" || sellerSurname == "" ||
			sellerPhone == "" || constructionName == "" ||
			constructionCost == "" || sellerNotes == "") {
			if (!(MessageBox::Show("Заполнены не все поля! Продолжить?",
				"Предупреждение!", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				&& error != true)
			{
				error = true;
			}
			else {
				// это делаю, чтобы потом с файла считывались и пустые значения в виде пробелов
				if (sellerName == "") { sellerName = " "; }
				if (sellerSurname == "") { sellerSurname = " "; }
				if (sellerPhone == "") { sellerPhone = " "; }
				if (constructionName == "") { constructionName = " "; }
				if (constructionCost == "") { constructionCost = " "; }
				if (sellerNotes == "") { sellerNotes = " "; }
			}
		}
		if (error != true) {
			// Добавление данных в таблицу
			sellerTable->Rows->Add(sellerName, sellerSurname, sellerPhone, constructionName, constructionCost, sellerNotes);
			// Очистка ячеек
			clearEdits();
		}
	}
	// Нумерация таблицы
	private: System::Void SellerTable_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
		sellerTable->Rows[e->RowIndex]->HeaderCell->Value = (e->RowIndex + 1).ToString();
	}
	// Считывание данных с файла в таблицу при загрузке формы
	private: System::Void SellingOrdersForm_Load(System::Object^ sender, System::EventArgs^ e) {
		updateSellerTable();
	}
	// Перезапись таблицы в файл по клику
	private: System::Void RefreshSeller_Click(System::Object^ sender, System::EventArgs^ e) {
		savingSellerTable();
	}
	// Завершение программы, при закрытии формы
	private: System::Void SellingOrdersForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
	// Обрабатывается событие изменения ячеек, если эта ячейка с чекбоксом, то добавляем строку с продавцом в файл с обработанными клиентами
	// из которого будет формироваться отдельная таблица с ними же
	private: System::Void SellerTable_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// обработка исключения
		int row = e->RowIndex;
		int column = e->ColumnIndex;
		if (row < 0 || column < 0) {
			return;
		}
		// если изменившаяся ячейка чекбокс и он равен true
		if (column == 6 && Convert::ToBoolean(sellerTable->Rows[row]->Cells[column]->Value)) {
			dealAmountForm^ amountDialog = gcnew dealAmountForm();
			// открывается диалоговое окно с заполнением данных по сделкам
			if (amountDialog->ShowDialog(this) == System::Windows::Forms::DialogResult::OK) {
				String^ name = Convert::ToString(sellerTable->Rows[row]->Cells[0]->Value);
				String^ surname = Convert::ToString(sellerTable->Rows[row]->Cells[1]->Value);
				String^ phone = Convert::ToString(sellerTable->Rows[row]->Cells[2]->Value);
				String^ secondSide = Convert::ToString(amountDialog->dealUserEdit->Text);
				String^ dealData = Convert::ToString(amountDialog->dealDataEdit->Text);
				String^ dealAmount = Convert::ToString(amountDialog->dealAmountEdit->Text);
				if (secondSide == "") { secondSide = "Нет данных"; }
				if (dealAmount == "") { dealAmount = "0"; }
				// Сначала записываем данные по сделке в отдельный файл
				String^ dealStatisticFile = "dealStatistic.txt";
				StreamWriter^ swDS = gcnew StreamWriter(dealStatisticFile, true); // если false будет перезапись
				swDS->WriteLine(dealData);
				swDS->WriteLine(dealAmount);
				swDS->Close();
				// Далее записываем данные об обработанном клиенте в другой файл
				String^ fileName = "readyClients.txt";
				StreamWriter^ sw = gcnew StreamWriter(fileName, true); // если false будет перезапись
				sw->WriteLine(dealData);
				sw->WriteLine(name);
				sw->WriteLine(surname);
				sw->WriteLine(phone);
				sw->WriteLine("продажа");
				sw->WriteLine(dealAmount);
				sw->WriteLine(secondSide);
				sw->Close();
				// и очищаем ячейку
				sellerTable->Rows->RemoveAt(row);

				amountDialog->Close();
			}
			else {
				amountDialog->Close();
				sellerTable->Rows[row]->Cells[column]->Value = false;
				return;
			}
		}
	}
};
}
