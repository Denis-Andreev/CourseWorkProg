#pragma once
using namespace System::Windows::Forms;
using namespace Microsoft::Office::Interop::Excel;
// ������� ������� � ������
void generateExcelExport(System::Windows::Forms::DataGridView^ tableName);
// �������� �����, ���� �� �� ����������
void createFileIfUndef(System::String^ path);
// �������� ��������� ������ � �������
void deleteRowFromTable(System::Windows::Forms::DataGridView^ tableName);
// �������� ����� ���� �� �� ����������
void createFileIfUndef(System::String^ path);
// ��������� ����� ������ ��������, �������� ���������
bool numberValidation(System::String^ nums, int typeError);
// ����� ������ �� �������
void searchFromTable(System::Windows::Forms::TextBox^ inputValue, System::Windows::Forms::DataGridView^ tableName);
// ��������� ����
bool dateValidation(System::String^ date);
// �������� ������ �� ���� � �������� �������� �������
bool dateLocInInterval(System::String^ date, System::String^ startDate, System::String^ endDate);
// ������� ���������� ������, ���������� ������, ���������� �������, ���������� ����� �������� ����� �� �������
long int statisticCalc(int& countOfDeals, int& countOfSales, int& countOfByus);