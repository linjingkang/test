#pragma once

#include <QtWidgets/QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QLineEdit>
#include <QString>
#include <vector>
#include <stack>
#include <string>
using namespace std;

class QWDlagManual : public QDialog
{
	Q_OBJECT

public:
	QWDlagManual(QWidget *parent = 0);
	~QWDlagManual();

private slots:
	void onbtn1Press();
	void onbtn2Press();
	void onbtn3Press();
	void onbtn4Press();
	void onbtn5Press();
	void onbtn6Press();
	void onbtn7Press();
	void onbtn8Press();
	void onbtn9Press();
	void onbtn0Press();
	void onbtnAddPress();
	void onbtnSubPress();
	void onbtnMulPress();
	void onbtnDivPress();
	void onbtnDelPress();
	void onbtnEquPress();
	void onbtnCPress();
	void OnbtnPointPressd();
	void OnbtnLeftBrackPressed();
	void OnbtnRightBrackPressed();

private:
	QPushButton * btn1;
	QPushButton *btn2;
	QPushButton *btn3;
	QPushButton *btn4;
	QPushButton *btn5;
	QPushButton *btn6;
	QPushButton *btn7;
	QPushButton *btn8;
	QPushButton *btn9;
	QPushButton *btn0;
	QPushButton *btnAdd;
	QPushButton *btnSub;
	QPushButton *btnMul;
	QPushButton *btnDiv;
	QPushButton *btnEqu;
	QPushButton *btnDel;
	QPushButton *btnC;
	QPushButton *btnPoint;
	QPushButton *btnLeftBrack;
	QPushButton *btnRightBrack;
	QLineEdit *edit;
	int flag = 0; //标志是否经过一次计算
	void initData();
	void iniSignalSlots();
	QString input = "0";
};

bool isNum(char ch);
bool isOperate(char ch);
int level(char ch);
vector<string> MidtoPost(string s);
double scd(string s);
double getValue(vector<string> V);