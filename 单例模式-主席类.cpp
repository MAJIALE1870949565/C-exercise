#include<iostream>
using namespace std;
//����ģʽ��ͨ��һ����ֻ��ʹ��Ψһ��һ������
//��ϯ��
class Chairman
{
public:
	//3.��Ψһ��ָ��˽�л����ṩ�����Ľӿڱ�Ϊֻ��״̬
	static Chairman * getInstance()
	{
		return singleMan;
	}

	//1.��Ĭ�Ϲ��캯��˽�л�
private:
	Chairman()
	{
		cout<<"Chairman���캯������"<<endl;
	}

	//4.���������캯��˽�л�
	Chairman(const Chairman&){}
private:
	//2.ֻҪ�õ�һ�������ָ�뼴�ɣ����ָ�����ָ��Ψһ��һ������
	static Chairman * singleMan;
};

Chairman * Chairman::singleMan = new Chairman;

void test01()
{
	Chairman * c1 = Chairman::getInstance();
	Chairman * c2 = Chairman::getInstance();
	if(c1==c2)
	{
		cout<<"c1==c2"<<endl;
	}
	else
	{
		cout<<"c1!=c2"<<endl;
	}
}

int main()
{
	cout<<"main��������"<<endl;
	test01();
	system("pause");
	return 0;
}