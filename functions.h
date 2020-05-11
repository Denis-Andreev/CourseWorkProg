#pragma once
using namespace System::Windows::Forms;
using namespace Microsoft::Office::Interop::Excel;
// Экспорт таблицы в эксель
void generateExcelExport(System::Windows::Forms::DataGridView^ tableName);
// Создание файла, если он не существует
void createFileIfUndef(System::String^ path);
// Удаление выбранной строки с таблицы
void deleteRowFromTable(System::Windows::Forms::DataGridView^ tableName);
// создание файла если он не существует
void createFileIfUndef(System::String^ path);
// валидация ввода номера телефона, цифровых выражений
bool numberValidation(System::String^ nums, int typeError);
// Поиск данных по таблице
void searchFromTable(System::Windows::Forms::TextBox^ inputValue, System::Windows::Forms::DataGridView^ tableName);
// Валидация даты
bool dateValidation(System::String^ date);
// проверка входит ли дата в заданный интервал времени
bool dateLocInInterval(System::String^ date, System::String^ startDate, System::String^ endDate);
// считает количество сделок, количество продаж, количество покупок, возвращает общий денежный поток по сделкам
long int statisticCalc(int& countOfDeals, int& countOfSales, int& countOfByus);