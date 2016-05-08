#pragma once
#include "MSS.h"
#include "AboutForm.h"

namespace MSS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
	//	Graphics^ draw;
		MainForm(void)
		{
			InitializeComponent();
			MeasureGV->Rows[0]->Cells[0]->Value = 1;
//			bmp = gcnew Bitmap(CanvasPB->Width, CanvasPB->Height);
//			draw = Graphics::FromImage(bmp);
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bitmap^ bmp;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  MeanLevelCB;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  SysErrLabel;


	private: System::Windows::Forms::Button^  SolveButton;


	private: System::Windows::Forms::DataGridView^  MeasureGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Measure;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  Chart;








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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MeanLevelCB = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SysErrLabel = (gcnew System::Windows::Forms::Label());
			this->SolveButton = (gcnew System::Windows::Forms::Button());
			this->MeasureGV = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Measure = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeasureGV))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chart))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"������� ���������:";
			// 
			// MeanLevelCB
			// 
			this->MeanLevelCB->FormattingEnabled = true;
			this->MeanLevelCB->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0.01", L"0.05" });
			this->MeanLevelCB->Location = System::Drawing::Point(280, 25);
			this->MeanLevelCB->Name = L"MeanLevelCB";
			this->MeanLevelCB->Size = System::Drawing::Size(111, 21);
			this->MeanLevelCB->TabIndex = 5;
			this->MeanLevelCB->Text = L"0.01";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(277, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"������� ���������� q";
			// 
			// SysErrLabel
			// 
			this->SysErrLabel->AutoSize = true;
			this->SysErrLabel->Location = System::Drawing::Point(254, 49);
			this->SysErrLabel->Name = L"SysErrLabel";
			this->SysErrLabel->Size = System::Drawing::Size(171, 39);
			this->SysErrLabel->TabIndex = 7;
			this->SysErrLabel->Text = L"*��� ������ ������ ����������\r\n� ���������� ������������ \r\n��������������� ������"
				L"�����";
			this->SysErrLabel->Visible = false;
			// 
			// SolveButton
			// 
			this->SolveButton->Location = System::Drawing::Point(18, 288);
			this->SolveButton->Name = L"SolveButton";
			this->SolveButton->Size = System::Drawing::Size(147, 27);
			this->SolveButton->TabIndex = 10;
			this->SolveButton->Text = L"���������";
			this->SolveButton->UseVisualStyleBackColor = true;
			this->SolveButton->Click += gcnew System::EventHandler(this, &MainForm::SolveButton_Click);
			// 
			// MeasureGV
			// 
			this->MeasureGV->AllowUserToResizeColumns = false;
			this->MeasureGV->AllowUserToResizeRows = false;
			this->MeasureGV->BackgroundColor = System::Drawing::Color::White;
			this->MeasureGV->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MeasureGV->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->MeasureGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MeasureGV->ColumnHeadersVisible = false;
			this->MeasureGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Id, this->Measure });
			this->MeasureGV->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->MeasureGV->Location = System::Drawing::Point(18, 23);
			this->MeasureGV->MultiSelect = false;
			this->MeasureGV->Name = L"MeasureGV";
			this->MeasureGV->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->MeasureGV->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->MeasureGV->RowHeadersVisible = false;
			this->MeasureGV->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->MeasureGV->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->MeasureGV->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->MeasureGV->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->MeasureGV->ShowEditingIcon = false;
			this->MeasureGV->ShowRowErrors = false;
			this->MeasureGV->Size = System::Drawing::Size(147, 259);
			this->MeasureGV->TabIndex = 9;
			this->MeasureGV->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::MeasureGV_CellEndEdit);
			this->MeasureGV->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MainForm::MeasureGV_RowsAdded);
			// 
			// Id
			// 
			this->Id->Frozen = true;
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Id->Width = 30;
			// 
			// Measure
			// 
			this->Measure->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Measure->Frozen = true;
			this->Measure->HeaderText = L"���������";
			this->Measure->Name = L"Measure";
			this->Measure->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Measure->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Measure->Width = 120;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 27);
			this->button1->TabIndex = 12;
			this->button1->Text = L"� ���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 27);
			this->button2->TabIndex = 13;
			this->button2->Text = L"���������� ����������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// Chart
			// 
			chartArea1->AxisX->Minimum = 1;
			chartArea1->Name = L"Area";
			this->Chart->ChartAreas->Add(chartArea1);
			this->Chart->Location = System::Drawing::Point(188, 128);
			this->Chart->Name = L"Chart";
			series1->ChartArea = L"Area";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->CustomProperties = L"IsXAxisQuantitative=False";
			series1->Name = L"line";
			series1->YValuesPerPoint = 2;
			this->Chart->Series->Add(series1);
			this->Chart->Size = System::Drawing::Size(308, 238);
			this->Chart->TabIndex = 15;
			this->Chart->Text = L"Chart";
			title1->Name = L"Title1";
			title1->Text = L"���������";
			this->Chart->Titles->Add(title1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 406);
			this->Controls->Add(this->Chart);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SolveButton);
			this->Controls->Add(this->MeasureGV);
			this->Controls->Add(this->SysErrLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->MeanLevelCB);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MSS";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeasureGV))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void UnderConstructionBox()
	{
		MessageBox::Show(this, "������� ����� �������� � ��������� ������� ����������", "����������");
	}	

	private: System::Void SolveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Globalization::CultureInfo^ culture = gcnew System::Globalization::CultureInfo("en-Us", false);
		int n = MeasureGV->RowCount-1;
		if (n < 4) {
			MessageBox::Show("������ ������ �� ��������� ��� ���������� ��������� ������ ��� 4");
			return;
		}
		if (n > 20) {
			MessageBox::Show("�������� � ��������� ������. ������� �� ���������!");
			return;
		}
		double* measures = new double[n];
		for (int i = 0; i < n; i++) {
			//�������� ���������
			measures[i] = System::Convert::ToDouble(MeasureGV->Rows[i]->Cells[1]->Value, culture);
			//�������� ����� ������ ������
			MeasureGV->Rows[i]->Cells[0]->Style->BackColor = Color::White;
			MeasureGV->Rows[i]->Cells[1]->Style->BackColor = Color::White;
		}
		//������������ ��������������� �����������
		if (IsSystematicError(measures, n, MeanLevelCB->Text)) {
			SysErrLabel->Visible = true;
			System::Windows::Forms::DialogResult r;
			r = MessageBox::Show(nullptr, "��� ������ ������ ���������� � ���������� ������������ ��������������� �����������. ����������?", "����������� ��������������� �����������!", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);
			if (r == System::Windows::Forms::DialogResult::Cancel) return;
		}
		else {
			SysErrLabel->Visible = false;
		}
		//������� ������� ��������� ������������
		for (int i = 0; i < n; i++) {
			try {
				if (IsFailByRomanovsky(measures, i, n, MeanLevelCB->Text)) {
					MeasureGV->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
					MeasureGV->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
				}
			}
			catch (Exception^ e) {
				Debug::WriteLine("� ������� `Abbe` �� ������� �������� ��� `n` = "+n+" � `q` = "+MeanLevelCB->Text);
				break;
			}
		}
		//���������� ��������� �������� �������������� ���������
		//TODO: ���������� ��� ������
		double P = (1 - System::Convert::ToDouble(MeanLevelCB->Text, culture)) / 2;
		double z;
		if (P == 0.495) { //Q = 0.01
			z = 2.6;
		}
		if (P == 0.475) { //Q = 0.05
			z = 1.95;
		}
		double bottom = Average(measures, n) - z*MeanSquareError(measures, n);
		double top = Average(measures, n) + z*MeanSquareError(measures, n);
		Debug::WriteLine("������������� ��������: (" + bottom + "," + top + ")");
		//������� ������� ��������� �������
		for (int i = 0; i < n; i++) {
			if (!(bottom <= measures[i] && measures[i] <= top)) {
				MeasureGV->Rows[i]->Cells[0]->Style->BackColor = Color::Red;
				MeasureGV->Rows[i]->Cells[1]->Style->BackColor = Color::Red;
			}
		}
		//������ ������
		Chart->Series["line"]->Points->Clear();
		//Chart->ChartAreas["Area"]->AxisY->Minimum = 1;
		for (int i = 0; i < n; i++) {
			Chart->Series["line"]->Points->Add(measures[i]);
		}
	}

	private: System::Void MeasureGV_RowsAdded(System::Object^  sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {
		MeasureGV->Rows[e->RowIndex]->Cells[0]->Value = e->RowIndex + 1;
	}

	delegate void DeleteRowDelegate(int index);
	private: System::Void MeasureGV_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (MeasureGV->RowCount != 1 && MeasureGV->Rows[e->RowIndex]->Cells[1]->Value == nullptr) {
			DeleteRowDelegate^ action = gcnew DeleteRowDelegate(this,&MainForm::DeleteRow);
			this->BeginInvoke(action,e->RowIndex);
		}
	}

	private: void DeleteRow(int index) {
		MeasureGV->Rows->RemoveAt(index);
		int count = MeasureGV->RowCount;
		for (int i = index; i < count; i++) {
			MeasureGV->Rows[i]->Cells[0]->Value = i+1;
		}
	}
			 
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		AboutForm^ form = gcnew AboutForm();
		form->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		UnderConstructionBox();
	}
};
}
