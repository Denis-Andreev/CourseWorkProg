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
	/// ������ ��� buyersForm1
	/// </summary>
	public ref class successDealsForm : public System::Windows::Forms::Form
	{
	public:
		successDealsForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~successDealsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SuccessToMain;
	private: System::Windows::Forms::DataGridView^ successDealsTable;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dealData;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dealFirstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dealFirstSurname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dealFirstPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dealType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dealCost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dealSecondName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ profitLabel;





	private: System::Windows::Forms::Button^ SearchFromSuccess;
	private: System::Windows::Forms::TextBox^ searchSuccessData;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ exportSuccessDeals;



	private: System::Windows::Forms::RadioButton^ showAll;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ showBuys;
	private: System::Windows::Forms::RadioButton^ showSales;



	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuccessToMain = (gcnew System::Windows::Forms::Button());
			this->successDealsTable = (gcnew System::Windows::Forms::DataGridView());
			this->dealData = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dealFirstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dealFirstSurname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dealFirstPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dealType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dealCost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dealSecondName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->profitLabel = (gcnew System::Windows::Forms::Label());
			this->SearchFromSuccess = (gcnew System::Windows::Forms::Button());
			this->searchSuccessData = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->exportSuccessDeals = (gcnew System::Windows::Forms::Button());
			this->showAll = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->showBuys = (gcnew System::Windows::Forms::RadioButton());
			this->showSales = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->successDealsTable))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// SuccessToMain
			// 
			this->SuccessToMain->Location = System::Drawing::Point(1097, 594);
			this->SuccessToMain->Name = L"SuccessToMain";
			this->SuccessToMain->Size = System::Drawing::Size(170, 45);
			this->SuccessToMain->TabIndex = 0;
			this->SuccessToMain->Text = L"�� �������";
			this->SuccessToMain->UseVisualStyleBackColor = true;
			this->SuccessToMain->Click += gcnew System::EventHandler(this, &successDealsForm::SuccessToMain_Click);
			// 
			// successDealsTable
			// 
			this->successDealsTable->AllowUserToAddRows = false;
			this->successDealsTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->successDealsTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->successDealsTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dealData,
					this->dealFirstName, this->dealFirstSurname, this->dealFirstPhone, this->dealType, this->dealCost, this->dealSecondName
			});
			this->successDealsTable->Location = System::Drawing::Point(51, 89);
			this->successDealsTable->Name = L"successDealsTable";
			this->successDealsTable->Size = System::Drawing::Size(960, 520);
			this->successDealsTable->TabIndex = 1;
			this->successDealsTable->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &successDealsForm::SuccessDealsTable_RowsAdded);
			// 
			// dealData
			// 
			this->dealData->HeaderText = L"���� ������";
			this->dealData->Name = L"dealData";
			// 
			// dealFirstName
			// 
			this->dealFirstName->HeaderText = L"���";
			this->dealFirstName->Name = L"dealFirstName";
			// 
			// dealFirstSurname
			// 
			this->dealFirstSurname->HeaderText = L"�������";
			this->dealFirstSurname->Name = L"dealFirstSurname";
			// 
			// dealFirstPhone
			// 
			this->dealFirstPhone->HeaderText = L"����� ��������";
			this->dealFirstPhone->Name = L"dealFirstPhone";
			// 
			// dealType
			// 
			this->dealType->HeaderText = L"��� ������";
			this->dealType->Name = L"dealType";
			// 
			// dealCost
			// 
			this->dealCost->HeaderText = L"����� ������";
			this->dealCost->Name = L"dealCost";
			// 
			// dealSecondName
			// 
			this->dealSecondName->HeaderText = L"������ ������� ������";
			this->dealSecondName->Name = L"dealSecondName";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(438, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"������������ ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1031, 441);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"����� �� �������:";
			// 
			// profitLabel
			// 
			this->profitLabel->AutoSize = true;
			this->profitLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->profitLabel->Location = System::Drawing::Point(1141, 436);
			this->profitLabel->Name = L"profitLabel";
			this->profitLabel->Size = System::Drawing::Size(65, 22);
			this->profitLabel->TabIndex = 8;
			this->profitLabel->Text = L"0 ���.";
			// 
			// SearchFromSuccess
			// 
			this->SearchFromSuccess->Location = System::Drawing::Point(944, 61);
			this->SearchFromSuccess->Name = L"SearchFromSuccess";
			this->SearchFromSuccess->Size = System::Drawing::Size(67, 23);
			this->SearchFromSuccess->TabIndex = 24;
			this->SearchFromSuccess->Text = L"�����";
			this->SearchFromSuccess->UseVisualStyleBackColor = true;
			this->SearchFromSuccess->Click += gcnew System::EventHandler(this, &successDealsForm::SearchFromSuccess_Click);
			// 
			// searchSuccessData
			// 
			this->searchSuccessData->Location = System::Drawing::Point(229, 62);
			this->searchSuccessData->Name = L"searchSuccessData";
			this->searchSuccessData->Size = System::Drawing::Size(699, 20);
			this->searchSuccessData->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(60, 65);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(153, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"������� ������ ��� ������:";
			// 
			// exportSuccessDeals
			// 
			this->exportSuccessDeals->Location = System::Drawing::Point(821, 615);
			this->exportSuccessDeals->Name = L"exportSuccessDeals";
			this->exportSuccessDeals->Size = System::Drawing::Size(190, 24);
			this->exportSuccessDeals->TabIndex = 27;
			this->exportSuccessDeals->Text = L"�������������� ������� � Excel";
			this->exportSuccessDeals->UseVisualStyleBackColor = true;
			this->exportSuccessDeals->Click += gcnew System::EventHandler(this, &successDealsForm::ExportSuccessDeals_Click);
			// 
			// showAll
			// 
			this->showAll->AutoSize = true;
			this->showAll->Location = System::Drawing::Point(10, 30);
			this->showAll->Name = L"showAll";
			this->showAll->Size = System::Drawing::Size(44, 17);
			this->showAll->TabIndex = 30;
			this->showAll->TabStop = true;
			this->showAll->Text = L"���";
			this->showAll->UseVisualStyleBackColor = true;
			this->showAll->CheckedChanged += gcnew System::EventHandler(this, &successDealsForm::ShowAll_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->showBuys);
			this->groupBox1->Controls->Add(this->showSales);
			this->groupBox1->Controls->Add(this->showAll);
			this->groupBox1->Location = System::Drawing::Point(1057, 283);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 131);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"�������� ������:";
			// 
			// showBuys
			// 
			this->showBuys->AutoSize = true;
			this->showBuys->Location = System::Drawing::Point(10, 99);
			this->showBuys->Name = L"showBuys";
			this->showBuys->Size = System::Drawing::Size(68, 17);
			this->showBuys->TabIndex = 32;
			this->showBuys->TabStop = true;
			this->showBuys->Text = L"�������";
			this->showBuys->UseVisualStyleBackColor = true;
			this->showBuys->CheckedChanged += gcnew System::EventHandler(this, &successDealsForm::ShowBuys_CheckedChanged);
			// 
			// showSales
			// 
			this->showSales->AutoSize = true;
			this->showSales->Location = System::Drawing::Point(10, 64);
			this->showSales->Name = L"showSales";
			this->showSales->Size = System::Drawing::Size(71, 17);
			this->showSales->TabIndex = 31;
			this->showSales->TabStop = true;
			this->showSales->Text = L"�������";
			this->showSales->UseVisualStyleBackColor = true;
			this->showSales->CheckedChanged += gcnew System::EventHandler(this, &successDealsForm::ShowSales_CheckedChanged);
			// 
			// successDealsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1307, 665);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->exportSuccessDeals);
			this->Controls->Add(this->SearchFromSuccess);
			this->Controls->Add(this->searchSuccessData);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->profitLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->successDealsTable);
			this->Controls->Add(this->SuccessToMain);
			this->Name = L"successDealsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������������ ������";
			this->Activated += gcnew System::EventHandler(this, &successDealsForm::SuccessDealsForm_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &successDealsForm::SuccessDealsForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &successDealsForm::SuccessDealsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->successDealsTable))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// ���������� ������ �� ����� � �������
	void updateSuccessTable() {
		String^ name;
		String^ surname;
		String^ phone;
		String^ secondSide;
		String^ dealData;
		String^ dealAmount;
		String^ dealType;
		String^ fileName = "readyClients.txt";
		createFileIfUndef(fileName); // ������� ����, ���� �� �� ����������
		// ��������������� ������� �������, ����� �������� ������������ ����������
		successDealsTable->Rows->Clear();
		try
		{
			StreamReader^ din = File::OpenText(fileName);

			while (true)
			{
				if (din->Peek() == -1)
				{
					break;
				}
				dealData = din->ReadLine();
				name = din->ReadLine();
				surname = din->ReadLine();
				phone = din->ReadLine();
				dealType = din->ReadLine();
				dealAmount = din->ReadLine();
				secondSide = din->ReadLine();
				successDealsTable->Rows->Add(dealData,name, surname, phone, dealType, dealAmount, secondSide);
			}
			din->Close();
		}
		catch (Exception ^ e)
		{
			MessageBox::Show("������ ������ �� ����������. �������...");
		}
	}
	// ������� ������� ������� �� ������� �������
	void calcProfit() {
		// ���������� �������� � �����
		String^ fileName = "dealCommission.txt";
		String^ commission;
		try {
			StreamReader^ din = File::OpenText(fileName);
			commission = din->ReadLine();
			din->Close();
		}
		catch (Exception ^ e) {}
		// ������ �������
		double profit = 0;
		for (int i = 0; i < successDealsTable->RowCount; i++) {
			if (successDealsTable->Rows[i]->Visible == false) {
				continue;
			}
			else {
				profit += Int32::Parse(System::Convert::ToString(successDealsTable->Rows[i]->Cells[5]->Value));
			}
		}
		profit = Math::Round(System::Convert::ToDouble(commission->Replace(".", ",")) * profit / 100);
		profitLabel->Text = Convert::ToString(profit) + " ���.";
	}
	// � ������������ ������ �� ������� �����
	private: System::Void SuccessToMain_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ mainForm = this->Owner;  // �������� ��������� �� ��������� 
		mainForm->Show();  //  ���������� ���������
	}
	// ���������� ������ ���������� �� �������� �����
	private: System::Void SuccessDealsForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
	// ��������� ������ � ����� � ������� ����� ��� �� ��������
	private: System::Void SuccessDealsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		updateSuccessTable();
		// �� ��������� ������������ ��
		showAll->Checked;
	}
	// ������� ������� � Excel
	private: System::Void ExportSuccessDeals_Click(System::Object^ sender, System::EventArgs^ e) {
		generateExcelExport(successDealsTable);
	}
	// ����� �� �������
	private: System::Void SearchFromSuccess_Click(System::Object^ sender, System::EventArgs^ e) {
		searchFromTable(searchSuccessData, successDealsTable);
	}
	// ��������� �������
	private: System::Void SuccessDealsTable_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
		successDealsTable->Rows[e->RowIndex]->HeaderCell->Value = (e->RowIndex + 1).ToString();
	}
	// ��������� ������ � ����� � ������� ����� ��� �� ���������
	private: System::Void SuccessDealsForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		updateSuccessTable();
	}
	// ���������� � ������� ������ ������ �� �������� ���� "�������"
	private: System::Void ShowSales_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (showSales->Checked == true) {
			// ���������� ��� ������� ������
			for (int i = 0; i < successDealsTable->RowCount; i++) {
				successDealsTable->Rows[i]->Visible = true;
			}
			// ���������� ������� �����
			for (int i = 0; i < successDealsTable->RowCount; i++) {
				if (Convert::ToString(successDealsTable->Rows[i]->Cells[4]->Value) != "�������") {
					successDealsTable->Rows[i]->Visible = false;
				}
			}
			// ������������� ����������� �������
			calcProfit();
		}
	}
	// ���������� � ������� ������ ������ �� �������� ���� "�������"
	private: System::Void ShowBuys_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (showBuys->Checked == true) {
			// ���������� ��� ������� ������
			for (int i = 0; i < successDealsTable->RowCount; i++) {
				successDealsTable->Rows[i]->Visible = true;
			}
			// ���������� ������� �����
			for (int i = 0; i < successDealsTable->RowCount; i++) {
				if (Convert::ToString(successDealsTable->Rows[i]->Cells[4]->Value) != "�������") {
					successDealsTable->Rows[i]->Visible = false;
				}
			}
			// ������������� ����������� �������
			calcProfit();
		}
	}
	// ���������� � ������� ��� ������� ������
	private: System::Void ShowAll_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (showAll->Checked == true) {
			for (int i = 0; i < successDealsTable->RowCount; i++) {
					successDealsTable->Rows[i]->Visible = true;
			}
		// ������������� ����������� �������
		calcProfit();
		}
	}
};
}
