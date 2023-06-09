#include <iostream>
#include <string>
using namespace std;

class A
{
public:
	//made function virtual
	virtual void a() {}
	
	//added virtual Destruktor
	virtual ~A()
	{
	}
};

class B : public A
{
public:
	B(string s = "")
	{
		id = ++idStat;
		this->s = s;
		info("B()");
	}
	virtual ~B()
	{
		info("~B()");
	}
	void a()
	{
		s += "1";
		info("B::a()");
	}
	/*virtual*/void b()
	{
		s += "2";
		info("B::b()");
	}
	void b() const
	{
		info("B::b() const");
	}
	static int liefereIdStat()
	{
		return idStat;
	}

protected:
	string s;
	void info(const string &text) const
	{
		cout << id << ": " << text << " " << s << endl;
	}

private:
	int id;
	static int idStat;
};

int B::idStat = 0;

class C : public B
{
public:
	C() : B("C")
	{
		info("C()");
	}
	virtual ~C()
	{
		info("~C()");
	}
	void a()
	{
		s += "3";
		info("C::a()");
	}
	void b()
	{
		s += "4";
		info("C::b()");
	}
};

int main()
{
	A a;
	a.a();
	cout << "vvv " << B::liefereIdStat() << endl;
	const B b; // added const
	b.b();
	cout << "www " << b.liefereIdStat() << endl;
	C *c[2];
	c[0] = new C;
	c[1] = new C;
	c[0]->a();
	c[1]->b();
	delete c[0];
	delete c[1];
	const C c2;
	cout << "xxx " << C::liefereIdStat() << endl;
	A *ac = new C;
	ac->a();
	delete ac;
	cout << "yyy " << B::liefereIdStat() << endl;
	B *bc = new C;
	bc->a();
	bc->b();
	delete bc;
	cout << "zzz " << B::liefereIdStat() << endl;
}
