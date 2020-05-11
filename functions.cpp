// Функция генерирующая файл для экспорта в excel
void generateExcelExport(System::Windows::Forms::DataGridView^ tableName) {
	using namespace System::Windows::Forms;
	using namespace Microsoft::Office::Interop::Excel;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Title = "Save as Excel File";
	saveFileDialog1->FileName = "";
	saveFileDialog1->Filter = "Excel Files(2003)|*.xls|Excel Files(2007)|*.xlsx";
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		delete saveFileDialog1; // очистка памяти
		Microsoft::Office::Interop::Excel::Application^ ExcelApp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
		// Создаем новую книгу MS Excel c параметром по умолчанию:
		ExcelApp->Workbooks->Add(System::Type::Missing);
		ExcelApp->Cells->UseStandardWidth = 200;
		ExcelApp->Rows->UseStandardHeight = 50;

		for (int i = 1; i < tableName->Columns->Count + 1; i++)
		{
			ExcelApp->Cells[1, i] = tableName->Columns[i - 1]->HeaderText;
		}
		for (int i = 0; i < tableName->Rows->Count; i++)
		{
			for (int j = 0; j < tableName->Columns->Count; j++)
			{
				ExcelApp->Cells[i + 2, j + 1] = tableName->Rows[i]->Cells[j]->Value;
				safe_cast<Range^>(ExcelApp->Cells[i + 2, j + 1]);
			}
		}
		ExcelApp->ActiveWorkbook->SaveCopyAs(saveFileDialog1->FileName->ToString());
		ExcelApp->ActiveWorkbook->Saved = true;
		ExcelApp->Quit();
	}
}
// создание файла если он не существует
void createFileIfUndef(System::String^ path) {
	if (!System::IO::File::Exists(path)) {
		System::IO::File::Create(path);
	}
}
// удаление строк с таблицы
void deleteRowFromTable(System::Windows::Forms::DataGridView^ tableName) {
	int cells = tableName->SelectedCells->Count;
	int rows = tableName->SelectedRows->Count;
	if (cells == 0 && rows == 0) { return; }
	int currentIndex = tableName->CurrentRow->Index;
	tableName->Rows->RemoveAt(currentIndex);
}
// валидация ввода для номера телефона(0), цифровых выражений(1)
bool numberValidation(System::String^ nums, int typeError = 0) {
	bool error = false;
	if (nums != "") {
		System::String^ numbers = "1234567890";
		for (int i = 0; i < nums->Length; i++) {
			if (numbers->IndexOf(nums[i]) == -1) {
				error = true;
			}
		}
		if (error && typeError == 0) { System::Windows::Forms::MessageBox::Show("Телефон состоит не из цифр!"); }
		if (error && typeError == 1) { System::Windows::Forms::MessageBox::Show("Введено нецифровое выражение"); }
	}
	return error;
}

void searchFromTable(System::Windows::Forms::TextBox^ inputValue, System::Windows::Forms::DataGridView^ tableName) {
	System::String^ searchItem = inputValue->Text;
	// Предварительная очистка выделения ячеек в таблице
	for (int i = 0; i < tableName->RowCount; i++) {
		tableName->Rows[i]->Selected = false;
	}
	if (searchItem == "") {
		System::Windows::Forms::MessageBox::Show("Пустой поисковый запрос.");
	}
	else {
		int finded = 0;
		for (int i = 0; i < tableName->RowCount; i++) {
			System::String^ currentValue;
			for (int j = 0; j < tableName->ColumnCount; j++) {
				currentValue = System::Convert::ToString(tableName->Rows[i]->Cells[j]->Value);
				if (currentValue->IndexOf(searchItem) != -1) {
					finded++;
					// Выделяем все найденные ячейки
					tableName->Rows[i]->Cells[j]->Selected = true;
					// Скролим до обнаруженной ячейки
					if (finded == 1) { tableName->FirstDisplayedScrollingRowIndex = i; }
					//break;
				}
			}
		}
		if (finded == 0) {
			System::Windows::Forms::MessageBox::Show("Ничего не найдено!");
		}
	}
	inputValue->Text = "";
}

