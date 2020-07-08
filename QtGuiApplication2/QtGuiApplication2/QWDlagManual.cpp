#include "QWDlagManual.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

/*初始化*/
QWDlagManual::QWDlagManual(QWidget *parent)	: QDialog(parent)
{
	initData();
	iniSignalSlots();
	setWindowTitle("calculator");
}

QWDlagManual::~QWDlagManual()
{
}

/*创建界面*/
void QWDlagManual::initData()
{
	btnLeftBrack = new QPushButton(tr("("));
	btnRightBrack = new QPushButton(tr(")"));
	btnDel = new QPushButton(tr("del"));
	btnEqu = new QPushButton(tr("="));
	QHBoxLayout *hHay0 = new QHBoxLayout;
	hHay0->addWidget(btnLeftBrack);
	hHay0->addWidget(btnRightBrack);
	hHay0->addWidget(btnDel);
	hHay0->addWidget(btnEqu);

	btn1 = new QPushButton(tr("1"));
	btn2 = new QPushButton(tr("2"));
	btn3 = new QPushButton(tr("3"));
	btnAdd = new QPushButton(tr("+"));
	QHBoxLayout *hHay1 = new QHBoxLayout;
	hHay1->addWidget(btn1);
	hHay1->addWidget(btn2);
	hHay1->addWidget(btn3);
	hHay1->addWidget(btnAdd);

	btn4 = new QPushButton(tr("4"));
	btn5 = new QPushButton(tr("5"));
	btn6 = new QPushButton(tr("6"));
	btnSub = new QPushButton(tr("-"));
	QHBoxLayout *hHay2 = new QHBoxLayout;
	hHay2->addWidget(btn4);
	hHay2->addWidget(btn5);
	hHay2->addWidget(btn6);
	hHay2->addWidget(btnSub);

	btn7 = new QPushButton(tr("7"));
	btn8 = new QPushButton(tr("8"));
	btn9 = new QPushButton(tr("9"));
	btnMul = new QPushButton(tr("*"));
	QHBoxLayout *hHay3 = new QHBoxLayout;
	hHay3->addWidget(btn7);
	hHay3->addWidget(btn8);
	hHay3->addWidget(btn9);
	hHay3->addWidget(btnMul);

	btnPoint = new QPushButton(tr("."));
	btn0 = new QPushButton(tr("0"));
	btnC = new QPushButton(tr("C"));
	btnDiv = new QPushButton(tr("/"));
	QHBoxLayout *hHay4 = new QHBoxLayout;
	hHay4->addWidget(btnPoint);
	hHay4->addWidget(btn0);
	hHay4->addWidget(btnC);
	hHay4->addWidget(btnDiv);

	edit = new QLineEdit;
	edit->setText("0");
	edit->setEnabled(false);
	QVBoxLayout *vLay = new QVBoxLayout;
	vLay->addWidget(edit);
	vLay->addLayout(hHay0);
	vLay->addLayout(hHay1);
	vLay->addLayout(hHay2);
	vLay->addLayout(hHay3);
	vLay->addLayout(hHay4);
	setLayout(vLay);  //设置为窗体主布局
}

void QWDlagManual::iniSignalSlots()
{
	connect(btn1, SIGNAL(clicked()), this, SLOT(onbtn1Press()));
	connect(btn2, SIGNAL(clicked()), this, SLOT(onbtn2Press()));
	connect(btn3, SIGNAL(clicked()), this, SLOT(onbtn3Press()));
	connect(btn4, SIGNAL(clicked()), this, SLOT(onbtn4Press()));
	connect(btn5, SIGNAL(clicked()), this, SLOT(onbtn5Press()));
	connect(btn6, SIGNAL(clicked()), this, SLOT(onbtn6Press()));
	connect(btn7, SIGNAL(clicked()), this, SLOT(onbtn7Press()));
	connect(btn8, SIGNAL(clicked()), this, SLOT(onbtn8Press()));
	connect(btn9, SIGNAL(clicked()), this, SLOT(onbtn9Press()));
	connect(btn0, SIGNAL(clicked()), this, SLOT(onbtn0Press()));
	connect(btnAdd, SIGNAL(clicked()), this, SLOT(onbtnAddPress()));
	connect(btnSub, SIGNAL(clicked()), this, SLOT(onbtnSubPress()));
	connect(btnMul, SIGNAL(clicked()), this, SLOT(onbtnMulPress()));
	connect(btnDiv, SIGNAL(clicked()), this, SLOT(onbtnDivPress()));
	connect(btnDel, SIGNAL(clicked()), this, SLOT(onbtnDelPress()));
	connect(btnEqu, SIGNAL(clicked()), this, SLOT(onbtnEquPress()));
	connect(btnC, SIGNAL(clicked()), this, SLOT(onbtnCPress()));
	connect(btnLeftBrack, SIGNAL(clicked()), this, SLOT(OnbtnLeftBrackPressed()));
	connect(btnRightBrack, SIGNAL(clicked()), this, SLOT(OnbtnRightBrackPressed()));
	connect(btnPoint, SIGNAL(clicked()), this, SLOT(OnbtnPointPressd()));
}

