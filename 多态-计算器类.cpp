#include<iostream>
using namespace std;
#include<string>
//�ֱ�����ͨд���Ͷ�̬����ʵ�ּ�����
//��ͨд��
class Calculator
{
public:
	int getResult(string oper)
	{
		if(oper == "+")
		{
			return  m_Num1 +  m_Num2;
		}
		else if(oper == "-")
		{
			return  m_Num1 -  m_Num2;
		}
		else if(oper == "*")
		{
			return  m_Num1 *  m_Num2;
		}
	}
	int m_Num1;//������1
	int m_Num2;//������2
};

void test01()
{
	//��������������
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout<<"��ͨ�����㣺"<<endl;
	cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
	cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
	cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;
	cout<<endl;
}

//���ö�̬ʵ�ּ�����
//ʵ�ּ�����������
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num3;
	int m_Num4;
};
//�ӷ���������
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num3 + m_Num4;
	}
};
//������������
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num3 - m_Num4;
	}
};
//�˷���������
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num3 * m_Num4;
	}
};
void test02()
{
	cout<<"��̬�����㣺"<<endl;
	//�ӷ�����
	AbstractCalculator * abc = new AddCalculator;
	abc->m_Num3 = 10;
	abc->m_Num4 = 10;
	cout<<abc->m_Num3<<"+"<<abc->m_Num4<<"="<<abc->getResult()<<endl;
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->m_Num3 = 10;
	abc->m_Num4 = 10;
	cout<<abc->m_Num3<<"-"<<abc->m_Num4<<"="<<abc->getResult()<<endl;
	delete abc;

	//�˷�����
	abc = new MulCalculator;
	abc->m_Num3 = 10;
	abc->m_Num4 = 10;
	cout<<abc->m_Num3<<"*"<<abc->m_Num4<<"="<<abc->getResult()<<endl;
	delete abc;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}