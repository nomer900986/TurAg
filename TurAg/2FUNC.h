#pragma once

using namespace System;
using namespace System::Windows::Forms;


namespace TurAg {

	public ref class TurFunc
	{
		public: static void selected_country(ComboBox^ cb, TextBox^ t1, TextBox^ t2, ListBox^ l);
		public: static void prev_country(ComboBox^ cb);
		public: static void next_country(ComboBox^ cb);
	};
}