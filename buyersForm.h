#include <cstdio>
#include "dealAmountForm.h"
#include "functions.h"
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
	/// Сводка для buyersForm
	/// </summary>
	public ref class buyersForm : public System::Windows::Forms::Form
	{
	public:
		buyersForm(void)
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
		~buyersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ CustomerTable;
	protected:





	private: System::Windows::Forms::Button^ RefreshCustomer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ searchCustomerData;

	private: System::Windows::Forms::Button^ SearchCustomer;






	private: System::Windows::Forms::Button^ AddCustomer;
	private: System::Windows::Forms::Button^ RemoveCustomer;
	private: System::Windows::Forms::TextBox^ CustomerName;


	private: System::Windows::Forms::TextBox^ CustomerSurname;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ CustomerBudget;

	private: System::Windows::Forms::TextBox^ CustomerNotes;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ CustomerPhone;







	private: System::Windows::Forms::Button^ exportBuyers;

	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::Button^ BuyToMain;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerTable_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerTable_Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerTable_Budget;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerTable_Phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerTable_Notes;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ CustomerTable_Condition;








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
			this->CustomerTable = (gcnew System::Windows::Forms::DataGridView());
			this->CustomerTable_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerTable_Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerTable_Budget = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerTable_Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerTable_Notes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerTable_Condition = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->RefreshCustomer = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->searchCustomerData = (gcnew System::Windows::Forms::TextBox());
			this->SearchCustomer = (gcnew System::Windows::Forms::Button());
			this->AddCustomer = (gcnew System::Windows::Forms::Button());
			this->RemoveCustomer = (gcnew System::Windows::Forms::Button());
			this->CustomerName = (gcnew System::Windows::Forms::TextBox());
			this->CustomerSurname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CustomerBudget = (gcnew System::Windows::Forms::TextBox());
			this->CustomerNotes = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->CustomerPhone = (gcnew System::Windows::Forms::TextBox());
			this->exportBuyers = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->BuyToMain = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerTable))->BeginInit();
			this->SuspendLayout();
			// 
			// CustomerTable
			// 
			this->CustomerTable->AllowUserToAddRows = false;
			this->CustomerTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CustomerTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CustomerTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->CustomerTable_Name,
					this->CustomerTable_Surname, this->CustomerTable_Budget, this->CustomerTable_Phone, this->CustomerTable_Notes, this->CustomerTable_Condition
			});
			this->CustomerTable->Location = System::Drawing::Point(363, 99);
			this->CustomerTable->Name = L"CustomerTable";
			this->CustomerTable->RowHeadersWidth = 60;
			this->CustomerTable->Size = System::Drawing::Size(695, 419);
			this->CustomerTable->TabIndex = 0;
			this->CustomerTable->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &buyersForm::CustomerTable_CellValueChanged);
			this->CustomerTable->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &buyersForm::CustomerTable_RowsAdded);
			// 
			// CustomerTable_Name
			// 
			this->CustomerTable_Name->HeaderText = L"Имя";
			this->CustomerTable_Name->Name = L"CustomerTable_Name";
			// 
			// CustomerTable_Surname
			// 
			this->CustomerTable_Surname->HeaderText = L"Фамилия";
			this->CustomerTable_Surname->Name = L"CustomerTable_Surname";
			// 
			// CustomerTable_Budget
			// 
			this->CustomerTable_Budget->HeaderText = L"Бюджет";
			this->CustomerTable_Budget->Name = L"CustomerTable_Budget";
			// 
			// CustomerTable_Phone
			// 
			this->CustomerTable_Phone->HeaderText = L"Телефон";
			this->CustomerTable_Phone->Name = L"CustomerTable_Phone";
			// 
			// CustomerTable_Notes
			// 
			this->CustomerTable_Notes->HeaderText = L"Примечания";
			this->CustomerTable_Notes->Name = L"CustomerTable_Notes";
			// 
			// CustomerTable_Condition
			// 
			this->CustomerTable_Condition->HeaderText = L"Обработан";
			this->CustomerTable_Condition->Name = L"CustomerTable_Condition";
			this->CustomerTable_Condition->ToolTipText = L"При обработке, будет перенесен в таблицу обработанных клиентов";
			// 
			// RefreshCustomer
			// 
			this->RefreshCustomer->Location = System::Drawing::Point(934, 524);
			this->RefreshCustomer->Name = L"RefreshCustomer";
			this->RefreshCustomer->Size = System::Drawing::Size(124, 23);
			this->RefreshCustomer->TabIndex = 1;
			this->RefreshCustomer->Text = L"Обновить";
			this->RefreshCustomer->UseVisualStyleBackColor = true;
			this->RefreshCustomer->Click += gcnew System::EventHandler(this, &buyersForm::RefreshCustomer_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(360, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите данные для поиска:";
			// 
			// searchCustomerData
			// 
			this->searchCustomerData->Location = System::Drawing::Point(518, 59);
			this->searchCustomerData->Name = L"searchCustomerData";
			this->searchCustomerData->Size = System::Drawing::Size(467, 20);
			this->searchCustomerData->TabIndex = 3;
			// 
			// SearchCustomer
			// 
			this->SearchCustomer->Location = System::Drawing::Point(991, 59);
			this->SearchCustomer->Name = L"SearchCustomer";
			this->SearchCustomer->Size = System::Drawing::Size(67, 23);
			this->SearchCustomer->TabIndex = 4;
			this->SearchCustomer->Text = L"Поиск";
			this->SearchCustomer->UseVisualStyleBackColor = true;
			this->SearchCustomer->Click += gcnew System::EventHandler(this, &buyersForm::SearchCustomer_Click);
			// 
			// AddCustomer
			// 
			this->AddCustomer->BackColor = System::Drawing::SystemColors::ControlLight;
			this->AddCustomer->Location = System::Drawing::Point(129, 347);
			this->AddCustomer->Name = L"AddCustomer";
			this->AddCustomer->Size = System::Drawing::Size(85, 26);
			this->AddCustomer->TabIndex = 5;
			this->AddCustomer->Text = L"Добавить";
			this->AddCustomer->UseVisualStyleBackColor = false;
			this->AddCustomer->Click += gcnew System::EventHandler(this, &buyersForm::AddCustomer_Click);
			// 
			// RemoveCustomer
			// 
			this->RemoveCustomer->Location = System::Drawing::Point(363, 524);
			this->RemoveCustomer->Name = L"RemoveCustomer";
			this->RemoveCustomer->Size = System::Drawing::Size(75, 23);
			this->RemoveCustomer->TabIndex = 6;
			this->RemoveCustomer->Text = L"Удалить";
			this->RemoveCustomer->UseVisualStyleBackColor = true;
			this->RemoveCustomer->Click += gcnew System::EventHandler(this, &buyersForm::RemoveCustomer_Click);
			// 
			// CustomerName
			// 
			this->CustomerName->Location = System::Drawing::Point(132, 99);
			this->CustomerName->Name = L"CustomerName";
			this->CustomerName->Size = System::Drawing::Size(173, 20);
			this->CustomerName->TabIndex = 8;
			// 
			// CustomerSurname
			// 
			this->CustomerSurname->Location = System::Drawing::Point(132, 134);
			this->CustomerSurname->Name = L"CustomerSurname";
			this->CustomerSurname->Size = System::Drawing::Size(173, 20);
			this->CustomerSurname->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(52, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Заявка на покупку";
			// 
			// CustomerBudget
			// 
			this->CustomerBudget->Location = System::Drawing::Point(132, 172);
			this->CustomerBudget->Name = L"CustomerBudget";
			this->CustomerBudget->Size = System::Drawing::Size(173, 20);
			this->CustomerBudget->TabIndex = 11;
			// 
			// CustomerNotes
			// 
			this->CustomerNotes->Location = System::Drawing::Point(132, 242);
			this->CustomerNotes->Multiline = true;
			this->CustomerNotes->Name = L"CustomerNotes";
			this->CustomerNotes->Size = System::Drawing::Size(173, 90);
			this->CustomerNotes->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(94, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Имя:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(67, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Фамилия:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(69, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Бюджет:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(53, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Примечания:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Номер телефона:";
			// 
			// CustomerPhone
			// 
			this->CustomerPhone->Location = System::Drawing::Point(132, 203);
			this->CustomerPhone->Name = L"CustomerPhone";
			this->CustomerPhone->Size = System::Drawing::Size(173, 20);
			this->CustomerPhone->TabIndex = 18;
			// 
			// exportBuyers
			// 
			this->exportBuyers->Location = System::Drawing::Point(729, 523);
			this->exportBuyers->Name = L"exportBuyers";
			this->exportBuyers->Size = System::Drawing::Size(190, 24);
			this->exportBuyers->TabIndex = 19;
			this->exportBuyers->Text = L"Экспортировать таблицу в Excel";
			this->exportBuyers->UseVisualStyleBackColor = true;
			this->exportBuyers->Click += gcnew System::EventHandler(this, &buyersForm::ExportBuyers_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Location = System::Drawing::Point(220, 347);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(85, 26);
			this->ClearButton->TabIndex = 20;
			this->ClearButton->Text = L"Очистить";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &buyersForm::ClearButton_Click);
			// 
			// BuyToMain
			// 
			this->BuyToMain->Location = System::Drawing::Point(889, 630);
			this->BuyToMain->Name = L"BuyToMain";
			this->BuyToMain->Size = System::Drawing::Size(170, 45);
			this->BuyToMain->TabIndex = 21;
			this->BuyToMain->Text = L"На главную";
			this->BuyToMain->UseVisualStyleBackColor = true;
			this->BuyToMain->Click += gcnew System::EventHandler(this, &buyersForm::BuyToMain_Click);
			// 
			// buyersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1071, 687);
			this->Controls->Add(this->BuyToMain);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->exportBuyers);
			this->Controls->Add(this->CustomerPhone);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->CustomerNotes);
			this->Controls->Add(this->CustomerBudget);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CustomerSurname);
			this->Controls->Add(this->CustomerName);
			this->Controls->Add(this->RemoveCustomer);
			this->Controls->Add(this->AddCustomer);
			this->Controls->Add(this->SearchCustomer);
			this->Controls->Add(this->searchCustomerData);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->RefreshCustomer);
			this->Controls->Add(this->CustomerTable);
			this->Name = L"buyersForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Заявки на покупку";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &buyersForm::buyersForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &buyersForm::buyersForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Cохранение данных таблицы(или изменений в ней)
	void savingCustomerTable() {
		String^ fileName = "customer.txt";
		StreamWriter^ sw = gcnew StreamWriter(fileName, false); // если false будет перезапись
		String^ name;
		String^ surname;
		String^ budget;
		String^ phone;
		String^ notes;
		for (int i = 0; i < CustomerTable->RowCount; ++i) {
			name = Convert::ToString(CustomerTable->Rows[i]->Cells[0]->Value);
			surname = Convert::ToString(CustomerTable->Rows[i]->Cells[1]->Value);
			budget = Convert::ToString(CustomerTable->Rows[i]->Cells[2]->Value);
			phone = Convert::ToString(CustomerTable->Rows[i]->Cells[3]->Value);
			notes = Convert::ToString(CustomerTable->Rows[i]->Cells[4]->Value);
			sw->WriteLine(name);
			sw->WriteLine(surname);
			sw->WriteLine(budget);
			sw->WriteLine(phone);
			sw->WriteLine(notes);
		}
		sw->Close();
	}
	// Считывания данных из файла в таблицу
	void updateCustomerTable() {
		String^ name;
		String^ surname;
		String^ budget;
		String^ phone;
		String^ notes;
		String^ fileName = "customer.txt";
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
				name = din->ReadLine();
				surname = din->ReadLine();
				budget = din->ReadLine();
				phone = din->ReadLine();
				notes = din->ReadLine();
				CustomerTable->Rows->Add(name, surname, budget, phone, notes);
			}
			din->Close();
		}
		catch (Exception ^ e)
		{
			MessageBox::Show("Файлов данных не существует. Создаем...");
		}
	}
	// Очистка ячеек
	void clearEdits() {
		CustomerName->Text = "";
		CustomerSurname->Text = "";
		CustomerBudget->Text = "";
		CustomerPhone->Text = "";
		CustomerNotes->Text = "";
	}
	// Нумерация Таблицы
	private: System::Void CustomerTable_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
		CustomerTable->Rows[e->RowIndex]->HeaderCell->Value = (e->RowIndex + 1).ToString();
	}
	// Удаляет текущую строку
	private: System::Void RemoveCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteRowFromTable(CustomerTable);
	}
	// Добавляет данные о покупателе в таблицу
	private: System::Void AddCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = CustomerName->Text;
		String^ surname = CustomerSurname->Text;
		String^ budget = CustomerBudget->Text;
		String^ phone = CustomerPhone->Text;
		String^ notes = CustomerNotes->Text;
		// Проверка телефона на корректность
		bool error = false;
		error = numberValidation(phone, 0);
		// Проверка заполненности полей
		if ( name == "" || surname == "" || budget == "" || notes == "" || phone == "") {
			if (!(MessageBox::Show("Заполнены не все поля! Продолжить?",
				"Предупреждение!", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				&& error != true)
			{
				error = true;
			}
			else {
				// это делаю, чтобы потом с файла считывались и пустые значения в виде пробелов
				if (name == "") { name = " "; }
				if (surname == "") { surname = " "; }
				if (budget == "") { budget = " "; }
				if (notes == "") { notes = " "; }
				if (phone == "") { phone = " "; }
			}
		}
		if (error != true) {
			// Добавление данных в таблицу
			CustomerTable->Rows->Add(name, surname, budget, phone, notes);
			// Очистка ячеек
			clearEdits();
		}
	}
	// Поиск по таблице
	private: System::Void SearchCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		searchFromTable(searchCustomerData, CustomerTable);
	}
	// Очистка полей по клику
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		clearEdits();
	}
	// Перезапись таблицы в файл по клику
	private: System::Void RefreshCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		savingCustomerTable();
	}
	// Считывание данных с файла в таблицу при загрузке формы
	private: System::Void buyersForm_Load(System::Object^ sender, System::EventArgs^ e) {
		updateCustomerTable();
	}
	// Обрабатывается событие изменения ячеек, если эта ячейка с чекбоксом, то добавляем строку с покупателем в файл с обработанными клиентами
	// из которого будет формироваться отдельная таблица с ними же
	private: System::Void CustomerTable_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// обработка исключения
		int row = e->RowIndex;
		int column = e->ColumnIndex;
		if (row < 0 || column < 0) {
			return;
		}
		// если изменившаяся ячейка чекбокс и он равен true
		if (column == 5 && Convert::ToBoolean(CustomerTable->Rows[row]->Cells[column]->Value)) {
			dealAmountForm^ amountDialog = gcnew dealAmountForm();
			// открывается диалоговое окно с заполнением данных по сделкам
			if (amountDialog->ShowDialog(this) == System::Windows::Forms::DialogResult::OK) {
				String^ name = Convert::ToString(CustomerTable->Rows[row]->Cells[0]->Value);
				String^ surname = Convert::ToString(CustomerTable->Rows[row]->Cells[1]->Value);
				String^ phone = Convert::ToString(CustomerTable->Rows[row]->Cells[3]->Value);
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
				sw->WriteLine("покупка");
				sw->WriteLine(dealAmount);
				sw->WriteLine(secondSide);
				sw->Close();
				// и очищаем ячейку
				CustomerTable->Rows->RemoveAt(row);
				
				amountDialog->Close();
			}
			else {
				amountDialog->Close();
				CustomerTable->Rows[row]->Cells[column]->Value = false;
				return;
			}
		}
	}
	// Кнопка "На главную"
	private: System::Void BuyToMain_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ mainForm = this->Owner;  // Получаем указатель на владельца 
		mainForm->Show();  //  Показываем владельца
	}
	// Экспорт таблицы в Excel
	private: System::Void ExportBuyers_Click(System::Object^ sender, System::EventArgs^ e) {
		generateExcelExport(CustomerTable);
	}
	// Завершение работы приложения при закрытии формы
	private: System::Void buyersForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
};
}