// валидация ввода для даты
bool dateValidation(System::String^ date) {
	using namespace System::Text::RegularExpressions;
	System::String^ pattern = "(0[1-9]|[12][0-9]|3[01]).(0[1-9]|1[0-2]).\d\d\d\d";
	Regex^ regex = gcnew Regex(pattern);
	//if (!regex->IsMatch(date)) {
	//	System::Windows::Forms::MessageBox::Show("Некорректная дата. Повторите ввод.");
	//	return false;
	//}
	//else {
	//	return true;
	//}
	return true;
}
// проверка входит ли дата в заданный интервал времени
bool dateLocInInterval(System::String^ date, System::String^ startDate, System::String^ endDate) {
	using namespace System;
	// Удаление точек из дат
	date = date->Trim('.');
	startDate = startDate->Trim('.');
	endDate = endDate->Trim('.');
	// Разбиваем строку проверяемой даты на числа - день, месяц, год
	int dateDay = Int32::Parse(date->String::Substring(0,2));
	int dateMonth = Int32::Parse(date->String::Substring(2, 4));
	int dateYear = Int32::Parse(date->String::Substring(4, 8));
	// Разбиваем строку стартовой даты на числа - день, месяц, год
	int startDateDay = Int32::Parse(startDate->String::Substring(0, 2));
	int startDateMonth = Int32::Parse(startDate->String::Substring(2, 4));
	int startDateYear = Int32::Parse(startDate->String::Substring(4, 8));
	// Разбиваем строку конечной даты на числа - день, месяц, год
	int endDateDay = Int32::Parse(endDate->String::Substring(0, 2));
	int endDateMonth = Int32::Parse(endDate->String::Substring(2, 4));
	int endDateYear = Int32::Parse(endDate->String::Substring(4, 8));
	// Лямбда функция для сравнивания дня
	auto dayInInterval{
		  [](int day, int startDay, int endDay) {
			if (day >= startDay && day <= endDay) {
				return true; 
			} 
			else {
				return false; 
			}
		  }
	};
	// Лямбда функция для сравнивания месяца
	auto monthInInterval{
		  [](int month, int startMonth, int endMonth) {
			if (month > startMonth && month < endMonth) {
				return true;
			}
			else {
				return false;
			}
		  }
	};
	// Лямбда функция для сравнивания года
	auto yearInInterval{
		  [](int year, int startYear, int endYear) {
			if (year > startYear && year < endYear) {
				return true;
			}
			else {
				return false;
			}
		  }
	};
	// процесс проверки вхождения даты в заданный интервал времени
	if (yearInInterval(dateYear, startDateYear, endDateYear)) {
		return true;
	}
	else if (monthInInterval(dateMonth, startDateMonth, endDateMonth)) {
		return true;
	}
	else if (dayInInterval(dateDay, startDateDay, endDateDay)) {
		return true;
	}
	else {
		return false;
	}
}
// считает количество сделок, количество продаж, количество покупок, возвращает общий денежный поток по сделкам
long int statisticCalc( int &countOfDeals, int &countOfSales, int &countOfByus) {
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::IO;
	String^ fileName = "readyClients.txt";
	// создает файл, если его не существует
	createFileIfUndef(fileName);
	int strNum = 0;
	int moneyAmount = 0;
	try
	{
		StreamReader^ din = File::OpenText(fileName);
		while (true)
		{
			if (din->Peek() == -1) { 
				break; 
			}
			String^ currentData = din->ReadLine();
			strNum++;
			if (strNum % 6 == 0) {
				moneyAmount += Int32::Parse(currentData);
			}
			if (strNum == 7) {
				strNum = 0;
			}
			if (currentData == "продажа") {
				++countOfSales;
			}
			if (currentData == "покупка") {
				++countOfByus;
			}
		}
		din->Close();
	}
	catch (Exception ^ e)
	{
		MessageBox::Show("Файлов данных не существует. Создаем...");
	}
	countOfDeals = countOfByus + countOfSales;
	return moneyAmount;
}