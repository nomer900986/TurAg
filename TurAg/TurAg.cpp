// TurAg.cpp: ������� ���� �������.

#include "stdafx.h"
#include "MainForm.h"

using namespace TurAg;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew MainForm());
	return 0;
}
