#include "Stdafx.h"
#include "2FUNC.h"

namespace TurAg
{
	void TurFunc::selected_country(ComboBox^ cb, TextBox^ t1, TextBox^ t2, ListBox^ l)
	{
		if (cb->SelectedIndex==0)
		{
			t1->Text = "������";
			t2->Text = "��������";
			l->Items->Clear();
			l->Items->Add("�������� ������");
			l->Items->Add("������������ ������");
			l->Items->Add("������ ����������� ��������");
			l->Items->Add("������ ��������� ��������");
			l->Items->Add("��������������� ������");
			l->Items->Add("������ ���-��������� ��������");
		}
		else if (cb->SelectedIndex==1)
		{
			t1->Text = "�����";
			t2->Text = "���������, �������";
			l->Items->Clear();
			l->Items->Add("�������� �����");
			l->Items->Add("���������� �����");
			l->Items->Add("��������� �����");
			l->Items->Add("����������� �����");
			l->Items->Add("����������� �����");
			l->Items->Add("������������� (������������) �����");
			l->Items->Add("�������� (�������) �����");
		}
		else if (cb->SelectedIndex==2)
		{
			t1->Text = "���������";
			t2->Text = "�������, ��������";
			l->Items->Clear();
			l->Items->Add("���������");
			l->Items->Add("�������� �����������");
			l->Items->Add("������");
			l->Items->Add("�������� �������");
			l->Items->Add("�������� ����");
			l->Items->Add("����� ����");
			l->Items->Add("����� �����������");
			l->Items->Add("�����������");
			l->Items->Add("���������");
			l->Items->Add("���������");
			l->Items->Add("����������� �����������");
			l->Items->Add("����������� ���������");
			l->Items->Add("���������-�����");
			l->Items->Add("����� �������");
			l->Items->Add("�����-����");
			l->Items->Add("�����-����");
			l->Items->Add("�������");
			l->Items->Add("�����������");
			l->Items->Add("��������� �������");
		}
		else if (cb->SelectedIndex==3)
		{
			t1->Text = "������";
			t2->Text = "���������";
			l->Items->Clear();
			l->Items->Add("���������");
			l->Items->Add("������");
			l->Items->Add("�������");
			l->Items->Add("���������� �������");
			l->Items->Add("������ ������");
			l->Items->Add("��������");
			l->Items->Add("�������");
			l->Items->Add("��������� �������");
			l->Items->Add("���������");
			l->Items->Add("��������-��-�����");
			l->Items->Add("��������-����");
			l->Items->Add("���������");
			l->Items->Add("������");
			l->Items->Add("������");
			l->Items->Add("�������");
			l->Items->Add("�����");
			l->Items->Add("�����������");
		}
	}
	void TurFunc::prev_country(ComboBox^ cb)
	{
		if (cb->SelectedIndex==-1)
			MessageBox::Show("��� ������ �������� ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (cb->SelectedIndex>0)
			cb->SelectedIndex = Convert::ToInt16(cb->SelectedIndex) - 1;
		else
			MessageBox::Show("��� ������ ������ � ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	void TurFunc::next_country(ComboBox^ cb)
	{
		if (cb->SelectedIndex==-1)
			MessageBox::Show("��� ������ �������� ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (cb->SelectedIndex<cb->Items->Count - 1)
			cb->SelectedIndex = Convert::ToInt16(cb->SelectedIndex) + 1;
		else 
			MessageBox::Show("��� ��������� ������ � ������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}