void QWDlagManual::onbtn1Press()
{
	if (input == '0' || flag == 1)
	{
		input = '1';
		flag = 0;
	}
	else
	{
		input = input + '1';
	}
	edit->setText(input);
}

void QWDlagManual::onbtn2Press()
{
	if (input == '0' || flag == 1)
	{
		input = '2';
		flag = 0;
	}
	else
	{
		input = input + '2';
	}
	edit->setText(input);
}

void QWDlagManual::onbtn3Press()
{
	if (input == '0' || flag == 1)
	{
		input = '3';
		flag = 0;
	}
	else
	{
		input = input + '3';
	}
	edit->setText(input);
}

void QWDlagManual::onbtn4Press()
{
	if (input == '0' || flag == 1)
	{
		input = '4';
		flag = 0;
	}
	else
	{
		input = input + '4';
	}
	edit->setText(input);
}

void QWDlagManual::onbtn5Press()
{
	if (input == '0' || flag == 1)
	{
		input = '5';
		flag = 0;
	}
	else
	{
		input = input + '5';
	}
	edit->setText(input);
}

void QWDlagManual::onbtn6Press()
{
	if (input == '0' || flag == 1)
	{
		input = '6';
		flag = 0;
	}
	else
	{
		input = input + '6';
	}
	edit->setText(input);
}

void QWDlagManual::onbtn7Press()
{
	if (input == '0' || flag == 1)
	{
		input = '7';
		flag = 0;
	}
	else
	{
		input = input + '7';
	}
	edit->setText(input);
}

void QWDlagManual::onbtn8Press()
{
	if (input == '0' || flag == 1)
	{
		input = '8';
		flag = 0;
	}
	else
	{
		input = input + '8';
	}
	edit->setText(input);
}

void QWDlagManual::onbtn9Press()
{
	if (input == '0' || flag == 1)
	{
		input = '9';
		flag = 0;
	}
	else
	{
		input = input + '9';
	}
	edit->setText(input);
}

void QWDlagManual::onbtn0Press()
{
	if (input !='0')
	{
		input = input + '0';
	}
	else
	{
		input = '0';
	}
	edit->setText(input);
}

void QWDlagManual::onbtnAddPress()
{
	input = input + '+';
	flag = 0;
	edit->setText(input);
}

void QWDlagManual::onbtnSubPress()
{
	if (input == "0")
	{
		input = '-';
	}
	else
	{
		input = input + '-';
	}
	flag = 0;
	edit->setText(input);
}

void QWDlagManual::onbtnMulPress()
{
	input = input + '*';
	flag = 0;
	edit->setText(input);
}

void QWDlagManual::onbtnDivPress()
{
	input = input + '/';
	flag = 0;
	edit->setText(input);
}

void QWDlagManual::onbtnDelPress()
{
	if (input != "0")
	{
		input = input.left(input.length() - 1);
	}
	edit->setText(input);
}

void QWDlagManual::onbtnEquPress()
{
	string inputtemp = input.toStdString();
	vector<string> expression = MidtoPost(inputtemp);
	double value = getValue(expression);
	if (value != INT_MAX)
	{
		input = input + "=" + QString::number(value);
		edit->setText(input);
		input = QString::number(value);
		flag = 1;
	}
	else
	{
		input = input + "= error";
		edit->setText(input);
		input = "0";
	}
}

