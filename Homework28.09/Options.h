#include <iostream> // ����������� ����������� ���������: iostream �������� �� ������ ����� � ������ ������ (cin cout)
#include <windows.h> // ��������� �������, ��������� ��������� (COORD), ����������� (SetConsoleTextAttribute) � ������ ������
#include <ctime> // time - ��������� ���������� ������ ��������� � 1.01.1970 - ����� ��� ��������� ��������� �����
#include <conio.h> // getch - ������� �� ������� ����� Y ��� N, ��������� ����-���� �������
using namespace std; // ��������� ������������ ���, � ������� ��������� cin � cout

// ���������� ���������� - ����� �������������� �� ������ ��������
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // ���������� (��������� ����� ����) - ����� ��� ����������� � ��������� ��������� 

