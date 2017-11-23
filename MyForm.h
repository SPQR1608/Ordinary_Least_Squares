#pragma once
#include <cmath>
#include <math.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	private value class MyFunction
	{
	private:
		//double _value = 0;
	public:
		double getUnLineValue(double x, double a, double b);
		double getLineValue(double x, double a, double b);
	};

	double MyFunction::getLineValue(double x, double a, double b) {
		return a*x+b;
	};

	double MyFunction::getUnLineValue(double x, double a, double b) {
		//return pow(2.7,a)*x*b;
		return log(pow(2.7,a)) + b*x;
	};

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  button2;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(107, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Построить график";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(67, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(516, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Аппроксимация функции по методу наименьших квадратов";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(33, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"a = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(35, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"b = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(67, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(67, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"label6";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(357, 132);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"b = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(355, 98);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 20);
			this->label9->TabIndex = 10;
			this->label9->Text = L"a = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(393, 98);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 20);
			this->label10->TabIndex = 12;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(393, 132);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 20);
			this->label11->TabIndex = 13;
			this->label11->Text = L"label11";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(12, 45);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(267, 24);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Линейная функция y = a*x+b";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(339, 45);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(286, 24);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->Text = L"Нелинейная функция y = a*x^b";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(418, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 49);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Построить график";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(624, 262);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int n = 5;						
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 double **x, a, b;
				 MyFunction ^func = gcnew MyFunction();
				 Form ^form = gcnew Form();
				 form->Show();
				 Chart ^chart1 = gcnew Chart();
				 ChartArea^  chartArea1 = gcnew ChartArea();
				 Legend^  legend1 = gcnew Legend();
				 Series^ series1 = gcnew Series();
				 Series^ series2 = gcnew Series();
				 form->Controls->Add(chart1);

				 chart1->AccessibleRole = System::Windows::Forms::AccessibleRole::Window;
				 chartArea1->Name = L"ChartArea1";
				 chart1->ChartAreas->Add(chartArea1);
				 chart1->Dock = System::Windows::Forms::DockStyle::Fill;
				 legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
				 legend1->Name = L"Legend1";
				 chart1->Legends->Add(legend1);
				 chart1->Location = System::Drawing::Point(0, 0);
				 chart1->Name = L"chart1";

				 series1->ChartArea = L"ChartArea1";
				 series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
				 series1->Legend = L"Legend1";
				 //series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
				 series1->Name = L"a*x+b";
				 chart1->Series->Add(series1);
				 series2->ChartArea = L"ChartArea1";
				 series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
				 series2->Legend = L"Legend1";
				 series2->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
				 series2->Name = L"y";
				 chart1->Series->Add(series2);
				 chart1->Size = System::Drawing::Size(580, 338);
				 chart1->TabIndex = 1;
				 chart1->Text = L"chart1";
				 chart1->Series->Clear();

				 // синяя линия
				 series1->Color = Color::Blue;
				 series1->IsVisibleInLegend = true;
				 series1->IsXValueIndexed = true;

				 series2->Color = Color::Red;
				 series2->IsVisibleInLegend = true;
				 series2->IsXValueIndexed = true;
				 // линия, а не столбики
				 series1->ChartType = SeriesChartType::Line;
				 series2->ChartType = SeriesChartType::Point;
				 // добавляем линию к контролу
				 chart1->Series->Add(series1);
				 chart1->Series->Add(series2);

				 // добавляем значения
				
				 x = getData(n);
				
				 getLineApprox(x, &a, &b, n);
				 for (int i = 0; i < n; i++) {
					 series1->Points->AddXY(x[0][i], /*x[1][i]);*/func->getLineValue(x[0][i], a, b));
					 series2->Points->AddXY(x[0][i], x[1][i]);
				 }

	}

		   public:void dataLineForm(double **x, double a, double b){	
					  MyFunction ^func = gcnew MyFunction();
					  Form ^dataForm = gcnew Form();
					  dataForm->ClientSize = System::Drawing::Size(420, 140);
					  DataGridView ^dataGridView1 = gcnew DataGridView();
					  DataGridViewTextBoxColumn ^Column1 = gcnew DataGridViewTextBoxColumn();
					  DataGridViewTextBoxColumn ^Column2 = gcnew DataGridViewTextBoxColumn();
					  DataGridViewTextBoxColumn ^Column3 = gcnew DataGridViewTextBoxColumn();
					  DataGridViewTextBoxColumn ^Column4 = gcnew DataGridViewTextBoxColumn();
					  DataGridViewTextBoxColumn ^Column5 = gcnew DataGridViewTextBoxColumn();
					  DataGridViewTextBoxColumn ^Column6 = gcnew DataGridViewTextBoxColumn();
					  									 
					  dataGridView1->AllowUserToAddRows = false;
					  dataGridView1->AllowUserToDeleteRows = false;
					  dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					  dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
						  Column1,
							  Column2,
							  Column3,
							  Column4,
							  Column5,
							  Column6
					  });
					  dataGridView1->Rows->Add(n);					  
					  // 
					  // dataGridView1
					  // 					  
					  dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
					  dataGridView1->Location = System::Drawing::Point(0, 0);
					  dataGridView1->Name = L"dataGridView1";
					  dataGridView1->ReadOnly = true;
					  dataGridView1->RowTemplate->Height = 24;
					  dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					  dataGridView1->Size = System::Drawing::Size(550, 499);
					  dataGridView1->TabIndex = 0;

					  // 
					  // Column1
					  // 
					  Column1->HeaderText = L"X";
					  Column1->MaxInputLength = 24;
					  Column1->Name = L"Column1";
					  Column1->ReadOnly = true;
					  Column1->Width = 60;
					  // 
					  // Column2
					  // 
					  Column2->HeaderText = L"Y";
					  Column2->MaxInputLength = 24;
					  Column2->Name = L"Column2";
					  Column2->ReadOnly = true;
					  Column2->Width = 60;
					  // 
					  // Column3
					  // 
					  Column3->HeaderText = L"X*Y";
					  Column3->MaxInputLength = 24;
					  Column3->Name = L"Column3";
					  Column3->ReadOnly = true;
					  Column3->Width = 60;
					  // 
					  // Column4
					  // 
					  Column4->HeaderText = L"X^2";
					  Column4->MaxInputLength = 24;
					  Column4->Name = L"Column4";
					  Column4->ReadOnly = true;
					  Column4->Width = 60;	
					  // 
					  // Column5
					  // 
					  Column5->HeaderText = L"f(x)";
					  Column5->MaxInputLength = 24;
					  Column5->Name = L"Column5";
					  Column5->ReadOnly = true;
					  Column5->Width = 60;
					  // 
					  // Column6
					  // 
					  Column6->HeaderText = L"Погрешность";
					  Column6->MaxInputLength = 24;
					  Column6->Name = L"Column6";
					  Column6->ReadOnly = true;
					  Column6->Width = 80;
					  
					  dataGridView1->EditMode = DataGridViewEditMode::EditOnKeystroke;

						  dataForm->Controls->Add(dataGridView1);
						  for (int i = 0; i < 6; i++){
							  for (int j = 0; j < n; j++){
								  if (i == 0)
									  dataGridView1->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(x[0][j], 3));

								  if (i == 1)
									  dataGridView1->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(x[1][j], 3));

								  if (i == 2)
									  dataGridView1->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round((x[0][j] * x[1][j]), 3));

								  if (i == 3)
									  dataGridView1->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(x[0][j] * x[0][j], 3));

								  if (i == 4)
									  dataGridView1->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round((func->getLineValue(x[0][j], a, b)), 3));

								  if (i == 5)
									  dataGridView1->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(abs(abs(func->getLineValue(x[0][j], a, b))-abs(x[1][j])), 3));
							  }

						  }					  
					 					
					  dataForm->Show();
					 
		   }
			public:void dataUnLineForm(double **x, double a, double b){
					   MyFunction ^func = gcnew MyFunction();
					   Form ^dataForm = gcnew Form();
					   dataForm->ClientSize = System::Drawing::Size(540, 140);
					   DataGridView ^dataGridView2 = gcnew DataGridView();
					   DataGridViewTextBoxColumn ^Column1 = gcnew DataGridViewTextBoxColumn();
					   DataGridViewTextBoxColumn ^Column2 = gcnew DataGridViewTextBoxColumn();
					   DataGridViewTextBoxColumn ^Column3 = gcnew DataGridViewTextBoxColumn();
					   DataGridViewTextBoxColumn ^Column4 = gcnew DataGridViewTextBoxColumn();
					   DataGridViewTextBoxColumn ^Column5 = gcnew DataGridViewTextBoxColumn();
					   DataGridViewTextBoxColumn ^Column6 = gcnew DataGridViewTextBoxColumn();
					   DataGridViewTextBoxColumn ^Column7 = gcnew DataGridViewTextBoxColumn();
					   DataGridViewTextBoxColumn ^Column8 = gcnew DataGridViewTextBoxColumn();

					   dataForm->Controls->Add(dataGridView2);

					   dataGridView2->AllowUserToAddRows = false;
					   dataGridView2->AllowUserToDeleteRows = false;
					   dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
					   dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
						   Column1,
							   Column2,
							   Column3,
							   Column4,
							   Column5,
							   Column6, 
							   Column7,
							   Column8
					   });
					   dataGridView2->Rows->Add(n);

					   // 
					   // dataGridView1
					   // 

					   dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
					   dataGridView2->Location = System::Drawing::Point(0, 0);
					   dataGridView2->Name = L"dataGridView2";
					   dataGridView2->ReadOnly = true;
					   dataGridView2->RowTemplate->Height = 24;
					   dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					   dataGridView2->Size = System::Drawing::Size(550, 499);
					   dataGridView2->TabIndex = 0;
					   // 
					   // Column1
					   // 
					   Column1->HeaderText = L"X";
					   Column1->MaxInputLength = 24;
					   Column1->Name = L"Column1";
					   Column1->ReadOnly = true;
					   Column1->Width = 60;
					   // 
					   // Column2
					   // 
					   Column2->HeaderText = L"Y";
					   Column2->MaxInputLength = 24;
					   Column2->Name = L"Column2";
					   Column2->ReadOnly = true;
					   Column2->Width = 60;
					   // 
					   // Column3
					   // 
					   Column3->HeaderText = L"X*Y";
					   Column3->MaxInputLength = 24;
					   Column3->Name = L"Column3";
					   Column3->ReadOnly = true;
					   Column3->Width = 60;
					   // 
					   // Column4
					   // 
					   Column4->HeaderText = L"X^2";
					   Column4->MaxInputLength = 24;
					   Column4->Name = L"Column4";
					   Column4->ReadOnly = true;
					   Column4->Width = 60;
					   // 
					   // Column5
					   // 
					   Column5->HeaderText = L"ln(X)";
					   Column5->MaxInputLength = 24;
					   Column5->Name = L"Column5";
					   Column5->ReadOnly = true;
					   Column5->Width = 60;
					   // 
					   // Column6
					   // 
					   Column6->HeaderText = L"ln(Y)";
					   Column6->MaxInputLength = 24;
					   Column6->Name = L"Column6";
					   Column6->ReadOnly = true;
					   Column6->Width = 60;

					   Column7->HeaderText = L"f(ln(X))";
					   Column7->MaxInputLength = 24;
					   Column7->Name = L"Column7";
					   Column7->ReadOnly = true;
					   Column7->Width = 60;

					   Column8->HeaderText = L"Погрешность";
					   Column8->MaxInputLength = 24;
					   Column8->Name = L"Column8";
					   Column8->ReadOnly = true;
					   Column8->Width = 80;

					   dataGridView2->EditMode = DataGridViewEditMode::EditOnKeystroke;

					   for (int i = 0; i < 8; i++){
						   for (int j = 0; j < n; j++){
							   if (i == 0)
								   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(x[0][j], 3));

							   if (i == 1)
								   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(x[1][j], 3));

							   if (i == 2)
								   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round((x[0][j] * x[1][j]), 3));

							   if (i == 3)
								   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(x[0][j] * x[0][j], 3));

							   if (i == 4)
								   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(x[2][j], 3));

							   if (i == 5)
								   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(x[3][j], 3));

							   if (i == 6)
								   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round((func->getUnLineValue(x[2][j], a, b)), 3));

							   if (i == 7)
								   dataGridView2->Rows[j]->Cells[i]->Value = Convert::ToString(Math::Round(abs(abs(x[3][j])-func->getUnLineValue(x[2][j], a, b)), 3));
						   }

					   }

					   dataForm->Show();

			}
				
				  double ** getData(int n) {
					  double **f;
						int k = 0;
						f = new double*[4];
						f[0] = new double[n];
						f[1] = new double[n];
						f[2] = new double[n];
						f[3] = new double[n];
						f[0][0] = 6;// 0.75;
						f[0][1] = 7.5;// 1.50;
						f[0][2] = 8.9;// 2.25;
						f[0][3] = 11.1;// 3;
						f[0][4] = 12.2;// 3.75;
						f[1][0] = 0.88;// 2.50;
						f[1][1] = 1.5;// 1.20;
						f[1][2] = 1.91;// 1.12;
						f[1][3] = 2.79;// 2.25;
						f[1][4] = 3.54;// 4.28;
						for (int i = 2; i < 4; i++){
							for (int j = 0; j < n; j++){
								f[i][j] = log(f[k][j]);
							}
							k++;
						}
											
						return f;
					}

					// Вычисление коэффициентов аппроксимирующей прямой
					void getLineApprox(double **x, double *a, double *b, int n) {
						double sumx = 0;
						double sumy = 0;
						double sumx2 = 0;
						double sumxy = 0;						
						double xMid, yMid;
						for (int i = 0; i < n; i++) {
							sumx += x[0][i];
							sumy += x[1][i];
							sumx2 += x[0][i] * x[0][i];
							sumxy += x[0][i] * x[1][i];													
						}
						*a = (n*sumxy - (sumx*sumy)) / (n*sumx2 - sumx*sumx);
						*b = (sumy - *a*sumx) / n;

						/*xMid = sumx / n;
						yMid = sumy / n;
						*b = (n*sumxy - (sumx*sumy)) / (n*sumx2 - sumx*sumx);
						*a = yMid - (*b)*xMid;*/

						//*a = (sumy*sumx2 - sumx*sumxy) / (n*sumx2 - sumx*sumx);
						//*b = (n*sumxy - sumy*sumx) / (n*sumx2 - sumx*sumx);
						return;
					}

					void getUnLineApprox(double **x, double *a, double *b, int n) {
						double sumx = 0;
						double sumy = 0;
						double sumx2 = 0;
						double sumxy = 0;
						double sumlnx = 0;
						double sumlny = 0;
						
						for (int i = 0; i < n; i++) {
							sumx += x[0][i];
							sumy += x[1][i];
							sumx2 += x[2][i] * x[2][i];
							sumxy += x[2][i] * x[3][i];
							sumlnx += x[2][i];
							sumlny += x[3][i];							
						}
						//*a = (n*sumxy - (sumlnx*sumlny)) / (n*sumx2 - sumlnx*sumlnx);
						//*b = (sumlny - *a*sumlnx) / n;
						*a = (sumlny*sumx2 - sumlnx*sumxy) / (n*sumx2 - sumlnx*sumlnx);
						*b = (n*sumxy - sumlny*sumlnx) / (n*sumx2 - sumlnx*sumlnx);

						return;
					}

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 double **x, a, b;

			 if (checkBox1->Checked){
				 x = getData(n);
				 
				 getLineApprox(x, &a, &b, n);
				 dataLineForm(x, a, b);
				 label5->Text = Convert::ToString(Math::Round(a, 3));
				 label6->Text = Convert::ToString(Math::Round(b, 3));
			 }
			 else{
				 label5->Text = "";
				 label6->Text = "";
			 }


}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 double **x, a, b;
			 if (checkBox2->Checked){				 
				 x = getData(n);
			
				 getUnLineApprox(x, &a, &b, n);
				 dataUnLineForm(x, a, b);
				 label10->Text = Convert::ToString(Math::Round(a, 3));
				 label11->Text = Convert::ToString(Math::Round(b, 3));
			 }
			 else{
				 label10->Text = "";
				 label11->Text = "";
			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 double **x, a1, b1;
			 MyFunction ^func = gcnew MyFunction();
			 Form ^form = gcnew Form();
			 form->Show();
			 Chart ^chart1 = gcnew Chart();
			 ChartArea  ^chartArea1 = gcnew ChartArea();
			 Legend  ^legend1 = gcnew Legend();
			 Series^ series1 = gcnew Series();
			 Series^ series2 = gcnew Series();

			 form->Controls->Add(chart1);

			 chart1->AccessibleRole = System::Windows::Forms::AccessibleRole::Window;
			 chartArea1->Name = L"ChartArea1";
			 chart1->ChartAreas->Add(chartArea1);
			 chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			 legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			 legend1->Name = L"Legend1";
			 chart1->Legends->Add(legend1);
			 chart1->Location = System::Drawing::Point(0, 0);
			 chart1->Name = L"chart1";

			 series1->ChartArea = L"ChartArea1";
			 series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			 series1->Legend = L"Legend1";
			 //series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			 series1->Name = L"a*x^b";
			 chart1->Series->Add(series1);
			 series2->ChartArea = L"ChartArea1";
			 series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			 series2->Legend = L"Legend1";
			 series2->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			 series2->Name = L"y";
			 chart1->Series->Add(series2);

			 chart1->Size = System::Drawing::Size(580, 338);
			 chart1->TabIndex = 1;
			 chart1->Text = L"chart1";
			 chart1->Series->Clear();
			 
			 // синяя линия
			 series1->Color = Color::Blue;
			 series1->IsVisibleInLegend = true;
			 series1->IsXValueIndexed = true;

			 series2->Color = Color::Red;
			 series2->IsVisibleInLegend = true;
			 series2->IsXValueIndexed = true;
			 // линия, а не столбики
			 series1->ChartType = SeriesChartType::Line;
			 series2->ChartType = SeriesChartType::Point;
			 // добавляем линию к контролу
			 chart1->Series->Add(series1);
			 chart1->Series->Add(series2);

			 // добавляем значения

			 x = getData(n);

			 getUnLineApprox(x, &a1, &b1, n);
			 for (int i = 0; i < n; i++) {
				 series1->Points->AddXY(x[2][i], /*x[3][i]);*/func->getUnLineValue(x[2][i], a1, b1));
				 series2->Points->AddXY(x[2][i], x[3][i]);
			 }
}
};
}