void QWDlagManual::onbtnCPress()
{
	input = '0';
	edit->setText(input);
}

void QWDlagManual::OnbtnPointPressd()
{
	input = input + '.';
	edit->setText(input);
}

void QWDlagManual::OnbtnLeftBrackPressed()
{
	if (input == "0")
	{
		input = '(';
	}
	else 
	{
		if (flag == 1)
		{
			input = '(' + input;
			flag = 0;
		}
		else
		{
			input = input + '(';
		}
	}
	edit->setText(input);
}

void QWDlagManual::OnbtnRightBrackPressed()
{
	input = input + ')';
	edit->setText(input);
}

bool isNum(char ch)
{
	if ('0' <= ch && '9' >= ch)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isOperate(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '(' || ch == ')')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int level(char ch)
{
	switch (ch)
	{
	case '(':
		return 5;
	case '*':
		return 4;
	case '/':
		return 4;
	case '+':
		return 3;
	case '-':
		return 3;
	}
}

vector<string> MidtoPost(string s)
{
	vector<string> Post;
	stack<char> S;
	string str = "";
	int i = 0;
	while (i < s.length())
	{
		if (isNum(s[i]))
		{
			str = "";
			while (isNum(s[i]) || s[i] == '.')
			{
				str = str + s[i];
				i++;
			}
			Post.push_back(str);
		}
		else if (isOperate(s[i]))
		{
			if (s[i] == '-' && (i == 0 || !isNum(s[i - 1])))
			{
				str = "-";
				i++;
				while (isNum(s[i]) || s[i] == '.')
				{
					str = str + s[i];
					i++;
				}
				Post.push_back(str);
			}
			else
			{
				if (S.empty())
				{
					S.push(s[i]);
					i++;
				}
				else
				{
					if (s[i] == '(')
					{
						S.push(s[i]);
						i++;
					}
					else if (s[i] == ')')
					{
						str = "";
						while (S.top() != '(')
						{
							str = str + S.top();
							S.pop();
						}
						S.pop();
						Post.push_back(str);
						i++;
					}
					else
					{
						int initial = level(s[i]);
						while (!S.empty() && initial <= level(S.top()) && level(S.top()) != 5)
						{
							string str = "";
							str += S.top();
							Post.push_back(str);
							S.pop();
						}
						S.push(s[i]);
						i++;
					}
				}
			}
		}
		else
		{
			Post.clear();
			return Post;

		}
	}
	while (!S.empty())
	{
		string str = ""; str += S.top();
		S.pop();
		Post.push_back(str);
	}
	return Post;
}

double scd(string s)
{
	if (s.length() == 0)
	{
		return INT_MAX;
	}
	bool flag = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (i == 0 && s[i] == '-')
		{
			continue;
		}
		else if (s[i] == '.' && !flag)
		{
			if (i > 0 && isNum(s[i - 1]))
			{
				flag = true;
				continue;
			}
			else
			{
				return INT_MAX;
			}
		}
		else if (isNum(s[i]))
		{
			continue;
		}
		else
		{
			return INT_MAX;
		}
	}
	double result = atof(s.c_str());
	return result;
}

double getValue(vector<string> V)
{
	stack<double> S;
	for (int i = 0; i < V.size(); i++)
	{
		/*若是运算符*/
		if (V[i].length() == 1 && isOperate(V[i][0]))
		{
			double a = 0, b = 0;
			if (!S.empty())
			{
				a = S.top(); S.pop();
			}
			else
			{
				return INT_MAX;
			}
			if (!S.empty())
			{
				b = S.top(); S.pop();
			}
			else
			{
				return INT_MAX;
			}
			switch (V[i][0])
			{
			case '+':
				S.push(b + a);
				break;
			case '-':
				S.push(b - a);
				break;
			case '*':
				S.push(b*a);
				break;
			case '/':
				if (a == 0)
				{
					return INT_MAX;
				}
				else
				{
					S.push(b / a);
					break;
				}
			default:
				return INT_MAX;
			}
		}
		else
		{
			if (scd(V[i]) == INT_MAX)
			{
				return INT_MAX;
			}
			else
			{
				S.push(scd(V[i]));
			}
		}
	}
	double value = S.top();
	S.pop();
	return value;
}