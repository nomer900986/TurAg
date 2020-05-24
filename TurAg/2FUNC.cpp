#include "Stdafx.h"
#include "2FUNC.h"

namespace TurAg
{
	void TurFunc::selected_country(ComboBox^ cb, TextBox^ t1, TextBox^ t2, ListBox^ l)
	{
		if (cb->SelectedIndex==0)
		{
			t1->Text = "Анкара";
			t2->Text = "Турецкий";
			l->Items->Clear();
			l->Items->Add("Эгейский регион");
			l->Items->Add("Черноморский регион");
			l->Items->Add("Регион Центральная Анатолия");
			l->Items->Add("Регион Восточная Анатолия");
			l->Items->Add("Мраморноморский регион");
			l->Items->Add("Регион Юго-Восточная Анатолия");
		}
		else if (cb->SelectedIndex==1)
		{
			t1->Text = "Сухум";
			t2->Text = "Абхазский, русский";
			l->Items->Clear();
			l->Items->Add("Гагрский район");
			l->Items->Add("Гудаутский район");
			l->Items->Add("Сухумский район");
			l->Items->Add("Гулрыпшский район");
			l->Items->Add("Очамчырский район");
			l->Items->Add("Ткварчельский (Ткуарчалский) район");
			l->Items->Add("Гальский (Галский) район");
		}
		else if (cb->SelectedIndex==2)
		{
			t1->Text = "Хельсинки";
			t2->Text = "Финский, шведский";
			l->Items->Clear();
			l->Items->Add("Лапландия");
			l->Items->Add("Северная Остроботния");
			l->Items->Add("Кайнуу");
			l->Items->Add("Северная Карелия");
			l->Items->Add("Северное Саво");
			l->Items->Add("Южное Саво");
			l->Items->Add("Южная Остроботния");
			l->Items->Add("Остроботния");
			l->Items->Add("Пирканмаа");
			l->Items->Add("Сатакунта");
			l->Items->Add("Центральная Остроботния");
			l->Items->Add("Центральная Финляндия");
			l->Items->Add("Варсинайс-Суоми");
			l->Items->Add("Южная Карелия");
			l->Items->Add("Пяйят-Хяме");
			l->Items->Add("Канта-Хяме");
			l->Items->Add("Уусимаа");
			l->Items->Add("Кюменлааксо");
			l->Items->Add("Аландские острова");
		}
		else if (cb->SelectedIndex==3)
		{
			t1->Text = "Мадрид";
			t2->Text = "Испанский";
			l->Items->Clear();
			l->Items->Add("Андалусия");
			l->Items->Add("Арагон");
			l->Items->Add("Астурия");
			l->Items->Add("Балеарские острова");
			l->Items->Add("Страна Басков");
			l->Items->Add("Валенсия");
			l->Items->Add("Галисия");
			l->Items->Add("Канарские острова");
			l->Items->Add("Кантабрия");
			l->Items->Add("Кастилия-Ла-Манча");
			l->Items->Add("Кастилия-Леон");
			l->Items->Add("Каталония");
			l->Items->Add("Мадрид");
			l->Items->Add("Мурсия");
			l->Items->Add("Наварра");
			l->Items->Add("Риоха");
			l->Items->Add("Эстремадура");
		}
	}
	void TurFunc::prev_country(ComboBox^ cb)
	{
		if (cb->SelectedIndex==-1)
			MessageBox::Show("Для начала выберите страну", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (cb->SelectedIndex>0)
			cb->SelectedIndex = Convert::ToInt16(cb->SelectedIndex) - 1;
		else
			MessageBox::Show("Это первая страна в списке", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	void TurFunc::next_country(ComboBox^ cb)
	{
		if (cb->SelectedIndex==-1)
			MessageBox::Show("Для начала выберите страну", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (cb->SelectedIndex<cb->Items->Count - 1)
			cb->SelectedIndex = Convert::ToInt16(cb->SelectedIndex) + 1;
		else 
			MessageBox::Show("Это последняя страна в списке", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}